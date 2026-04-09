#ifndef cost_centre_dto_TEST
#define cost_centre_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cost_centre_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cost_centre_dto.h"
cost_centre_dto_t* instantiate_cost_centre_dto(int include_optional);



cost_centre_dto_t* instantiate_cost_centre_dto(int include_optional) {
  cost_centre_dto_t* cost_centre_dto = NULL;
  if (include_optional) {
    cost_centre_dto = cost_centre_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0",
      accountingservice_cost_centre_dto_COSTCENTRETYPE_Service,
      "0",
      "0",
      "0"
    );
  } else {
    cost_centre_dto = cost_centre_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0",
      accountingservice_cost_centre_dto_COSTCENTRETYPE_Service,
      "0",
      "0",
      "0"
    );
  }

  return cost_centre_dto;
}


#ifdef cost_centre_dto_MAIN

void test_cost_centre_dto(int include_optional) {
    cost_centre_dto_t* cost_centre_dto_1 = instantiate_cost_centre_dto(include_optional);

	cJSON* jsoncost_centre_dto_1 = cost_centre_dto_convertToJSON(cost_centre_dto_1);
	printf("cost_centre_dto :\n%s\n", cJSON_Print(jsoncost_centre_dto_1));
	cost_centre_dto_t* cost_centre_dto_2 = cost_centre_dto_parseFromJSON(jsoncost_centre_dto_1);
	cJSON* jsoncost_centre_dto_2 = cost_centre_dto_convertToJSON(cost_centre_dto_2);
	printf("repeating cost_centre_dto:\n%s\n", cJSON_Print(jsoncost_centre_dto_2));
}

int main() {
  test_cost_centre_dto(1);
  test_cost_centre_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // cost_centre_dto_MAIN
#endif // cost_centre_dto_TEST
