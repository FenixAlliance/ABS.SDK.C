#ifndef journal_dto_TEST
#define journal_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define journal_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/journal_dto.h"
journal_dto_t* instantiate_journal_dto(int include_optional);



journal_dto_t* instantiate_journal_dto(int include_optional) {
  journal_dto_t* journal_dto = NULL;
  if (include_optional) {
    journal_dto = journal_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    journal_dto = journal_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return journal_dto;
}


#ifdef journal_dto_MAIN

void test_journal_dto(int include_optional) {
    journal_dto_t* journal_dto_1 = instantiate_journal_dto(include_optional);

	cJSON* jsonjournal_dto_1 = journal_dto_convertToJSON(journal_dto_1);
	printf("journal_dto :\n%s\n", cJSON_Print(jsonjournal_dto_1));
	journal_dto_t* journal_dto_2 = journal_dto_parseFromJSON(jsonjournal_dto_1);
	cJSON* jsonjournal_dto_2 = journal_dto_convertToJSON(journal_dto_2);
	printf("repeating journal_dto:\n%s\n", cJSON_Print(jsonjournal_dto_2));
}

int main() {
  test_journal_dto(1);
  test_journal_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // journal_dto_MAIN
#endif // journal_dto_TEST
