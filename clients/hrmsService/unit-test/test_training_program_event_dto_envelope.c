#ifndef training_program_event_dto_envelope_TEST
#define training_program_event_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define training_program_event_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/training_program_event_dto_envelope.h"
training_program_event_dto_envelope_t* instantiate_training_program_event_dto_envelope(int include_optional);

#include "test_training_program_event_dto.c"


training_program_event_dto_envelope_t* instantiate_training_program_event_dto_envelope(int include_optional) {
  training_program_event_dto_envelope_t* training_program_event_dto_envelope = NULL;
  if (include_optional) {
    training_program_event_dto_envelope = training_program_event_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_training_program_event_dto(0)
    );
  } else {
    training_program_event_dto_envelope = training_program_event_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return training_program_event_dto_envelope;
}


#ifdef training_program_event_dto_envelope_MAIN

void test_training_program_event_dto_envelope(int include_optional) {
    training_program_event_dto_envelope_t* training_program_event_dto_envelope_1 = instantiate_training_program_event_dto_envelope(include_optional);

	cJSON* jsontraining_program_event_dto_envelope_1 = training_program_event_dto_envelope_convertToJSON(training_program_event_dto_envelope_1);
	printf("training_program_event_dto_envelope :\n%s\n", cJSON_Print(jsontraining_program_event_dto_envelope_1));
	training_program_event_dto_envelope_t* training_program_event_dto_envelope_2 = training_program_event_dto_envelope_parseFromJSON(jsontraining_program_event_dto_envelope_1);
	cJSON* jsontraining_program_event_dto_envelope_2 = training_program_event_dto_envelope_convertToJSON(training_program_event_dto_envelope_2);
	printf("repeating training_program_event_dto_envelope:\n%s\n", cJSON_Print(jsontraining_program_event_dto_envelope_2));
}

int main() {
  test_training_program_event_dto_envelope(1);
  test_training_program_event_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // training_program_event_dto_envelope_MAIN
#endif // training_program_event_dto_envelope_TEST
