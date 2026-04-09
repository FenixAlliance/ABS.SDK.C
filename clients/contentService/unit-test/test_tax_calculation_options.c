#ifndef tax_calculation_options_TEST
#define tax_calculation_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_calculation_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_calculation_options.h"
tax_calculation_options_t* instantiate_tax_calculation_options(int include_optional);



tax_calculation_options_t* instantiate_tax_calculation_options(int include_optional) {
  tax_calculation_options_t* tax_calculation_options = NULL;
  if (include_optional) {
    tax_calculation_options = tax_calculation_options_create(
      1,
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    tax_calculation_options = tax_calculation_options_create(
      1,
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return tax_calculation_options;
}


#ifdef tax_calculation_options_MAIN

void test_tax_calculation_options(int include_optional) {
    tax_calculation_options_t* tax_calculation_options_1 = instantiate_tax_calculation_options(include_optional);

	cJSON* jsontax_calculation_options_1 = tax_calculation_options_convertToJSON(tax_calculation_options_1);
	printf("tax_calculation_options :\n%s\n", cJSON_Print(jsontax_calculation_options_1));
	tax_calculation_options_t* tax_calculation_options_2 = tax_calculation_options_parseFromJSON(jsontax_calculation_options_1);
	cJSON* jsontax_calculation_options_2 = tax_calculation_options_convertToJSON(tax_calculation_options_2);
	printf("repeating tax_calculation_options:\n%s\n", cJSON_Print(jsontax_calculation_options_2));
}

int main() {
  test_tax_calculation_options(1);
  test_tax_calculation_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_calculation_options_MAIN
#endif // tax_calculation_options_TEST
