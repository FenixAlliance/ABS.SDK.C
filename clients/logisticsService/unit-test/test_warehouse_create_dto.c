#ifndef warehouse_create_dto_TEST
#define warehouse_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warehouse_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warehouse_create_dto.h"
warehouse_create_dto_t* instantiate_warehouse_create_dto(int include_optional);



warehouse_create_dto_t* instantiate_warehouse_create_dto(int include_optional) {
  warehouse_create_dto_t* warehouse_create_dto = NULL;
  if (include_optional) {
    warehouse_create_dto = warehouse_create_dto_create(
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
      1,
      "0",
      "0"
    );
  } else {
    warehouse_create_dto = warehouse_create_dto_create(
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
      1,
      "0",
      "0"
    );
  }

  return warehouse_create_dto;
}


#ifdef warehouse_create_dto_MAIN

void test_warehouse_create_dto(int include_optional) {
    warehouse_create_dto_t* warehouse_create_dto_1 = instantiate_warehouse_create_dto(include_optional);

	cJSON* jsonwarehouse_create_dto_1 = warehouse_create_dto_convertToJSON(warehouse_create_dto_1);
	printf("warehouse_create_dto :\n%s\n", cJSON_Print(jsonwarehouse_create_dto_1));
	warehouse_create_dto_t* warehouse_create_dto_2 = warehouse_create_dto_parseFromJSON(jsonwarehouse_create_dto_1);
	cJSON* jsonwarehouse_create_dto_2 = warehouse_create_dto_convertToJSON(warehouse_create_dto_2);
	printf("repeating warehouse_create_dto:\n%s\n", cJSON_Print(jsonwarehouse_create_dto_2));
}

int main() {
  test_warehouse_create_dto(1);
  test_warehouse_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // warehouse_create_dto_MAIN
#endif // warehouse_create_dto_TEST
