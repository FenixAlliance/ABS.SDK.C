#ifndef extended_quote_dto_list_envelope_TEST
#define extended_quote_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_quote_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_quote_dto_list_envelope.h"
extended_quote_dto_list_envelope_t* instantiate_extended_quote_dto_list_envelope(int include_optional);



extended_quote_dto_list_envelope_t* instantiate_extended_quote_dto_list_envelope(int include_optional) {
  extended_quote_dto_list_envelope_t* extended_quote_dto_list_envelope = NULL;
  if (include_optional) {
    extended_quote_dto_list_envelope = extended_quote_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    extended_quote_dto_list_envelope = extended_quote_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return extended_quote_dto_list_envelope;
}


#ifdef extended_quote_dto_list_envelope_MAIN

void test_extended_quote_dto_list_envelope(int include_optional) {
    extended_quote_dto_list_envelope_t* extended_quote_dto_list_envelope_1 = instantiate_extended_quote_dto_list_envelope(include_optional);

	cJSON* jsonextended_quote_dto_list_envelope_1 = extended_quote_dto_list_envelope_convertToJSON(extended_quote_dto_list_envelope_1);
	printf("extended_quote_dto_list_envelope :\n%s\n", cJSON_Print(jsonextended_quote_dto_list_envelope_1));
	extended_quote_dto_list_envelope_t* extended_quote_dto_list_envelope_2 = extended_quote_dto_list_envelope_parseFromJSON(jsonextended_quote_dto_list_envelope_1);
	cJSON* jsonextended_quote_dto_list_envelope_2 = extended_quote_dto_list_envelope_convertToJSON(extended_quote_dto_list_envelope_2);
	printf("repeating extended_quote_dto_list_envelope:\n%s\n", cJSON_Print(jsonextended_quote_dto_list_envelope_2));
}

int main() {
  test_extended_quote_dto_list_envelope(1);
  test_extended_quote_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_quote_dto_list_envelope_MAIN
#endif // extended_quote_dto_list_envelope_TEST
