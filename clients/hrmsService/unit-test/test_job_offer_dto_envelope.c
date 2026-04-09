#ifndef job_offer_dto_envelope_TEST
#define job_offer_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define job_offer_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/job_offer_dto_envelope.h"
job_offer_dto_envelope_t* instantiate_job_offer_dto_envelope(int include_optional);

#include "test_job_offer_dto.c"


job_offer_dto_envelope_t* instantiate_job_offer_dto_envelope(int include_optional) {
  job_offer_dto_envelope_t* job_offer_dto_envelope = NULL;
  if (include_optional) {
    job_offer_dto_envelope = job_offer_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_job_offer_dto(0)
    );
  } else {
    job_offer_dto_envelope = job_offer_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return job_offer_dto_envelope;
}


#ifdef job_offer_dto_envelope_MAIN

void test_job_offer_dto_envelope(int include_optional) {
    job_offer_dto_envelope_t* job_offer_dto_envelope_1 = instantiate_job_offer_dto_envelope(include_optional);

	cJSON* jsonjob_offer_dto_envelope_1 = job_offer_dto_envelope_convertToJSON(job_offer_dto_envelope_1);
	printf("job_offer_dto_envelope :\n%s\n", cJSON_Print(jsonjob_offer_dto_envelope_1));
	job_offer_dto_envelope_t* job_offer_dto_envelope_2 = job_offer_dto_envelope_parseFromJSON(jsonjob_offer_dto_envelope_1);
	cJSON* jsonjob_offer_dto_envelope_2 = job_offer_dto_envelope_convertToJSON(job_offer_dto_envelope_2);
	printf("repeating job_offer_dto_envelope:\n%s\n", cJSON_Print(jsonjob_offer_dto_envelope_2));
}

int main() {
  test_job_offer_dto_envelope(1);
  test_job_offer_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // job_offer_dto_envelope_MAIN
#endif // job_offer_dto_envelope_TEST
