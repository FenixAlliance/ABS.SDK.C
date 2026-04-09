#ifndef journal_type_dto_i_read_only_list_envelope_TEST
#define journal_type_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define journal_type_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/journal_type_dto_i_read_only_list_envelope.h"
journal_type_dto_i_read_only_list_envelope_t* instantiate_journal_type_dto_i_read_only_list_envelope(int include_optional);



journal_type_dto_i_read_only_list_envelope_t* instantiate_journal_type_dto_i_read_only_list_envelope(int include_optional) {
  journal_type_dto_i_read_only_list_envelope_t* journal_type_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    journal_type_dto_i_read_only_list_envelope = journal_type_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    journal_type_dto_i_read_only_list_envelope = journal_type_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return journal_type_dto_i_read_only_list_envelope;
}


#ifdef journal_type_dto_i_read_only_list_envelope_MAIN

void test_journal_type_dto_i_read_only_list_envelope(int include_optional) {
    journal_type_dto_i_read_only_list_envelope_t* journal_type_dto_i_read_only_list_envelope_1 = instantiate_journal_type_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonjournal_type_dto_i_read_only_list_envelope_1 = journal_type_dto_i_read_only_list_envelope_convertToJSON(journal_type_dto_i_read_only_list_envelope_1);
	printf("journal_type_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonjournal_type_dto_i_read_only_list_envelope_1));
	journal_type_dto_i_read_only_list_envelope_t* journal_type_dto_i_read_only_list_envelope_2 = journal_type_dto_i_read_only_list_envelope_parseFromJSON(jsonjournal_type_dto_i_read_only_list_envelope_1);
	cJSON* jsonjournal_type_dto_i_read_only_list_envelope_2 = journal_type_dto_i_read_only_list_envelope_convertToJSON(journal_type_dto_i_read_only_list_envelope_2);
	printf("repeating journal_type_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonjournal_type_dto_i_read_only_list_envelope_2));
}

int main() {
  test_journal_type_dto_i_read_only_list_envelope(1);
  test_journal_type_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // journal_type_dto_i_read_only_list_envelope_MAIN
#endif // journal_type_dto_i_read_only_list_envelope_TEST
