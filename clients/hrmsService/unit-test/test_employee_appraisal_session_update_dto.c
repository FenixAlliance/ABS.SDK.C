#ifndef employee_appraisal_session_update_dto_TEST
#define employee_appraisal_session_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employee_appraisal_session_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employee_appraisal_session_update_dto.h"
employee_appraisal_session_update_dto_t* instantiate_employee_appraisal_session_update_dto(int include_optional);



employee_appraisal_session_update_dto_t* instantiate_employee_appraisal_session_update_dto(int include_optional) {
  employee_appraisal_session_update_dto_t* employee_appraisal_session_update_dto = NULL;
  if (include_optional) {
    employee_appraisal_session_update_dto = employee_appraisal_session_update_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    employee_appraisal_session_update_dto = employee_appraisal_session_update_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return employee_appraisal_session_update_dto;
}


#ifdef employee_appraisal_session_update_dto_MAIN

void test_employee_appraisal_session_update_dto(int include_optional) {
    employee_appraisal_session_update_dto_t* employee_appraisal_session_update_dto_1 = instantiate_employee_appraisal_session_update_dto(include_optional);

	cJSON* jsonemployee_appraisal_session_update_dto_1 = employee_appraisal_session_update_dto_convertToJSON(employee_appraisal_session_update_dto_1);
	printf("employee_appraisal_session_update_dto :\n%s\n", cJSON_Print(jsonemployee_appraisal_session_update_dto_1));
	employee_appraisal_session_update_dto_t* employee_appraisal_session_update_dto_2 = employee_appraisal_session_update_dto_parseFromJSON(jsonemployee_appraisal_session_update_dto_1);
	cJSON* jsonemployee_appraisal_session_update_dto_2 = employee_appraisal_session_update_dto_convertToJSON(employee_appraisal_session_update_dto_2);
	printf("repeating employee_appraisal_session_update_dto:\n%s\n", cJSON_Print(jsonemployee_appraisal_session_update_dto_2));
}

int main() {
  test_employee_appraisal_session_update_dto(1);
  test_employee_appraisal_session_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // employee_appraisal_session_update_dto_MAIN
#endif // employee_appraisal_session_update_dto_TEST
