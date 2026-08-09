#ifndef discount_list_dto_collection_query_parameters_TEST
#define discount_list_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discount_list_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discount_list_dto_collection_query_parameters.h"
discount_list_dto_collection_query_parameters_t* instantiate_discount_list_dto_collection_query_parameters(int include_optional);



discount_list_dto_collection_query_parameters_t* instantiate_discount_list_dto_collection_query_parameters(int include_optional) {
  discount_list_dto_collection_query_parameters_t* discount_list_dto_collection_query_parameters = NULL;
  if (include_optional) {
    discount_list_dto_collection_query_parameters = discount_list_dto_collection_query_parameters_create(
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
    discount_list_dto_collection_query_parameters = discount_list_dto_collection_query_parameters_create(
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

  return discount_list_dto_collection_query_parameters;
}


#ifdef discount_list_dto_collection_query_parameters_MAIN

void test_discount_list_dto_collection_query_parameters(int include_optional) {
    discount_list_dto_collection_query_parameters_t* discount_list_dto_collection_query_parameters_1 = instantiate_discount_list_dto_collection_query_parameters(include_optional);

	cJSON* jsondiscount_list_dto_collection_query_parameters_1 = discount_list_dto_collection_query_parameters_convertToJSON(discount_list_dto_collection_query_parameters_1);
	printf("discount_list_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsondiscount_list_dto_collection_query_parameters_1));
	discount_list_dto_collection_query_parameters_t* discount_list_dto_collection_query_parameters_2 = discount_list_dto_collection_query_parameters_parseFromJSON(jsondiscount_list_dto_collection_query_parameters_1);
	cJSON* jsondiscount_list_dto_collection_query_parameters_2 = discount_list_dto_collection_query_parameters_convertToJSON(discount_list_dto_collection_query_parameters_2);
	printf("repeating discount_list_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsondiscount_list_dto_collection_query_parameters_2));
}

int main() {
  test_discount_list_dto_collection_query_parameters(1);
  test_discount_list_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // discount_list_dto_collection_query_parameters_MAIN
#endif // discount_list_dto_collection_query_parameters_TEST
