#ifndef deal_unit_dto_list_envelope_TEST
#define deal_unit_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deal_unit_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deal_unit_dto_list_envelope.h"
deal_unit_dto_list_envelope_t* instantiate_deal_unit_dto_list_envelope(int include_optional);



deal_unit_dto_list_envelope_t* instantiate_deal_unit_dto_list_envelope(int include_optional) {
  deal_unit_dto_list_envelope_t* deal_unit_dto_list_envelope = NULL;
  if (include_optional) {
    deal_unit_dto_list_envelope = deal_unit_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    deal_unit_dto_list_envelope = deal_unit_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return deal_unit_dto_list_envelope;
}


#ifdef deal_unit_dto_list_envelope_MAIN

void test_deal_unit_dto_list_envelope(int include_optional) {
    deal_unit_dto_list_envelope_t* deal_unit_dto_list_envelope_1 = instantiate_deal_unit_dto_list_envelope(include_optional);

	cJSON* jsondeal_unit_dto_list_envelope_1 = deal_unit_dto_list_envelope_convertToJSON(deal_unit_dto_list_envelope_1);
	printf("deal_unit_dto_list_envelope :\n%s\n", cJSON_Print(jsondeal_unit_dto_list_envelope_1));
	deal_unit_dto_list_envelope_t* deal_unit_dto_list_envelope_2 = deal_unit_dto_list_envelope_parseFromJSON(jsondeal_unit_dto_list_envelope_1);
	cJSON* jsondeal_unit_dto_list_envelope_2 = deal_unit_dto_list_envelope_convertToJSON(deal_unit_dto_list_envelope_2);
	printf("repeating deal_unit_dto_list_envelope:\n%s\n", cJSON_Print(jsondeal_unit_dto_list_envelope_2));
}

int main() {
  test_deal_unit_dto_list_envelope(1);
  test_deal_unit_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // deal_unit_dto_list_envelope_MAIN
#endif // deal_unit_dto_list_envelope_TEST
