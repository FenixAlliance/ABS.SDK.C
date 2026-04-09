#ifndef web_page_update_dto_TEST
#define web_page_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_page_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_page_update_dto.h"
web_page_update_dto_t* instantiate_web_page_update_dto(int include_optional);



web_page_update_dto_t* instantiate_web_page_update_dto(int include_optional) {
  web_page_update_dto_t* web_page_update_dto = NULL;
  if (include_optional) {
    web_page_update_dto = web_page_update_dto_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_web_page_update_dto_CODETYPE_Razor,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    web_page_update_dto = web_page_update_dto_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_web_page_update_dto_CODETYPE_Razor,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return web_page_update_dto;
}


#ifdef web_page_update_dto_MAIN

void test_web_page_update_dto(int include_optional) {
    web_page_update_dto_t* web_page_update_dto_1 = instantiate_web_page_update_dto(include_optional);

	cJSON* jsonweb_page_update_dto_1 = web_page_update_dto_convertToJSON(web_page_update_dto_1);
	printf("web_page_update_dto :\n%s\n", cJSON_Print(jsonweb_page_update_dto_1));
	web_page_update_dto_t* web_page_update_dto_2 = web_page_update_dto_parseFromJSON(jsonweb_page_update_dto_1);
	cJSON* jsonweb_page_update_dto_2 = web_page_update_dto_convertToJSON(web_page_update_dto_2);
	printf("repeating web_page_update_dto:\n%s\n", cJSON_Print(jsonweb_page_update_dto_2));
}

int main() {
  test_web_page_update_dto(1);
  test_web_page_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_page_update_dto_MAIN
#endif // web_page_update_dto_TEST
