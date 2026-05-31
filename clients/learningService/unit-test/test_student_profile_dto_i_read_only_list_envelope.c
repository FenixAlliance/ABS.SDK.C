#ifndef student_profile_dto_i_read_only_list_envelope_TEST
#define student_profile_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define student_profile_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/student_profile_dto_i_read_only_list_envelope.h"
student_profile_dto_i_read_only_list_envelope_t* instantiate_student_profile_dto_i_read_only_list_envelope(int include_optional);



student_profile_dto_i_read_only_list_envelope_t* instantiate_student_profile_dto_i_read_only_list_envelope(int include_optional) {
  student_profile_dto_i_read_only_list_envelope_t* student_profile_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    student_profile_dto_i_read_only_list_envelope = student_profile_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    student_profile_dto_i_read_only_list_envelope = student_profile_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return student_profile_dto_i_read_only_list_envelope;
}


#ifdef student_profile_dto_i_read_only_list_envelope_MAIN

void test_student_profile_dto_i_read_only_list_envelope(int include_optional) {
    student_profile_dto_i_read_only_list_envelope_t* student_profile_dto_i_read_only_list_envelope_1 = instantiate_student_profile_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonstudent_profile_dto_i_read_only_list_envelope_1 = student_profile_dto_i_read_only_list_envelope_convertToJSON(student_profile_dto_i_read_only_list_envelope_1);
	printf("student_profile_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonstudent_profile_dto_i_read_only_list_envelope_1));
	student_profile_dto_i_read_only_list_envelope_t* student_profile_dto_i_read_only_list_envelope_2 = student_profile_dto_i_read_only_list_envelope_parseFromJSON(jsonstudent_profile_dto_i_read_only_list_envelope_1);
	cJSON* jsonstudent_profile_dto_i_read_only_list_envelope_2 = student_profile_dto_i_read_only_list_envelope_convertToJSON(student_profile_dto_i_read_only_list_envelope_2);
	printf("repeating student_profile_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonstudent_profile_dto_i_read_only_list_envelope_2));
}

int main() {
  test_student_profile_dto_i_read_only_list_envelope(1);
  test_student_profile_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // student_profile_dto_i_read_only_list_envelope_MAIN
#endif // student_profile_dto_i_read_only_list_envelope_TEST
