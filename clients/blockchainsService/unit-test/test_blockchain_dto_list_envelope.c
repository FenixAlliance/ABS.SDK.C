#ifndef blockchain_dto_list_envelope_TEST
#define blockchain_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_dto_list_envelope.h"
blockchain_dto_list_envelope_t* instantiate_blockchain_dto_list_envelope(int include_optional);



blockchain_dto_list_envelope_t* instantiate_blockchain_dto_list_envelope(int include_optional) {
  blockchain_dto_list_envelope_t* blockchain_dto_list_envelope = NULL;
  if (include_optional) {
    blockchain_dto_list_envelope = blockchain_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    blockchain_dto_list_envelope = blockchain_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return blockchain_dto_list_envelope;
}


#ifdef blockchain_dto_list_envelope_MAIN

void test_blockchain_dto_list_envelope(int include_optional) {
    blockchain_dto_list_envelope_t* blockchain_dto_list_envelope_1 = instantiate_blockchain_dto_list_envelope(include_optional);

	cJSON* jsonblockchain_dto_list_envelope_1 = blockchain_dto_list_envelope_convertToJSON(blockchain_dto_list_envelope_1);
	printf("blockchain_dto_list_envelope :\n%s\n", cJSON_Print(jsonblockchain_dto_list_envelope_1));
	blockchain_dto_list_envelope_t* blockchain_dto_list_envelope_2 = blockchain_dto_list_envelope_parseFromJSON(jsonblockchain_dto_list_envelope_1);
	cJSON* jsonblockchain_dto_list_envelope_2 = blockchain_dto_list_envelope_convertToJSON(blockchain_dto_list_envelope_2);
	printf("repeating blockchain_dto_list_envelope:\n%s\n", cJSON_Print(jsonblockchain_dto_list_envelope_2));
}

int main() {
  test_blockchain_dto_list_envelope(1);
  test_blockchain_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_dto_list_envelope_MAIN
#endif // blockchain_dto_list_envelope_TEST
