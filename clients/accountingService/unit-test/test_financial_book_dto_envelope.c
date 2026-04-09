#ifndef financial_book_dto_envelope_TEST
#define financial_book_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define financial_book_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/financial_book_dto_envelope.h"
financial_book_dto_envelope_t* instantiate_financial_book_dto_envelope(int include_optional);

#include "test_financial_book_dto.c"


financial_book_dto_envelope_t* instantiate_financial_book_dto_envelope(int include_optional) {
  financial_book_dto_envelope_t* financial_book_dto_envelope = NULL;
  if (include_optional) {
    financial_book_dto_envelope = financial_book_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_financial_book_dto(0)
    );
  } else {
    financial_book_dto_envelope = financial_book_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return financial_book_dto_envelope;
}


#ifdef financial_book_dto_envelope_MAIN

void test_financial_book_dto_envelope(int include_optional) {
    financial_book_dto_envelope_t* financial_book_dto_envelope_1 = instantiate_financial_book_dto_envelope(include_optional);

	cJSON* jsonfinancial_book_dto_envelope_1 = financial_book_dto_envelope_convertToJSON(financial_book_dto_envelope_1);
	printf("financial_book_dto_envelope :\n%s\n", cJSON_Print(jsonfinancial_book_dto_envelope_1));
	financial_book_dto_envelope_t* financial_book_dto_envelope_2 = financial_book_dto_envelope_parseFromJSON(jsonfinancial_book_dto_envelope_1);
	cJSON* jsonfinancial_book_dto_envelope_2 = financial_book_dto_envelope_convertToJSON(financial_book_dto_envelope_2);
	printf("repeating financial_book_dto_envelope:\n%s\n", cJSON_Print(jsonfinancial_book_dto_envelope_2));
}

int main() {
  test_financial_book_dto_envelope(1);
  test_financial_book_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // financial_book_dto_envelope_MAIN
#endif // financial_book_dto_envelope_TEST
