#ifndef student_profile_update_dto_TEST
#define student_profile_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define student_profile_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/student_profile_update_dto.h"
student_profile_update_dto_t* instantiate_student_profile_update_dto(int include_optional);



student_profile_update_dto_t* instantiate_student_profile_update_dto(int include_optional) {
  student_profile_update_dto_t* student_profile_update_dto = NULL;
  if (include_optional) {
    student_profile_update_dto = student_profile_update_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "0",
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
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    student_profile_update_dto = student_profile_update_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      1,
      "0",
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
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return student_profile_update_dto;
}


#ifdef student_profile_update_dto_MAIN

void test_student_profile_update_dto(int include_optional) {
    student_profile_update_dto_t* student_profile_update_dto_1 = instantiate_student_profile_update_dto(include_optional);

	cJSON* jsonstudent_profile_update_dto_1 = student_profile_update_dto_convertToJSON(student_profile_update_dto_1);
	printf("student_profile_update_dto :\n%s\n", cJSON_Print(jsonstudent_profile_update_dto_1));
	student_profile_update_dto_t* student_profile_update_dto_2 = student_profile_update_dto_parseFromJSON(jsonstudent_profile_update_dto_1);
	cJSON* jsonstudent_profile_update_dto_2 = student_profile_update_dto_convertToJSON(student_profile_update_dto_2);
	printf("repeating student_profile_update_dto:\n%s\n", cJSON_Print(jsonstudent_profile_update_dto_2));
}

int main() {
  test_student_profile_update_dto(1);
  test_student_profile_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // student_profile_update_dto_MAIN
#endif // student_profile_update_dto_TEST
