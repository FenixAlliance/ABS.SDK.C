#ifndef supplier_profile_dto_collection_query_parameters_TEST
#define supplier_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplier_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplier_profile_dto_collection_query_parameters.h"
supplier_profile_dto_collection_query_parameters_t* instantiate_supplier_profile_dto_collection_query_parameters(int include_optional);



supplier_profile_dto_collection_query_parameters_t* instantiate_supplier_profile_dto_collection_query_parameters(int include_optional) {
  supplier_profile_dto_collection_query_parameters_t* supplier_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    supplier_profile_dto_collection_query_parameters = supplier_profile_dto_collection_query_parameters_create(
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
    supplier_profile_dto_collection_query_parameters = supplier_profile_dto_collection_query_parameters_create(
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

  return supplier_profile_dto_collection_query_parameters;
}


#ifdef supplier_profile_dto_collection_query_parameters_MAIN

void test_supplier_profile_dto_collection_query_parameters(int include_optional) {
    supplier_profile_dto_collection_query_parameters_t* supplier_profile_dto_collection_query_parameters_1 = instantiate_supplier_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsonsupplier_profile_dto_collection_query_parameters_1 = supplier_profile_dto_collection_query_parameters_convertToJSON(supplier_profile_dto_collection_query_parameters_1);
	printf("supplier_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsupplier_profile_dto_collection_query_parameters_1));
	supplier_profile_dto_collection_query_parameters_t* supplier_profile_dto_collection_query_parameters_2 = supplier_profile_dto_collection_query_parameters_parseFromJSON(jsonsupplier_profile_dto_collection_query_parameters_1);
	cJSON* jsonsupplier_profile_dto_collection_query_parameters_2 = supplier_profile_dto_collection_query_parameters_convertToJSON(supplier_profile_dto_collection_query_parameters_2);
	printf("repeating supplier_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsupplier_profile_dto_collection_query_parameters_2));
}

int main() {
  test_supplier_profile_dto_collection_query_parameters(1);
  test_supplier_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplier_profile_dto_collection_query_parameters_MAIN
#endif // supplier_profile_dto_collection_query_parameters_TEST
