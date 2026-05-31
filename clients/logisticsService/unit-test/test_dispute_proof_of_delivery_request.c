#ifndef dispute_proof_of_delivery_request_TEST
#define dispute_proof_of_delivery_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dispute_proof_of_delivery_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dispute_proof_of_delivery_request.h"
dispute_proof_of_delivery_request_t* instantiate_dispute_proof_of_delivery_request(int include_optional);



dispute_proof_of_delivery_request_t* instantiate_dispute_proof_of_delivery_request(int include_optional) {
  dispute_proof_of_delivery_request_t* dispute_proof_of_delivery_request = NULL;
  if (include_optional) {
    dispute_proof_of_delivery_request = dispute_proof_of_delivery_request_create(
      "0"
    );
  } else {
    dispute_proof_of_delivery_request = dispute_proof_of_delivery_request_create(
      "0"
    );
  }

  return dispute_proof_of_delivery_request;
}


#ifdef dispute_proof_of_delivery_request_MAIN

void test_dispute_proof_of_delivery_request(int include_optional) {
    dispute_proof_of_delivery_request_t* dispute_proof_of_delivery_request_1 = instantiate_dispute_proof_of_delivery_request(include_optional);

	cJSON* jsondispute_proof_of_delivery_request_1 = dispute_proof_of_delivery_request_convertToJSON(dispute_proof_of_delivery_request_1);
	printf("dispute_proof_of_delivery_request :\n%s\n", cJSON_Print(jsondispute_proof_of_delivery_request_1));
	dispute_proof_of_delivery_request_t* dispute_proof_of_delivery_request_2 = dispute_proof_of_delivery_request_parseFromJSON(jsondispute_proof_of_delivery_request_1);
	cJSON* jsondispute_proof_of_delivery_request_2 = dispute_proof_of_delivery_request_convertToJSON(dispute_proof_of_delivery_request_2);
	printf("repeating dispute_proof_of_delivery_request:\n%s\n", cJSON_Print(jsondispute_proof_of_delivery_request_2));
}

int main() {
  test_dispute_proof_of_delivery_request(1);
  test_dispute_proof_of_delivery_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // dispute_proof_of_delivery_request_MAIN
#endif // dispute_proof_of_delivery_request_TEST
