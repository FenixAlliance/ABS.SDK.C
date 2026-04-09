#ifndef custom_font_TEST
#define custom_font_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_font_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_font.h"
custom_font_t* instantiate_custom_font(int include_optional);



custom_font_t* instantiate_custom_font(int include_optional) {
  custom_font_t* custom_font = NULL;
  if (include_optional) {
    custom_font = custom_font_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    custom_font = custom_font_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return custom_font;
}


#ifdef custom_font_MAIN

void test_custom_font(int include_optional) {
    custom_font_t* custom_font_1 = instantiate_custom_font(include_optional);

	cJSON* jsoncustom_font_1 = custom_font_convertToJSON(custom_font_1);
	printf("custom_font :\n%s\n", cJSON_Print(jsoncustom_font_1));
	custom_font_t* custom_font_2 = custom_font_parseFromJSON(jsoncustom_font_1);
	cJSON* jsoncustom_font_2 = custom_font_convertToJSON(custom_font_2);
	printf("repeating custom_font:\n%s\n", cJSON_Print(jsoncustom_font_2));
}

int main() {
  test_custom_font(1);
  test_custom_font(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_font_MAIN
#endif // custom_font_TEST
