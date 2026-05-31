#ifndef reject_proof_of_delivery_request_TEST
#define reject_proof_of_delivery_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reject_proof_of_delivery_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reject_proof_of_delivery_request.h"
reject_proof_of_delivery_request_t* instantiate_reject_proof_of_delivery_request(int include_optional);



reject_proof_of_delivery_request_t* instantiate_reject_proof_of_delivery_request(int include_optional) {
  reject_proof_of_delivery_request_t* reject_proof_of_delivery_request = NULL;
  if (include_optional) {
    reject_proof_of_delivery_request = reject_proof_of_delivery_request_create(
      "0"
    );
  } else {
    reject_proof_of_delivery_request = reject_proof_of_delivery_request_create(
      "0"
    );
  }

  return reject_proof_of_delivery_request;
}


#ifdef reject_proof_of_delivery_request_MAIN

void test_reject_proof_of_delivery_request(int include_optional) {
    reject_proof_of_delivery_request_t* reject_proof_of_delivery_request_1 = instantiate_reject_proof_of_delivery_request(include_optional);

	cJSON* jsonreject_proof_of_delivery_request_1 = reject_proof_of_delivery_request_convertToJSON(reject_proof_of_delivery_request_1);
	printf("reject_proof_of_delivery_request :\n%s\n", cJSON_Print(jsonreject_proof_of_delivery_request_1));
	reject_proof_of_delivery_request_t* reject_proof_of_delivery_request_2 = reject_proof_of_delivery_request_parseFromJSON(jsonreject_proof_of_delivery_request_1);
	cJSON* jsonreject_proof_of_delivery_request_2 = reject_proof_of_delivery_request_convertToJSON(reject_proof_of_delivery_request_2);
	printf("repeating reject_proof_of_delivery_request:\n%s\n", cJSON_Print(jsonreject_proof_of_delivery_request_2));
}

int main() {
  test_reject_proof_of_delivery_request(1);
  test_reject_proof_of_delivery_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // reject_proof_of_delivery_request_MAIN
#endif // reject_proof_of_delivery_request_TEST
