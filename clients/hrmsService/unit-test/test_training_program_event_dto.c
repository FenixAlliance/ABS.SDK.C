#ifndef training_program_event_dto_TEST
#define training_program_event_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define training_program_event_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/training_program_event_dto.h"
training_program_event_dto_t* instantiate_training_program_event_dto(int include_optional);



training_program_event_dto_t* instantiate_training_program_event_dto(int include_optional) {
  training_program_event_dto_t* training_program_event_dto = NULL;
  if (include_optional) {
    training_program_event_dto = training_program_event_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      hrmsservice_training_program_event_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_training_program_event_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    training_program_event_dto = training_program_event_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      hrmsservice_training_program_event_dto_REPETITIONCRITERIA_NotRepeat,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      hrmsservice_training_program_event_dto_DAYOFTHEWEEK_All,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return training_program_event_dto;
}


#ifdef training_program_event_dto_MAIN

void test_training_program_event_dto(int include_optional) {
    training_program_event_dto_t* training_program_event_dto_1 = instantiate_training_program_event_dto(include_optional);

	cJSON* jsontraining_program_event_dto_1 = training_program_event_dto_convertToJSON(training_program_event_dto_1);
	printf("training_program_event_dto :\n%s\n", cJSON_Print(jsontraining_program_event_dto_1));
	training_program_event_dto_t* training_program_event_dto_2 = training_program_event_dto_parseFromJSON(jsontraining_program_event_dto_1);
	cJSON* jsontraining_program_event_dto_2 = training_program_event_dto_convertToJSON(training_program_event_dto_2);
	printf("repeating training_program_event_dto:\n%s\n", cJSON_Print(jsontraining_program_event_dto_2));
}

int main() {
  test_training_program_event_dto(1);
  test_training_program_event_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // training_program_event_dto_MAIN
#endif // training_program_event_dto_TEST
