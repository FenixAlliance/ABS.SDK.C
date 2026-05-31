#ifndef claims_principal_TEST
#define claims_principal_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define claims_principal_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/claims_principal.h"
claims_principal_t* instantiate_claims_principal(int include_optional);

#include "test_i_identity.c"


claims_principal_t* instantiate_claims_principal(int include_optional) {
  claims_principal_t* claims_principal = NULL;
  if (include_optional) {
    claims_principal = claims_principal_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_i_identity(0)
    );
  } else {
    claims_principal = claims_principal_create(
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return claims_principal;
}


#ifdef claims_principal_MAIN

void test_claims_principal(int include_optional) {
    claims_principal_t* claims_principal_1 = instantiate_claims_principal(include_optional);

	cJSON* jsonclaims_principal_1 = claims_principal_convertToJSON(claims_principal_1);
	printf("claims_principal :\n%s\n", cJSON_Print(jsonclaims_principal_1));
	claims_principal_t* claims_principal_2 = claims_principal_parseFromJSON(jsonclaims_principal_1);
	cJSON* jsonclaims_principal_2 = claims_principal_convertToJSON(claims_principal_2);
	printf("repeating claims_principal:\n%s\n", cJSON_Print(jsonclaims_principal_2));
}

int main() {
  test_claims_principal(1);
  test_claims_principal(0);

  printf("Hello world \n");
  return 0;
}

#endif // claims_principal_MAIN
#endif // claims_principal_TEST
