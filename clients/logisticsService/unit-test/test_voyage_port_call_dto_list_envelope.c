#ifndef voyage_port_call_dto_list_envelope_TEST
#define voyage_port_call_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define voyage_port_call_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/voyage_port_call_dto_list_envelope.h"
voyage_port_call_dto_list_envelope_t* instantiate_voyage_port_call_dto_list_envelope(int include_optional);



voyage_port_call_dto_list_envelope_t* instantiate_voyage_port_call_dto_list_envelope(int include_optional) {
  voyage_port_call_dto_list_envelope_t* voyage_port_call_dto_list_envelope = NULL;
  if (include_optional) {
    voyage_port_call_dto_list_envelope = voyage_port_call_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    voyage_port_call_dto_list_envelope = voyage_port_call_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return voyage_port_call_dto_list_envelope;
}


#ifdef voyage_port_call_dto_list_envelope_MAIN

void test_voyage_port_call_dto_list_envelope(int include_optional) {
    voyage_port_call_dto_list_envelope_t* voyage_port_call_dto_list_envelope_1 = instantiate_voyage_port_call_dto_list_envelope(include_optional);

	cJSON* jsonvoyage_port_call_dto_list_envelope_1 = voyage_port_call_dto_list_envelope_convertToJSON(voyage_port_call_dto_list_envelope_1);
	printf("voyage_port_call_dto_list_envelope :\n%s\n", cJSON_Print(jsonvoyage_port_call_dto_list_envelope_1));
	voyage_port_call_dto_list_envelope_t* voyage_port_call_dto_list_envelope_2 = voyage_port_call_dto_list_envelope_parseFromJSON(jsonvoyage_port_call_dto_list_envelope_1);
	cJSON* jsonvoyage_port_call_dto_list_envelope_2 = voyage_port_call_dto_list_envelope_convertToJSON(voyage_port_call_dto_list_envelope_2);
	printf("repeating voyage_port_call_dto_list_envelope:\n%s\n", cJSON_Print(jsonvoyage_port_call_dto_list_envelope_2));
}

int main() {
  test_voyage_port_call_dto_list_envelope(1);
  test_voyage_port_call_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // voyage_port_call_dto_list_envelope_MAIN
#endif // voyage_port_call_dto_list_envelope_TEST
