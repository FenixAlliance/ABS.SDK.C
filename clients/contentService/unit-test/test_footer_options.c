#ifndef footer_options_TEST
#define footer_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define footer_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/footer_options.h"
footer_options_t* instantiate_footer_options(int include_optional);

#include "test_padding.c"
#include "test_padding.c"
#include "test_padding.c"
#include "test_background.c"
#include "test_background.c"
#include "test_typography.c"
#include "test_typography.c"
#include "test_typography.c"


footer_options_t* instantiate_footer_options(int include_optional) {
  footer_options_t* footer_options = NULL;
  if (include_optional) {
    footer_options = footer_options_create(
      56,
      1,
      1,
      1,
      1,
      1,
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      contentservice_footer_options_WIDGETDIVIDER_None,
       // false, not to have infinite recursion
      instantiate_padding(0),
       // false, not to have infinite recursion
      instantiate_padding(0),
       // false, not to have infinite recursion
      instantiate_padding(0),
       // false, not to have infinite recursion
      instantiate_background(0),
       // false, not to have infinite recursion
      instantiate_background(0),
       // false, not to have infinite recursion
      instantiate_typography(0),
       // false, not to have infinite recursion
      instantiate_typography(0),
       // false, not to have infinite recursion
      instantiate_typography(0)
    );
  } else {
    footer_options = footer_options_create(
      56,
      1,
      1,
      1,
      1,
      1,
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      contentservice_footer_options_WIDGETDIVIDER_None,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return footer_options;
}


#ifdef footer_options_MAIN

void test_footer_options(int include_optional) {
    footer_options_t* footer_options_1 = instantiate_footer_options(include_optional);

	cJSON* jsonfooter_options_1 = footer_options_convertToJSON(footer_options_1);
	printf("footer_options :\n%s\n", cJSON_Print(jsonfooter_options_1));
	footer_options_t* footer_options_2 = footer_options_parseFromJSON(jsonfooter_options_1);
	cJSON* jsonfooter_options_2 = footer_options_convertToJSON(footer_options_2);
	printf("repeating footer_options:\n%s\n", cJSON_Print(jsonfooter_options_2));
}

int main() {
  test_footer_options(1);
  test_footer_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // footer_options_MAIN
#endif // footer_options_TEST
