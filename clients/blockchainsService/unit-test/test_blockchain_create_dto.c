#ifndef blockchain_create_dto_TEST
#define blockchain_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_create_dto.h"
blockchain_create_dto_t* instantiate_blockchain_create_dto(int include_optional);



blockchain_create_dto_t* instantiate_blockchain_create_dto(int include_optional) {
  blockchain_create_dto_t* blockchain_create_dto = NULL;
  if (include_optional) {
    blockchain_create_dto = blockchain_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      56
    );
  } else {
    blockchain_create_dto = blockchain_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      56
    );
  }

  return blockchain_create_dto;
}


#ifdef blockchain_create_dto_MAIN

void test_blockchain_create_dto(int include_optional) {
    blockchain_create_dto_t* blockchain_create_dto_1 = instantiate_blockchain_create_dto(include_optional);

	cJSON* jsonblockchain_create_dto_1 = blockchain_create_dto_convertToJSON(blockchain_create_dto_1);
	printf("blockchain_create_dto :\n%s\n", cJSON_Print(jsonblockchain_create_dto_1));
	blockchain_create_dto_t* blockchain_create_dto_2 = blockchain_create_dto_parseFromJSON(jsonblockchain_create_dto_1);
	cJSON* jsonblockchain_create_dto_2 = blockchain_create_dto_convertToJSON(blockchain_create_dto_2);
	printf("repeating blockchain_create_dto:\n%s\n", cJSON_Print(jsonblockchain_create_dto_2));
}

int main() {
  test_blockchain_create_dto(1);
  test_blockchain_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_create_dto_MAIN
#endif // blockchain_create_dto_TEST
