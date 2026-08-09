#ifndef voyage_dto_collection_query_parameters_TEST
#define voyage_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define voyage_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/voyage_dto_collection_query_parameters.h"
voyage_dto_collection_query_parameters_t* instantiate_voyage_dto_collection_query_parameters(int include_optional);



voyage_dto_collection_query_parameters_t* instantiate_voyage_dto_collection_query_parameters(int include_optional) {
  voyage_dto_collection_query_parameters_t* voyage_dto_collection_query_parameters = NULL;
  if (include_optional) {
    voyage_dto_collection_query_parameters = voyage_dto_collection_query_parameters_create(
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
    voyage_dto_collection_query_parameters = voyage_dto_collection_query_parameters_create(
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

  return voyage_dto_collection_query_parameters;
}


#ifdef voyage_dto_collection_query_parameters_MAIN

void test_voyage_dto_collection_query_parameters(int include_optional) {
    voyage_dto_collection_query_parameters_t* voyage_dto_collection_query_parameters_1 = instantiate_voyage_dto_collection_query_parameters(include_optional);

	cJSON* jsonvoyage_dto_collection_query_parameters_1 = voyage_dto_collection_query_parameters_convertToJSON(voyage_dto_collection_query_parameters_1);
	printf("voyage_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonvoyage_dto_collection_query_parameters_1));
	voyage_dto_collection_query_parameters_t* voyage_dto_collection_query_parameters_2 = voyage_dto_collection_query_parameters_parseFromJSON(jsonvoyage_dto_collection_query_parameters_1);
	cJSON* jsonvoyage_dto_collection_query_parameters_2 = voyage_dto_collection_query_parameters_convertToJSON(voyage_dto_collection_query_parameters_2);
	printf("repeating voyage_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonvoyage_dto_collection_query_parameters_2));
}

int main() {
  test_voyage_dto_collection_query_parameters(1);
  test_voyage_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // voyage_dto_collection_query_parameters_MAIN
#endif // voyage_dto_collection_query_parameters_TEST
