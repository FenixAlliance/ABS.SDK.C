#ifndef employee_type_dto_list_envelope_TEST
#define employee_type_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employee_type_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employee_type_dto_list_envelope.h"
employee_type_dto_list_envelope_t* instantiate_employee_type_dto_list_envelope(int include_optional);



employee_type_dto_list_envelope_t* instantiate_employee_type_dto_list_envelope(int include_optional) {
  employee_type_dto_list_envelope_t* employee_type_dto_list_envelope = NULL;
  if (include_optional) {
    employee_type_dto_list_envelope = employee_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    employee_type_dto_list_envelope = employee_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return employee_type_dto_list_envelope;
}


#ifdef employee_type_dto_list_envelope_MAIN

void test_employee_type_dto_list_envelope(int include_optional) {
    employee_type_dto_list_envelope_t* employee_type_dto_list_envelope_1 = instantiate_employee_type_dto_list_envelope(include_optional);

	cJSON* jsonemployee_type_dto_list_envelope_1 = employee_type_dto_list_envelope_convertToJSON(employee_type_dto_list_envelope_1);
	printf("employee_type_dto_list_envelope :\n%s\n", cJSON_Print(jsonemployee_type_dto_list_envelope_1));
	employee_type_dto_list_envelope_t* employee_type_dto_list_envelope_2 = employee_type_dto_list_envelope_parseFromJSON(jsonemployee_type_dto_list_envelope_1);
	cJSON* jsonemployee_type_dto_list_envelope_2 = employee_type_dto_list_envelope_convertToJSON(employee_type_dto_list_envelope_2);
	printf("repeating employee_type_dto_list_envelope:\n%s\n", cJSON_Print(jsonemployee_type_dto_list_envelope_2));
}

int main() {
  test_employee_type_dto_list_envelope(1);
  test_employee_type_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // employee_type_dto_list_envelope_MAIN
#endif // employee_type_dto_list_envelope_TEST
