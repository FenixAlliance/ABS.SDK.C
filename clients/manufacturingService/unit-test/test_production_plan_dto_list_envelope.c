#ifndef production_plan_dto_list_envelope_TEST
#define production_plan_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define production_plan_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/production_plan_dto_list_envelope.h"
production_plan_dto_list_envelope_t* instantiate_production_plan_dto_list_envelope(int include_optional);



production_plan_dto_list_envelope_t* instantiate_production_plan_dto_list_envelope(int include_optional) {
  production_plan_dto_list_envelope_t* production_plan_dto_list_envelope = NULL;
  if (include_optional) {
    production_plan_dto_list_envelope = production_plan_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    production_plan_dto_list_envelope = production_plan_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return production_plan_dto_list_envelope;
}


#ifdef production_plan_dto_list_envelope_MAIN

void test_production_plan_dto_list_envelope(int include_optional) {
    production_plan_dto_list_envelope_t* production_plan_dto_list_envelope_1 = instantiate_production_plan_dto_list_envelope(include_optional);

	cJSON* jsonproduction_plan_dto_list_envelope_1 = production_plan_dto_list_envelope_convertToJSON(production_plan_dto_list_envelope_1);
	printf("production_plan_dto_list_envelope :\n%s\n", cJSON_Print(jsonproduction_plan_dto_list_envelope_1));
	production_plan_dto_list_envelope_t* production_plan_dto_list_envelope_2 = production_plan_dto_list_envelope_parseFromJSON(jsonproduction_plan_dto_list_envelope_1);
	cJSON* jsonproduction_plan_dto_list_envelope_2 = production_plan_dto_list_envelope_convertToJSON(production_plan_dto_list_envelope_2);
	printf("repeating production_plan_dto_list_envelope:\n%s\n", cJSON_Print(jsonproduction_plan_dto_list_envelope_2));
}

int main() {
  test_production_plan_dto_list_envelope(1);
  test_production_plan_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // production_plan_dto_list_envelope_MAIN
#endif // production_plan_dto_list_envelope_TEST
