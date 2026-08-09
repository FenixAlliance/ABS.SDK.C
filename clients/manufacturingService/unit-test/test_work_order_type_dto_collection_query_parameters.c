#ifndef work_order_type_dto_collection_query_parameters_TEST
#define work_order_type_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define work_order_type_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/work_order_type_dto_collection_query_parameters.h"
work_order_type_dto_collection_query_parameters_t* instantiate_work_order_type_dto_collection_query_parameters(int include_optional);



work_order_type_dto_collection_query_parameters_t* instantiate_work_order_type_dto_collection_query_parameters(int include_optional) {
  work_order_type_dto_collection_query_parameters_t* work_order_type_dto_collection_query_parameters = NULL;
  if (include_optional) {
    work_order_type_dto_collection_query_parameters = work_order_type_dto_collection_query_parameters_create(
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
    work_order_type_dto_collection_query_parameters = work_order_type_dto_collection_query_parameters_create(
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

  return work_order_type_dto_collection_query_parameters;
}


#ifdef work_order_type_dto_collection_query_parameters_MAIN

void test_work_order_type_dto_collection_query_parameters(int include_optional) {
    work_order_type_dto_collection_query_parameters_t* work_order_type_dto_collection_query_parameters_1 = instantiate_work_order_type_dto_collection_query_parameters(include_optional);

	cJSON* jsonwork_order_type_dto_collection_query_parameters_1 = work_order_type_dto_collection_query_parameters_convertToJSON(work_order_type_dto_collection_query_parameters_1);
	printf("work_order_type_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwork_order_type_dto_collection_query_parameters_1));
	work_order_type_dto_collection_query_parameters_t* work_order_type_dto_collection_query_parameters_2 = work_order_type_dto_collection_query_parameters_parseFromJSON(jsonwork_order_type_dto_collection_query_parameters_1);
	cJSON* jsonwork_order_type_dto_collection_query_parameters_2 = work_order_type_dto_collection_query_parameters_convertToJSON(work_order_type_dto_collection_query_parameters_2);
	printf("repeating work_order_type_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwork_order_type_dto_collection_query_parameters_2));
}

int main() {
  test_work_order_type_dto_collection_query_parameters(1);
  test_work_order_type_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // work_order_type_dto_collection_query_parameters_MAIN
#endif // work_order_type_dto_collection_query_parameters_TEST
