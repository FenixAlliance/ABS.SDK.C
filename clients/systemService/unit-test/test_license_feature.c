#ifndef license_feature_TEST
#define license_feature_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_feature_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_feature.h"
license_feature_t* instantiate_license_feature(int include_optional);



license_feature_t* instantiate_license_feature(int include_optional) {
  license_feature_t* license_feature = NULL;
  if (include_optional) {
    license_feature = license_feature_create(
      "0",
      "0"
    );
  } else {
    license_feature = license_feature_create(
      "0",
      "0"
    );
  }

  return license_feature;
}


#ifdef license_feature_MAIN

void test_license_feature(int include_optional) {
    license_feature_t* license_feature_1 = instantiate_license_feature(include_optional);

	cJSON* jsonlicense_feature_1 = license_feature_convertToJSON(license_feature_1);
	printf("license_feature :\n%s\n", cJSON_Print(jsonlicense_feature_1));
	license_feature_t* license_feature_2 = license_feature_parseFromJSON(jsonlicense_feature_1);
	cJSON* jsonlicense_feature_2 = license_feature_convertToJSON(license_feature_2);
	printf("repeating license_feature:\n%s\n", cJSON_Print(jsonlicense_feature_2));
}

int main() {
  test_license_feature(1);
  test_license_feature(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_feature_MAIN
#endif // license_feature_TEST
