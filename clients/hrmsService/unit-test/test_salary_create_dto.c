#ifndef salary_create_dto_TEST
#define salary_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define salary_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/salary_create_dto.h"
salary_create_dto_t* instantiate_salary_create_dto(int include_optional);



salary_create_dto_t* instantiate_salary_create_dto(int include_optional) {
  salary_create_dto_t* salary_create_dto = NULL;
  if (include_optional) {
    salary_create_dto = salary_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
      "0"
    );
  } else {
    salary_create_dto = salary_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
      "0"
    );
  }

  return salary_create_dto;
}


#ifdef salary_create_dto_MAIN

void test_salary_create_dto(int include_optional) {
    salary_create_dto_t* salary_create_dto_1 = instantiate_salary_create_dto(include_optional);

	cJSON* jsonsalary_create_dto_1 = salary_create_dto_convertToJSON(salary_create_dto_1);
	printf("salary_create_dto :\n%s\n", cJSON_Print(jsonsalary_create_dto_1));
	salary_create_dto_t* salary_create_dto_2 = salary_create_dto_parseFromJSON(jsonsalary_create_dto_1);
	cJSON* jsonsalary_create_dto_2 = salary_create_dto_convertToJSON(salary_create_dto_2);
	printf("repeating salary_create_dto:\n%s\n", cJSON_Print(jsonsalary_create_dto_2));
}

int main() {
  test_salary_create_dto(1);
  test_salary_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // salary_create_dto_MAIN
#endif // salary_create_dto_TEST
