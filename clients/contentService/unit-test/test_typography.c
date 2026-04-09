#ifndef typography_TEST
#define typography_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define typography_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/typography.h"
typography_t* instantiate_typography(int include_optional);



typography_t* instantiate_typography(int include_optional) {
  typography_t* typography = NULL;
  if (include_optional) {
    typography = typography_create(
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
    typography = typography_create(
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

  return typography;
}


#ifdef typography_MAIN

void test_typography(int include_optional) {
    typography_t* typography_1 = instantiate_typography(include_optional);

	cJSON* jsontypography_1 = typography_convertToJSON(typography_1);
	printf("typography :\n%s\n", cJSON_Print(jsontypography_1));
	typography_t* typography_2 = typography_parseFromJSON(jsontypography_1);
	cJSON* jsontypography_2 = typography_convertToJSON(typography_2);
	printf("repeating typography:\n%s\n", cJSON_Print(jsontypography_2));
}

int main() {
  test_typography(1);
  test_typography(0);

  printf("Hello world \n");
  return 0;
}

#endif // typography_MAIN
#endif // typography_TEST
