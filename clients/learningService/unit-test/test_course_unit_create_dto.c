#ifndef course_unit_create_dto_TEST
#define course_unit_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define course_unit_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/course_unit_create_dto.h"
course_unit_create_dto_t* instantiate_course_unit_create_dto(int include_optional);



course_unit_create_dto_t* instantiate_course_unit_create_dto(int include_optional) {
  course_unit_create_dto_t* course_unit_create_dto = NULL;
  if (include_optional) {
    course_unit_create_dto = course_unit_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    course_unit_create_dto = course_unit_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return course_unit_create_dto;
}


#ifdef course_unit_create_dto_MAIN

void test_course_unit_create_dto(int include_optional) {
    course_unit_create_dto_t* course_unit_create_dto_1 = instantiate_course_unit_create_dto(include_optional);

	cJSON* jsoncourse_unit_create_dto_1 = course_unit_create_dto_convertToJSON(course_unit_create_dto_1);
	printf("course_unit_create_dto :\n%s\n", cJSON_Print(jsoncourse_unit_create_dto_1));
	course_unit_create_dto_t* course_unit_create_dto_2 = course_unit_create_dto_parseFromJSON(jsoncourse_unit_create_dto_1);
	cJSON* jsoncourse_unit_create_dto_2 = course_unit_create_dto_convertToJSON(course_unit_create_dto_2);
	printf("repeating course_unit_create_dto:\n%s\n", cJSON_Print(jsoncourse_unit_create_dto_2));
}

int main() {
  test_course_unit_create_dto(1);
  test_course_unit_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // course_unit_create_dto_MAIN
#endif // course_unit_create_dto_TEST
