#ifndef waybill_line_dto_list_envelope_TEST
#define waybill_line_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define waybill_line_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/waybill_line_dto_list_envelope.h"
waybill_line_dto_list_envelope_t* instantiate_waybill_line_dto_list_envelope(int include_optional);



waybill_line_dto_list_envelope_t* instantiate_waybill_line_dto_list_envelope(int include_optional) {
  waybill_line_dto_list_envelope_t* waybill_line_dto_list_envelope = NULL;
  if (include_optional) {
    waybill_line_dto_list_envelope = waybill_line_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    waybill_line_dto_list_envelope = waybill_line_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return waybill_line_dto_list_envelope;
}


#ifdef waybill_line_dto_list_envelope_MAIN

void test_waybill_line_dto_list_envelope(int include_optional) {
    waybill_line_dto_list_envelope_t* waybill_line_dto_list_envelope_1 = instantiate_waybill_line_dto_list_envelope(include_optional);

	cJSON* jsonwaybill_line_dto_list_envelope_1 = waybill_line_dto_list_envelope_convertToJSON(waybill_line_dto_list_envelope_1);
	printf("waybill_line_dto_list_envelope :\n%s\n", cJSON_Print(jsonwaybill_line_dto_list_envelope_1));
	waybill_line_dto_list_envelope_t* waybill_line_dto_list_envelope_2 = waybill_line_dto_list_envelope_parseFromJSON(jsonwaybill_line_dto_list_envelope_1);
	cJSON* jsonwaybill_line_dto_list_envelope_2 = waybill_line_dto_list_envelope_convertToJSON(waybill_line_dto_list_envelope_2);
	printf("repeating waybill_line_dto_list_envelope:\n%s\n", cJSON_Print(jsonwaybill_line_dto_list_envelope_2));
}

int main() {
  test_waybill_line_dto_list_envelope(1);
  test_waybill_line_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // waybill_line_dto_list_envelope_MAIN
#endif // waybill_line_dto_list_envelope_TEST
