#ifndef marketing_lead_dto_TEST
#define marketing_lead_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_lead_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_lead_dto.h"
marketing_lead_dto_t* instantiate_marketing_lead_dto(int include_optional);



marketing_lead_dto_t* instantiate_marketing_lead_dto(int include_optional) {
  marketing_lead_dto_t* marketing_lead_dto = NULL;
  if (include_optional) {
    marketing_lead_dto = marketing_lead_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0"
    );
  } else {
    marketing_lead_dto = marketing_lead_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0"
    );
  }

  return marketing_lead_dto;
}


#ifdef marketing_lead_dto_MAIN

void test_marketing_lead_dto(int include_optional) {
    marketing_lead_dto_t* marketing_lead_dto_1 = instantiate_marketing_lead_dto(include_optional);

	cJSON* jsonmarketing_lead_dto_1 = marketing_lead_dto_convertToJSON(marketing_lead_dto_1);
	printf("marketing_lead_dto :\n%s\n", cJSON_Print(jsonmarketing_lead_dto_1));
	marketing_lead_dto_t* marketing_lead_dto_2 = marketing_lead_dto_parseFromJSON(jsonmarketing_lead_dto_1);
	cJSON* jsonmarketing_lead_dto_2 = marketing_lead_dto_convertToJSON(marketing_lead_dto_2);
	printf("repeating marketing_lead_dto:\n%s\n", cJSON_Print(jsonmarketing_lead_dto_2));
}

int main() {
  test_marketing_lead_dto(1);
  test_marketing_lead_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_lead_dto_MAIN
#endif // marketing_lead_dto_TEST
