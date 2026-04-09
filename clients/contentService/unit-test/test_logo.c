#ifndef logo_TEST
#define logo_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define logo_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/logo.h"
logo_t* instantiate_logo(int include_optional);

#include "test_margin.c"


logo_t* instantiate_logo(int include_optional) {
  logo_t* logo = NULL;
  if (include_optional) {
    logo = logo_create(
       // false, not to have infinite recursion
      instantiate_margin(0),
      contentservice_logo_ALIGNMENT_Center,
      56,
      56,
      56,
      56,
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
    logo = logo_create(
      NULL,
      contentservice_logo_ALIGNMENT_Center,
      56,
      56,
      56,
      56,
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

  return logo;
}


#ifdef logo_MAIN

void test_logo(int include_optional) {
    logo_t* logo_1 = instantiate_logo(include_optional);

	cJSON* jsonlogo_1 = logo_convertToJSON(logo_1);
	printf("logo :\n%s\n", cJSON_Print(jsonlogo_1));
	logo_t* logo_2 = logo_parseFromJSON(jsonlogo_1);
	cJSON* jsonlogo_2 = logo_convertToJSON(logo_2);
	printf("repeating logo:\n%s\n", cJSON_Print(jsonlogo_2));
}

int main() {
  test_logo(1);
  test_logo(0);

  printf("Hello world \n");
  return 0;
}

#endif // logo_MAIN
#endif // logo_TEST
