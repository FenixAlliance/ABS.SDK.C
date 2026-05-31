#ifndef rail_waybill_dto_list_envelope_TEST
#define rail_waybill_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rail_waybill_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rail_waybill_dto_list_envelope.h"
rail_waybill_dto_list_envelope_t* instantiate_rail_waybill_dto_list_envelope(int include_optional);



rail_waybill_dto_list_envelope_t* instantiate_rail_waybill_dto_list_envelope(int include_optional) {
  rail_waybill_dto_list_envelope_t* rail_waybill_dto_list_envelope = NULL;
  if (include_optional) {
    rail_waybill_dto_list_envelope = rail_waybill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    rail_waybill_dto_list_envelope = rail_waybill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return rail_waybill_dto_list_envelope;
}


#ifdef rail_waybill_dto_list_envelope_MAIN

void test_rail_waybill_dto_list_envelope(int include_optional) {
    rail_waybill_dto_list_envelope_t* rail_waybill_dto_list_envelope_1 = instantiate_rail_waybill_dto_list_envelope(include_optional);

	cJSON* jsonrail_waybill_dto_list_envelope_1 = rail_waybill_dto_list_envelope_convertToJSON(rail_waybill_dto_list_envelope_1);
	printf("rail_waybill_dto_list_envelope :\n%s\n", cJSON_Print(jsonrail_waybill_dto_list_envelope_1));
	rail_waybill_dto_list_envelope_t* rail_waybill_dto_list_envelope_2 = rail_waybill_dto_list_envelope_parseFromJSON(jsonrail_waybill_dto_list_envelope_1);
	cJSON* jsonrail_waybill_dto_list_envelope_2 = rail_waybill_dto_list_envelope_convertToJSON(rail_waybill_dto_list_envelope_2);
	printf("repeating rail_waybill_dto_list_envelope:\n%s\n", cJSON_Print(jsonrail_waybill_dto_list_envelope_2));
}

int main() {
  test_rail_waybill_dto_list_envelope(1);
  test_rail_waybill_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // rail_waybill_dto_list_envelope_MAIN
#endif // rail_waybill_dto_list_envelope_TEST
