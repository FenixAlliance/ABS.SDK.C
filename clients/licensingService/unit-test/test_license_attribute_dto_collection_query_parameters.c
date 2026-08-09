#ifndef license_attribute_dto_collection_query_parameters_TEST
#define license_attribute_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_attribute_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_attribute_dto_collection_query_parameters.h"
license_attribute_dto_collection_query_parameters_t* instantiate_license_attribute_dto_collection_query_parameters(int include_optional);



license_attribute_dto_collection_query_parameters_t* instantiate_license_attribute_dto_collection_query_parameters(int include_optional) {
  license_attribute_dto_collection_query_parameters_t* license_attribute_dto_collection_query_parameters = NULL;
  if (include_optional) {
    license_attribute_dto_collection_query_parameters = license_attribute_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    license_attribute_dto_collection_query_parameters = license_attribute_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return license_attribute_dto_collection_query_parameters;
}


#ifdef license_attribute_dto_collection_query_parameters_MAIN

void test_license_attribute_dto_collection_query_parameters(int include_optional) {
    license_attribute_dto_collection_query_parameters_t* license_attribute_dto_collection_query_parameters_1 = instantiate_license_attribute_dto_collection_query_parameters(include_optional);

	cJSON* jsonlicense_attribute_dto_collection_query_parameters_1 = license_attribute_dto_collection_query_parameters_convertToJSON(license_attribute_dto_collection_query_parameters_1);
	printf("license_attribute_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonlicense_attribute_dto_collection_query_parameters_1));
	license_attribute_dto_collection_query_parameters_t* license_attribute_dto_collection_query_parameters_2 = license_attribute_dto_collection_query_parameters_parseFromJSON(jsonlicense_attribute_dto_collection_query_parameters_1);
	cJSON* jsonlicense_attribute_dto_collection_query_parameters_2 = license_attribute_dto_collection_query_parameters_convertToJSON(license_attribute_dto_collection_query_parameters_2);
	printf("repeating license_attribute_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonlicense_attribute_dto_collection_query_parameters_2));
}

int main() {
  test_license_attribute_dto_collection_query_parameters(1);
  test_license_attribute_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_attribute_dto_collection_query_parameters_MAIN
#endif // license_attribute_dto_collection_query_parameters_TEST
