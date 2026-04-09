#ifndef layout_options_TEST
#define layout_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define layout_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/layout_options.h"
layout_options_t* instantiate_layout_options(int include_optional);



layout_options_t* instantiate_layout_options(int include_optional) {
  layout_options_t* layout_options = NULL;
  if (include_optional) {
    layout_options = layout_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_layout_options_LAYOUT_Boxed
    );
  } else {
    layout_options = layout_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_layout_options_LAYOUT_Boxed
    );
  }

  return layout_options;
}


#ifdef layout_options_MAIN

void test_layout_options(int include_optional) {
    layout_options_t* layout_options_1 = instantiate_layout_options(include_optional);

	cJSON* jsonlayout_options_1 = layout_options_convertToJSON(layout_options_1);
	printf("layout_options :\n%s\n", cJSON_Print(jsonlayout_options_1));
	layout_options_t* layout_options_2 = layout_options_parseFromJSON(jsonlayout_options_1);
	cJSON* jsonlayout_options_2 = layout_options_convertToJSON(layout_options_2);
	printf("repeating layout_options:\n%s\n", cJSON_Print(jsonlayout_options_2));
}

int main() {
  test_layout_options(1);
  test_layout_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // layout_options_MAIN
#endif // layout_options_TEST
