#ifndef fiscal_year_dto_envelope_TEST
#define fiscal_year_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fiscal_year_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fiscal_year_dto_envelope.h"
fiscal_year_dto_envelope_t* instantiate_fiscal_year_dto_envelope(int include_optional);

#include "test_fiscal_year_dto.c"


fiscal_year_dto_envelope_t* instantiate_fiscal_year_dto_envelope(int include_optional) {
  fiscal_year_dto_envelope_t* fiscal_year_dto_envelope = NULL;
  if (include_optional) {
    fiscal_year_dto_envelope = fiscal_year_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_fiscal_year_dto(0)
    );
  } else {
    fiscal_year_dto_envelope = fiscal_year_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return fiscal_year_dto_envelope;
}


#ifdef fiscal_year_dto_envelope_MAIN

void test_fiscal_year_dto_envelope(int include_optional) {
    fiscal_year_dto_envelope_t* fiscal_year_dto_envelope_1 = instantiate_fiscal_year_dto_envelope(include_optional);

	cJSON* jsonfiscal_year_dto_envelope_1 = fiscal_year_dto_envelope_convertToJSON(fiscal_year_dto_envelope_1);
	printf("fiscal_year_dto_envelope :\n%s\n", cJSON_Print(jsonfiscal_year_dto_envelope_1));
	fiscal_year_dto_envelope_t* fiscal_year_dto_envelope_2 = fiscal_year_dto_envelope_parseFromJSON(jsonfiscal_year_dto_envelope_1);
	cJSON* jsonfiscal_year_dto_envelope_2 = fiscal_year_dto_envelope_convertToJSON(fiscal_year_dto_envelope_2);
	printf("repeating fiscal_year_dto_envelope:\n%s\n", cJSON_Print(jsonfiscal_year_dto_envelope_2));
}

int main() {
  test_fiscal_year_dto_envelope(1);
  test_fiscal_year_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // fiscal_year_dto_envelope_MAIN
#endif // fiscal_year_dto_envelope_TEST
