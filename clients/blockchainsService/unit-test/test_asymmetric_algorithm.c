#ifndef asymmetric_algorithm_TEST
#define asymmetric_algorithm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asymmetric_algorithm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asymmetric_algorithm.h"
asymmetric_algorithm_t* instantiate_asymmetric_algorithm(int include_optional);



asymmetric_algorithm_t* instantiate_asymmetric_algorithm(int include_optional) {
  asymmetric_algorithm_t* asymmetric_algorithm = NULL;
  if (include_optional) {
    asymmetric_algorithm = asymmetric_algorithm_create(
      56,
      list_createList(),
      "0",
      "0"
    );
  } else {
    asymmetric_algorithm = asymmetric_algorithm_create(
      56,
      list_createList(),
      "0",
      "0"
    );
  }

  return asymmetric_algorithm;
}


#ifdef asymmetric_algorithm_MAIN

void test_asymmetric_algorithm(int include_optional) {
    asymmetric_algorithm_t* asymmetric_algorithm_1 = instantiate_asymmetric_algorithm(include_optional);

	cJSON* jsonasymmetric_algorithm_1 = asymmetric_algorithm_convertToJSON(asymmetric_algorithm_1);
	printf("asymmetric_algorithm :\n%s\n", cJSON_Print(jsonasymmetric_algorithm_1));
	asymmetric_algorithm_t* asymmetric_algorithm_2 = asymmetric_algorithm_parseFromJSON(jsonasymmetric_algorithm_1);
	cJSON* jsonasymmetric_algorithm_2 = asymmetric_algorithm_convertToJSON(asymmetric_algorithm_2);
	printf("repeating asymmetric_algorithm:\n%s\n", cJSON_Print(jsonasymmetric_algorithm_2));
}

int main() {
  test_asymmetric_algorithm(1);
  test_asymmetric_algorithm(0);

  printf("Hello world \n");
  return 0;
}

#endif // asymmetric_algorithm_MAIN
#endif // asymmetric_algorithm_TEST
