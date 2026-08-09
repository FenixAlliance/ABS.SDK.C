#ifndef employee_profile_dto_collection_query_parameters_TEST
#define employee_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employee_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employee_profile_dto_collection_query_parameters.h"
employee_profile_dto_collection_query_parameters_t* instantiate_employee_profile_dto_collection_query_parameters(int include_optional);



employee_profile_dto_collection_query_parameters_t* instantiate_employee_profile_dto_collection_query_parameters(int include_optional) {
  employee_profile_dto_collection_query_parameters_t* employee_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    employee_profile_dto_collection_query_parameters = employee_profile_dto_collection_query_parameters_create(
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
    employee_profile_dto_collection_query_parameters = employee_profile_dto_collection_query_parameters_create(
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

  return employee_profile_dto_collection_query_parameters;
}


#ifdef employee_profile_dto_collection_query_parameters_MAIN

void test_employee_profile_dto_collection_query_parameters(int include_optional) {
    employee_profile_dto_collection_query_parameters_t* employee_profile_dto_collection_query_parameters_1 = instantiate_employee_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsonemployee_profile_dto_collection_query_parameters_1 = employee_profile_dto_collection_query_parameters_convertToJSON(employee_profile_dto_collection_query_parameters_1);
	printf("employee_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonemployee_profile_dto_collection_query_parameters_1));
	employee_profile_dto_collection_query_parameters_t* employee_profile_dto_collection_query_parameters_2 = employee_profile_dto_collection_query_parameters_parseFromJSON(jsonemployee_profile_dto_collection_query_parameters_1);
	cJSON* jsonemployee_profile_dto_collection_query_parameters_2 = employee_profile_dto_collection_query_parameters_convertToJSON(employee_profile_dto_collection_query_parameters_2);
	printf("repeating employee_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonemployee_profile_dto_collection_query_parameters_2));
}

int main() {
  test_employee_profile_dto_collection_query_parameters(1);
  test_employee_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // employee_profile_dto_collection_query_parameters_MAIN
#endif // employee_profile_dto_collection_query_parameters_TEST
