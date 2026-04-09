#ifndef course_problem_set_update_dto_TEST
#define course_problem_set_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define course_problem_set_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/course_problem_set_update_dto.h"
course_problem_set_update_dto_t* instantiate_course_problem_set_update_dto(int include_optional);



course_problem_set_update_dto_t* instantiate_course_problem_set_update_dto(int include_optional) {
  course_problem_set_update_dto_t* course_problem_set_update_dto = NULL;
  if (include_optional) {
    course_problem_set_update_dto = course_problem_set_update_dto_create(
      "0",
      "0",
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    course_problem_set_update_dto = course_problem_set_update_dto_create(
      "0",
      "0",
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return course_problem_set_update_dto;
}


#ifdef course_problem_set_update_dto_MAIN

void test_course_problem_set_update_dto(int include_optional) {
    course_problem_set_update_dto_t* course_problem_set_update_dto_1 = instantiate_course_problem_set_update_dto(include_optional);

	cJSON* jsoncourse_problem_set_update_dto_1 = course_problem_set_update_dto_convertToJSON(course_problem_set_update_dto_1);
	printf("course_problem_set_update_dto :\n%s\n", cJSON_Print(jsoncourse_problem_set_update_dto_1));
	course_problem_set_update_dto_t* course_problem_set_update_dto_2 = course_problem_set_update_dto_parseFromJSON(jsoncourse_problem_set_update_dto_1);
	cJSON* jsoncourse_problem_set_update_dto_2 = course_problem_set_update_dto_convertToJSON(course_problem_set_update_dto_2);
	printf("repeating course_problem_set_update_dto:\n%s\n", cJSON_Print(jsoncourse_problem_set_update_dto_2));
}

int main() {
  test_course_problem_set_update_dto(1);
  test_course_problem_set_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // course_problem_set_update_dto_MAIN
#endif // course_problem_set_update_dto_TEST
