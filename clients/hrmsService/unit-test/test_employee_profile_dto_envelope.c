#ifndef employee_profile_dto_envelope_TEST
#define employee_profile_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employee_profile_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employee_profile_dto_envelope.h"
employee_profile_dto_envelope_t* instantiate_employee_profile_dto_envelope(int include_optional);

#include "test_employee_profile_dto.c"


employee_profile_dto_envelope_t* instantiate_employee_profile_dto_envelope(int include_optional) {
  employee_profile_dto_envelope_t* employee_profile_dto_envelope = NULL;
  if (include_optional) {
    employee_profile_dto_envelope = employee_profile_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_employee_profile_dto(0)
    );
  } else {
    employee_profile_dto_envelope = employee_profile_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return employee_profile_dto_envelope;
}


#ifdef employee_profile_dto_envelope_MAIN

void test_employee_profile_dto_envelope(int include_optional) {
    employee_profile_dto_envelope_t* employee_profile_dto_envelope_1 = instantiate_employee_profile_dto_envelope(include_optional);

	cJSON* jsonemployee_profile_dto_envelope_1 = employee_profile_dto_envelope_convertToJSON(employee_profile_dto_envelope_1);
	printf("employee_profile_dto_envelope :\n%s\n", cJSON_Print(jsonemployee_profile_dto_envelope_1));
	employee_profile_dto_envelope_t* employee_profile_dto_envelope_2 = employee_profile_dto_envelope_parseFromJSON(jsonemployee_profile_dto_envelope_1);
	cJSON* jsonemployee_profile_dto_envelope_2 = employee_profile_dto_envelope_convertToJSON(employee_profile_dto_envelope_2);
	printf("repeating employee_profile_dto_envelope:\n%s\n", cJSON_Print(jsonemployee_profile_dto_envelope_2));
}

int main() {
  test_employee_profile_dto_envelope(1);
  test_employee_profile_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // employee_profile_dto_envelope_MAIN
#endif // employee_profile_dto_envelope_TEST
