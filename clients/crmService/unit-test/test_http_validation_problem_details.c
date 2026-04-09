#ifndef http_validation_problem_details_TEST
#define http_validation_problem_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define http_validation_problem_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/http_validation_problem_details.h"
http_validation_problem_details_t* instantiate_http_validation_problem_details(int include_optional);



http_validation_problem_details_t* instantiate_http_validation_problem_details(int include_optional) {
  http_validation_problem_details_t* http_validation_problem_details = NULL;
  if (include_optional) {
    http_validation_problem_details = http_validation_problem_details_create(
      "0",
      "0",
      56,
      "0",
      "0",
      list_createList()
    );
  } else {
    http_validation_problem_details = http_validation_problem_details_create(
      "0",
      "0",
      56,
      "0",
      "0",
      list_createList()
    );
  }

  return http_validation_problem_details;
}


#ifdef http_validation_problem_details_MAIN

void test_http_validation_problem_details(int include_optional) {
    http_validation_problem_details_t* http_validation_problem_details_1 = instantiate_http_validation_problem_details(include_optional);

	cJSON* jsonhttp_validation_problem_details_1 = http_validation_problem_details_convertToJSON(http_validation_problem_details_1);
	printf("http_validation_problem_details :\n%s\n", cJSON_Print(jsonhttp_validation_problem_details_1));
	http_validation_problem_details_t* http_validation_problem_details_2 = http_validation_problem_details_parseFromJSON(jsonhttp_validation_problem_details_1);
	cJSON* jsonhttp_validation_problem_details_2 = http_validation_problem_details_convertToJSON(http_validation_problem_details_2);
	printf("repeating http_validation_problem_details:\n%s\n", cJSON_Print(jsonhttp_validation_problem_details_2));
}

int main() {
  test_http_validation_problem_details(1);
  test_http_validation_problem_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // http_validation_problem_details_MAIN
#endif // http_validation_problem_details_TEST
