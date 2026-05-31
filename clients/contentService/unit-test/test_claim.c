#ifndef claim_TEST
#define claim_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define claim_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/claim.h"
claim_t* instantiate_claim(int include_optional);

#include "test_claims_identity.c"


claim_t* instantiate_claim(int include_optional) {
  claim_t* claim = NULL;
  if (include_optional) {
    claim = claim_create(
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_claims_identity(0),
      "0",
      "0",
      "0"
    );
  } else {
    claim = claim_create(
      "0",
      "0",
      list_createList(),
      NULL,
      "0",
      "0",
      "0"
    );
  }

  return claim;
}


#ifdef claim_MAIN

void test_claim(int include_optional) {
    claim_t* claim_1 = instantiate_claim(include_optional);

	cJSON* jsonclaim_1 = claim_convertToJSON(claim_1);
	printf("claim :\n%s\n", cJSON_Print(jsonclaim_1));
	claim_t* claim_2 = claim_parseFromJSON(jsonclaim_1);
	cJSON* jsonclaim_2 = claim_convertToJSON(claim_2);
	printf("repeating claim:\n%s\n", cJSON_Print(jsonclaim_2));
}

int main() {
  test_claim(1);
  test_claim(0);

  printf("Hello world \n");
  return 0;
}

#endif // claim_MAIN
#endif // claim_TEST
