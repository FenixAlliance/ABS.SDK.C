#ifndef job_offer_create_dto_TEST
#define job_offer_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define job_offer_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/job_offer_create_dto.h"
job_offer_create_dto_t* instantiate_job_offer_create_dto(int include_optional);



job_offer_create_dto_t* instantiate_job_offer_create_dto(int include_optional) {
  job_offer_create_dto_t* job_offer_create_dto = NULL;
  if (include_optional) {
    job_offer_create_dto = job_offer_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    job_offer_create_dto = job_offer_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return job_offer_create_dto;
}


#ifdef job_offer_create_dto_MAIN

void test_job_offer_create_dto(int include_optional) {
    job_offer_create_dto_t* job_offer_create_dto_1 = instantiate_job_offer_create_dto(include_optional);

	cJSON* jsonjob_offer_create_dto_1 = job_offer_create_dto_convertToJSON(job_offer_create_dto_1);
	printf("job_offer_create_dto :\n%s\n", cJSON_Print(jsonjob_offer_create_dto_1));
	job_offer_create_dto_t* job_offer_create_dto_2 = job_offer_create_dto_parseFromJSON(jsonjob_offer_create_dto_1);
	cJSON* jsonjob_offer_create_dto_2 = job_offer_create_dto_convertToJSON(job_offer_create_dto_2);
	printf("repeating job_offer_create_dto:\n%s\n", cJSON_Print(jsonjob_offer_create_dto_2));
}

int main() {
  test_job_offer_create_dto(1);
  test_job_offer_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // job_offer_create_dto_MAIN
#endif // job_offer_create_dto_TEST
