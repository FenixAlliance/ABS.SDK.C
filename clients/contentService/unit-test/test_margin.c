#ifndef margin_TEST
#define margin_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define margin_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/margin.h"
margin_t* instantiate_margin(int include_optional);



margin_t* instantiate_margin(int include_optional) {
  margin_t* margin = NULL;
  if (include_optional) {
    margin = margin_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    margin = margin_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return margin;
}


#ifdef margin_MAIN

void test_margin(int include_optional) {
    margin_t* margin_1 = instantiate_margin(include_optional);

	cJSON* jsonmargin_1 = margin_convertToJSON(margin_1);
	printf("margin :\n%s\n", cJSON_Print(jsonmargin_1));
	margin_t* margin_2 = margin_parseFromJSON(jsonmargin_1);
	cJSON* jsonmargin_2 = margin_convertToJSON(margin_2);
	printf("repeating margin:\n%s\n", cJSON_Print(jsonmargin_2));
}

int main() {
  test_margin(1);
  test_margin(0);

  printf("Hello world \n");
  return 0;
}

#endif // margin_MAIN
#endif // margin_TEST
