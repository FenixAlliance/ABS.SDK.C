#ifndef posting_execution_dto_i_read_only_list_envelope_TEST
#define posting_execution_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define posting_execution_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/posting_execution_dto_i_read_only_list_envelope.h"
posting_execution_dto_i_read_only_list_envelope_t* instantiate_posting_execution_dto_i_read_only_list_envelope(int include_optional);



posting_execution_dto_i_read_only_list_envelope_t* instantiate_posting_execution_dto_i_read_only_list_envelope(int include_optional) {
  posting_execution_dto_i_read_only_list_envelope_t* posting_execution_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    posting_execution_dto_i_read_only_list_envelope = posting_execution_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  } else {
    posting_execution_dto_i_read_only_list_envelope = posting_execution_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  }

  return posting_execution_dto_i_read_only_list_envelope;
}


#ifdef posting_execution_dto_i_read_only_list_envelope_MAIN

void test_posting_execution_dto_i_read_only_list_envelope(int include_optional) {
    posting_execution_dto_i_read_only_list_envelope_t* posting_execution_dto_i_read_only_list_envelope_1 = instantiate_posting_execution_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonposting_execution_dto_i_read_only_list_envelope_1 = posting_execution_dto_i_read_only_list_envelope_convertToJSON(posting_execution_dto_i_read_only_list_envelope_1);
	printf("posting_execution_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonposting_execution_dto_i_read_only_list_envelope_1));
	posting_execution_dto_i_read_only_list_envelope_t* posting_execution_dto_i_read_only_list_envelope_2 = posting_execution_dto_i_read_only_list_envelope_parseFromJSON(jsonposting_execution_dto_i_read_only_list_envelope_1);
	cJSON* jsonposting_execution_dto_i_read_only_list_envelope_2 = posting_execution_dto_i_read_only_list_envelope_convertToJSON(posting_execution_dto_i_read_only_list_envelope_2);
	printf("repeating posting_execution_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonposting_execution_dto_i_read_only_list_envelope_2));
}

int main() {
  test_posting_execution_dto_i_read_only_list_envelope(1);
  test_posting_execution_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // posting_execution_dto_i_read_only_list_envelope_MAIN
#endif // posting_execution_dto_i_read_only_list_envelope_TEST
