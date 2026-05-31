#ifndef leave_type_create_dto_TEST
#define leave_type_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define leave_type_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/leave_type_create_dto.h"
leave_type_create_dto_t* instantiate_leave_type_create_dto(int include_optional);



leave_type_create_dto_t* instantiate_leave_type_create_dto(int include_optional) {
  leave_type_create_dto_t* leave_type_create_dto = NULL;
  if (include_optional) {
    leave_type_create_dto = leave_type_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    leave_type_create_dto = leave_type_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return leave_type_create_dto;
}


#ifdef leave_type_create_dto_MAIN

void test_leave_type_create_dto(int include_optional) {
    leave_type_create_dto_t* leave_type_create_dto_1 = instantiate_leave_type_create_dto(include_optional);

	cJSON* jsonleave_type_create_dto_1 = leave_type_create_dto_convertToJSON(leave_type_create_dto_1);
	printf("leave_type_create_dto :\n%s\n", cJSON_Print(jsonleave_type_create_dto_1));
	leave_type_create_dto_t* leave_type_create_dto_2 = leave_type_create_dto_parseFromJSON(jsonleave_type_create_dto_1);
	cJSON* jsonleave_type_create_dto_2 = leave_type_create_dto_convertToJSON(leave_type_create_dto_2);
	printf("repeating leave_type_create_dto:\n%s\n", cJSON_Print(jsonleave_type_create_dto_2));
}

int main() {
  test_leave_type_create_dto(1);
  test_leave_type_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // leave_type_create_dto_MAIN
#endif // leave_type_create_dto_TEST
