#ifndef blockchain_block_update_dto_TEST
#define blockchain_block_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_block_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_block_update_dto.h"
blockchain_block_update_dto_t* instantiate_blockchain_block_update_dto(int include_optional);



blockchain_block_update_dto_t* instantiate_blockchain_block_update_dto(int include_optional) {
  blockchain_block_update_dto_t* blockchain_block_update_dto = NULL;
  if (include_optional) {
    blockchain_block_update_dto = blockchain_block_update_dto_create(
      "0",
      56
    );
  } else {
    blockchain_block_update_dto = blockchain_block_update_dto_create(
      "0",
      56
    );
  }

  return blockchain_block_update_dto;
}


#ifdef blockchain_block_update_dto_MAIN

void test_blockchain_block_update_dto(int include_optional) {
    blockchain_block_update_dto_t* blockchain_block_update_dto_1 = instantiate_blockchain_block_update_dto(include_optional);

	cJSON* jsonblockchain_block_update_dto_1 = blockchain_block_update_dto_convertToJSON(blockchain_block_update_dto_1);
	printf("blockchain_block_update_dto :\n%s\n", cJSON_Print(jsonblockchain_block_update_dto_1));
	blockchain_block_update_dto_t* blockchain_block_update_dto_2 = blockchain_block_update_dto_parseFromJSON(jsonblockchain_block_update_dto_1);
	cJSON* jsonblockchain_block_update_dto_2 = blockchain_block_update_dto_convertToJSON(blockchain_block_update_dto_2);
	printf("repeating blockchain_block_update_dto:\n%s\n", cJSON_Print(jsonblockchain_block_update_dto_2));
}

int main() {
  test_blockchain_block_update_dto(1);
  test_blockchain_block_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_block_update_dto_MAIN
#endif // blockchain_block_update_dto_TEST
