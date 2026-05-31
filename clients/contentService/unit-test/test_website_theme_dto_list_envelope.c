#ifndef website_theme_dto_list_envelope_TEST
#define website_theme_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_theme_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_theme_dto_list_envelope.h"
website_theme_dto_list_envelope_t* instantiate_website_theme_dto_list_envelope(int include_optional);



website_theme_dto_list_envelope_t* instantiate_website_theme_dto_list_envelope(int include_optional) {
  website_theme_dto_list_envelope_t* website_theme_dto_list_envelope = NULL;
  if (include_optional) {
    website_theme_dto_list_envelope = website_theme_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    website_theme_dto_list_envelope = website_theme_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return website_theme_dto_list_envelope;
}


#ifdef website_theme_dto_list_envelope_MAIN

void test_website_theme_dto_list_envelope(int include_optional) {
    website_theme_dto_list_envelope_t* website_theme_dto_list_envelope_1 = instantiate_website_theme_dto_list_envelope(include_optional);

	cJSON* jsonwebsite_theme_dto_list_envelope_1 = website_theme_dto_list_envelope_convertToJSON(website_theme_dto_list_envelope_1);
	printf("website_theme_dto_list_envelope :\n%s\n", cJSON_Print(jsonwebsite_theme_dto_list_envelope_1));
	website_theme_dto_list_envelope_t* website_theme_dto_list_envelope_2 = website_theme_dto_list_envelope_parseFromJSON(jsonwebsite_theme_dto_list_envelope_1);
	cJSON* jsonwebsite_theme_dto_list_envelope_2 = website_theme_dto_list_envelope_convertToJSON(website_theme_dto_list_envelope_2);
	printf("repeating website_theme_dto_list_envelope:\n%s\n", cJSON_Print(jsonwebsite_theme_dto_list_envelope_2));
}

int main() {
  test_website_theme_dto_list_envelope(1);
  test_website_theme_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_theme_dto_list_envelope_MAIN
#endif // website_theme_dto_list_envelope_TEST
