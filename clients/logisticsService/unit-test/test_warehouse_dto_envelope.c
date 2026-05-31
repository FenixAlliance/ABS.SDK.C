#ifndef warehouse_dto_envelope_TEST
#define warehouse_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warehouse_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warehouse_dto_envelope.h"
warehouse_dto_envelope_t* instantiate_warehouse_dto_envelope(int include_optional);

#include "test_warehouse_dto.c"


warehouse_dto_envelope_t* instantiate_warehouse_dto_envelope(int include_optional) {
  warehouse_dto_envelope_t* warehouse_dto_envelope = NULL;
  if (include_optional) {
    warehouse_dto_envelope = warehouse_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_warehouse_dto(0)
    );
  } else {
    warehouse_dto_envelope = warehouse_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return warehouse_dto_envelope;
}


#ifdef warehouse_dto_envelope_MAIN

void test_warehouse_dto_envelope(int include_optional) {
    warehouse_dto_envelope_t* warehouse_dto_envelope_1 = instantiate_warehouse_dto_envelope(include_optional);

	cJSON* jsonwarehouse_dto_envelope_1 = warehouse_dto_envelope_convertToJSON(warehouse_dto_envelope_1);
	printf("warehouse_dto_envelope :\n%s\n", cJSON_Print(jsonwarehouse_dto_envelope_1));
	warehouse_dto_envelope_t* warehouse_dto_envelope_2 = warehouse_dto_envelope_parseFromJSON(jsonwarehouse_dto_envelope_1);
	cJSON* jsonwarehouse_dto_envelope_2 = warehouse_dto_envelope_convertToJSON(warehouse_dto_envelope_2);
	printf("repeating warehouse_dto_envelope:\n%s\n", cJSON_Print(jsonwarehouse_dto_envelope_2));
}

int main() {
  test_warehouse_dto_envelope(1);
  test_warehouse_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // warehouse_dto_envelope_MAIN
#endif // warehouse_dto_envelope_TEST
