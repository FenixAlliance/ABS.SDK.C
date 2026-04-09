#ifndef journal_type_update_dto_TEST
#define journal_type_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define journal_type_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/journal_type_update_dto.h"
journal_type_update_dto_t* instantiate_journal_type_update_dto(int include_optional);



journal_type_update_dto_t* instantiate_journal_type_update_dto(int include_optional) {
  journal_type_update_dto_t* journal_type_update_dto = NULL;
  if (include_optional) {
    journal_type_update_dto = journal_type_update_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    journal_type_update_dto = journal_type_update_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return journal_type_update_dto;
}


#ifdef journal_type_update_dto_MAIN

void test_journal_type_update_dto(int include_optional) {
    journal_type_update_dto_t* journal_type_update_dto_1 = instantiate_journal_type_update_dto(include_optional);

	cJSON* jsonjournal_type_update_dto_1 = journal_type_update_dto_convertToJSON(journal_type_update_dto_1);
	printf("journal_type_update_dto :\n%s\n", cJSON_Print(jsonjournal_type_update_dto_1));
	journal_type_update_dto_t* journal_type_update_dto_2 = journal_type_update_dto_parseFromJSON(jsonjournal_type_update_dto_1);
	cJSON* jsonjournal_type_update_dto_2 = journal_type_update_dto_convertToJSON(journal_type_update_dto_2);
	printf("repeating journal_type_update_dto:\n%s\n", cJSON_Print(jsonjournal_type_update_dto_2));
}

int main() {
  test_journal_type_update_dto(1);
  test_journal_type_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // journal_type_update_dto_MAIN
#endif // journal_type_update_dto_TEST
