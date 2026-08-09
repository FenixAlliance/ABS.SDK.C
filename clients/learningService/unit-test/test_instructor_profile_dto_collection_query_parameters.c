#ifndef instructor_profile_dto_collection_query_parameters_TEST
#define instructor_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instructor_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instructor_profile_dto_collection_query_parameters.h"
instructor_profile_dto_collection_query_parameters_t* instantiate_instructor_profile_dto_collection_query_parameters(int include_optional);



instructor_profile_dto_collection_query_parameters_t* instantiate_instructor_profile_dto_collection_query_parameters(int include_optional) {
  instructor_profile_dto_collection_query_parameters_t* instructor_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    instructor_profile_dto_collection_query_parameters = instructor_profile_dto_collection_query_parameters_create(
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
    instructor_profile_dto_collection_query_parameters = instructor_profile_dto_collection_query_parameters_create(
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

  return instructor_profile_dto_collection_query_parameters;
}


#ifdef instructor_profile_dto_collection_query_parameters_MAIN

void test_instructor_profile_dto_collection_query_parameters(int include_optional) {
    instructor_profile_dto_collection_query_parameters_t* instructor_profile_dto_collection_query_parameters_1 = instantiate_instructor_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsoninstructor_profile_dto_collection_query_parameters_1 = instructor_profile_dto_collection_query_parameters_convertToJSON(instructor_profile_dto_collection_query_parameters_1);
	printf("instructor_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoninstructor_profile_dto_collection_query_parameters_1));
	instructor_profile_dto_collection_query_parameters_t* instructor_profile_dto_collection_query_parameters_2 = instructor_profile_dto_collection_query_parameters_parseFromJSON(jsoninstructor_profile_dto_collection_query_parameters_1);
	cJSON* jsoninstructor_profile_dto_collection_query_parameters_2 = instructor_profile_dto_collection_query_parameters_convertToJSON(instructor_profile_dto_collection_query_parameters_2);
	printf("repeating instructor_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoninstructor_profile_dto_collection_query_parameters_2));
}

int main() {
  test_instructor_profile_dto_collection_query_parameters(1);
  test_instructor_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // instructor_profile_dto_collection_query_parameters_MAIN
#endif // instructor_profile_dto_collection_query_parameters_TEST
