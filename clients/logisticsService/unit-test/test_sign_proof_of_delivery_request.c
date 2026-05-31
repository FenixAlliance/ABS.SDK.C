#ifndef sign_proof_of_delivery_request_TEST
#define sign_proof_of_delivery_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sign_proof_of_delivery_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sign_proof_of_delivery_request.h"
sign_proof_of_delivery_request_t* instantiate_sign_proof_of_delivery_request(int include_optional);



sign_proof_of_delivery_request_t* instantiate_sign_proof_of_delivery_request(int include_optional) {
  sign_proof_of_delivery_request_t* sign_proof_of_delivery_request = NULL;
  if (include_optional) {
    sign_proof_of_delivery_request = sign_proof_of_delivery_request_create(
      "0",
      "0"
    );
  } else {
    sign_proof_of_delivery_request = sign_proof_of_delivery_request_create(
      "0",
      "0"
    );
  }

  return sign_proof_of_delivery_request;
}


#ifdef sign_proof_of_delivery_request_MAIN

void test_sign_proof_of_delivery_request(int include_optional) {
    sign_proof_of_delivery_request_t* sign_proof_of_delivery_request_1 = instantiate_sign_proof_of_delivery_request(include_optional);

	cJSON* jsonsign_proof_of_delivery_request_1 = sign_proof_of_delivery_request_convertToJSON(sign_proof_of_delivery_request_1);
	printf("sign_proof_of_delivery_request :\n%s\n", cJSON_Print(jsonsign_proof_of_delivery_request_1));
	sign_proof_of_delivery_request_t* sign_proof_of_delivery_request_2 = sign_proof_of_delivery_request_parseFromJSON(jsonsign_proof_of_delivery_request_1);
	cJSON* jsonsign_proof_of_delivery_request_2 = sign_proof_of_delivery_request_convertToJSON(sign_proof_of_delivery_request_2);
	printf("repeating sign_proof_of_delivery_request:\n%s\n", cJSON_Print(jsonsign_proof_of_delivery_request_2));
}

int main() {
  test_sign_proof_of_delivery_request(1);
  test_sign_proof_of_delivery_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // sign_proof_of_delivery_request_MAIN
#endif // sign_proof_of_delivery_request_TEST
