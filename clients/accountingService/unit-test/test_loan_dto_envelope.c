#ifndef loan_dto_envelope_TEST
#define loan_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loan_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loan_dto_envelope.h"
loan_dto_envelope_t* instantiate_loan_dto_envelope(int include_optional);

#include "test_loan_dto.c"


loan_dto_envelope_t* instantiate_loan_dto_envelope(int include_optional) {
  loan_dto_envelope_t* loan_dto_envelope = NULL;
  if (include_optional) {
    loan_dto_envelope = loan_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_loan_dto(0)
    );
  } else {
    loan_dto_envelope = loan_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return loan_dto_envelope;
}


#ifdef loan_dto_envelope_MAIN

void test_loan_dto_envelope(int include_optional) {
    loan_dto_envelope_t* loan_dto_envelope_1 = instantiate_loan_dto_envelope(include_optional);

	cJSON* jsonloan_dto_envelope_1 = loan_dto_envelope_convertToJSON(loan_dto_envelope_1);
	printf("loan_dto_envelope :\n%s\n", cJSON_Print(jsonloan_dto_envelope_1));
	loan_dto_envelope_t* loan_dto_envelope_2 = loan_dto_envelope_parseFromJSON(jsonloan_dto_envelope_1);
	cJSON* jsonloan_dto_envelope_2 = loan_dto_envelope_convertToJSON(loan_dto_envelope_2);
	printf("repeating loan_dto_envelope:\n%s\n", cJSON_Print(jsonloan_dto_envelope_2));
}

int main() {
  test_loan_dto_envelope(1);
  test_loan_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // loan_dto_envelope_MAIN
#endif // loan_dto_envelope_TEST
