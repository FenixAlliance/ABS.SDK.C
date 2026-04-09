#ifndef coupons_options_TEST
#define coupons_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coupons_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coupons_options.h"
coupons_options_t* instantiate_coupons_options(int include_optional);



coupons_options_t* instantiate_coupons_options(int include_optional) {
  coupons_options_t* coupons_options = NULL;
  if (include_optional) {
    coupons_options = coupons_options_create(
      1,
      1
    );
  } else {
    coupons_options = coupons_options_create(
      1,
      1
    );
  }

  return coupons_options;
}


#ifdef coupons_options_MAIN

void test_coupons_options(int include_optional) {
    coupons_options_t* coupons_options_1 = instantiate_coupons_options(include_optional);

	cJSON* jsoncoupons_options_1 = coupons_options_convertToJSON(coupons_options_1);
	printf("coupons_options :\n%s\n", cJSON_Print(jsoncoupons_options_1));
	coupons_options_t* coupons_options_2 = coupons_options_parseFromJSON(jsoncoupons_options_1);
	cJSON* jsoncoupons_options_2 = coupons_options_convertToJSON(coupons_options_2);
	printf("repeating coupons_options:\n%s\n", cJSON_Print(jsoncoupons_options_2));
}

int main() {
  test_coupons_options(1);
  test_coupons_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // coupons_options_MAIN
#endif // coupons_options_TEST
