#ifndef voyage_dto_envelope_TEST
#define voyage_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define voyage_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/voyage_dto_envelope.h"
voyage_dto_envelope_t* instantiate_voyage_dto_envelope(int include_optional);

#include "test_voyage_dto.c"


voyage_dto_envelope_t* instantiate_voyage_dto_envelope(int include_optional) {
  voyage_dto_envelope_t* voyage_dto_envelope = NULL;
  if (include_optional) {
    voyage_dto_envelope = voyage_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_voyage_dto(0)
    );
  } else {
    voyage_dto_envelope = voyage_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return voyage_dto_envelope;
}


#ifdef voyage_dto_envelope_MAIN

void test_voyage_dto_envelope(int include_optional) {
    voyage_dto_envelope_t* voyage_dto_envelope_1 = instantiate_voyage_dto_envelope(include_optional);

	cJSON* jsonvoyage_dto_envelope_1 = voyage_dto_envelope_convertToJSON(voyage_dto_envelope_1);
	printf("voyage_dto_envelope :\n%s\n", cJSON_Print(jsonvoyage_dto_envelope_1));
	voyage_dto_envelope_t* voyage_dto_envelope_2 = voyage_dto_envelope_parseFromJSON(jsonvoyage_dto_envelope_1);
	cJSON* jsonvoyage_dto_envelope_2 = voyage_dto_envelope_convertToJSON(voyage_dto_envelope_2);
	printf("repeating voyage_dto_envelope:\n%s\n", cJSON_Print(jsonvoyage_dto_envelope_2));
}

int main() {
  test_voyage_dto_envelope(1);
  test_voyage_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // voyage_dto_envelope_MAIN
#endif // voyage_dto_envelope_TEST
