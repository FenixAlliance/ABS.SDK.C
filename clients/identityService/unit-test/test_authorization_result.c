#ifndef authorization_result_TEST
#define authorization_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorization_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorization_result.h"
authorization_result_t* instantiate_authorization_result(int include_optional);



authorization_result_t* instantiate_authorization_result(int include_optional) {
  authorization_result_t* authorization_result = NULL;
  if (include_optional) {
    authorization_result = authorization_result_create(
      0,
      0,
      0,
      0,
      0,
      "0",
      list_createList(),
      "0"
    );
  } else {
    authorization_result = authorization_result_create(
      0,
      0,
      0,
      0,
      0,
      "0",
      list_createList(),
      "0"
    );
  }

  return authorization_result;
}


#ifdef authorization_result_MAIN

void test_authorization_result(int include_optional) {
    authorization_result_t* authorization_result_1 = instantiate_authorization_result(include_optional);

	cJSON* jsonauthorization_result_1 = authorization_result_convertToJSON(authorization_result_1);
	printf("authorization_result :\n%s\n", cJSON_Print(jsonauthorization_result_1));
	authorization_result_t* authorization_result_2 = authorization_result_parseFromJSON(jsonauthorization_result_1);
	cJSON* jsonauthorization_result_2 = authorization_result_convertToJSON(authorization_result_2);
	printf("repeating authorization_result:\n%s\n", cJSON_Print(jsonauthorization_result_2));
}

int main() {
  test_authorization_result(1);
  test_authorization_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorization_result_MAIN
#endif // authorization_result_TEST
