#ifndef port_dto_list_envelope_TEST
#define port_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define port_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/port_dto_list_envelope.h"
port_dto_list_envelope_t* instantiate_port_dto_list_envelope(int include_optional);



port_dto_list_envelope_t* instantiate_port_dto_list_envelope(int include_optional) {
  port_dto_list_envelope_t* port_dto_list_envelope = NULL;
  if (include_optional) {
    port_dto_list_envelope = port_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    port_dto_list_envelope = port_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return port_dto_list_envelope;
}


#ifdef port_dto_list_envelope_MAIN

void test_port_dto_list_envelope(int include_optional) {
    port_dto_list_envelope_t* port_dto_list_envelope_1 = instantiate_port_dto_list_envelope(include_optional);

	cJSON* jsonport_dto_list_envelope_1 = port_dto_list_envelope_convertToJSON(port_dto_list_envelope_1);
	printf("port_dto_list_envelope :\n%s\n", cJSON_Print(jsonport_dto_list_envelope_1));
	port_dto_list_envelope_t* port_dto_list_envelope_2 = port_dto_list_envelope_parseFromJSON(jsonport_dto_list_envelope_1);
	cJSON* jsonport_dto_list_envelope_2 = port_dto_list_envelope_convertToJSON(port_dto_list_envelope_2);
	printf("repeating port_dto_list_envelope:\n%s\n", cJSON_Print(jsonport_dto_list_envelope_2));
}

int main() {
  test_port_dto_list_envelope(1);
  test_port_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // port_dto_list_envelope_MAIN
#endif // port_dto_list_envelope_TEST
