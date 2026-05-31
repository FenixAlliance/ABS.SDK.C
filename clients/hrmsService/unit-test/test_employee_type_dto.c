#ifndef employee_type_dto_TEST
#define employee_type_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employee_type_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employee_type_dto.h"
employee_type_dto_t* instantiate_employee_type_dto(int include_optional);



employee_type_dto_t* instantiate_employee_type_dto(int include_optional) {
  employee_type_dto_t* employee_type_dto = NULL;
  if (include_optional) {
    employee_type_dto = employee_type_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    employee_type_dto = employee_type_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return employee_type_dto;
}


#ifdef employee_type_dto_MAIN

void test_employee_type_dto(int include_optional) {
    employee_type_dto_t* employee_type_dto_1 = instantiate_employee_type_dto(include_optional);

	cJSON* jsonemployee_type_dto_1 = employee_type_dto_convertToJSON(employee_type_dto_1);
	printf("employee_type_dto :\n%s\n", cJSON_Print(jsonemployee_type_dto_1));
	employee_type_dto_t* employee_type_dto_2 = employee_type_dto_parseFromJSON(jsonemployee_type_dto_1);
	cJSON* jsonemployee_type_dto_2 = employee_type_dto_convertToJSON(employee_type_dto_2);
	printf("repeating employee_type_dto:\n%s\n", cJSON_Print(jsonemployee_type_dto_2));
}

int main() {
  test_employee_type_dto(1);
  test_employee_type_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // employee_type_dto_MAIN
#endif // employee_type_dto_TEST
