#ifndef website_theme_dto_collection_query_parameters_TEST
#define website_theme_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_theme_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_theme_dto_collection_query_parameters.h"
website_theme_dto_collection_query_parameters_t* instantiate_website_theme_dto_collection_query_parameters(int include_optional);



website_theme_dto_collection_query_parameters_t* instantiate_website_theme_dto_collection_query_parameters(int include_optional) {
  website_theme_dto_collection_query_parameters_t* website_theme_dto_collection_query_parameters = NULL;
  if (include_optional) {
    website_theme_dto_collection_query_parameters = website_theme_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    website_theme_dto_collection_query_parameters = website_theme_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return website_theme_dto_collection_query_parameters;
}


#ifdef website_theme_dto_collection_query_parameters_MAIN

void test_website_theme_dto_collection_query_parameters(int include_optional) {
    website_theme_dto_collection_query_parameters_t* website_theme_dto_collection_query_parameters_1 = instantiate_website_theme_dto_collection_query_parameters(include_optional);

	cJSON* jsonwebsite_theme_dto_collection_query_parameters_1 = website_theme_dto_collection_query_parameters_convertToJSON(website_theme_dto_collection_query_parameters_1);
	printf("website_theme_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonwebsite_theme_dto_collection_query_parameters_1));
	website_theme_dto_collection_query_parameters_t* website_theme_dto_collection_query_parameters_2 = website_theme_dto_collection_query_parameters_parseFromJSON(jsonwebsite_theme_dto_collection_query_parameters_1);
	cJSON* jsonwebsite_theme_dto_collection_query_parameters_2 = website_theme_dto_collection_query_parameters_convertToJSON(website_theme_dto_collection_query_parameters_2);
	printf("repeating website_theme_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonwebsite_theme_dto_collection_query_parameters_2));
}

int main() {
  test_website_theme_dto_collection_query_parameters(1);
  test_website_theme_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_theme_dto_collection_query_parameters_MAIN
#endif // website_theme_dto_collection_query_parameters_TEST
