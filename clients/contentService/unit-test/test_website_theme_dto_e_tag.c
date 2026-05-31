#ifndef website_theme_dto_e_tag_TEST
#define website_theme_dto_e_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_theme_dto_e_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_theme_dto_e_tag.h"
website_theme_dto_e_tag_t* instantiate_website_theme_dto_e_tag(int include_optional);

#include "test_type.c"


website_theme_dto_e_tag_t* instantiate_website_theme_dto_e_tag(int include_optional) {
  website_theme_dto_e_tag_t* website_theme_dto_e_tag = NULL;
  if (include_optional) {
    website_theme_dto_e_tag = website_theme_dto_e_tag_create(
      1,
       // false, not to have infinite recursion
      instantiate_type(0),
      1,
      1
    );
  } else {
    website_theme_dto_e_tag = website_theme_dto_e_tag_create(
      1,
      NULL,
      1,
      1
    );
  }

  return website_theme_dto_e_tag;
}


#ifdef website_theme_dto_e_tag_MAIN

void test_website_theme_dto_e_tag(int include_optional) {
    website_theme_dto_e_tag_t* website_theme_dto_e_tag_1 = instantiate_website_theme_dto_e_tag(include_optional);

	cJSON* jsonwebsite_theme_dto_e_tag_1 = website_theme_dto_e_tag_convertToJSON(website_theme_dto_e_tag_1);
	printf("website_theme_dto_e_tag :\n%s\n", cJSON_Print(jsonwebsite_theme_dto_e_tag_1));
	website_theme_dto_e_tag_t* website_theme_dto_e_tag_2 = website_theme_dto_e_tag_parseFromJSON(jsonwebsite_theme_dto_e_tag_1);
	cJSON* jsonwebsite_theme_dto_e_tag_2 = website_theme_dto_e_tag_convertToJSON(website_theme_dto_e_tag_2);
	printf("repeating website_theme_dto_e_tag:\n%s\n", cJSON_Print(jsonwebsite_theme_dto_e_tag_2));
}

int main() {
  test_website_theme_dto_e_tag(1);
  test_website_theme_dto_e_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_theme_dto_e_tag_MAIN
#endif // website_theme_dto_e_tag_TEST
