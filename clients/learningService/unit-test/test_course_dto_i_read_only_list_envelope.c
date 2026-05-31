#ifndef course_dto_i_read_only_list_envelope_TEST
#define course_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define course_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/course_dto_i_read_only_list_envelope.h"
course_dto_i_read_only_list_envelope_t* instantiate_course_dto_i_read_only_list_envelope(int include_optional);



course_dto_i_read_only_list_envelope_t* instantiate_course_dto_i_read_only_list_envelope(int include_optional) {
  course_dto_i_read_only_list_envelope_t* course_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    course_dto_i_read_only_list_envelope = course_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    course_dto_i_read_only_list_envelope = course_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return course_dto_i_read_only_list_envelope;
}


#ifdef course_dto_i_read_only_list_envelope_MAIN

void test_course_dto_i_read_only_list_envelope(int include_optional) {
    course_dto_i_read_only_list_envelope_t* course_dto_i_read_only_list_envelope_1 = instantiate_course_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsoncourse_dto_i_read_only_list_envelope_1 = course_dto_i_read_only_list_envelope_convertToJSON(course_dto_i_read_only_list_envelope_1);
	printf("course_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsoncourse_dto_i_read_only_list_envelope_1));
	course_dto_i_read_only_list_envelope_t* course_dto_i_read_only_list_envelope_2 = course_dto_i_read_only_list_envelope_parseFromJSON(jsoncourse_dto_i_read_only_list_envelope_1);
	cJSON* jsoncourse_dto_i_read_only_list_envelope_2 = course_dto_i_read_only_list_envelope_convertToJSON(course_dto_i_read_only_list_envelope_2);
	printf("repeating course_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsoncourse_dto_i_read_only_list_envelope_2));
}

int main() {
  test_course_dto_i_read_only_list_envelope(1);
  test_course_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // course_dto_i_read_only_list_envelope_MAIN
#endif // course_dto_i_read_only_list_envelope_TEST
