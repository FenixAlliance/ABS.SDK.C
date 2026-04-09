#ifndef recommendation_options_TEST
#define recommendation_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define recommendation_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/recommendation_options.h"
recommendation_options_t* instantiate_recommendation_options(int include_optional);



recommendation_options_t* instantiate_recommendation_options(int include_optional) {
  recommendation_options_t* recommendation_options = NULL;
  if (include_optional) {
    recommendation_options = recommendation_options_create(
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1,
      1,
      1
    );
  } else {
    recommendation_options = recommendation_options_create(
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1,
      1,
      1
    );
  }

  return recommendation_options;
}


#ifdef recommendation_options_MAIN

void test_recommendation_options(int include_optional) {
    recommendation_options_t* recommendation_options_1 = instantiate_recommendation_options(include_optional);

	cJSON* jsonrecommendation_options_1 = recommendation_options_convertToJSON(recommendation_options_1);
	printf("recommendation_options :\n%s\n", cJSON_Print(jsonrecommendation_options_1));
	recommendation_options_t* recommendation_options_2 = recommendation_options_parseFromJSON(jsonrecommendation_options_1);
	cJSON* jsonrecommendation_options_2 = recommendation_options_convertToJSON(recommendation_options_2);
	printf("repeating recommendation_options:\n%s\n", cJSON_Print(jsonrecommendation_options_2));
}

int main() {
  test_recommendation_options(1);
  test_recommendation_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // recommendation_options_MAIN
#endif // recommendation_options_TEST
