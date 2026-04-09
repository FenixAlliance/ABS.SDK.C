#ifndef price_calculation_options_TEST
#define price_calculation_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define price_calculation_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/price_calculation_options.h"
price_calculation_options_t* instantiate_price_calculation_options(int include_optional);



price_calculation_options_t* instantiate_price_calculation_options(int include_optional) {
  price_calculation_options_t* price_calculation_options = NULL;
  if (include_optional) {
    price_calculation_options = price_calculation_options_create(
      "0"
    );
  } else {
    price_calculation_options = price_calculation_options_create(
      "0"
    );
  }

  return price_calculation_options;
}


#ifdef price_calculation_options_MAIN

void test_price_calculation_options(int include_optional) {
    price_calculation_options_t* price_calculation_options_1 = instantiate_price_calculation_options(include_optional);

	cJSON* jsonprice_calculation_options_1 = price_calculation_options_convertToJSON(price_calculation_options_1);
	printf("price_calculation_options :\n%s\n", cJSON_Print(jsonprice_calculation_options_1));
	price_calculation_options_t* price_calculation_options_2 = price_calculation_options_parseFromJSON(jsonprice_calculation_options_1);
	cJSON* jsonprice_calculation_options_2 = price_calculation_options_convertToJSON(price_calculation_options_2);
	printf("repeating price_calculation_options:\n%s\n", cJSON_Print(jsonprice_calculation_options_2));
}

int main() {
  test_price_calculation_options(1);
  test_price_calculation_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // price_calculation_options_MAIN
#endif // price_calculation_options_TEST
