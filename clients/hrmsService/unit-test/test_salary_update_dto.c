#ifndef salary_update_dto_TEST
#define salary_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define salary_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/salary_update_dto.h"
salary_update_dto_t* instantiate_salary_update_dto(int include_optional);



salary_update_dto_t* instantiate_salary_update_dto(int include_optional) {
  salary_update_dto_t* salary_update_dto = NULL;
  if (include_optional) {
    salary_update_dto = salary_update_dto_create(
      1.337,
      "0",
      "0"
    );
  } else {
    salary_update_dto = salary_update_dto_create(
      1.337,
      "0",
      "0"
    );
  }

  return salary_update_dto;
}


#ifdef salary_update_dto_MAIN

void test_salary_update_dto(int include_optional) {
    salary_update_dto_t* salary_update_dto_1 = instantiate_salary_update_dto(include_optional);

	cJSON* jsonsalary_update_dto_1 = salary_update_dto_convertToJSON(salary_update_dto_1);
	printf("salary_update_dto :\n%s\n", cJSON_Print(jsonsalary_update_dto_1));
	salary_update_dto_t* salary_update_dto_2 = salary_update_dto_parseFromJSON(jsonsalary_update_dto_1);
	cJSON* jsonsalary_update_dto_2 = salary_update_dto_convertToJSON(salary_update_dto_2);
	printf("repeating salary_update_dto:\n%s\n", cJSON_Print(jsonsalary_update_dto_2));
}

int main() {
  test_salary_update_dto(1);
  test_salary_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // salary_update_dto_MAIN
#endif // salary_update_dto_TEST
