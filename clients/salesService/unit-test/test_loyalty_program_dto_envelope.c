#ifndef loyalty_program_dto_envelope_TEST
#define loyalty_program_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loyalty_program_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loyalty_program_dto_envelope.h"
loyalty_program_dto_envelope_t* instantiate_loyalty_program_dto_envelope(int include_optional);

#include "test_loyalty_program_dto.c"


loyalty_program_dto_envelope_t* instantiate_loyalty_program_dto_envelope(int include_optional) {
  loyalty_program_dto_envelope_t* loyalty_program_dto_envelope = NULL;
  if (include_optional) {
    loyalty_program_dto_envelope = loyalty_program_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_loyalty_program_dto(0)
    );
  } else {
    loyalty_program_dto_envelope = loyalty_program_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return loyalty_program_dto_envelope;
}


#ifdef loyalty_program_dto_envelope_MAIN

void test_loyalty_program_dto_envelope(int include_optional) {
    loyalty_program_dto_envelope_t* loyalty_program_dto_envelope_1 = instantiate_loyalty_program_dto_envelope(include_optional);

	cJSON* jsonloyalty_program_dto_envelope_1 = loyalty_program_dto_envelope_convertToJSON(loyalty_program_dto_envelope_1);
	printf("loyalty_program_dto_envelope :\n%s\n", cJSON_Print(jsonloyalty_program_dto_envelope_1));
	loyalty_program_dto_envelope_t* loyalty_program_dto_envelope_2 = loyalty_program_dto_envelope_parseFromJSON(jsonloyalty_program_dto_envelope_1);
	cJSON* jsonloyalty_program_dto_envelope_2 = loyalty_program_dto_envelope_convertToJSON(loyalty_program_dto_envelope_2);
	printf("repeating loyalty_program_dto_envelope:\n%s\n", cJSON_Print(jsonloyalty_program_dto_envelope_2));
}

int main() {
  test_loyalty_program_dto_envelope(1);
  test_loyalty_program_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // loyalty_program_dto_envelope_MAIN
#endif // loyalty_program_dto_envelope_TEST
