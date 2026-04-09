#ifndef i_swagger_license_TEST
#define i_swagger_license_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_swagger_license_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_swagger_license.h"
i_swagger_license_t* instantiate_i_swagger_license(int include_optional);



i_swagger_license_t* instantiate_i_swagger_license(int include_optional) {
  i_swagger_license_t* i_swagger_license = NULL;
  if (include_optional) {
    i_swagger_license = i_swagger_license_create(
      "0",
      "0"
    );
  } else {
    i_swagger_license = i_swagger_license_create(
      "0",
      "0"
    );
  }

  return i_swagger_license;
}


#ifdef i_swagger_license_MAIN

void test_i_swagger_license(int include_optional) {
    i_swagger_license_t* i_swagger_license_1 = instantiate_i_swagger_license(include_optional);

	cJSON* jsoni_swagger_license_1 = i_swagger_license_convertToJSON(i_swagger_license_1);
	printf("i_swagger_license :\n%s\n", cJSON_Print(jsoni_swagger_license_1));
	i_swagger_license_t* i_swagger_license_2 = i_swagger_license_parseFromJSON(jsoni_swagger_license_1);
	cJSON* jsoni_swagger_license_2 = i_swagger_license_convertToJSON(i_swagger_license_2);
	printf("repeating i_swagger_license:\n%s\n", cJSON_Print(jsoni_swagger_license_2));
}

int main() {
  test_i_swagger_license(1);
  test_i_swagger_license(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_swagger_license_MAIN
#endif // i_swagger_license_TEST
