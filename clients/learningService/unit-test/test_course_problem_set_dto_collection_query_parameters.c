#ifndef course_problem_set_dto_collection_query_parameters_TEST
#define course_problem_set_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define course_problem_set_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/course_problem_set_dto_collection_query_parameters.h"
course_problem_set_dto_collection_query_parameters_t* instantiate_course_problem_set_dto_collection_query_parameters(int include_optional);



course_problem_set_dto_collection_query_parameters_t* instantiate_course_problem_set_dto_collection_query_parameters(int include_optional) {
  course_problem_set_dto_collection_query_parameters_t* course_problem_set_dto_collection_query_parameters = NULL;
  if (include_optional) {
    course_problem_set_dto_collection_query_parameters = course_problem_set_dto_collection_query_parameters_create(
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
    course_problem_set_dto_collection_query_parameters = course_problem_set_dto_collection_query_parameters_create(
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

  return course_problem_set_dto_collection_query_parameters;
}


#ifdef course_problem_set_dto_collection_query_parameters_MAIN

void test_course_problem_set_dto_collection_query_parameters(int include_optional) {
    course_problem_set_dto_collection_query_parameters_t* course_problem_set_dto_collection_query_parameters_1 = instantiate_course_problem_set_dto_collection_query_parameters(include_optional);

	cJSON* jsoncourse_problem_set_dto_collection_query_parameters_1 = course_problem_set_dto_collection_query_parameters_convertToJSON(course_problem_set_dto_collection_query_parameters_1);
	printf("course_problem_set_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncourse_problem_set_dto_collection_query_parameters_1));
	course_problem_set_dto_collection_query_parameters_t* course_problem_set_dto_collection_query_parameters_2 = course_problem_set_dto_collection_query_parameters_parseFromJSON(jsoncourse_problem_set_dto_collection_query_parameters_1);
	cJSON* jsoncourse_problem_set_dto_collection_query_parameters_2 = course_problem_set_dto_collection_query_parameters_convertToJSON(course_problem_set_dto_collection_query_parameters_2);
	printf("repeating course_problem_set_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncourse_problem_set_dto_collection_query_parameters_2));
}

int main() {
  test_course_problem_set_dto_collection_query_parameters(1);
  test_course_problem_set_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // course_problem_set_dto_collection_query_parameters_MAIN
#endif // course_problem_set_dto_collection_query_parameters_TEST
