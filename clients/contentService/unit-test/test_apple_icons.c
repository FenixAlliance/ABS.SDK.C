#ifndef apple_icons_TEST
#define apple_icons_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apple_icons_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apple_icons.h"
apple_icons_t* instantiate_apple_icons(int include_optional);



apple_icons_t* instantiate_apple_icons(int include_optional) {
  apple_icons_t* apple_icons = NULL;
  if (include_optional) {
    apple_icons = apple_icons_create(
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
      "0"
    );
  } else {
    apple_icons = apple_icons_create(
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
      "0"
    );
  }

  return apple_icons;
}


#ifdef apple_icons_MAIN

void test_apple_icons(int include_optional) {
    apple_icons_t* apple_icons_1 = instantiate_apple_icons(include_optional);

	cJSON* jsonapple_icons_1 = apple_icons_convertToJSON(apple_icons_1);
	printf("apple_icons :\n%s\n", cJSON_Print(jsonapple_icons_1));
	apple_icons_t* apple_icons_2 = apple_icons_parseFromJSON(jsonapple_icons_1);
	cJSON* jsonapple_icons_2 = apple_icons_convertToJSON(apple_icons_2);
	printf("repeating apple_icons:\n%s\n", cJSON_Print(jsonapple_icons_2));
}

int main() {
  test_apple_icons(1);
  test_apple_icons(0);

  printf("Hello world \n");
  return 0;
}

#endif // apple_icons_MAIN
#endif // apple_icons_TEST
