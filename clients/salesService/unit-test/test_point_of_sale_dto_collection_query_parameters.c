#ifndef point_of_sale_dto_collection_query_parameters_TEST
#define point_of_sale_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define point_of_sale_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/point_of_sale_dto_collection_query_parameters.h"
point_of_sale_dto_collection_query_parameters_t* instantiate_point_of_sale_dto_collection_query_parameters(int include_optional);



point_of_sale_dto_collection_query_parameters_t* instantiate_point_of_sale_dto_collection_query_parameters(int include_optional) {
  point_of_sale_dto_collection_query_parameters_t* point_of_sale_dto_collection_query_parameters = NULL;
  if (include_optional) {
    point_of_sale_dto_collection_query_parameters = point_of_sale_dto_collection_query_parameters_create(
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
    point_of_sale_dto_collection_query_parameters = point_of_sale_dto_collection_query_parameters_create(
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

  return point_of_sale_dto_collection_query_parameters;
}


#ifdef point_of_sale_dto_collection_query_parameters_MAIN

void test_point_of_sale_dto_collection_query_parameters(int include_optional) {
    point_of_sale_dto_collection_query_parameters_t* point_of_sale_dto_collection_query_parameters_1 = instantiate_point_of_sale_dto_collection_query_parameters(include_optional);

	cJSON* jsonpoint_of_sale_dto_collection_query_parameters_1 = point_of_sale_dto_collection_query_parameters_convertToJSON(point_of_sale_dto_collection_query_parameters_1);
	printf("point_of_sale_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonpoint_of_sale_dto_collection_query_parameters_1));
	point_of_sale_dto_collection_query_parameters_t* point_of_sale_dto_collection_query_parameters_2 = point_of_sale_dto_collection_query_parameters_parseFromJSON(jsonpoint_of_sale_dto_collection_query_parameters_1);
	cJSON* jsonpoint_of_sale_dto_collection_query_parameters_2 = point_of_sale_dto_collection_query_parameters_convertToJSON(point_of_sale_dto_collection_query_parameters_2);
	printf("repeating point_of_sale_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonpoint_of_sale_dto_collection_query_parameters_2));
}

int main() {
  test_point_of_sale_dto_collection_query_parameters(1);
  test_point_of_sale_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // point_of_sale_dto_collection_query_parameters_MAIN
#endif // point_of_sale_dto_collection_query_parameters_TEST
