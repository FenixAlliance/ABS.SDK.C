#ifndef applied_item_tax_record_dto_collection_query_parameters_TEST
#define applied_item_tax_record_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define applied_item_tax_record_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/applied_item_tax_record_dto_collection_query_parameters.h"
applied_item_tax_record_dto_collection_query_parameters_t* instantiate_applied_item_tax_record_dto_collection_query_parameters(int include_optional);



applied_item_tax_record_dto_collection_query_parameters_t* instantiate_applied_item_tax_record_dto_collection_query_parameters(int include_optional) {
  applied_item_tax_record_dto_collection_query_parameters_t* applied_item_tax_record_dto_collection_query_parameters = NULL;
  if (include_optional) {
    applied_item_tax_record_dto_collection_query_parameters = applied_item_tax_record_dto_collection_query_parameters_create(
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
    applied_item_tax_record_dto_collection_query_parameters = applied_item_tax_record_dto_collection_query_parameters_create(
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

  return applied_item_tax_record_dto_collection_query_parameters;
}


#ifdef applied_item_tax_record_dto_collection_query_parameters_MAIN

void test_applied_item_tax_record_dto_collection_query_parameters(int include_optional) {
    applied_item_tax_record_dto_collection_query_parameters_t* applied_item_tax_record_dto_collection_query_parameters_1 = instantiate_applied_item_tax_record_dto_collection_query_parameters(include_optional);

	cJSON* jsonapplied_item_tax_record_dto_collection_query_parameters_1 = applied_item_tax_record_dto_collection_query_parameters_convertToJSON(applied_item_tax_record_dto_collection_query_parameters_1);
	printf("applied_item_tax_record_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonapplied_item_tax_record_dto_collection_query_parameters_1));
	applied_item_tax_record_dto_collection_query_parameters_t* applied_item_tax_record_dto_collection_query_parameters_2 = applied_item_tax_record_dto_collection_query_parameters_parseFromJSON(jsonapplied_item_tax_record_dto_collection_query_parameters_1);
	cJSON* jsonapplied_item_tax_record_dto_collection_query_parameters_2 = applied_item_tax_record_dto_collection_query_parameters_convertToJSON(applied_item_tax_record_dto_collection_query_parameters_2);
	printf("repeating applied_item_tax_record_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonapplied_item_tax_record_dto_collection_query_parameters_2));
}

int main() {
  test_applied_item_tax_record_dto_collection_query_parameters(1);
  test_applied_item_tax_record_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // applied_item_tax_record_dto_collection_query_parameters_MAIN
#endif // applied_item_tax_record_dto_collection_query_parameters_TEST
