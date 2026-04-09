#ifndef web_template_dto_TEST
#define web_template_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_template_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_template_dto.h"
web_template_dto_t* instantiate_web_template_dto(int include_optional);



web_template_dto_t* instantiate_web_template_dto(int include_optional) {
  web_template_dto_t* web_template_dto = NULL;
  if (include_optional) {
    web_template_dto = web_template_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      56
    );
  } else {
    web_template_dto = web_template_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
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
      56
    );
  }

  return web_template_dto;
}


#ifdef web_template_dto_MAIN

void test_web_template_dto(int include_optional) {
    web_template_dto_t* web_template_dto_1 = instantiate_web_template_dto(include_optional);

	cJSON* jsonweb_template_dto_1 = web_template_dto_convertToJSON(web_template_dto_1);
	printf("web_template_dto :\n%s\n", cJSON_Print(jsonweb_template_dto_1));
	web_template_dto_t* web_template_dto_2 = web_template_dto_parseFromJSON(jsonweb_template_dto_1);
	cJSON* jsonweb_template_dto_2 = web_template_dto_convertToJSON(web_template_dto_2);
	printf("repeating web_template_dto:\n%s\n", cJSON_Print(jsonweb_template_dto_2));
}

int main() {
  test_web_template_dto(1);
  test_web_template_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_template_dto_MAIN
#endif // web_template_dto_TEST
