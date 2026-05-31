#ifndef salary_dto_envelope_TEST
#define salary_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define salary_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/salary_dto_envelope.h"
salary_dto_envelope_t* instantiate_salary_dto_envelope(int include_optional);

#include "test_salary_dto.c"


salary_dto_envelope_t* instantiate_salary_dto_envelope(int include_optional) {
  salary_dto_envelope_t* salary_dto_envelope = NULL;
  if (include_optional) {
    salary_dto_envelope = salary_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_salary_dto(0)
    );
  } else {
    salary_dto_envelope = salary_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return salary_dto_envelope;
}


#ifdef salary_dto_envelope_MAIN

void test_salary_dto_envelope(int include_optional) {
    salary_dto_envelope_t* salary_dto_envelope_1 = instantiate_salary_dto_envelope(include_optional);

	cJSON* jsonsalary_dto_envelope_1 = salary_dto_envelope_convertToJSON(salary_dto_envelope_1);
	printf("salary_dto_envelope :\n%s\n", cJSON_Print(jsonsalary_dto_envelope_1));
	salary_dto_envelope_t* salary_dto_envelope_2 = salary_dto_envelope_parseFromJSON(jsonsalary_dto_envelope_1);
	cJSON* jsonsalary_dto_envelope_2 = salary_dto_envelope_convertToJSON(salary_dto_envelope_2);
	printf("repeating salary_dto_envelope:\n%s\n", cJSON_Print(jsonsalary_dto_envelope_2));
}

int main() {
  test_salary_dto_envelope(1);
  test_salary_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // salary_dto_envelope_MAIN
#endif // salary_dto_envelope_TEST
