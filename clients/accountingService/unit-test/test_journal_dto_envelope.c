#ifndef journal_dto_envelope_TEST
#define journal_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define journal_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/journal_dto_envelope.h"
journal_dto_envelope_t* instantiate_journal_dto_envelope(int include_optional);

#include "test_journal_dto.c"


journal_dto_envelope_t* instantiate_journal_dto_envelope(int include_optional) {
  journal_dto_envelope_t* journal_dto_envelope = NULL;
  if (include_optional) {
    journal_dto_envelope = journal_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_journal_dto(0)
    );
  } else {
    journal_dto_envelope = journal_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return journal_dto_envelope;
}


#ifdef journal_dto_envelope_MAIN

void test_journal_dto_envelope(int include_optional) {
    journal_dto_envelope_t* journal_dto_envelope_1 = instantiate_journal_dto_envelope(include_optional);

	cJSON* jsonjournal_dto_envelope_1 = journal_dto_envelope_convertToJSON(journal_dto_envelope_1);
	printf("journal_dto_envelope :\n%s\n", cJSON_Print(jsonjournal_dto_envelope_1));
	journal_dto_envelope_t* journal_dto_envelope_2 = journal_dto_envelope_parseFromJSON(jsonjournal_dto_envelope_1);
	cJSON* jsonjournal_dto_envelope_2 = journal_dto_envelope_convertToJSON(journal_dto_envelope_2);
	printf("repeating journal_dto_envelope:\n%s\n", cJSON_Print(jsonjournal_dto_envelope_2));
}

int main() {
  test_journal_dto_envelope(1);
  test_journal_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // journal_dto_envelope_MAIN
#endif // journal_dto_envelope_TEST
