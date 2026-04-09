#ifndef deal_unit_flow_dto_TEST
#define deal_unit_flow_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deal_unit_flow_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deal_unit_flow_dto.h"
deal_unit_flow_dto_t* instantiate_deal_unit_flow_dto(int include_optional);



deal_unit_flow_dto_t* instantiate_deal_unit_flow_dto(int include_optional) {
  deal_unit_flow_dto_t* deal_unit_flow_dto = NULL;
  if (include_optional) {
    deal_unit_flow_dto = deal_unit_flow_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    deal_unit_flow_dto = deal_unit_flow_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return deal_unit_flow_dto;
}


#ifdef deal_unit_flow_dto_MAIN

void test_deal_unit_flow_dto(int include_optional) {
    deal_unit_flow_dto_t* deal_unit_flow_dto_1 = instantiate_deal_unit_flow_dto(include_optional);

	cJSON* jsondeal_unit_flow_dto_1 = deal_unit_flow_dto_convertToJSON(deal_unit_flow_dto_1);
	printf("deal_unit_flow_dto :\n%s\n", cJSON_Print(jsondeal_unit_flow_dto_1));
	deal_unit_flow_dto_t* deal_unit_flow_dto_2 = deal_unit_flow_dto_parseFromJSON(jsondeal_unit_flow_dto_1);
	cJSON* jsondeal_unit_flow_dto_2 = deal_unit_flow_dto_convertToJSON(deal_unit_flow_dto_2);
	printf("repeating deal_unit_flow_dto:\n%s\n", cJSON_Print(jsondeal_unit_flow_dto_2));
}

int main() {
  test_deal_unit_flow_dto(1);
  test_deal_unit_flow_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // deal_unit_flow_dto_MAIN
#endif // deal_unit_flow_dto_TEST
