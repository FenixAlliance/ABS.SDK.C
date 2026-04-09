#ifndef asset_transfer_create_dto_TEST
#define asset_transfer_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_transfer_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_transfer_create_dto.h"
asset_transfer_create_dto_t* instantiate_asset_transfer_create_dto(int include_optional);



asset_transfer_create_dto_t* instantiate_asset_transfer_create_dto(int include_optional) {
  asset_transfer_create_dto_t* asset_transfer_create_dto = NULL;
  if (include_optional) {
    asset_transfer_create_dto = asset_transfer_create_dto_create(
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    asset_transfer_create_dto = asset_transfer_create_dto_create(
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return asset_transfer_create_dto;
}


#ifdef asset_transfer_create_dto_MAIN

void test_asset_transfer_create_dto(int include_optional) {
    asset_transfer_create_dto_t* asset_transfer_create_dto_1 = instantiate_asset_transfer_create_dto(include_optional);

	cJSON* jsonasset_transfer_create_dto_1 = asset_transfer_create_dto_convertToJSON(asset_transfer_create_dto_1);
	printf("asset_transfer_create_dto :\n%s\n", cJSON_Print(jsonasset_transfer_create_dto_1));
	asset_transfer_create_dto_t* asset_transfer_create_dto_2 = asset_transfer_create_dto_parseFromJSON(jsonasset_transfer_create_dto_1);
	cJSON* jsonasset_transfer_create_dto_2 = asset_transfer_create_dto_convertToJSON(asset_transfer_create_dto_2);
	printf("repeating asset_transfer_create_dto:\n%s\n", cJSON_Print(jsonasset_transfer_create_dto_2));
}

int main() {
  test_asset_transfer_create_dto(1);
  test_asset_transfer_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_transfer_create_dto_MAIN
#endif // asset_transfer_create_dto_TEST
