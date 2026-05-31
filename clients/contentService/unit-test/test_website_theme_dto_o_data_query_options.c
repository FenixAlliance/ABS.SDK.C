#ifndef website_theme_dto_o_data_query_options_TEST
#define website_theme_dto_o_data_query_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_theme_dto_o_data_query_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_theme_dto_o_data_query_options.h"
website_theme_dto_o_data_query_options_t* instantiate_website_theme_dto_o_data_query_options(int include_optional);

#include "test_http_request.c"
#include "test_o_data_query_context.c"
#include "test_o_data_raw_query_options.c"
#include "test_select_expand_query_option.c"
#include "test_apply_query_option.c"
#include "test_compute_query_option.c"
#include "test_filter_query_option.c"
#include "test_search_query_option.c"
#include "test_order_by_query_option.c"
#include "test_skip_query_option.c"
#include "test_skip_token_query_option.c"
#include "test_top_query_option.c"
#include "test_count_query_option.c"
#include "test_website_theme_dto_e_tag.c"
#include "test_website_theme_dto_e_tag.c"


website_theme_dto_o_data_query_options_t* instantiate_website_theme_dto_o_data_query_options(int include_optional) {
  website_theme_dto_o_data_query_options_t* website_theme_dto_o_data_query_options = NULL;
  if (include_optional) {
    website_theme_dto_o_data_query_options = website_theme_dto_o_data_query_options_create(
       // false, not to have infinite recursion
      instantiate_http_request(0),
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
       // false, not to have infinite recursion
      instantiate_o_data_raw_query_options(0),
       // false, not to have infinite recursion
      instantiate_select_expand_query_option(0),
       // false, not to have infinite recursion
      instantiate_apply_query_option(0),
       // false, not to have infinite recursion
      instantiate_compute_query_option(0),
       // false, not to have infinite recursion
      instantiate_filter_query_option(0),
       // false, not to have infinite recursion
      instantiate_search_query_option(0),
       // false, not to have infinite recursion
      instantiate_order_by_query_option(0),
       // false, not to have infinite recursion
      instantiate_skip_query_option(0),
       // false, not to have infinite recursion
      instantiate_skip_token_query_option(0),
       // false, not to have infinite recursion
      instantiate_top_query_option(0),
       // false, not to have infinite recursion
      instantiate_count_query_option(0),
      0,
       // false, not to have infinite recursion
      instantiate_website_theme_dto_e_tag(0),
       // false, not to have infinite recursion
      instantiate_website_theme_dto_e_tag(0)
    );
  } else {
    website_theme_dto_o_data_query_options = website_theme_dto_o_data_query_options_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      0,
      NULL,
      NULL
    );
  }

  return website_theme_dto_o_data_query_options;
}


#ifdef website_theme_dto_o_data_query_options_MAIN

void test_website_theme_dto_o_data_query_options(int include_optional) {
    website_theme_dto_o_data_query_options_t* website_theme_dto_o_data_query_options_1 = instantiate_website_theme_dto_o_data_query_options(include_optional);

	cJSON* jsonwebsite_theme_dto_o_data_query_options_1 = website_theme_dto_o_data_query_options_convertToJSON(website_theme_dto_o_data_query_options_1);
	printf("website_theme_dto_o_data_query_options :\n%s\n", cJSON_Print(jsonwebsite_theme_dto_o_data_query_options_1));
	website_theme_dto_o_data_query_options_t* website_theme_dto_o_data_query_options_2 = website_theme_dto_o_data_query_options_parseFromJSON(jsonwebsite_theme_dto_o_data_query_options_1);
	cJSON* jsonwebsite_theme_dto_o_data_query_options_2 = website_theme_dto_o_data_query_options_convertToJSON(website_theme_dto_o_data_query_options_2);
	printf("repeating website_theme_dto_o_data_query_options:\n%s\n", cJSON_Print(jsonwebsite_theme_dto_o_data_query_options_2));
}

int main() {
  test_website_theme_dto_o_data_query_options(1);
  test_website_theme_dto_o_data_query_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_theme_dto_o_data_query_options_MAIN
#endif // website_theme_dto_o_data_query_options_TEST
