#ifndef catalog_item_dto_collection_query_parameters_TEST
#define catalog_item_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define catalog_item_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/catalog_item_dto_collection_query_parameters.h"
catalog_item_dto_collection_query_parameters_t* instantiate_catalog_item_dto_collection_query_parameters(int include_optional);



catalog_item_dto_collection_query_parameters_t* instantiate_catalog_item_dto_collection_query_parameters(int include_optional) {
  catalog_item_dto_collection_query_parameters_t* catalog_item_dto_collection_query_parameters = NULL;
  if (include_optional) {
    catalog_item_dto_collection_query_parameters = catalog_item_dto_collection_query_parameters_create(
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
    catalog_item_dto_collection_query_parameters = catalog_item_dto_collection_query_parameters_create(
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

  return catalog_item_dto_collection_query_parameters;
}


#ifdef catalog_item_dto_collection_query_parameters_MAIN

void test_catalog_item_dto_collection_query_parameters(int include_optional) {
    catalog_item_dto_collection_query_parameters_t* catalog_item_dto_collection_query_parameters_1 = instantiate_catalog_item_dto_collection_query_parameters(include_optional);

	cJSON* jsoncatalog_item_dto_collection_query_parameters_1 = catalog_item_dto_collection_query_parameters_convertToJSON(catalog_item_dto_collection_query_parameters_1);
	printf("catalog_item_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncatalog_item_dto_collection_query_parameters_1));
	catalog_item_dto_collection_query_parameters_t* catalog_item_dto_collection_query_parameters_2 = catalog_item_dto_collection_query_parameters_parseFromJSON(jsoncatalog_item_dto_collection_query_parameters_1);
	cJSON* jsoncatalog_item_dto_collection_query_parameters_2 = catalog_item_dto_collection_query_parameters_convertToJSON(catalog_item_dto_collection_query_parameters_2);
	printf("repeating catalog_item_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncatalog_item_dto_collection_query_parameters_2));
}

int main() {
  test_catalog_item_dto_collection_query_parameters(1);
  test_catalog_item_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // catalog_item_dto_collection_query_parameters_MAIN
#endif // catalog_item_dto_collection_query_parameters_TEST
