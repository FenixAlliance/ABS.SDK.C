#ifndef job_field_dto_collection_query_parameters_TEST
#define job_field_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define job_field_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/job_field_dto_collection_query_parameters.h"
job_field_dto_collection_query_parameters_t* instantiate_job_field_dto_collection_query_parameters(int include_optional);



job_field_dto_collection_query_parameters_t* instantiate_job_field_dto_collection_query_parameters(int include_optional) {
  job_field_dto_collection_query_parameters_t* job_field_dto_collection_query_parameters = NULL;
  if (include_optional) {
    job_field_dto_collection_query_parameters = job_field_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    job_field_dto_collection_query_parameters = job_field_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return job_field_dto_collection_query_parameters;
}


#ifdef job_field_dto_collection_query_parameters_MAIN

void test_job_field_dto_collection_query_parameters(int include_optional) {
    job_field_dto_collection_query_parameters_t* job_field_dto_collection_query_parameters_1 = instantiate_job_field_dto_collection_query_parameters(include_optional);

	cJSON* jsonjob_field_dto_collection_query_parameters_1 = job_field_dto_collection_query_parameters_convertToJSON(job_field_dto_collection_query_parameters_1);
	printf("job_field_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonjob_field_dto_collection_query_parameters_1));
	job_field_dto_collection_query_parameters_t* job_field_dto_collection_query_parameters_2 = job_field_dto_collection_query_parameters_parseFromJSON(jsonjob_field_dto_collection_query_parameters_1);
	cJSON* jsonjob_field_dto_collection_query_parameters_2 = job_field_dto_collection_query_parameters_convertToJSON(job_field_dto_collection_query_parameters_2);
	printf("repeating job_field_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonjob_field_dto_collection_query_parameters_2));
}

int main() {
  test_job_field_dto_collection_query_parameters(1);
  test_job_field_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // job_field_dto_collection_query_parameters_MAIN
#endif // job_field_dto_collection_query_parameters_TEST
