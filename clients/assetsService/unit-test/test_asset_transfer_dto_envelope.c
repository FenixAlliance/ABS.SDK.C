#ifndef asset_transfer_dto_envelope_TEST
#define asset_transfer_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_transfer_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_transfer_dto_envelope.h"
asset_transfer_dto_envelope_t* instantiate_asset_transfer_dto_envelope(int include_optional);

#include "test_asset_transfer_dto.c"


asset_transfer_dto_envelope_t* instantiate_asset_transfer_dto_envelope(int include_optional) {
  asset_transfer_dto_envelope_t* asset_transfer_dto_envelope = NULL;
  if (include_optional) {
    asset_transfer_dto_envelope = asset_transfer_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_asset_transfer_dto(0)
    );
  } else {
    asset_transfer_dto_envelope = asset_transfer_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return asset_transfer_dto_envelope;
}


#ifdef asset_transfer_dto_envelope_MAIN

void test_asset_transfer_dto_envelope(int include_optional) {
    asset_transfer_dto_envelope_t* asset_transfer_dto_envelope_1 = instantiate_asset_transfer_dto_envelope(include_optional);

	cJSON* jsonasset_transfer_dto_envelope_1 = asset_transfer_dto_envelope_convertToJSON(asset_transfer_dto_envelope_1);
	printf("asset_transfer_dto_envelope :\n%s\n", cJSON_Print(jsonasset_transfer_dto_envelope_1));
	asset_transfer_dto_envelope_t* asset_transfer_dto_envelope_2 = asset_transfer_dto_envelope_parseFromJSON(jsonasset_transfer_dto_envelope_1);
	cJSON* jsonasset_transfer_dto_envelope_2 = asset_transfer_dto_envelope_convertToJSON(asset_transfer_dto_envelope_2);
	printf("repeating asset_transfer_dto_envelope:\n%s\n", cJSON_Print(jsonasset_transfer_dto_envelope_2));
}

int main() {
  test_asset_transfer_dto_envelope(1);
  test_asset_transfer_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_transfer_dto_envelope_MAIN
#endif // asset_transfer_dto_envelope_TEST
