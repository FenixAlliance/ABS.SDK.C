#ifndef course_file_update_dto_TEST
#define course_file_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define course_file_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/course_file_update_dto.h"
course_file_update_dto_t* instantiate_course_file_update_dto(int include_optional);



course_file_update_dto_t* instantiate_course_file_update_dto(int include_optional) {
  course_file_update_dto_t* course_file_update_dto = NULL;
  if (include_optional) {
    course_file_update_dto = course_file_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    course_file_update_dto = course_file_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return course_file_update_dto;
}


#ifdef course_file_update_dto_MAIN

void test_course_file_update_dto(int include_optional) {
    course_file_update_dto_t* course_file_update_dto_1 = instantiate_course_file_update_dto(include_optional);

	cJSON* jsoncourse_file_update_dto_1 = course_file_update_dto_convertToJSON(course_file_update_dto_1);
	printf("course_file_update_dto :\n%s\n", cJSON_Print(jsoncourse_file_update_dto_1));
	course_file_update_dto_t* course_file_update_dto_2 = course_file_update_dto_parseFromJSON(jsoncourse_file_update_dto_1);
	cJSON* jsoncourse_file_update_dto_2 = course_file_update_dto_convertToJSON(course_file_update_dto_2);
	printf("repeating course_file_update_dto:\n%s\n", cJSON_Print(jsoncourse_file_update_dto_2));
}

int main() {
  test_course_file_update_dto(1);
  test_course_file_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // course_file_update_dto_MAIN
#endif // course_file_update_dto_TEST
