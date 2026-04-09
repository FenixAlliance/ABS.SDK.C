#ifndef header_options_TEST
#define header_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define header_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/header_options.h"
header_options_t* instantiate_header_options(int include_optional);

#include "test_padding.c"


header_options_t* instantiate_header_options(int include_optional) {
  header_options_t* header_options = NULL;
  if (include_optional) {
    header_options = header_options_create(
       // false, not to have infinite recursion
      instantiate_padding(0),
      "0",
      "0",
      "0",
      1,
      1,
      1,
      contentservice_header_options_HEADERLAYOUT__01,
      contentservice_header_options_HEADERPOSITION_Top,
      contentservice_header_options_TOPHEADERCONTENTTYPE2_NavigationMenu,
      contentservice_header_options_TOPHEADERCONTENTTYPE1_NavigationMenu,
      "0",
      "0",
      "0"
    );
  } else {
    header_options = header_options_create(
      NULL,
      "0",
      "0",
      "0",
      1,
      1,
      1,
      contentservice_header_options_HEADERLAYOUT__01,
      contentservice_header_options_HEADERPOSITION_Top,
      contentservice_header_options_TOPHEADERCONTENTTYPE2_NavigationMenu,
      contentservice_header_options_TOPHEADERCONTENTTYPE1_NavigationMenu,
      "0",
      "0",
      "0"
    );
  }

  return header_options;
}


#ifdef header_options_MAIN

void test_header_options(int include_optional) {
    header_options_t* header_options_1 = instantiate_header_options(include_optional);

	cJSON* jsonheader_options_1 = header_options_convertToJSON(header_options_1);
	printf("header_options :\n%s\n", cJSON_Print(jsonheader_options_1));
	header_options_t* header_options_2 = header_options_parseFromJSON(jsonheader_options_1);
	cJSON* jsonheader_options_2 = header_options_convertToJSON(header_options_2);
	printf("repeating header_options:\n%s\n", cJSON_Print(jsonheader_options_2));
}

int main() {
  test_header_options(1);
  test_header_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // header_options_MAIN
#endif // header_options_TEST
