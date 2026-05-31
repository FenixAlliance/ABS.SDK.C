#ifndef bill_of_lading_line_dto_envelope_TEST
#define bill_of_lading_line_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bill_of_lading_line_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bill_of_lading_line_dto_envelope.h"
bill_of_lading_line_dto_envelope_t* instantiate_bill_of_lading_line_dto_envelope(int include_optional);

#include "test_bill_of_lading_line_dto.c"


bill_of_lading_line_dto_envelope_t* instantiate_bill_of_lading_line_dto_envelope(int include_optional) {
  bill_of_lading_line_dto_envelope_t* bill_of_lading_line_dto_envelope = NULL;
  if (include_optional) {
    bill_of_lading_line_dto_envelope = bill_of_lading_line_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_bill_of_lading_line_dto(0)
    );
  } else {
    bill_of_lading_line_dto_envelope = bill_of_lading_line_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return bill_of_lading_line_dto_envelope;
}


#ifdef bill_of_lading_line_dto_envelope_MAIN

void test_bill_of_lading_line_dto_envelope(int include_optional) {
    bill_of_lading_line_dto_envelope_t* bill_of_lading_line_dto_envelope_1 = instantiate_bill_of_lading_line_dto_envelope(include_optional);

	cJSON* jsonbill_of_lading_line_dto_envelope_1 = bill_of_lading_line_dto_envelope_convertToJSON(bill_of_lading_line_dto_envelope_1);
	printf("bill_of_lading_line_dto_envelope :\n%s\n", cJSON_Print(jsonbill_of_lading_line_dto_envelope_1));
	bill_of_lading_line_dto_envelope_t* bill_of_lading_line_dto_envelope_2 = bill_of_lading_line_dto_envelope_parseFromJSON(jsonbill_of_lading_line_dto_envelope_1);
	cJSON* jsonbill_of_lading_line_dto_envelope_2 = bill_of_lading_line_dto_envelope_convertToJSON(bill_of_lading_line_dto_envelope_2);
	printf("repeating bill_of_lading_line_dto_envelope:\n%s\n", cJSON_Print(jsonbill_of_lading_line_dto_envelope_2));
}

int main() {
  test_bill_of_lading_line_dto_envelope(1);
  test_bill_of_lading_line_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // bill_of_lading_line_dto_envelope_MAIN
#endif // bill_of_lading_line_dto_envelope_TEST
