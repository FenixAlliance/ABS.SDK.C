#ifndef web_page_dto_TEST
#define web_page_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_page_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_page_dto.h"
web_page_dto_t* instantiate_web_page_dto(int include_optional);



web_page_dto_t* instantiate_web_page_dto(int include_optional) {
  web_page_dto_t* web_page_dto = NULL;
  if (include_optional) {
    web_page_dto = web_page_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      contentservice_web_page_dto_CODETYPE_Razor,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
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
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
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
    web_page_dto = web_page_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      contentservice_web_page_dto_CODETYPE_Razor,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
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
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
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

  return web_page_dto;
}


#ifdef web_page_dto_MAIN

void test_web_page_dto(int include_optional) {
    web_page_dto_t* web_page_dto_1 = instantiate_web_page_dto(include_optional);

	cJSON* jsonweb_page_dto_1 = web_page_dto_convertToJSON(web_page_dto_1);
	printf("web_page_dto :\n%s\n", cJSON_Print(jsonweb_page_dto_1));
	web_page_dto_t* web_page_dto_2 = web_page_dto_parseFromJSON(jsonweb_page_dto_1);
	cJSON* jsonweb_page_dto_2 = web_page_dto_convertToJSON(web_page_dto_2);
	printf("repeating web_page_dto:\n%s\n", cJSON_Print(jsonweb_page_dto_2));
}

int main() {
  test_web_page_dto(1);
  test_web_page_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_page_dto_MAIN
#endif // web_page_dto_TEST
