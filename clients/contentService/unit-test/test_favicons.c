#ifndef favicons_TEST
#define favicons_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define favicons_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/favicons.h"
favicons_t* instantiate_favicons(int include_optional);



favicons_t* instantiate_favicons(int include_optional) {
  favicons_t* favicons = NULL;
  if (include_optional) {
    favicons = favicons_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    favicons = favicons_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return favicons;
}


#ifdef favicons_MAIN

void test_favicons(int include_optional) {
    favicons_t* favicons_1 = instantiate_favicons(include_optional);

	cJSON* jsonfavicons_1 = favicons_convertToJSON(favicons_1);
	printf("favicons :\n%s\n", cJSON_Print(jsonfavicons_1));
	favicons_t* favicons_2 = favicons_parseFromJSON(jsonfavicons_1);
	cJSON* jsonfavicons_2 = favicons_convertToJSON(favicons_2);
	printf("repeating favicons:\n%s\n", cJSON_Print(jsonfavicons_2));
}

int main() {
  test_favicons(1);
  test_favicons(0);

  printf("Hello world \n");
  return 0;
}

#endif // favicons_MAIN
#endif // favicons_TEST
