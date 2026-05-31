#ifndef claims_identity_TEST
#define claims_identity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define claims_identity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/claims_identity.h"
claims_identity_t* instantiate_claims_identity(int include_optional);

#include "test_claims_identity.c"


claims_identity_t* instantiate_claims_identity(int include_optional) {
  claims_identity_t* claims_identity = NULL;
  if (include_optional) {
    claims_identity = claims_identity_create(
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_claims_identity(0),
      null,
      list_createList(),
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    claims_identity = claims_identity_create(
      "0",
      1,
      NULL,
      null,
      list_createList(),
      "0",
      "0",
      "0",
      "0"
    );
  }

  return claims_identity;
}


#ifdef claims_identity_MAIN

void test_claims_identity(int include_optional) {
    claims_identity_t* claims_identity_1 = instantiate_claims_identity(include_optional);

	cJSON* jsonclaims_identity_1 = claims_identity_convertToJSON(claims_identity_1);
	printf("claims_identity :\n%s\n", cJSON_Print(jsonclaims_identity_1));
	claims_identity_t* claims_identity_2 = claims_identity_parseFromJSON(jsonclaims_identity_1);
	cJSON* jsonclaims_identity_2 = claims_identity_convertToJSON(claims_identity_2);
	printf("repeating claims_identity:\n%s\n", cJSON_Print(jsonclaims_identity_2));
}

int main() {
  test_claims_identity(1);
  test_claims_identity(0);

  printf("Hello world \n");
  return 0;
}

#endif // claims_identity_MAIN
#endif // claims_identity_TEST
