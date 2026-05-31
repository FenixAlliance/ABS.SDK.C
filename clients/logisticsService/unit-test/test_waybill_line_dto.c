#ifndef waybill_line_dto_TEST
#define waybill_line_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define waybill_line_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/waybill_line_dto.h"
waybill_line_dto_t* instantiate_waybill_line_dto(int include_optional);



waybill_line_dto_t* instantiate_waybill_line_dto(int include_optional) {
  waybill_line_dto_t* waybill_line_dto = NULL;
  if (include_optional) {
    waybill_line_dto = waybill_line_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      56,
      1.337,
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    waybill_line_dto = waybill_line_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      56,
      1.337,
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return waybill_line_dto;
}


#ifdef waybill_line_dto_MAIN

void test_waybill_line_dto(int include_optional) {
    waybill_line_dto_t* waybill_line_dto_1 = instantiate_waybill_line_dto(include_optional);

	cJSON* jsonwaybill_line_dto_1 = waybill_line_dto_convertToJSON(waybill_line_dto_1);
	printf("waybill_line_dto :\n%s\n", cJSON_Print(jsonwaybill_line_dto_1));
	waybill_line_dto_t* waybill_line_dto_2 = waybill_line_dto_parseFromJSON(jsonwaybill_line_dto_1);
	cJSON* jsonwaybill_line_dto_2 = waybill_line_dto_convertToJSON(waybill_line_dto_2);
	printf("repeating waybill_line_dto:\n%s\n", cJSON_Print(jsonwaybill_line_dto_2));
}

int main() {
  test_waybill_line_dto(1);
  test_waybill_line_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // waybill_line_dto_MAIN
#endif // waybill_line_dto_TEST
