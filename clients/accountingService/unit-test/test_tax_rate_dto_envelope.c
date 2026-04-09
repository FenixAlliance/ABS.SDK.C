#ifndef tax_rate_dto_envelope_TEST
#define tax_rate_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_rate_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_rate_dto_envelope.h"
tax_rate_dto_envelope_t* instantiate_tax_rate_dto_envelope(int include_optional);

#include "test_tax_rate_dto.c"


tax_rate_dto_envelope_t* instantiate_tax_rate_dto_envelope(int include_optional) {
  tax_rate_dto_envelope_t* tax_rate_dto_envelope = NULL;
  if (include_optional) {
    tax_rate_dto_envelope = tax_rate_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_tax_rate_dto(0)
    );
  } else {
    tax_rate_dto_envelope = tax_rate_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return tax_rate_dto_envelope;
}


#ifdef tax_rate_dto_envelope_MAIN

void test_tax_rate_dto_envelope(int include_optional) {
    tax_rate_dto_envelope_t* tax_rate_dto_envelope_1 = instantiate_tax_rate_dto_envelope(include_optional);

	cJSON* jsontax_rate_dto_envelope_1 = tax_rate_dto_envelope_convertToJSON(tax_rate_dto_envelope_1);
	printf("tax_rate_dto_envelope :\n%s\n", cJSON_Print(jsontax_rate_dto_envelope_1));
	tax_rate_dto_envelope_t* tax_rate_dto_envelope_2 = tax_rate_dto_envelope_parseFromJSON(jsontax_rate_dto_envelope_1);
	cJSON* jsontax_rate_dto_envelope_2 = tax_rate_dto_envelope_convertToJSON(tax_rate_dto_envelope_2);
	printf("repeating tax_rate_dto_envelope:\n%s\n", cJSON_Print(jsontax_rate_dto_envelope_2));
}

int main() {
  test_tax_rate_dto_envelope(1);
  test_tax_rate_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_rate_dto_envelope_MAIN
#endif // tax_rate_dto_envelope_TEST
