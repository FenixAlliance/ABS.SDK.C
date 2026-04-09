#ifndef instructor_profile_dto_TEST
#define instructor_profile_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instructor_profile_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instructor_profile_dto.h"
instructor_profile_dto_t* instantiate_instructor_profile_dto(int include_optional);



instructor_profile_dto_t* instantiate_instructor_profile_dto(int include_optional) {
  instructor_profile_dto_t* instructor_profile_dto = NULL;
  if (include_optional) {
    instructor_profile_dto = instructor_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
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
    instructor_profile_dto = instructor_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
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

  return instructor_profile_dto;
}


#ifdef instructor_profile_dto_MAIN

void test_instructor_profile_dto(int include_optional) {
    instructor_profile_dto_t* instructor_profile_dto_1 = instantiate_instructor_profile_dto(include_optional);

	cJSON* jsoninstructor_profile_dto_1 = instructor_profile_dto_convertToJSON(instructor_profile_dto_1);
	printf("instructor_profile_dto :\n%s\n", cJSON_Print(jsoninstructor_profile_dto_1));
	instructor_profile_dto_t* instructor_profile_dto_2 = instructor_profile_dto_parseFromJSON(jsoninstructor_profile_dto_1);
	cJSON* jsoninstructor_profile_dto_2 = instructor_profile_dto_convertToJSON(instructor_profile_dto_2);
	printf("repeating instructor_profile_dto:\n%s\n", cJSON_Print(jsoninstructor_profile_dto_2));
}

int main() {
  test_instructor_profile_dto(1);
  test_instructor_profile_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // instructor_profile_dto_MAIN
#endif // instructor_profile_dto_TEST
