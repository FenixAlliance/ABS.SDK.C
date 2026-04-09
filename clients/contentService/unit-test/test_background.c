#ifndef background_TEST
#define background_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define background_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/background.h"
background_t* instantiate_background(int include_optional);



background_t* instantiate_background(int include_optional) {
  background_t* background = NULL;
  if (include_optional) {
    background = background_create(
      contentservice_background_BGREPEAT_All,
      contentservice_background_BGPOSITION_TopLeft,
      "0",
      "0",
      1
    );
  } else {
    background = background_create(
      contentservice_background_BGREPEAT_All,
      contentservice_background_BGPOSITION_TopLeft,
      "0",
      "0",
      1
    );
  }

  return background;
}


#ifdef background_MAIN

void test_background(int include_optional) {
    background_t* background_1 = instantiate_background(include_optional);

	cJSON* jsonbackground_1 = background_convertToJSON(background_1);
	printf("background :\n%s\n", cJSON_Print(jsonbackground_1));
	background_t* background_2 = background_parseFromJSON(jsonbackground_1);
	cJSON* jsonbackground_2 = background_convertToJSON(background_2);
	printf("repeating background:\n%s\n", cJSON_Print(jsonbackground_2));
}

int main() {
  test_background(1);
  test_background(0);

  printf("Hello world \n");
  return 0;
}

#endif // background_MAIN
#endif // background_TEST
