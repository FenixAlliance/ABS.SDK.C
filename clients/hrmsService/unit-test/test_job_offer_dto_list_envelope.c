#ifndef job_offer_dto_list_envelope_TEST
#define job_offer_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define job_offer_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/job_offer_dto_list_envelope.h"
job_offer_dto_list_envelope_t* instantiate_job_offer_dto_list_envelope(int include_optional);



job_offer_dto_list_envelope_t* instantiate_job_offer_dto_list_envelope(int include_optional) {
  job_offer_dto_list_envelope_t* job_offer_dto_list_envelope = NULL;
  if (include_optional) {
    job_offer_dto_list_envelope = job_offer_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    job_offer_dto_list_envelope = job_offer_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return job_offer_dto_list_envelope;
}


#ifdef job_offer_dto_list_envelope_MAIN

void test_job_offer_dto_list_envelope(int include_optional) {
    job_offer_dto_list_envelope_t* job_offer_dto_list_envelope_1 = instantiate_job_offer_dto_list_envelope(include_optional);

	cJSON* jsonjob_offer_dto_list_envelope_1 = job_offer_dto_list_envelope_convertToJSON(job_offer_dto_list_envelope_1);
	printf("job_offer_dto_list_envelope :\n%s\n", cJSON_Print(jsonjob_offer_dto_list_envelope_1));
	job_offer_dto_list_envelope_t* job_offer_dto_list_envelope_2 = job_offer_dto_list_envelope_parseFromJSON(jsonjob_offer_dto_list_envelope_1);
	cJSON* jsonjob_offer_dto_list_envelope_2 = job_offer_dto_list_envelope_convertToJSON(job_offer_dto_list_envelope_2);
	printf("repeating job_offer_dto_list_envelope:\n%s\n", cJSON_Print(jsonjob_offer_dto_list_envelope_2));
}

int main() {
  test_job_offer_dto_list_envelope(1);
  test_job_offer_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // job_offer_dto_list_envelope_MAIN
#endif // job_offer_dto_list_envelope_TEST
