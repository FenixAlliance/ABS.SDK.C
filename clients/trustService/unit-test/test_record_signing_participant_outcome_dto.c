#ifndef record_signing_participant_outcome_dto_TEST
#define record_signing_participant_outcome_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define record_signing_participant_outcome_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/record_signing_participant_outcome_dto.h"
record_signing_participant_outcome_dto_t* instantiate_record_signing_participant_outcome_dto(int include_optional);



record_signing_participant_outcome_dto_t* instantiate_record_signing_participant_outcome_dto(int include_optional) {
  record_signing_participant_outcome_dto_t* record_signing_participant_outcome_dto = NULL;
  if (include_optional) {
    record_signing_participant_outcome_dto = record_signing_participant_outcome_dto_create(
      trustservice_record_signing_participant_outcome_dto_OUTCOME_Pending,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    record_signing_participant_outcome_dto = record_signing_participant_outcome_dto_create(
      trustservice_record_signing_participant_outcome_dto_OUTCOME_Pending,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return record_signing_participant_outcome_dto;
}


#ifdef record_signing_participant_outcome_dto_MAIN

void test_record_signing_participant_outcome_dto(int include_optional) {
    record_signing_participant_outcome_dto_t* record_signing_participant_outcome_dto_1 = instantiate_record_signing_participant_outcome_dto(include_optional);

	cJSON* jsonrecord_signing_participant_outcome_dto_1 = record_signing_participant_outcome_dto_convertToJSON(record_signing_participant_outcome_dto_1);
	printf("record_signing_participant_outcome_dto :\n%s\n", cJSON_Print(jsonrecord_signing_participant_outcome_dto_1));
	record_signing_participant_outcome_dto_t* record_signing_participant_outcome_dto_2 = record_signing_participant_outcome_dto_parseFromJSON(jsonrecord_signing_participant_outcome_dto_1);
	cJSON* jsonrecord_signing_participant_outcome_dto_2 = record_signing_participant_outcome_dto_convertToJSON(record_signing_participant_outcome_dto_2);
	printf("repeating record_signing_participant_outcome_dto:\n%s\n", cJSON_Print(jsonrecord_signing_participant_outcome_dto_2));
}

int main() {
  test_record_signing_participant_outcome_dto(1);
  test_record_signing_participant_outcome_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // record_signing_participant_outcome_dto_MAIN
#endif // record_signing_participant_outcome_dto_TEST
