#ifndef non_fungible_token_dto_list_envelope_TEST
#define non_fungible_token_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define non_fungible_token_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/non_fungible_token_dto_list_envelope.h"
non_fungible_token_dto_list_envelope_t* instantiate_non_fungible_token_dto_list_envelope(int include_optional);



non_fungible_token_dto_list_envelope_t* instantiate_non_fungible_token_dto_list_envelope(int include_optional) {
  non_fungible_token_dto_list_envelope_t* non_fungible_token_dto_list_envelope = NULL;
  if (include_optional) {
    non_fungible_token_dto_list_envelope = non_fungible_token_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    non_fungible_token_dto_list_envelope = non_fungible_token_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return non_fungible_token_dto_list_envelope;
}


#ifdef non_fungible_token_dto_list_envelope_MAIN

void test_non_fungible_token_dto_list_envelope(int include_optional) {
    non_fungible_token_dto_list_envelope_t* non_fungible_token_dto_list_envelope_1 = instantiate_non_fungible_token_dto_list_envelope(include_optional);

	cJSON* jsonnon_fungible_token_dto_list_envelope_1 = non_fungible_token_dto_list_envelope_convertToJSON(non_fungible_token_dto_list_envelope_1);
	printf("non_fungible_token_dto_list_envelope :\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_list_envelope_1));
	non_fungible_token_dto_list_envelope_t* non_fungible_token_dto_list_envelope_2 = non_fungible_token_dto_list_envelope_parseFromJSON(jsonnon_fungible_token_dto_list_envelope_1);
	cJSON* jsonnon_fungible_token_dto_list_envelope_2 = non_fungible_token_dto_list_envelope_convertToJSON(non_fungible_token_dto_list_envelope_2);
	printf("repeating non_fungible_token_dto_list_envelope:\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_list_envelope_2));
}

int main() {
  test_non_fungible_token_dto_list_envelope(1);
  test_non_fungible_token_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // non_fungible_token_dto_list_envelope_MAIN
#endif // non_fungible_token_dto_list_envelope_TEST
