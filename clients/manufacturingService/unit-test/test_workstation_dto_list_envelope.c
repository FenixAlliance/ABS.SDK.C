#ifndef workstation_dto_list_envelope_TEST
#define workstation_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define workstation_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/workstation_dto_list_envelope.h"
workstation_dto_list_envelope_t* instantiate_workstation_dto_list_envelope(int include_optional);



workstation_dto_list_envelope_t* instantiate_workstation_dto_list_envelope(int include_optional) {
  workstation_dto_list_envelope_t* workstation_dto_list_envelope = NULL;
  if (include_optional) {
    workstation_dto_list_envelope = workstation_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    workstation_dto_list_envelope = workstation_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return workstation_dto_list_envelope;
}


#ifdef workstation_dto_list_envelope_MAIN

void test_workstation_dto_list_envelope(int include_optional) {
    workstation_dto_list_envelope_t* workstation_dto_list_envelope_1 = instantiate_workstation_dto_list_envelope(include_optional);

	cJSON* jsonworkstation_dto_list_envelope_1 = workstation_dto_list_envelope_convertToJSON(workstation_dto_list_envelope_1);
	printf("workstation_dto_list_envelope :\n%s\n", cJSON_Print(jsonworkstation_dto_list_envelope_1));
	workstation_dto_list_envelope_t* workstation_dto_list_envelope_2 = workstation_dto_list_envelope_parseFromJSON(jsonworkstation_dto_list_envelope_1);
	cJSON* jsonworkstation_dto_list_envelope_2 = workstation_dto_list_envelope_convertToJSON(workstation_dto_list_envelope_2);
	printf("repeating workstation_dto_list_envelope:\n%s\n", cJSON_Print(jsonworkstation_dto_list_envelope_2));
}

int main() {
  test_workstation_dto_list_envelope(1);
  test_workstation_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // workstation_dto_list_envelope_MAIN
#endif // workstation_dto_list_envelope_TEST
