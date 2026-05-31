#ifndef port_create_dto_TEST
#define port_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define port_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/port_create_dto.h"
port_create_dto_t* instantiate_port_create_dto(int include_optional);



port_create_dto_t* instantiate_port_create_dto(int include_optional) {
  port_create_dto_t* port_create_dto = NULL;
  if (include_optional) {
    port_create_dto = port_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  } else {
    port_create_dto = port_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  }

  return port_create_dto;
}


#ifdef port_create_dto_MAIN

void test_port_create_dto(int include_optional) {
    port_create_dto_t* port_create_dto_1 = instantiate_port_create_dto(include_optional);

	cJSON* jsonport_create_dto_1 = port_create_dto_convertToJSON(port_create_dto_1);
	printf("port_create_dto :\n%s\n", cJSON_Print(jsonport_create_dto_1));
	port_create_dto_t* port_create_dto_2 = port_create_dto_parseFromJSON(jsonport_create_dto_1);
	cJSON* jsonport_create_dto_2 = port_create_dto_convertToJSON(port_create_dto_2);
	printf("repeating port_create_dto:\n%s\n", cJSON_Print(jsonport_create_dto_2));
}

int main() {
  test_port_create_dto(1);
  test_port_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // port_create_dto_MAIN
#endif // port_create_dto_TEST
