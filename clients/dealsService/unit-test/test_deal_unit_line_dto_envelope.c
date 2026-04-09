#ifndef deal_unit_line_dto_envelope_TEST
#define deal_unit_line_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deal_unit_line_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deal_unit_line_dto_envelope.h"
deal_unit_line_dto_envelope_t* instantiate_deal_unit_line_dto_envelope(int include_optional);

#include "test_deal_unit_line_dto.c"


deal_unit_line_dto_envelope_t* instantiate_deal_unit_line_dto_envelope(int include_optional) {
  deal_unit_line_dto_envelope_t* deal_unit_line_dto_envelope = NULL;
  if (include_optional) {
    deal_unit_line_dto_envelope = deal_unit_line_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_deal_unit_line_dto(0)
    );
  } else {
    deal_unit_line_dto_envelope = deal_unit_line_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return deal_unit_line_dto_envelope;
}


#ifdef deal_unit_line_dto_envelope_MAIN

void test_deal_unit_line_dto_envelope(int include_optional) {
    deal_unit_line_dto_envelope_t* deal_unit_line_dto_envelope_1 = instantiate_deal_unit_line_dto_envelope(include_optional);

	cJSON* jsondeal_unit_line_dto_envelope_1 = deal_unit_line_dto_envelope_convertToJSON(deal_unit_line_dto_envelope_1);
	printf("deal_unit_line_dto_envelope :\n%s\n", cJSON_Print(jsondeal_unit_line_dto_envelope_1));
	deal_unit_line_dto_envelope_t* deal_unit_line_dto_envelope_2 = deal_unit_line_dto_envelope_parseFromJSON(jsondeal_unit_line_dto_envelope_1);
	cJSON* jsondeal_unit_line_dto_envelope_2 = deal_unit_line_dto_envelope_convertToJSON(deal_unit_line_dto_envelope_2);
	printf("repeating deal_unit_line_dto_envelope:\n%s\n", cJSON_Print(jsondeal_unit_line_dto_envelope_2));
}

int main() {
  test_deal_unit_line_dto_envelope(1);
  test_deal_unit_line_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // deal_unit_line_dto_envelope_MAIN
#endif // deal_unit_line_dto_envelope_TEST
