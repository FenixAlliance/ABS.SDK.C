#ifndef fiscal_responsibility_dto_list_envelope_TEST
#define fiscal_responsibility_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fiscal_responsibility_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fiscal_responsibility_dto_list_envelope.h"
fiscal_responsibility_dto_list_envelope_t* instantiate_fiscal_responsibility_dto_list_envelope(int include_optional);



fiscal_responsibility_dto_list_envelope_t* instantiate_fiscal_responsibility_dto_list_envelope(int include_optional) {
  fiscal_responsibility_dto_list_envelope_t* fiscal_responsibility_dto_list_envelope = NULL;
  if (include_optional) {
    fiscal_responsibility_dto_list_envelope = fiscal_responsibility_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    fiscal_responsibility_dto_list_envelope = fiscal_responsibility_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return fiscal_responsibility_dto_list_envelope;
}


#ifdef fiscal_responsibility_dto_list_envelope_MAIN

void test_fiscal_responsibility_dto_list_envelope(int include_optional) {
    fiscal_responsibility_dto_list_envelope_t* fiscal_responsibility_dto_list_envelope_1 = instantiate_fiscal_responsibility_dto_list_envelope(include_optional);

	cJSON* jsonfiscal_responsibility_dto_list_envelope_1 = fiscal_responsibility_dto_list_envelope_convertToJSON(fiscal_responsibility_dto_list_envelope_1);
	printf("fiscal_responsibility_dto_list_envelope :\n%s\n", cJSON_Print(jsonfiscal_responsibility_dto_list_envelope_1));
	fiscal_responsibility_dto_list_envelope_t* fiscal_responsibility_dto_list_envelope_2 = fiscal_responsibility_dto_list_envelope_parseFromJSON(jsonfiscal_responsibility_dto_list_envelope_1);
	cJSON* jsonfiscal_responsibility_dto_list_envelope_2 = fiscal_responsibility_dto_list_envelope_convertToJSON(fiscal_responsibility_dto_list_envelope_2);
	printf("repeating fiscal_responsibility_dto_list_envelope:\n%s\n", cJSON_Print(jsonfiscal_responsibility_dto_list_envelope_2));
}

int main() {
  test_fiscal_responsibility_dto_list_envelope(1);
  test_fiscal_responsibility_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // fiscal_responsibility_dto_list_envelope_MAIN
#endif // fiscal_responsibility_dto_list_envelope_TEST
