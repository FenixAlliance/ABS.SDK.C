#ifndef grant_dto_envelope_TEST
#define grant_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define grant_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/grant_dto_envelope.h"
grant_dto_envelope_t* instantiate_grant_dto_envelope(int include_optional);

#include "test_grant_dto.c"


grant_dto_envelope_t* instantiate_grant_dto_envelope(int include_optional) {
  grant_dto_envelope_t* grant_dto_envelope = NULL;
  if (include_optional) {
    grant_dto_envelope = grant_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_grant_dto(0)
    );
  } else {
    grant_dto_envelope = grant_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return grant_dto_envelope;
}


#ifdef grant_dto_envelope_MAIN

void test_grant_dto_envelope(int include_optional) {
    grant_dto_envelope_t* grant_dto_envelope_1 = instantiate_grant_dto_envelope(include_optional);

	cJSON* jsongrant_dto_envelope_1 = grant_dto_envelope_convertToJSON(grant_dto_envelope_1);
	printf("grant_dto_envelope :\n%s\n", cJSON_Print(jsongrant_dto_envelope_1));
	grant_dto_envelope_t* grant_dto_envelope_2 = grant_dto_envelope_parseFromJSON(jsongrant_dto_envelope_1);
	cJSON* jsongrant_dto_envelope_2 = grant_dto_envelope_convertToJSON(grant_dto_envelope_2);
	printf("repeating grant_dto_envelope:\n%s\n", cJSON_Print(jsongrant_dto_envelope_2));
}

int main() {
  test_grant_dto_envelope(1);
  test_grant_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // grant_dto_envelope_MAIN
#endif // grant_dto_envelope_TEST
