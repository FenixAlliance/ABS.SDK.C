#ifndef shipment_dto_list_envelope_TEST
#define shipment_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipment_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipment_dto_list_envelope.h"
shipment_dto_list_envelope_t* instantiate_shipment_dto_list_envelope(int include_optional);



shipment_dto_list_envelope_t* instantiate_shipment_dto_list_envelope(int include_optional) {
  shipment_dto_list_envelope_t* shipment_dto_list_envelope = NULL;
  if (include_optional) {
    shipment_dto_list_envelope = shipment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    shipment_dto_list_envelope = shipment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return shipment_dto_list_envelope;
}


#ifdef shipment_dto_list_envelope_MAIN

void test_shipment_dto_list_envelope(int include_optional) {
    shipment_dto_list_envelope_t* shipment_dto_list_envelope_1 = instantiate_shipment_dto_list_envelope(include_optional);

	cJSON* jsonshipment_dto_list_envelope_1 = shipment_dto_list_envelope_convertToJSON(shipment_dto_list_envelope_1);
	printf("shipment_dto_list_envelope :\n%s\n", cJSON_Print(jsonshipment_dto_list_envelope_1));
	shipment_dto_list_envelope_t* shipment_dto_list_envelope_2 = shipment_dto_list_envelope_parseFromJSON(jsonshipment_dto_list_envelope_1);
	cJSON* jsonshipment_dto_list_envelope_2 = shipment_dto_list_envelope_convertToJSON(shipment_dto_list_envelope_2);
	printf("repeating shipment_dto_list_envelope:\n%s\n", cJSON_Print(jsonshipment_dto_list_envelope_2));
}

int main() {
  test_shipment_dto_list_envelope(1);
  test_shipment_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipment_dto_list_envelope_MAIN
#endif // shipment_dto_list_envelope_TEST
