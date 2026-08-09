#ifndef asset_depreciation_record_dto_collection_query_parameters_TEST
#define asset_depreciation_record_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_depreciation_record_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_depreciation_record_dto_collection_query_parameters.h"
asset_depreciation_record_dto_collection_query_parameters_t* instantiate_asset_depreciation_record_dto_collection_query_parameters(int include_optional);



asset_depreciation_record_dto_collection_query_parameters_t* instantiate_asset_depreciation_record_dto_collection_query_parameters(int include_optional) {
  asset_depreciation_record_dto_collection_query_parameters_t* asset_depreciation_record_dto_collection_query_parameters = NULL;
  if (include_optional) {
    asset_depreciation_record_dto_collection_query_parameters = asset_depreciation_record_dto_collection_query_parameters_create(
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
    asset_depreciation_record_dto_collection_query_parameters = asset_depreciation_record_dto_collection_query_parameters_create(
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

  return asset_depreciation_record_dto_collection_query_parameters;
}


#ifdef asset_depreciation_record_dto_collection_query_parameters_MAIN

void test_asset_depreciation_record_dto_collection_query_parameters(int include_optional) {
    asset_depreciation_record_dto_collection_query_parameters_t* asset_depreciation_record_dto_collection_query_parameters_1 = instantiate_asset_depreciation_record_dto_collection_query_parameters(include_optional);

	cJSON* jsonasset_depreciation_record_dto_collection_query_parameters_1 = asset_depreciation_record_dto_collection_query_parameters_convertToJSON(asset_depreciation_record_dto_collection_query_parameters_1);
	printf("asset_depreciation_record_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonasset_depreciation_record_dto_collection_query_parameters_1));
	asset_depreciation_record_dto_collection_query_parameters_t* asset_depreciation_record_dto_collection_query_parameters_2 = asset_depreciation_record_dto_collection_query_parameters_parseFromJSON(jsonasset_depreciation_record_dto_collection_query_parameters_1);
	cJSON* jsonasset_depreciation_record_dto_collection_query_parameters_2 = asset_depreciation_record_dto_collection_query_parameters_convertToJSON(asset_depreciation_record_dto_collection_query_parameters_2);
	printf("repeating asset_depreciation_record_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonasset_depreciation_record_dto_collection_query_parameters_2));
}

int main() {
  test_asset_depreciation_record_dto_collection_query_parameters(1);
  test_asset_depreciation_record_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_depreciation_record_dto_collection_query_parameters_MAIN
#endif // asset_depreciation_record_dto_collection_query_parameters_TEST
