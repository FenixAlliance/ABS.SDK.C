#ifndef proof_of_delivery_line_dto_collection_query_parameters_TEST
#define proof_of_delivery_line_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define proof_of_delivery_line_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/proof_of_delivery_line_dto_collection_query_parameters.h"
proof_of_delivery_line_dto_collection_query_parameters_t* instantiate_proof_of_delivery_line_dto_collection_query_parameters(int include_optional);



proof_of_delivery_line_dto_collection_query_parameters_t* instantiate_proof_of_delivery_line_dto_collection_query_parameters(int include_optional) {
  proof_of_delivery_line_dto_collection_query_parameters_t* proof_of_delivery_line_dto_collection_query_parameters = NULL;
  if (include_optional) {
    proof_of_delivery_line_dto_collection_query_parameters = proof_of_delivery_line_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    proof_of_delivery_line_dto_collection_query_parameters = proof_of_delivery_line_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return proof_of_delivery_line_dto_collection_query_parameters;
}


#ifdef proof_of_delivery_line_dto_collection_query_parameters_MAIN

void test_proof_of_delivery_line_dto_collection_query_parameters(int include_optional) {
    proof_of_delivery_line_dto_collection_query_parameters_t* proof_of_delivery_line_dto_collection_query_parameters_1 = instantiate_proof_of_delivery_line_dto_collection_query_parameters(include_optional);

	cJSON* jsonproof_of_delivery_line_dto_collection_query_parameters_1 = proof_of_delivery_line_dto_collection_query_parameters_convertToJSON(proof_of_delivery_line_dto_collection_query_parameters_1);
	printf("proof_of_delivery_line_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonproof_of_delivery_line_dto_collection_query_parameters_1));
	proof_of_delivery_line_dto_collection_query_parameters_t* proof_of_delivery_line_dto_collection_query_parameters_2 = proof_of_delivery_line_dto_collection_query_parameters_parseFromJSON(jsonproof_of_delivery_line_dto_collection_query_parameters_1);
	cJSON* jsonproof_of_delivery_line_dto_collection_query_parameters_2 = proof_of_delivery_line_dto_collection_query_parameters_convertToJSON(proof_of_delivery_line_dto_collection_query_parameters_2);
	printf("repeating proof_of_delivery_line_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonproof_of_delivery_line_dto_collection_query_parameters_2));
}

int main() {
  test_proof_of_delivery_line_dto_collection_query_parameters(1);
  test_proof_of_delivery_line_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // proof_of_delivery_line_dto_collection_query_parameters_MAIN
#endif // proof_of_delivery_line_dto_collection_query_parameters_TEST
