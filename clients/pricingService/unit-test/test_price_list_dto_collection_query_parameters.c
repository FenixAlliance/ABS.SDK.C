#ifndef price_list_dto_collection_query_parameters_TEST
#define price_list_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define price_list_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/price_list_dto_collection_query_parameters.h"
price_list_dto_collection_query_parameters_t* instantiate_price_list_dto_collection_query_parameters(int include_optional);



price_list_dto_collection_query_parameters_t* instantiate_price_list_dto_collection_query_parameters(int include_optional) {
  price_list_dto_collection_query_parameters_t* price_list_dto_collection_query_parameters = NULL;
  if (include_optional) {
    price_list_dto_collection_query_parameters = price_list_dto_collection_query_parameters_create(
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
    price_list_dto_collection_query_parameters = price_list_dto_collection_query_parameters_create(
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

  return price_list_dto_collection_query_parameters;
}


#ifdef price_list_dto_collection_query_parameters_MAIN

void test_price_list_dto_collection_query_parameters(int include_optional) {
    price_list_dto_collection_query_parameters_t* price_list_dto_collection_query_parameters_1 = instantiate_price_list_dto_collection_query_parameters(include_optional);

	cJSON* jsonprice_list_dto_collection_query_parameters_1 = price_list_dto_collection_query_parameters_convertToJSON(price_list_dto_collection_query_parameters_1);
	printf("price_list_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonprice_list_dto_collection_query_parameters_1));
	price_list_dto_collection_query_parameters_t* price_list_dto_collection_query_parameters_2 = price_list_dto_collection_query_parameters_parseFromJSON(jsonprice_list_dto_collection_query_parameters_1);
	cJSON* jsonprice_list_dto_collection_query_parameters_2 = price_list_dto_collection_query_parameters_convertToJSON(price_list_dto_collection_query_parameters_2);
	printf("repeating price_list_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonprice_list_dto_collection_query_parameters_2));
}

int main() {
  test_price_list_dto_collection_query_parameters(1);
  test_price_list_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // price_list_dto_collection_query_parameters_MAIN
#endif // price_list_dto_collection_query_parameters_TEST
