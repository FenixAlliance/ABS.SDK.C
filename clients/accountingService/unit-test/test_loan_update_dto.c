#ifndef loan_update_dto_TEST
#define loan_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loan_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loan_update_dto.h"
loan_update_dto_t* instantiate_loan_update_dto(int include_optional);



loan_update_dto_t* instantiate_loan_update_dto(int include_optional) {
  loan_update_dto_t* loan_update_dto = NULL;
  if (include_optional) {
    loan_update_dto = loan_update_dto_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0"
    );
  } else {
    loan_update_dto = loan_update_dto_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1,
      "0",
      "0",
      "0"
    );
  }

  return loan_update_dto;
}


#ifdef loan_update_dto_MAIN

void test_loan_update_dto(int include_optional) {
    loan_update_dto_t* loan_update_dto_1 = instantiate_loan_update_dto(include_optional);

	cJSON* jsonloan_update_dto_1 = loan_update_dto_convertToJSON(loan_update_dto_1);
	printf("loan_update_dto :\n%s\n", cJSON_Print(jsonloan_update_dto_1));
	loan_update_dto_t* loan_update_dto_2 = loan_update_dto_parseFromJSON(jsonloan_update_dto_1);
	cJSON* jsonloan_update_dto_2 = loan_update_dto_convertToJSON(loan_update_dto_2);
	printf("repeating loan_update_dto:\n%s\n", cJSON_Print(jsonloan_update_dto_2));
}

int main() {
  test_loan_update_dto(1);
  test_loan_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // loan_update_dto_MAIN
#endif // loan_update_dto_TEST
