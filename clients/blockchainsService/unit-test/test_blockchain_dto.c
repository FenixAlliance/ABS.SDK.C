#ifndef blockchain_dto_TEST
#define blockchain_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_dto.h"
blockchain_dto_t* instantiate_blockchain_dto(int include_optional);



blockchain_dto_t* instantiate_blockchain_dto(int include_optional) {
  blockchain_dto_t* blockchain_dto = NULL;
  if (include_optional) {
    blockchain_dto = blockchain_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      56,
      "0",
      "0"
    );
  } else {
    blockchain_dto = blockchain_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      56,
      "0",
      "0"
    );
  }

  return blockchain_dto;
}


#ifdef blockchain_dto_MAIN

void test_blockchain_dto(int include_optional) {
    blockchain_dto_t* blockchain_dto_1 = instantiate_blockchain_dto(include_optional);

	cJSON* jsonblockchain_dto_1 = blockchain_dto_convertToJSON(blockchain_dto_1);
	printf("blockchain_dto :\n%s\n", cJSON_Print(jsonblockchain_dto_1));
	blockchain_dto_t* blockchain_dto_2 = blockchain_dto_parseFromJSON(jsonblockchain_dto_1);
	cJSON* jsonblockchain_dto_2 = blockchain_dto_convertToJSON(blockchain_dto_2);
	printf("repeating blockchain_dto:\n%s\n", cJSON_Print(jsonblockchain_dto_2));
}

int main() {
  test_blockchain_dto(1);
  test_blockchain_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_dto_MAIN
#endif // blockchain_dto_TEST
