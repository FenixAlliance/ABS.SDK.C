#ifndef web_component_update_dto_TEST
#define web_component_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_component_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_component_update_dto.h"
web_component_update_dto_t* instantiate_web_component_update_dto(int include_optional);



web_component_update_dto_t* instantiate_web_component_update_dto(int include_optional) {
  web_component_update_dto_t* web_component_update_dto = NULL;
  if (include_optional) {
    web_component_update_dto = web_component_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_web_component_update_dto_CODETYPE_Razor,
      1,
      1,
      "0"
    );
  } else {
    web_component_update_dto = web_component_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_web_component_update_dto_CODETYPE_Razor,
      1,
      1,
      "0"
    );
  }

  return web_component_update_dto;
}


#ifdef web_component_update_dto_MAIN

void test_web_component_update_dto(int include_optional) {
    web_component_update_dto_t* web_component_update_dto_1 = instantiate_web_component_update_dto(include_optional);

	cJSON* jsonweb_component_update_dto_1 = web_component_update_dto_convertToJSON(web_component_update_dto_1);
	printf("web_component_update_dto :\n%s\n", cJSON_Print(jsonweb_component_update_dto_1));
	web_component_update_dto_t* web_component_update_dto_2 = web_component_update_dto_parseFromJSON(jsonweb_component_update_dto_1);
	cJSON* jsonweb_component_update_dto_2 = web_component_update_dto_convertToJSON(web_component_update_dto_2);
	printf("repeating web_component_update_dto:\n%s\n", cJSON_Print(jsonweb_component_update_dto_2));
}

int main() {
  test_web_component_update_dto(1);
  test_web_component_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_component_update_dto_MAIN
#endif // web_component_update_dto_TEST
