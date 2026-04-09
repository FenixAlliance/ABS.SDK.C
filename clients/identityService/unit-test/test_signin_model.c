#ifndef signin_model_TEST
#define signin_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signin_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signin_model.h"
signin_model_t* instantiate_signin_model(int include_optional);



signin_model_t* instantiate_signin_model(int include_optional) {
  signin_model_t* signin_model = NULL;
  if (include_optional) {
    signin_model = signin_model_create(
      "0",
      "0"
    );
  } else {
    signin_model = signin_model_create(
      "0",
      "0"
    );
  }

  return signin_model;
}


#ifdef signin_model_MAIN

void test_signin_model(int include_optional) {
    signin_model_t* signin_model_1 = instantiate_signin_model(include_optional);

	cJSON* jsonsignin_model_1 = signin_model_convertToJSON(signin_model_1);
	printf("signin_model :\n%s\n", cJSON_Print(jsonsignin_model_1));
	signin_model_t* signin_model_2 = signin_model_parseFromJSON(jsonsignin_model_1);
	cJSON* jsonsignin_model_2 = signin_model_convertToJSON(signin_model_2);
	printf("repeating signin_model:\n%s\n", cJSON_Print(jsonsignin_model_2));
}

int main() {
  test_signin_model(1);
  test_signin_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // signin_model_MAIN
#endif // signin_model_TEST
