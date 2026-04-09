#ifndef marketing_campaign_dto_envelope_TEST
#define marketing_campaign_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_campaign_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_campaign_dto_envelope.h"
marketing_campaign_dto_envelope_t* instantiate_marketing_campaign_dto_envelope(int include_optional);

#include "test_marketing_campaign_dto.c"


marketing_campaign_dto_envelope_t* instantiate_marketing_campaign_dto_envelope(int include_optional) {
  marketing_campaign_dto_envelope_t* marketing_campaign_dto_envelope = NULL;
  if (include_optional) {
    marketing_campaign_dto_envelope = marketing_campaign_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_marketing_campaign_dto(0)
    );
  } else {
    marketing_campaign_dto_envelope = marketing_campaign_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return marketing_campaign_dto_envelope;
}


#ifdef marketing_campaign_dto_envelope_MAIN

void test_marketing_campaign_dto_envelope(int include_optional) {
    marketing_campaign_dto_envelope_t* marketing_campaign_dto_envelope_1 = instantiate_marketing_campaign_dto_envelope(include_optional);

	cJSON* jsonmarketing_campaign_dto_envelope_1 = marketing_campaign_dto_envelope_convertToJSON(marketing_campaign_dto_envelope_1);
	printf("marketing_campaign_dto_envelope :\n%s\n", cJSON_Print(jsonmarketing_campaign_dto_envelope_1));
	marketing_campaign_dto_envelope_t* marketing_campaign_dto_envelope_2 = marketing_campaign_dto_envelope_parseFromJSON(jsonmarketing_campaign_dto_envelope_1);
	cJSON* jsonmarketing_campaign_dto_envelope_2 = marketing_campaign_dto_envelope_convertToJSON(marketing_campaign_dto_envelope_2);
	printf("repeating marketing_campaign_dto_envelope:\n%s\n", cJSON_Print(jsonmarketing_campaign_dto_envelope_2));
}

int main() {
  test_marketing_campaign_dto_envelope(1);
  test_marketing_campaign_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_campaign_dto_envelope_MAIN
#endif // marketing_campaign_dto_envelope_TEST
