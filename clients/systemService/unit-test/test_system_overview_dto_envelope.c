#ifndef system_overview_dto_envelope_TEST
#define system_overview_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define system_overview_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/system_overview_dto_envelope.h"
system_overview_dto_envelope_t* instantiate_system_overview_dto_envelope(int include_optional);

#include "test_system_overview_dto.c"


system_overview_dto_envelope_t* instantiate_system_overview_dto_envelope(int include_optional) {
  system_overview_dto_envelope_t* system_overview_dto_envelope = NULL;
  if (include_optional) {
    system_overview_dto_envelope = system_overview_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_system_overview_dto(0)
    );
  } else {
    system_overview_dto_envelope = system_overview_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return system_overview_dto_envelope;
}


#ifdef system_overview_dto_envelope_MAIN

void test_system_overview_dto_envelope(int include_optional) {
    system_overview_dto_envelope_t* system_overview_dto_envelope_1 = instantiate_system_overview_dto_envelope(include_optional);

	cJSON* jsonsystem_overview_dto_envelope_1 = system_overview_dto_envelope_convertToJSON(system_overview_dto_envelope_1);
	printf("system_overview_dto_envelope :\n%s\n", cJSON_Print(jsonsystem_overview_dto_envelope_1));
	system_overview_dto_envelope_t* system_overview_dto_envelope_2 = system_overview_dto_envelope_parseFromJSON(jsonsystem_overview_dto_envelope_1);
	cJSON* jsonsystem_overview_dto_envelope_2 = system_overview_dto_envelope_convertToJSON(system_overview_dto_envelope_2);
	printf("repeating system_overview_dto_envelope:\n%s\n", cJSON_Print(jsonsystem_overview_dto_envelope_2));
}

int main() {
  test_system_overview_dto_envelope(1);
  test_system_overview_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // system_overview_dto_envelope_MAIN
#endif // system_overview_dto_envelope_TEST
