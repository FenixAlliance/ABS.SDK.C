#ifndef shipment_create_dto_TEST
#define shipment_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipment_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipment_create_dto.h"
shipment_create_dto_t* instantiate_shipment_create_dto(int include_optional);



shipment_create_dto_t* instantiate_shipment_create_dto(int include_optional) {
  shipment_create_dto_t* shipment_create_dto = NULL;
  if (include_optional) {
    shipment_create_dto = shipment_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      shipmentsservice_shipment_create_dto_SHIPPINGTERMS_NC,
      "0"
    );
  } else {
    shipment_create_dto = shipment_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      shipmentsservice_shipment_create_dto_SHIPPINGTERMS_NC,
      "0"
    );
  }

  return shipment_create_dto;
}


#ifdef shipment_create_dto_MAIN

void test_shipment_create_dto(int include_optional) {
    shipment_create_dto_t* shipment_create_dto_1 = instantiate_shipment_create_dto(include_optional);

	cJSON* jsonshipment_create_dto_1 = shipment_create_dto_convertToJSON(shipment_create_dto_1);
	printf("shipment_create_dto :\n%s\n", cJSON_Print(jsonshipment_create_dto_1));
	shipment_create_dto_t* shipment_create_dto_2 = shipment_create_dto_parseFromJSON(jsonshipment_create_dto_1);
	cJSON* jsonshipment_create_dto_2 = shipment_create_dto_convertToJSON(shipment_create_dto_2);
	printf("repeating shipment_create_dto:\n%s\n", cJSON_Print(jsonshipment_create_dto_2));
}

int main() {
  test_shipment_create_dto(1);
  test_shipment_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipment_create_dto_MAIN
#endif // shipment_create_dto_TEST
