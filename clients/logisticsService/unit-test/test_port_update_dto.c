#ifndef port_update_dto_TEST
#define port_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define port_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/port_update_dto.h"
port_update_dto_t* instantiate_port_update_dto(int include_optional);



port_update_dto_t* instantiate_port_update_dto(int include_optional) {
  port_update_dto_t* port_update_dto = NULL;
  if (include_optional) {
    port_update_dto = port_update_dto_create(
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
    port_update_dto = port_update_dto_create(
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

  return port_update_dto;
}


#ifdef port_update_dto_MAIN

void test_port_update_dto(int include_optional) {
    port_update_dto_t* port_update_dto_1 = instantiate_port_update_dto(include_optional);

	cJSON* jsonport_update_dto_1 = port_update_dto_convertToJSON(port_update_dto_1);
	printf("port_update_dto :\n%s\n", cJSON_Print(jsonport_update_dto_1));
	port_update_dto_t* port_update_dto_2 = port_update_dto_parseFromJSON(jsonport_update_dto_1);
	cJSON* jsonport_update_dto_2 = port_update_dto_convertToJSON(port_update_dto_2);
	printf("repeating port_update_dto:\n%s\n", cJSON_Print(jsonport_update_dto_2));
}

int main() {
  test_port_update_dto(1);
  test_port_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // port_update_dto_MAIN
#endif // port_update_dto_TEST
