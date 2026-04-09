#ifndef loan_application_create_dto_TEST
#define loan_application_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loan_application_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loan_application_create_dto.h"
loan_application_create_dto_t* instantiate_loan_application_create_dto(int include_optional);



loan_application_create_dto_t* instantiate_loan_application_create_dto(int include_optional) {
  loan_application_create_dto_t* loan_application_create_dto = NULL;
  if (include_optional) {
    loan_application_create_dto = loan_application_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    loan_application_create_dto = loan_application_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return loan_application_create_dto;
}


#ifdef loan_application_create_dto_MAIN

void test_loan_application_create_dto(int include_optional) {
    loan_application_create_dto_t* loan_application_create_dto_1 = instantiate_loan_application_create_dto(include_optional);

	cJSON* jsonloan_application_create_dto_1 = loan_application_create_dto_convertToJSON(loan_application_create_dto_1);
	printf("loan_application_create_dto :\n%s\n", cJSON_Print(jsonloan_application_create_dto_1));
	loan_application_create_dto_t* loan_application_create_dto_2 = loan_application_create_dto_parseFromJSON(jsonloan_application_create_dto_1);
	cJSON* jsonloan_application_create_dto_2 = loan_application_create_dto_convertToJSON(loan_application_create_dto_2);
	printf("repeating loan_application_create_dto:\n%s\n", cJSON_Print(jsonloan_application_create_dto_2));
}

int main() {
  test_loan_application_create_dto(1);
  test_loan_application_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // loan_application_create_dto_MAIN
#endif // loan_application_create_dto_TEST
