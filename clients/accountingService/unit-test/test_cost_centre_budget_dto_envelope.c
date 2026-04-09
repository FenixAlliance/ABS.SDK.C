#ifndef cost_centre_budget_dto_envelope_TEST
#define cost_centre_budget_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cost_centre_budget_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cost_centre_budget_dto_envelope.h"
cost_centre_budget_dto_envelope_t* instantiate_cost_centre_budget_dto_envelope(int include_optional);

#include "test_cost_centre_budget_dto.c"


cost_centre_budget_dto_envelope_t* instantiate_cost_centre_budget_dto_envelope(int include_optional) {
  cost_centre_budget_dto_envelope_t* cost_centre_budget_dto_envelope = NULL;
  if (include_optional) {
    cost_centre_budget_dto_envelope = cost_centre_budget_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_cost_centre_budget_dto(0)
    );
  } else {
    cost_centre_budget_dto_envelope = cost_centre_budget_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return cost_centre_budget_dto_envelope;
}


#ifdef cost_centre_budget_dto_envelope_MAIN

void test_cost_centre_budget_dto_envelope(int include_optional) {
    cost_centre_budget_dto_envelope_t* cost_centre_budget_dto_envelope_1 = instantiate_cost_centre_budget_dto_envelope(include_optional);

	cJSON* jsoncost_centre_budget_dto_envelope_1 = cost_centre_budget_dto_envelope_convertToJSON(cost_centre_budget_dto_envelope_1);
	printf("cost_centre_budget_dto_envelope :\n%s\n", cJSON_Print(jsoncost_centre_budget_dto_envelope_1));
	cost_centre_budget_dto_envelope_t* cost_centre_budget_dto_envelope_2 = cost_centre_budget_dto_envelope_parseFromJSON(jsoncost_centre_budget_dto_envelope_1);
	cJSON* jsoncost_centre_budget_dto_envelope_2 = cost_centre_budget_dto_envelope_convertToJSON(cost_centre_budget_dto_envelope_2);
	printf("repeating cost_centre_budget_dto_envelope:\n%s\n", cJSON_Print(jsoncost_centre_budget_dto_envelope_2));
}

int main() {
  test_cost_centre_budget_dto_envelope(1);
  test_cost_centre_budget_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // cost_centre_budget_dto_envelope_MAIN
#endif // cost_centre_budget_dto_envelope_TEST
