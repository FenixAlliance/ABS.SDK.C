#ifndef warehouse_dto_collection_query_parameters_TEST
#define warehouse_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warehouse_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warehouse_dto_collection_query_parameters.h"
warehouse_dto_collection_query_parameters_t* instantiate_warehouse_dto_collection_query_parameters(int include_optional);



warehouse_dto_collection_query_parameters_t* instantiate_warehouse_dto_collection_query_parameters(int include_optional) {
  warehouse_dto_collection_query_parameters_t* warehouse_dto_collection_query_parameters = NULL;
  if (include_optional) {
    warehouse_dto_collection_query_parameters = warehouse_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    warehouse_dto_collection_query_parameters = warehouse_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return warehouse_dto_collection_query_parameters;
}


#ifdef warehouse_dto_collection_query_parameters_MAIN

void test_warehouse_dto_collection_query_parameters(int include_optional) {
    warehouse_dto_collection_query_parameters_t* warehouse_dto_collection_query_parameters_1 = instantiate_warehouse_dto_collection_query_parameters(include_optional);

	cJSON* jsonwarehouse_dto_collection_query_parameters_1 = warehouse_dto_collection_query_parameters_convertToJSON(warehouse_dto_collection_query_parameters_1);
	printf("warehouse_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwarehouse_dto_collection_query_parameters_1));
	warehouse_dto_collection_query_parameters_t* warehouse_dto_collection_query_parameters_2 = warehouse_dto_collection_query_parameters_parseFromJSON(jsonwarehouse_dto_collection_query_parameters_1);
	cJSON* jsonwarehouse_dto_collection_query_parameters_2 = warehouse_dto_collection_query_parameters_convertToJSON(warehouse_dto_collection_query_parameters_2);
	printf("repeating warehouse_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwarehouse_dto_collection_query_parameters_2));
}

int main() {
  test_warehouse_dto_collection_query_parameters(1);
  test_warehouse_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // warehouse_dto_collection_query_parameters_MAIN
#endif // warehouse_dto_collection_query_parameters_TEST
