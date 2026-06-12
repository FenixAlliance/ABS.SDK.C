#ifndef blockchain_dto_e_tag_TEST
#define blockchain_dto_e_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_dto_e_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_dto_e_tag.h"
blockchain_dto_e_tag_t* instantiate_blockchain_dto_e_tag(int include_optional);

#include "test_type.c"


blockchain_dto_e_tag_t* instantiate_blockchain_dto_e_tag(int include_optional) {
  blockchain_dto_e_tag_t* blockchain_dto_e_tag = NULL;
  if (include_optional) {
    blockchain_dto_e_tag = blockchain_dto_e_tag_create(
      1,
       // false, not to have infinite recursion
      instantiate_type(0),
      1,
      1
    );
  } else {
    blockchain_dto_e_tag = blockchain_dto_e_tag_create(
      1,
      NULL,
      1,
      1
    );
  }

  return blockchain_dto_e_tag;
}


#ifdef blockchain_dto_e_tag_MAIN

void test_blockchain_dto_e_tag(int include_optional) {
    blockchain_dto_e_tag_t* blockchain_dto_e_tag_1 = instantiate_blockchain_dto_e_tag(include_optional);

	cJSON* jsonblockchain_dto_e_tag_1 = blockchain_dto_e_tag_convertToJSON(blockchain_dto_e_tag_1);
	printf("blockchain_dto_e_tag :\n%s\n", cJSON_Print(jsonblockchain_dto_e_tag_1));
	blockchain_dto_e_tag_t* blockchain_dto_e_tag_2 = blockchain_dto_e_tag_parseFromJSON(jsonblockchain_dto_e_tag_1);
	cJSON* jsonblockchain_dto_e_tag_2 = blockchain_dto_e_tag_convertToJSON(blockchain_dto_e_tag_2);
	printf("repeating blockchain_dto_e_tag:\n%s\n", cJSON_Print(jsonblockchain_dto_e_tag_2));
}

int main() {
  test_blockchain_dto_e_tag(1);
  test_blockchain_dto_e_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_dto_e_tag_MAIN
#endif // blockchain_dto_e_tag_TEST
