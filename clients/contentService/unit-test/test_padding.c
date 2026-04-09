#ifndef padding_TEST
#define padding_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define padding_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/padding.h"
padding_t* instantiate_padding(int include_optional);



padding_t* instantiate_padding(int include_optional) {
  padding_t* padding = NULL;
  if (include_optional) {
    padding = padding_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    padding = padding_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return padding;
}


#ifdef padding_MAIN

void test_padding(int include_optional) {
    padding_t* padding_1 = instantiate_padding(include_optional);

	cJSON* jsonpadding_1 = padding_convertToJSON(padding_1);
	printf("padding :\n%s\n", cJSON_Print(jsonpadding_1));
	padding_t* padding_2 = padding_parseFromJSON(jsonpadding_1);
	cJSON* jsonpadding_2 = padding_convertToJSON(padding_2);
	printf("repeating padding:\n%s\n", cJSON_Print(jsonpadding_2));
}

int main() {
  test_padding(1);
  test_padding(0);

  printf("Hello world \n");
  return 0;
}

#endif // padding_MAIN
#endif // padding_TEST
