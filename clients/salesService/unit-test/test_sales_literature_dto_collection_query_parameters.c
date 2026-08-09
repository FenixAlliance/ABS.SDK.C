#ifndef sales_literature_dto_collection_query_parameters_TEST
#define sales_literature_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sales_literature_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sales_literature_dto_collection_query_parameters.h"
sales_literature_dto_collection_query_parameters_t* instantiate_sales_literature_dto_collection_query_parameters(int include_optional);



sales_literature_dto_collection_query_parameters_t* instantiate_sales_literature_dto_collection_query_parameters(int include_optional) {
  sales_literature_dto_collection_query_parameters_t* sales_literature_dto_collection_query_parameters = NULL;
  if (include_optional) {
    sales_literature_dto_collection_query_parameters = sales_literature_dto_collection_query_parameters_create(
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
    sales_literature_dto_collection_query_parameters = sales_literature_dto_collection_query_parameters_create(
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

  return sales_literature_dto_collection_query_parameters;
}


#ifdef sales_literature_dto_collection_query_parameters_MAIN

void test_sales_literature_dto_collection_query_parameters(int include_optional) {
    sales_literature_dto_collection_query_parameters_t* sales_literature_dto_collection_query_parameters_1 = instantiate_sales_literature_dto_collection_query_parameters(include_optional);

	cJSON* jsonsales_literature_dto_collection_query_parameters_1 = sales_literature_dto_collection_query_parameters_convertToJSON(sales_literature_dto_collection_query_parameters_1);
	printf("sales_literature_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsales_literature_dto_collection_query_parameters_1));
	sales_literature_dto_collection_query_parameters_t* sales_literature_dto_collection_query_parameters_2 = sales_literature_dto_collection_query_parameters_parseFromJSON(jsonsales_literature_dto_collection_query_parameters_1);
	cJSON* jsonsales_literature_dto_collection_query_parameters_2 = sales_literature_dto_collection_query_parameters_convertToJSON(sales_literature_dto_collection_query_parameters_2);
	printf("repeating sales_literature_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsales_literature_dto_collection_query_parameters_2));
}

int main() {
  test_sales_literature_dto_collection_query_parameters(1);
  test_sales_literature_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // sales_literature_dto_collection_query_parameters_MAIN
#endif // sales_literature_dto_collection_query_parameters_TEST
