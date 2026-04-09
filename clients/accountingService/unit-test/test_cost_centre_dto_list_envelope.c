#ifndef cost_centre_dto_list_envelope_TEST
#define cost_centre_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cost_centre_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cost_centre_dto_list_envelope.h"
cost_centre_dto_list_envelope_t* instantiate_cost_centre_dto_list_envelope(int include_optional);



cost_centre_dto_list_envelope_t* instantiate_cost_centre_dto_list_envelope(int include_optional) {
  cost_centre_dto_list_envelope_t* cost_centre_dto_list_envelope = NULL;
  if (include_optional) {
    cost_centre_dto_list_envelope = cost_centre_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    cost_centre_dto_list_envelope = cost_centre_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return cost_centre_dto_list_envelope;
}


#ifdef cost_centre_dto_list_envelope_MAIN

void test_cost_centre_dto_list_envelope(int include_optional) {
    cost_centre_dto_list_envelope_t* cost_centre_dto_list_envelope_1 = instantiate_cost_centre_dto_list_envelope(include_optional);

	cJSON* jsoncost_centre_dto_list_envelope_1 = cost_centre_dto_list_envelope_convertToJSON(cost_centre_dto_list_envelope_1);
	printf("cost_centre_dto_list_envelope :\n%s\n", cJSON_Print(jsoncost_centre_dto_list_envelope_1));
	cost_centre_dto_list_envelope_t* cost_centre_dto_list_envelope_2 = cost_centre_dto_list_envelope_parseFromJSON(jsoncost_centre_dto_list_envelope_1);
	cJSON* jsoncost_centre_dto_list_envelope_2 = cost_centre_dto_list_envelope_convertToJSON(cost_centre_dto_list_envelope_2);
	printf("repeating cost_centre_dto_list_envelope:\n%s\n", cJSON_Print(jsoncost_centre_dto_list_envelope_2));
}

int main() {
  test_cost_centre_dto_list_envelope(1);
  test_cost_centre_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // cost_centre_dto_list_envelope_MAIN
#endif // cost_centre_dto_list_envelope_TEST
