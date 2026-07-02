#ifndef job_applicant_profile_update_dto_TEST
#define job_applicant_profile_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define job_applicant_profile_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/job_applicant_profile_update_dto.h"
job_applicant_profile_update_dto_t* instantiate_job_applicant_profile_update_dto(int include_optional);



job_applicant_profile_update_dto_t* instantiate_job_applicant_profile_update_dto(int include_optional) {
  job_applicant_profile_update_dto_t* job_applicant_profile_update_dto = NULL;
  if (include_optional) {
    job_applicant_profile_update_dto = job_applicant_profile_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      hrmsservice_job_applicant_profile_update_dto_CAREERLEVEL_Junior,
      56,
      1.337,
      1.337,
      1.337,
      "0"
    );
  } else {
    job_applicant_profile_update_dto = job_applicant_profile_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      hrmsservice_job_applicant_profile_update_dto_CAREERLEVEL_Junior,
      56,
      1.337,
      1.337,
      1.337,
      "0"
    );
  }

  return job_applicant_profile_update_dto;
}


#ifdef job_applicant_profile_update_dto_MAIN

void test_job_applicant_profile_update_dto(int include_optional) {
    job_applicant_profile_update_dto_t* job_applicant_profile_update_dto_1 = instantiate_job_applicant_profile_update_dto(include_optional);

	cJSON* jsonjob_applicant_profile_update_dto_1 = job_applicant_profile_update_dto_convertToJSON(job_applicant_profile_update_dto_1);
	printf("job_applicant_profile_update_dto :\n%s\n", cJSON_Print(jsonjob_applicant_profile_update_dto_1));
	job_applicant_profile_update_dto_t* job_applicant_profile_update_dto_2 = job_applicant_profile_update_dto_parseFromJSON(jsonjob_applicant_profile_update_dto_1);
	cJSON* jsonjob_applicant_profile_update_dto_2 = job_applicant_profile_update_dto_convertToJSON(job_applicant_profile_update_dto_2);
	printf("repeating job_applicant_profile_update_dto:\n%s\n", cJSON_Print(jsonjob_applicant_profile_update_dto_2));
}

int main() {
  test_job_applicant_profile_update_dto(1);
  test_job_applicant_profile_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // job_applicant_profile_update_dto_MAIN
#endif // job_applicant_profile_update_dto_TEST
