#ifndef salary_dto_TEST
#define salary_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define salary_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/salary_dto.h"
salary_dto_t* instantiate_salary_dto(int include_optional);



salary_dto_t* instantiate_salary_dto(int include_optional) {
  salary_dto_t* salary_dto = NULL;
  if (include_optional) {
    salary_dto = salary_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    salary_dto = salary_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return salary_dto;
}


#ifdef salary_dto_MAIN

void test_salary_dto(int include_optional) {
    salary_dto_t* salary_dto_1 = instantiate_salary_dto(include_optional);

	cJSON* jsonsalary_dto_1 = salary_dto_convertToJSON(salary_dto_1);
	printf("salary_dto :\n%s\n", cJSON_Print(jsonsalary_dto_1));
	salary_dto_t* salary_dto_2 = salary_dto_parseFromJSON(jsonsalary_dto_1);
	cJSON* jsonsalary_dto_2 = salary_dto_convertToJSON(salary_dto_2);
	printf("repeating salary_dto:\n%s\n", cJSON_Print(jsonsalary_dto_2));
}

int main() {
  test_salary_dto(1);
  test_salary_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // salary_dto_MAIN
#endif // salary_dto_TEST
