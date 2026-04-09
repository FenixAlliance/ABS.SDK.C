#ifndef ms_app_tile_TEST
#define ms_app_tile_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ms_app_tile_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ms_app_tile.h"
ms_app_tile_t* instantiate_ms_app_tile(int include_optional);



ms_app_tile_t* instantiate_ms_app_tile(int include_optional) {
  ms_app_tile_t* ms_app_tile = NULL;
  if (include_optional) {
    ms_app_tile = ms_app_tile_create(
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
    ms_app_tile = ms_app_tile_create(
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

  return ms_app_tile;
}


#ifdef ms_app_tile_MAIN

void test_ms_app_tile(int include_optional) {
    ms_app_tile_t* ms_app_tile_1 = instantiate_ms_app_tile(include_optional);

	cJSON* jsonms_app_tile_1 = ms_app_tile_convertToJSON(ms_app_tile_1);
	printf("ms_app_tile :\n%s\n", cJSON_Print(jsonms_app_tile_1));
	ms_app_tile_t* ms_app_tile_2 = ms_app_tile_parseFromJSON(jsonms_app_tile_1);
	cJSON* jsonms_app_tile_2 = ms_app_tile_convertToJSON(ms_app_tile_2);
	printf("repeating ms_app_tile:\n%s\n", cJSON_Print(jsonms_app_tile_2));
}

int main() {
  test_ms_app_tile(1);
  test_ms_app_tile(0);

  printf("Hello world \n");
  return 0;
}

#endif // ms_app_tile_MAIN
#endif // ms_app_tile_TEST
