#ifndef web_content_create_dto_TEST
#define web_content_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_content_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_content_create_dto.h"
web_content_create_dto_t* instantiate_web_content_create_dto(int include_optional);



web_content_create_dto_t* instantiate_web_content_create_dto(int include_optional) {
  web_content_create_dto_t* web_content_create_dto = NULL;
  if (include_optional) {
    web_content_create_dto = web_content_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      contentservice_web_content_create_dto_CODETYPE_Razor
    );
  } else {
    web_content_create_dto = web_content_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      contentservice_web_content_create_dto_CODETYPE_Razor
    );
  }

  return web_content_create_dto;
}


#ifdef web_content_create_dto_MAIN

void test_web_content_create_dto(int include_optional) {
    web_content_create_dto_t* web_content_create_dto_1 = instantiate_web_content_create_dto(include_optional);

	cJSON* jsonweb_content_create_dto_1 = web_content_create_dto_convertToJSON(web_content_create_dto_1);
	printf("web_content_create_dto :\n%s\n", cJSON_Print(jsonweb_content_create_dto_1));
	web_content_create_dto_t* web_content_create_dto_2 = web_content_create_dto_parseFromJSON(jsonweb_content_create_dto_1);
	cJSON* jsonweb_content_create_dto_2 = web_content_create_dto_convertToJSON(web_content_create_dto_2);
	printf("repeating web_content_create_dto:\n%s\n", cJSON_Print(jsonweb_content_create_dto_2));
}

int main() {
  test_web_content_create_dto(1);
  test_web_content_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_content_create_dto_MAIN
#endif // web_content_create_dto_TEST
