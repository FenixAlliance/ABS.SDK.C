#ifndef appraisal_stage_dto_envelope_TEST
#define appraisal_stage_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define appraisal_stage_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/appraisal_stage_dto_envelope.h"
appraisal_stage_dto_envelope_t* instantiate_appraisal_stage_dto_envelope(int include_optional);

#include "test_appraisal_stage_dto.c"


appraisal_stage_dto_envelope_t* instantiate_appraisal_stage_dto_envelope(int include_optional) {
  appraisal_stage_dto_envelope_t* appraisal_stage_dto_envelope = NULL;
  if (include_optional) {
    appraisal_stage_dto_envelope = appraisal_stage_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_appraisal_stage_dto(0)
    );
  } else {
    appraisal_stage_dto_envelope = appraisal_stage_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return appraisal_stage_dto_envelope;
}


#ifdef appraisal_stage_dto_envelope_MAIN

void test_appraisal_stage_dto_envelope(int include_optional) {
    appraisal_stage_dto_envelope_t* appraisal_stage_dto_envelope_1 = instantiate_appraisal_stage_dto_envelope(include_optional);

	cJSON* jsonappraisal_stage_dto_envelope_1 = appraisal_stage_dto_envelope_convertToJSON(appraisal_stage_dto_envelope_1);
	printf("appraisal_stage_dto_envelope :\n%s\n", cJSON_Print(jsonappraisal_stage_dto_envelope_1));
	appraisal_stage_dto_envelope_t* appraisal_stage_dto_envelope_2 = appraisal_stage_dto_envelope_parseFromJSON(jsonappraisal_stage_dto_envelope_1);
	cJSON* jsonappraisal_stage_dto_envelope_2 = appraisal_stage_dto_envelope_convertToJSON(appraisal_stage_dto_envelope_2);
	printf("repeating appraisal_stage_dto_envelope:\n%s\n", cJSON_Print(jsonappraisal_stage_dto_envelope_2));
}

int main() {
  test_appraisal_stage_dto_envelope(1);
  test_appraisal_stage_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // appraisal_stage_dto_envelope_MAIN
#endif // appraisal_stage_dto_envelope_TEST
