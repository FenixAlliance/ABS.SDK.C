#ifndef reviews_options_TEST
#define reviews_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reviews_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reviews_options.h"
reviews_options_t* instantiate_reviews_options(int include_optional);



reviews_options_t* instantiate_reviews_options(int include_optional) {
  reviews_options_t* reviews_options = NULL;
  if (include_optional) {
    reviews_options = reviews_options_create(
      1,
      1,
      1,
      1,
      1
    );
  } else {
    reviews_options = reviews_options_create(
      1,
      1,
      1,
      1,
      1
    );
  }

  return reviews_options;
}


#ifdef reviews_options_MAIN

void test_reviews_options(int include_optional) {
    reviews_options_t* reviews_options_1 = instantiate_reviews_options(include_optional);

	cJSON* jsonreviews_options_1 = reviews_options_convertToJSON(reviews_options_1);
	printf("reviews_options :\n%s\n", cJSON_Print(jsonreviews_options_1));
	reviews_options_t* reviews_options_2 = reviews_options_parseFromJSON(jsonreviews_options_1);
	cJSON* jsonreviews_options_2 = reviews_options_convertToJSON(reviews_options_2);
	printf("repeating reviews_options:\n%s\n", cJSON_Print(jsonreviews_options_2));
}

int main() {
  test_reviews_options(1);
  test_reviews_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // reviews_options_MAIN
#endif // reviews_options_TEST
