#ifndef ai_provider_dto_list_envelope_TEST
#define ai_provider_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ai_provider_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ai_provider_dto_list_envelope.h"
ai_provider_dto_list_envelope_t* instantiate_ai_provider_dto_list_envelope(int include_optional);



ai_provider_dto_list_envelope_t* instantiate_ai_provider_dto_list_envelope(int include_optional) {
  ai_provider_dto_list_envelope_t* ai_provider_dto_list_envelope = NULL;
  if (include_optional) {
    ai_provider_dto_list_envelope = ai_provider_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  } else {
    ai_provider_dto_list_envelope = ai_provider_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  }

  return ai_provider_dto_list_envelope;
}


#ifdef ai_provider_dto_list_envelope_MAIN

void test_ai_provider_dto_list_envelope(int include_optional) {
    ai_provider_dto_list_envelope_t* ai_provider_dto_list_envelope_1 = instantiate_ai_provider_dto_list_envelope(include_optional);

	cJSON* jsonai_provider_dto_list_envelope_1 = ai_provider_dto_list_envelope_convertToJSON(ai_provider_dto_list_envelope_1);
	printf("ai_provider_dto_list_envelope :\n%s\n", cJSON_Print(jsonai_provider_dto_list_envelope_1));
	ai_provider_dto_list_envelope_t* ai_provider_dto_list_envelope_2 = ai_provider_dto_list_envelope_parseFromJSON(jsonai_provider_dto_list_envelope_1);
	cJSON* jsonai_provider_dto_list_envelope_2 = ai_provider_dto_list_envelope_convertToJSON(ai_provider_dto_list_envelope_2);
	printf("repeating ai_provider_dto_list_envelope:\n%s\n", cJSON_Print(jsonai_provider_dto_list_envelope_2));
}

int main() {
  test_ai_provider_dto_list_envelope(1);
  test_ai_provider_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // ai_provider_dto_list_envelope_MAIN
#endif // ai_provider_dto_list_envelope_TEST
