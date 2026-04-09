#ifndef deal_unit_flow_update_dto_TEST
#define deal_unit_flow_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deal_unit_flow_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deal_unit_flow_update_dto.h"
deal_unit_flow_update_dto_t* instantiate_deal_unit_flow_update_dto(int include_optional);



deal_unit_flow_update_dto_t* instantiate_deal_unit_flow_update_dto(int include_optional) {
  deal_unit_flow_update_dto_t* deal_unit_flow_update_dto = NULL;
  if (include_optional) {
    deal_unit_flow_update_dto = deal_unit_flow_update_dto_create(
      "0",
      "0",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435"
    );
  } else {
    deal_unit_flow_update_dto = deal_unit_flow_update_dto_create(
      "0",
      "0",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435"
    );
  }

  return deal_unit_flow_update_dto;
}


#ifdef deal_unit_flow_update_dto_MAIN

void test_deal_unit_flow_update_dto(int include_optional) {
    deal_unit_flow_update_dto_t* deal_unit_flow_update_dto_1 = instantiate_deal_unit_flow_update_dto(include_optional);

	cJSON* jsondeal_unit_flow_update_dto_1 = deal_unit_flow_update_dto_convertToJSON(deal_unit_flow_update_dto_1);
	printf("deal_unit_flow_update_dto :\n%s\n", cJSON_Print(jsondeal_unit_flow_update_dto_1));
	deal_unit_flow_update_dto_t* deal_unit_flow_update_dto_2 = deal_unit_flow_update_dto_parseFromJSON(jsondeal_unit_flow_update_dto_1);
	cJSON* jsondeal_unit_flow_update_dto_2 = deal_unit_flow_update_dto_convertToJSON(deal_unit_flow_update_dto_2);
	printf("repeating deal_unit_flow_update_dto:\n%s\n", cJSON_Print(jsondeal_unit_flow_update_dto_2));
}

int main() {
  test_deal_unit_flow_update_dto(1);
  test_deal_unit_flow_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // deal_unit_flow_update_dto_MAIN
#endif // deal_unit_flow_update_dto_TEST
