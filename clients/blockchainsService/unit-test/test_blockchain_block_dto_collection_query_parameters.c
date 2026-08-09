#ifndef blockchain_block_dto_collection_query_parameters_TEST
#define blockchain_block_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_block_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_block_dto_collection_query_parameters.h"
blockchain_block_dto_collection_query_parameters_t* instantiate_blockchain_block_dto_collection_query_parameters(int include_optional);



blockchain_block_dto_collection_query_parameters_t* instantiate_blockchain_block_dto_collection_query_parameters(int include_optional) {
  blockchain_block_dto_collection_query_parameters_t* blockchain_block_dto_collection_query_parameters = NULL;
  if (include_optional) {
    blockchain_block_dto_collection_query_parameters = blockchain_block_dto_collection_query_parameters_create(
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
    blockchain_block_dto_collection_query_parameters = blockchain_block_dto_collection_query_parameters_create(
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

  return blockchain_block_dto_collection_query_parameters;
}


#ifdef blockchain_block_dto_collection_query_parameters_MAIN

void test_blockchain_block_dto_collection_query_parameters(int include_optional) {
    blockchain_block_dto_collection_query_parameters_t* blockchain_block_dto_collection_query_parameters_1 = instantiate_blockchain_block_dto_collection_query_parameters(include_optional);

	cJSON* jsonblockchain_block_dto_collection_query_parameters_1 = blockchain_block_dto_collection_query_parameters_convertToJSON(blockchain_block_dto_collection_query_parameters_1);
	printf("blockchain_block_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonblockchain_block_dto_collection_query_parameters_1));
	blockchain_block_dto_collection_query_parameters_t* blockchain_block_dto_collection_query_parameters_2 = blockchain_block_dto_collection_query_parameters_parseFromJSON(jsonblockchain_block_dto_collection_query_parameters_1);
	cJSON* jsonblockchain_block_dto_collection_query_parameters_2 = blockchain_block_dto_collection_query_parameters_convertToJSON(blockchain_block_dto_collection_query_parameters_2);
	printf("repeating blockchain_block_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonblockchain_block_dto_collection_query_parameters_2));
}

int main() {
  test_blockchain_block_dto_collection_query_parameters(1);
  test_blockchain_block_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_block_dto_collection_query_parameters_MAIN
#endif // blockchain_block_dto_collection_query_parameters_TEST
