#ifndef count_dto_envelope_TEST
#define count_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define count_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/count_dto_envelope.h"
count_dto_envelope_t* instantiate_count_dto_envelope(int include_optional);

#include "test_count_dto.c"


count_dto_envelope_t* instantiate_count_dto_envelope(int include_optional) {
  count_dto_envelope_t* count_dto_envelope = NULL;
  if (include_optional) {
    count_dto_envelope = count_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_count_dto(0)
    );
  } else {
    count_dto_envelope = count_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return count_dto_envelope;
}


#ifdef count_dto_envelope_MAIN

void test_count_dto_envelope(int include_optional) {
    count_dto_envelope_t* count_dto_envelope_1 = instantiate_count_dto_envelope(include_optional);

	cJSON* jsoncount_dto_envelope_1 = count_dto_envelope_convertToJSON(count_dto_envelope_1);
	printf("count_dto_envelope :\n%s\n", cJSON_Print(jsoncount_dto_envelope_1));
	count_dto_envelope_t* count_dto_envelope_2 = count_dto_envelope_parseFromJSON(jsoncount_dto_envelope_1);
	cJSON* jsoncount_dto_envelope_2 = count_dto_envelope_convertToJSON(count_dto_envelope_2);
	printf("repeating count_dto_envelope:\n%s\n", cJSON_Print(jsoncount_dto_envelope_2));
}

int main() {
  test_count_dto_envelope(1);
  test_count_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // count_dto_envelope_MAIN
#endif // count_dto_envelope_TEST
