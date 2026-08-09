#ifndef appraisal_stage_dto_collection_query_parameters_TEST
#define appraisal_stage_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define appraisal_stage_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/appraisal_stage_dto_collection_query_parameters.h"
appraisal_stage_dto_collection_query_parameters_t* instantiate_appraisal_stage_dto_collection_query_parameters(int include_optional);



appraisal_stage_dto_collection_query_parameters_t* instantiate_appraisal_stage_dto_collection_query_parameters(int include_optional) {
  appraisal_stage_dto_collection_query_parameters_t* appraisal_stage_dto_collection_query_parameters = NULL;
  if (include_optional) {
    appraisal_stage_dto_collection_query_parameters = appraisal_stage_dto_collection_query_parameters_create(
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
    appraisal_stage_dto_collection_query_parameters = appraisal_stage_dto_collection_query_parameters_create(
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

  return appraisal_stage_dto_collection_query_parameters;
}


#ifdef appraisal_stage_dto_collection_query_parameters_MAIN

void test_appraisal_stage_dto_collection_query_parameters(int include_optional) {
    appraisal_stage_dto_collection_query_parameters_t* appraisal_stage_dto_collection_query_parameters_1 = instantiate_appraisal_stage_dto_collection_query_parameters(include_optional);

	cJSON* jsonappraisal_stage_dto_collection_query_parameters_1 = appraisal_stage_dto_collection_query_parameters_convertToJSON(appraisal_stage_dto_collection_query_parameters_1);
	printf("appraisal_stage_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonappraisal_stage_dto_collection_query_parameters_1));
	appraisal_stage_dto_collection_query_parameters_t* appraisal_stage_dto_collection_query_parameters_2 = appraisal_stage_dto_collection_query_parameters_parseFromJSON(jsonappraisal_stage_dto_collection_query_parameters_1);
	cJSON* jsonappraisal_stage_dto_collection_query_parameters_2 = appraisal_stage_dto_collection_query_parameters_convertToJSON(appraisal_stage_dto_collection_query_parameters_2);
	printf("repeating appraisal_stage_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonappraisal_stage_dto_collection_query_parameters_2));
}

int main() {
  test_appraisal_stage_dto_collection_query_parameters(1);
  test_appraisal_stage_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // appraisal_stage_dto_collection_query_parameters_MAIN
#endif // appraisal_stage_dto_collection_query_parameters_TEST
