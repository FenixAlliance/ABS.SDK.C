#ifndef bill_of_lading_dto_TEST
#define bill_of_lading_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bill_of_lading_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bill_of_lading_dto.h"
bill_of_lading_dto_t* instantiate_bill_of_lading_dto(int include_optional);



bill_of_lading_dto_t* instantiate_bill_of_lading_dto(int include_optional) {
  bill_of_lading_dto_t* bill_of_lading_dto = NULL;
  if (include_optional) {
    bill_of_lading_dto = bill_of_lading_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      56,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      1.337,
      1.337,
      "0",
      "0"
    );
  } else {
    bill_of_lading_dto = bill_of_lading_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      56,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      1.337,
      1.337,
      "0",
      "0"
    );
  }

  return bill_of_lading_dto;
}


#ifdef bill_of_lading_dto_MAIN

void test_bill_of_lading_dto(int include_optional) {
    bill_of_lading_dto_t* bill_of_lading_dto_1 = instantiate_bill_of_lading_dto(include_optional);

	cJSON* jsonbill_of_lading_dto_1 = bill_of_lading_dto_convertToJSON(bill_of_lading_dto_1);
	printf("bill_of_lading_dto :\n%s\n", cJSON_Print(jsonbill_of_lading_dto_1));
	bill_of_lading_dto_t* bill_of_lading_dto_2 = bill_of_lading_dto_parseFromJSON(jsonbill_of_lading_dto_1);
	cJSON* jsonbill_of_lading_dto_2 = bill_of_lading_dto_convertToJSON(bill_of_lading_dto_2);
	printf("repeating bill_of_lading_dto:\n%s\n", cJSON_Print(jsonbill_of_lading_dto_2));
}

int main() {
  test_bill_of_lading_dto(1);
  test_bill_of_lading_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // bill_of_lading_dto_MAIN
#endif // bill_of_lading_dto_TEST
