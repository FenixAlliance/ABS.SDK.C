#ifndef employee_profile_create_dto_TEST
#define employee_profile_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employee_profile_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employee_profile_create_dto.h"
employee_profile_create_dto_t* instantiate_employee_profile_create_dto(int include_optional);



employee_profile_create_dto_t* instantiate_employee_profile_create_dto(int include_optional) {
  employee_profile_create_dto_t* employee_profile_create_dto = NULL;
  if (include_optional) {
    employee_profile_create_dto = employee_profile_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    employee_profile_create_dto = employee_profile_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return employee_profile_create_dto;
}


#ifdef employee_profile_create_dto_MAIN

void test_employee_profile_create_dto(int include_optional) {
    employee_profile_create_dto_t* employee_profile_create_dto_1 = instantiate_employee_profile_create_dto(include_optional);

	cJSON* jsonemployee_profile_create_dto_1 = employee_profile_create_dto_convertToJSON(employee_profile_create_dto_1);
	printf("employee_profile_create_dto :\n%s\n", cJSON_Print(jsonemployee_profile_create_dto_1));
	employee_profile_create_dto_t* employee_profile_create_dto_2 = employee_profile_create_dto_parseFromJSON(jsonemployee_profile_create_dto_1);
	cJSON* jsonemployee_profile_create_dto_2 = employee_profile_create_dto_convertToJSON(employee_profile_create_dto_2);
	printf("repeating employee_profile_create_dto:\n%s\n", cJSON_Print(jsonemployee_profile_create_dto_2));
}

int main() {
  test_employee_profile_create_dto(1);
  test_employee_profile_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // employee_profile_create_dto_MAIN
#endif // employee_profile_create_dto_TEST
