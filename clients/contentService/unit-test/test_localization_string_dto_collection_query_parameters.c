#ifndef localization_string_dto_collection_query_parameters_TEST
#define localization_string_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define localization_string_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/localization_string_dto_collection_query_parameters.h"
localization_string_dto_collection_query_parameters_t* instantiate_localization_string_dto_collection_query_parameters(int include_optional);



localization_string_dto_collection_query_parameters_t* instantiate_localization_string_dto_collection_query_parameters(int include_optional) {
  localization_string_dto_collection_query_parameters_t* localization_string_dto_collection_query_parameters = NULL;
  if (include_optional) {
    localization_string_dto_collection_query_parameters = localization_string_dto_collection_query_parameters_create(
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
    localization_string_dto_collection_query_parameters = localization_string_dto_collection_query_parameters_create(
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

  return localization_string_dto_collection_query_parameters;
}


#ifdef localization_string_dto_collection_query_parameters_MAIN

void test_localization_string_dto_collection_query_parameters(int include_optional) {
    localization_string_dto_collection_query_parameters_t* localization_string_dto_collection_query_parameters_1 = instantiate_localization_string_dto_collection_query_parameters(include_optional);

	cJSON* jsonlocalization_string_dto_collection_query_parameters_1 = localization_string_dto_collection_query_parameters_convertToJSON(localization_string_dto_collection_query_parameters_1);
	printf("localization_string_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonlocalization_string_dto_collection_query_parameters_1));
	localization_string_dto_collection_query_parameters_t* localization_string_dto_collection_query_parameters_2 = localization_string_dto_collection_query_parameters_parseFromJSON(jsonlocalization_string_dto_collection_query_parameters_1);
	cJSON* jsonlocalization_string_dto_collection_query_parameters_2 = localization_string_dto_collection_query_parameters_convertToJSON(localization_string_dto_collection_query_parameters_2);
	printf("repeating localization_string_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonlocalization_string_dto_collection_query_parameters_2));
}

int main() {
  test_localization_string_dto_collection_query_parameters(1);
  test_localization_string_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // localization_string_dto_collection_query_parameters_MAIN
#endif // localization_string_dto_collection_query_parameters_TEST
