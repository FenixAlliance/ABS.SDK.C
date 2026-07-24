#ifndef trial_balance_dto_envelope_TEST
#define trial_balance_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trial_balance_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trial_balance_dto_envelope.h"
trial_balance_dto_envelope_t* instantiate_trial_balance_dto_envelope(int include_optional);

#include "test_trial_balance_dto.c"


trial_balance_dto_envelope_t* instantiate_trial_balance_dto_envelope(int include_optional) {
  trial_balance_dto_envelope_t* trial_balance_dto_envelope = NULL;
  if (include_optional) {
    trial_balance_dto_envelope = trial_balance_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_trial_balance_dto(0)
    );
  } else {
    trial_balance_dto_envelope = trial_balance_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return trial_balance_dto_envelope;
}


#ifdef trial_balance_dto_envelope_MAIN

void test_trial_balance_dto_envelope(int include_optional) {
    trial_balance_dto_envelope_t* trial_balance_dto_envelope_1 = instantiate_trial_balance_dto_envelope(include_optional);

	cJSON* jsontrial_balance_dto_envelope_1 = trial_balance_dto_envelope_convertToJSON(trial_balance_dto_envelope_1);
	printf("trial_balance_dto_envelope :\n%s\n", cJSON_Print(jsontrial_balance_dto_envelope_1));
	trial_balance_dto_envelope_t* trial_balance_dto_envelope_2 = trial_balance_dto_envelope_parseFromJSON(jsontrial_balance_dto_envelope_1);
	cJSON* jsontrial_balance_dto_envelope_2 = trial_balance_dto_envelope_convertToJSON(trial_balance_dto_envelope_2);
	printf("repeating trial_balance_dto_envelope:\n%s\n", cJSON_Print(jsontrial_balance_dto_envelope_2));
}

int main() {
  test_trial_balance_dto_envelope(1);
  test_trial_balance_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // trial_balance_dto_envelope_MAIN
#endif // trial_balance_dto_envelope_TEST
