#ifndef asset_dto_list_envelope_TEST
#define asset_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_dto_list_envelope.h"
asset_dto_list_envelope_t* instantiate_asset_dto_list_envelope(int include_optional);



asset_dto_list_envelope_t* instantiate_asset_dto_list_envelope(int include_optional) {
  asset_dto_list_envelope_t* asset_dto_list_envelope = NULL;
  if (include_optional) {
    asset_dto_list_envelope = asset_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    asset_dto_list_envelope = asset_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return asset_dto_list_envelope;
}


#ifdef asset_dto_list_envelope_MAIN

void test_asset_dto_list_envelope(int include_optional) {
    asset_dto_list_envelope_t* asset_dto_list_envelope_1 = instantiate_asset_dto_list_envelope(include_optional);

	cJSON* jsonasset_dto_list_envelope_1 = asset_dto_list_envelope_convertToJSON(asset_dto_list_envelope_1);
	printf("asset_dto_list_envelope :\n%s\n", cJSON_Print(jsonasset_dto_list_envelope_1));
	asset_dto_list_envelope_t* asset_dto_list_envelope_2 = asset_dto_list_envelope_parseFromJSON(jsonasset_dto_list_envelope_1);
	cJSON* jsonasset_dto_list_envelope_2 = asset_dto_list_envelope_convertToJSON(asset_dto_list_envelope_2);
	printf("repeating asset_dto_list_envelope:\n%s\n", cJSON_Print(jsonasset_dto_list_envelope_2));
}

int main() {
  test_asset_dto_list_envelope(1);
  test_asset_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_dto_list_envelope_MAIN
#endif // asset_dto_list_envelope_TEST
