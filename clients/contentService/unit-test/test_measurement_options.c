#ifndef measurement_options_TEST
#define measurement_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define measurement_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/measurement_options.h"
measurement_options_t* instantiate_measurement_options(int include_optional);



measurement_options_t* instantiate_measurement_options(int include_optional) {
  measurement_options_t* measurement_options = NULL;
  if (include_optional) {
    measurement_options = measurement_options_create(
      contentservice_measurement_options_DEFAULTWEIGHTUNIT_Kg,
      contentservice_measurement_options_DEFAULTDIMENSIONUINIT_cms
    );
  } else {
    measurement_options = measurement_options_create(
      contentservice_measurement_options_DEFAULTWEIGHTUNIT_Kg,
      contentservice_measurement_options_DEFAULTDIMENSIONUINIT_cms
    );
  }

  return measurement_options;
}


#ifdef measurement_options_MAIN

void test_measurement_options(int include_optional) {
    measurement_options_t* measurement_options_1 = instantiate_measurement_options(include_optional);

	cJSON* jsonmeasurement_options_1 = measurement_options_convertToJSON(measurement_options_1);
	printf("measurement_options :\n%s\n", cJSON_Print(jsonmeasurement_options_1));
	measurement_options_t* measurement_options_2 = measurement_options_parseFromJSON(jsonmeasurement_options_1);
	cJSON* jsonmeasurement_options_2 = measurement_options_convertToJSON(measurement_options_2);
	printf("repeating measurement_options:\n%s\n", cJSON_Print(jsonmeasurement_options_2));
}

int main() {
  test_measurement_options(1);
  test_measurement_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // measurement_options_MAIN
#endif // measurement_options_TEST
