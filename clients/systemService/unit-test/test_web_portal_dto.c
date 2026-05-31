#ifndef web_portal_dto_TEST
#define web_portal_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_portal_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_portal_dto.h"
web_portal_dto_t* instantiate_web_portal_dto(int include_optional);



web_portal_dto_t* instantiate_web_portal_dto(int include_optional) {
  web_portal_dto_t* web_portal_dto = NULL;
  if (include_optional) {
    web_portal_dto = web_portal_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    web_portal_dto = web_portal_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return web_portal_dto;
}


#ifdef web_portal_dto_MAIN

void test_web_portal_dto(int include_optional) {
    web_portal_dto_t* web_portal_dto_1 = instantiate_web_portal_dto(include_optional);

	cJSON* jsonweb_portal_dto_1 = web_portal_dto_convertToJSON(web_portal_dto_1);
	printf("web_portal_dto :\n%s\n", cJSON_Print(jsonweb_portal_dto_1));
	web_portal_dto_t* web_portal_dto_2 = web_portal_dto_parseFromJSON(jsonweb_portal_dto_1);
	cJSON* jsonweb_portal_dto_2 = web_portal_dto_convertToJSON(web_portal_dto_2);
	printf("repeating web_portal_dto:\n%s\n", cJSON_Print(jsonweb_portal_dto_2));
}

int main() {
  test_web_portal_dto(1);
  test_web_portal_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_portal_dto_MAIN
#endif // web_portal_dto_TEST
