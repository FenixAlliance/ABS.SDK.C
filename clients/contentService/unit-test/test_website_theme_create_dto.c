#ifndef website_theme_create_dto_TEST
#define website_theme_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_theme_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_theme_create_dto.h"
website_theme_create_dto_t* instantiate_website_theme_create_dto(int include_optional);



website_theme_create_dto_t* instantiate_website_theme_create_dto(int include_optional) {
  website_theme_create_dto_t* website_theme_create_dto = NULL;
  if (include_optional) {
    website_theme_create_dto = website_theme_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    website_theme_create_dto = website_theme_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return website_theme_create_dto;
}


#ifdef website_theme_create_dto_MAIN

void test_website_theme_create_dto(int include_optional) {
    website_theme_create_dto_t* website_theme_create_dto_1 = instantiate_website_theme_create_dto(include_optional);

	cJSON* jsonwebsite_theme_create_dto_1 = website_theme_create_dto_convertToJSON(website_theme_create_dto_1);
	printf("website_theme_create_dto :\n%s\n", cJSON_Print(jsonwebsite_theme_create_dto_1));
	website_theme_create_dto_t* website_theme_create_dto_2 = website_theme_create_dto_parseFromJSON(jsonwebsite_theme_create_dto_1);
	cJSON* jsonwebsite_theme_create_dto_2 = website_theme_create_dto_convertToJSON(website_theme_create_dto_2);
	printf("repeating website_theme_create_dto:\n%s\n", cJSON_Print(jsonwebsite_theme_create_dto_2));
}

int main() {
  test_website_theme_create_dto(1);
  test_website_theme_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_theme_create_dto_MAIN
#endif // website_theme_create_dto_TEST
