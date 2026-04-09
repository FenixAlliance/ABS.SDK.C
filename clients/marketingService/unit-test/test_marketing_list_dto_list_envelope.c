#ifndef marketing_list_dto_list_envelope_TEST
#define marketing_list_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_list_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_list_dto_list_envelope.h"
marketing_list_dto_list_envelope_t* instantiate_marketing_list_dto_list_envelope(int include_optional);



marketing_list_dto_list_envelope_t* instantiate_marketing_list_dto_list_envelope(int include_optional) {
  marketing_list_dto_list_envelope_t* marketing_list_dto_list_envelope = NULL;
  if (include_optional) {
    marketing_list_dto_list_envelope = marketing_list_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    marketing_list_dto_list_envelope = marketing_list_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return marketing_list_dto_list_envelope;
}


#ifdef marketing_list_dto_list_envelope_MAIN

void test_marketing_list_dto_list_envelope(int include_optional) {
    marketing_list_dto_list_envelope_t* marketing_list_dto_list_envelope_1 = instantiate_marketing_list_dto_list_envelope(include_optional);

	cJSON* jsonmarketing_list_dto_list_envelope_1 = marketing_list_dto_list_envelope_convertToJSON(marketing_list_dto_list_envelope_1);
	printf("marketing_list_dto_list_envelope :\n%s\n", cJSON_Print(jsonmarketing_list_dto_list_envelope_1));
	marketing_list_dto_list_envelope_t* marketing_list_dto_list_envelope_2 = marketing_list_dto_list_envelope_parseFromJSON(jsonmarketing_list_dto_list_envelope_1);
	cJSON* jsonmarketing_list_dto_list_envelope_2 = marketing_list_dto_list_envelope_convertToJSON(marketing_list_dto_list_envelope_2);
	printf("repeating marketing_list_dto_list_envelope:\n%s\n", cJSON_Print(jsonmarketing_list_dto_list_envelope_2));
}

int main() {
  test_marketing_list_dto_list_envelope(1);
  test_marketing_list_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_list_dto_list_envelope_MAIN
#endif // marketing_list_dto_list_envelope_TEST
