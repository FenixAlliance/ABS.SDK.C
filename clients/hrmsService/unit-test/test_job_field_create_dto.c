#ifndef job_field_create_dto_TEST
#define job_field_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define job_field_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/job_field_create_dto.h"
job_field_create_dto_t* instantiate_job_field_create_dto(int include_optional);



job_field_create_dto_t* instantiate_job_field_create_dto(int include_optional) {
  job_field_create_dto_t* job_field_create_dto = NULL;
  if (include_optional) {
    job_field_create_dto = job_field_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    job_field_create_dto = job_field_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return job_field_create_dto;
}


#ifdef job_field_create_dto_MAIN

void test_job_field_create_dto(int include_optional) {
    job_field_create_dto_t* job_field_create_dto_1 = instantiate_job_field_create_dto(include_optional);

	cJSON* jsonjob_field_create_dto_1 = job_field_create_dto_convertToJSON(job_field_create_dto_1);
	printf("job_field_create_dto :\n%s\n", cJSON_Print(jsonjob_field_create_dto_1));
	job_field_create_dto_t* job_field_create_dto_2 = job_field_create_dto_parseFromJSON(jsonjob_field_create_dto_1);
	cJSON* jsonjob_field_create_dto_2 = job_field_create_dto_convertToJSON(job_field_create_dto_2);
	printf("repeating job_field_create_dto:\n%s\n", cJSON_Print(jsonjob_field_create_dto_2));
}

int main() {
  test_job_field_create_dto(1);
  test_job_field_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // job_field_create_dto_MAIN
#endif // job_field_create_dto_TEST
