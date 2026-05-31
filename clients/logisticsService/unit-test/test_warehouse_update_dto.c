#ifndef warehouse_update_dto_TEST
#define warehouse_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warehouse_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warehouse_update_dto.h"
warehouse_update_dto_t* instantiate_warehouse_update_dto(int include_optional);



warehouse_update_dto_t* instantiate_warehouse_update_dto(int include_optional) {
  warehouse_update_dto_t* warehouse_update_dto = NULL;
  if (include_optional) {
    warehouse_update_dto = warehouse_update_dto_create(
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
    warehouse_update_dto = warehouse_update_dto_create(
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

  return warehouse_update_dto;
}


#ifdef warehouse_update_dto_MAIN

void test_warehouse_update_dto(int include_optional) {
    warehouse_update_dto_t* warehouse_update_dto_1 = instantiate_warehouse_update_dto(include_optional);

	cJSON* jsonwarehouse_update_dto_1 = warehouse_update_dto_convertToJSON(warehouse_update_dto_1);
	printf("warehouse_update_dto :\n%s\n", cJSON_Print(jsonwarehouse_update_dto_1));
	warehouse_update_dto_t* warehouse_update_dto_2 = warehouse_update_dto_parseFromJSON(jsonwarehouse_update_dto_1);
	cJSON* jsonwarehouse_update_dto_2 = warehouse_update_dto_convertToJSON(warehouse_update_dto_2);
	printf("repeating warehouse_update_dto:\n%s\n", cJSON_Print(jsonwarehouse_update_dto_2));
}

int main() {
  test_warehouse_update_dto(1);
  test_warehouse_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // warehouse_update_dto_MAIN
#endif // warehouse_update_dto_TEST
