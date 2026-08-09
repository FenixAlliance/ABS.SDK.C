#ifndef salary_dto_collection_query_parameters_TEST
#define salary_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define salary_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/salary_dto_collection_query_parameters.h"
salary_dto_collection_query_parameters_t* instantiate_salary_dto_collection_query_parameters(int include_optional);



salary_dto_collection_query_parameters_t* instantiate_salary_dto_collection_query_parameters(int include_optional) {
  salary_dto_collection_query_parameters_t* salary_dto_collection_query_parameters = NULL;
  if (include_optional) {
    salary_dto_collection_query_parameters = salary_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    salary_dto_collection_query_parameters = salary_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return salary_dto_collection_query_parameters;
}


#ifdef salary_dto_collection_query_parameters_MAIN

void test_salary_dto_collection_query_parameters(int include_optional) {
    salary_dto_collection_query_parameters_t* salary_dto_collection_query_parameters_1 = instantiate_salary_dto_collection_query_parameters(include_optional);

	cJSON* jsonsalary_dto_collection_query_parameters_1 = salary_dto_collection_query_parameters_convertToJSON(salary_dto_collection_query_parameters_1);
	printf("salary_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsalary_dto_collection_query_parameters_1));
	salary_dto_collection_query_parameters_t* salary_dto_collection_query_parameters_2 = salary_dto_collection_query_parameters_parseFromJSON(jsonsalary_dto_collection_query_parameters_1);
	cJSON* jsonsalary_dto_collection_query_parameters_2 = salary_dto_collection_query_parameters_convertToJSON(salary_dto_collection_query_parameters_2);
	printf("repeating salary_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsalary_dto_collection_query_parameters_2));
}

int main() {
  test_salary_dto_collection_query_parameters(1);
  test_salary_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // salary_dto_collection_query_parameters_MAIN
#endif // salary_dto_collection_query_parameters_TEST
