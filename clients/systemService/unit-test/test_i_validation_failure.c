#ifndef i_validation_failure_TEST
#define i_validation_failure_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_validation_failure_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_validation_failure.h"
i_validation_failure_t* instantiate_i_validation_failure(int include_optional);



i_validation_failure_t* instantiate_i_validation_failure(int include_optional) {
  i_validation_failure_t* i_validation_failure = NULL;
  if (include_optional) {
    i_validation_failure = i_validation_failure_create(
      "0",
      "0"
    );
  } else {
    i_validation_failure = i_validation_failure_create(
      "0",
      "0"
    );
  }

  return i_validation_failure;
}


#ifdef i_validation_failure_MAIN

void test_i_validation_failure(int include_optional) {
    i_validation_failure_t* i_validation_failure_1 = instantiate_i_validation_failure(include_optional);

	cJSON* jsoni_validation_failure_1 = i_validation_failure_convertToJSON(i_validation_failure_1);
	printf("i_validation_failure :\n%s\n", cJSON_Print(jsoni_validation_failure_1));
	i_validation_failure_t* i_validation_failure_2 = i_validation_failure_parseFromJSON(jsoni_validation_failure_1);
	cJSON* jsoni_validation_failure_2 = i_validation_failure_convertToJSON(i_validation_failure_2);
	printf("repeating i_validation_failure:\n%s\n", cJSON_Print(jsoni_validation_failure_2));
}

int main() {
  test_i_validation_failure(1);
  test_i_validation_failure(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_validation_failure_MAIN
#endif // i_validation_failure_TEST
