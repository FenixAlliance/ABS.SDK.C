#ifndef journal_entry_update_dto_TEST
#define journal_entry_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define journal_entry_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/journal_entry_update_dto.h"
journal_entry_update_dto_t* instantiate_journal_entry_update_dto(int include_optional);



journal_entry_update_dto_t* instantiate_journal_entry_update_dto(int include_optional) {
  journal_entry_update_dto_t* journal_entry_update_dto = NULL;
  if (include_optional) {
    journal_entry_update_dto = journal_entry_update_dto_create(
      1,
      1,
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    journal_entry_update_dto = journal_entry_update_dto_create(
      1,
      1,
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return journal_entry_update_dto;
}


#ifdef journal_entry_update_dto_MAIN

void test_journal_entry_update_dto(int include_optional) {
    journal_entry_update_dto_t* journal_entry_update_dto_1 = instantiate_journal_entry_update_dto(include_optional);

	cJSON* jsonjournal_entry_update_dto_1 = journal_entry_update_dto_convertToJSON(journal_entry_update_dto_1);
	printf("journal_entry_update_dto :\n%s\n", cJSON_Print(jsonjournal_entry_update_dto_1));
	journal_entry_update_dto_t* journal_entry_update_dto_2 = journal_entry_update_dto_parseFromJSON(jsonjournal_entry_update_dto_1);
	cJSON* jsonjournal_entry_update_dto_2 = journal_entry_update_dto_convertToJSON(journal_entry_update_dto_2);
	printf("repeating journal_entry_update_dto:\n%s\n", cJSON_Print(jsonjournal_entry_update_dto_2));
}

int main() {
  test_journal_entry_update_dto(1);
  test_journal_entry_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // journal_entry_update_dto_MAIN
#endif // journal_entry_update_dto_TEST
