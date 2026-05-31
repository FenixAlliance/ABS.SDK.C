#ifndef salary_dto_list_envelope_TEST
#define salary_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define salary_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/salary_dto_list_envelope.h"
salary_dto_list_envelope_t* instantiate_salary_dto_list_envelope(int include_optional);



salary_dto_list_envelope_t* instantiate_salary_dto_list_envelope(int include_optional) {
  salary_dto_list_envelope_t* salary_dto_list_envelope = NULL;
  if (include_optional) {
    salary_dto_list_envelope = salary_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    salary_dto_list_envelope = salary_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return salary_dto_list_envelope;
}


#ifdef salary_dto_list_envelope_MAIN

void test_salary_dto_list_envelope(int include_optional) {
    salary_dto_list_envelope_t* salary_dto_list_envelope_1 = instantiate_salary_dto_list_envelope(include_optional);

	cJSON* jsonsalary_dto_list_envelope_1 = salary_dto_list_envelope_convertToJSON(salary_dto_list_envelope_1);
	printf("salary_dto_list_envelope :\n%s\n", cJSON_Print(jsonsalary_dto_list_envelope_1));
	salary_dto_list_envelope_t* salary_dto_list_envelope_2 = salary_dto_list_envelope_parseFromJSON(jsonsalary_dto_list_envelope_1);
	cJSON* jsonsalary_dto_list_envelope_2 = salary_dto_list_envelope_convertToJSON(salary_dto_list_envelope_2);
	printf("repeating salary_dto_list_envelope:\n%s\n", cJSON_Print(jsonsalary_dto_list_envelope_2));
}

int main() {
  test_salary_dto_list_envelope(1);
  test_salary_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // salary_dto_list_envelope_MAIN
#endif // salary_dto_list_envelope_TEST
