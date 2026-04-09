#ifndef asset_type_dto_TEST
#define asset_type_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_type_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_type_dto.h"
asset_type_dto_t* instantiate_asset_type_dto(int include_optional);



asset_type_dto_t* instantiate_asset_type_dto(int include_optional) {
  asset_type_dto_t* asset_type_dto = NULL;
  if (include_optional) {
    asset_type_dto = asset_type_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    asset_type_dto = asset_type_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return asset_type_dto;
}


#ifdef asset_type_dto_MAIN

void test_asset_type_dto(int include_optional) {
    asset_type_dto_t* asset_type_dto_1 = instantiate_asset_type_dto(include_optional);

	cJSON* jsonasset_type_dto_1 = asset_type_dto_convertToJSON(asset_type_dto_1);
	printf("asset_type_dto :\n%s\n", cJSON_Print(jsonasset_type_dto_1));
	asset_type_dto_t* asset_type_dto_2 = asset_type_dto_parseFromJSON(jsonasset_type_dto_1);
	cJSON* jsonasset_type_dto_2 = asset_type_dto_convertToJSON(asset_type_dto_2);
	printf("repeating asset_type_dto:\n%s\n", cJSON_Print(jsonasset_type_dto_2));
}

int main() {
  test_asset_type_dto(1);
  test_asset_type_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_type_dto_MAIN
#endif // asset_type_dto_TEST
