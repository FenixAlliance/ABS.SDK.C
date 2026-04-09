#ifndef e_payco_integration_options_TEST
#define e_payco_integration_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define e_payco_integration_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/e_payco_integration_options.h"
e_payco_integration_options_t* instantiate_e_payco_integration_options(int include_optional);



e_payco_integration_options_t* instantiate_e_payco_integration_options(int include_optional) {
  e_payco_integration_options_t* e_payco_integration_options = NULL;
  if (include_optional) {
    e_payco_integration_options = e_payco_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    e_payco_integration_options = e_payco_integration_options_create(
      1,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return e_payco_integration_options;
}


#ifdef e_payco_integration_options_MAIN

void test_e_payco_integration_options(int include_optional) {
    e_payco_integration_options_t* e_payco_integration_options_1 = instantiate_e_payco_integration_options(include_optional);

	cJSON* jsone_payco_integration_options_1 = e_payco_integration_options_convertToJSON(e_payco_integration_options_1);
	printf("e_payco_integration_options :\n%s\n", cJSON_Print(jsone_payco_integration_options_1));
	e_payco_integration_options_t* e_payco_integration_options_2 = e_payco_integration_options_parseFromJSON(jsone_payco_integration_options_1);
	cJSON* jsone_payco_integration_options_2 = e_payco_integration_options_convertToJSON(e_payco_integration_options_2);
	printf("repeating e_payco_integration_options:\n%s\n", cJSON_Print(jsone_payco_integration_options_2));
}

int main() {
  test_e_payco_integration_options(1);
  test_e_payco_integration_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // e_payco_integration_options_MAIN
#endif // e_payco_integration_options_TEST
