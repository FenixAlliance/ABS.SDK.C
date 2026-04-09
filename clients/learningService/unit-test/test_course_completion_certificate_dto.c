#ifndef course_completion_certificate_dto_TEST
#define course_completion_certificate_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define course_completion_certificate_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/course_completion_certificate_dto.h"
course_completion_certificate_dto_t* instantiate_course_completion_certificate_dto(int include_optional);



course_completion_certificate_dto_t* instantiate_course_completion_certificate_dto(int include_optional) {
  course_completion_certificate_dto_t* course_completion_certificate_dto = NULL;
  if (include_optional) {
    course_completion_certificate_dto = course_completion_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0"
    );
  } else {
    course_completion_certificate_dto = course_completion_certificate_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0"
    );
  }

  return course_completion_certificate_dto;
}


#ifdef course_completion_certificate_dto_MAIN

void test_course_completion_certificate_dto(int include_optional) {
    course_completion_certificate_dto_t* course_completion_certificate_dto_1 = instantiate_course_completion_certificate_dto(include_optional);

	cJSON* jsoncourse_completion_certificate_dto_1 = course_completion_certificate_dto_convertToJSON(course_completion_certificate_dto_1);
	printf("course_completion_certificate_dto :\n%s\n", cJSON_Print(jsoncourse_completion_certificate_dto_1));
	course_completion_certificate_dto_t* course_completion_certificate_dto_2 = course_completion_certificate_dto_parseFromJSON(jsoncourse_completion_certificate_dto_1);
	cJSON* jsoncourse_completion_certificate_dto_2 = course_completion_certificate_dto_convertToJSON(course_completion_certificate_dto_2);
	printf("repeating course_completion_certificate_dto:\n%s\n", cJSON_Print(jsoncourse_completion_certificate_dto_2));
}

int main() {
  test_course_completion_certificate_dto(1);
  test_course_completion_certificate_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // course_completion_certificate_dto_MAIN
#endif // course_completion_certificate_dto_TEST
