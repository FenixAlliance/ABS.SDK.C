#ifndef curriculum_experience_dto_collection_query_parameters_TEST
#define curriculum_experience_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define curriculum_experience_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/curriculum_experience_dto_collection_query_parameters.h"
curriculum_experience_dto_collection_query_parameters_t* instantiate_curriculum_experience_dto_collection_query_parameters(int include_optional);



curriculum_experience_dto_collection_query_parameters_t* instantiate_curriculum_experience_dto_collection_query_parameters(int include_optional) {
  curriculum_experience_dto_collection_query_parameters_t* curriculum_experience_dto_collection_query_parameters = NULL;
  if (include_optional) {
    curriculum_experience_dto_collection_query_parameters = curriculum_experience_dto_collection_query_parameters_create(
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
    curriculum_experience_dto_collection_query_parameters = curriculum_experience_dto_collection_query_parameters_create(
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

  return curriculum_experience_dto_collection_query_parameters;
}


#ifdef curriculum_experience_dto_collection_query_parameters_MAIN

void test_curriculum_experience_dto_collection_query_parameters(int include_optional) {
    curriculum_experience_dto_collection_query_parameters_t* curriculum_experience_dto_collection_query_parameters_1 = instantiate_curriculum_experience_dto_collection_query_parameters(include_optional);

	cJSON* jsoncurriculum_experience_dto_collection_query_parameters_1 = curriculum_experience_dto_collection_query_parameters_convertToJSON(curriculum_experience_dto_collection_query_parameters_1);
	printf("curriculum_experience_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncurriculum_experience_dto_collection_query_parameters_1));
	curriculum_experience_dto_collection_query_parameters_t* curriculum_experience_dto_collection_query_parameters_2 = curriculum_experience_dto_collection_query_parameters_parseFromJSON(jsoncurriculum_experience_dto_collection_query_parameters_1);
	cJSON* jsoncurriculum_experience_dto_collection_query_parameters_2 = curriculum_experience_dto_collection_query_parameters_convertToJSON(curriculum_experience_dto_collection_query_parameters_2);
	printf("repeating curriculum_experience_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncurriculum_experience_dto_collection_query_parameters_2));
}

int main() {
  test_curriculum_experience_dto_collection_query_parameters(1);
  test_curriculum_experience_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // curriculum_experience_dto_collection_query_parameters_MAIN
#endif // curriculum_experience_dto_collection_query_parameters_TEST
