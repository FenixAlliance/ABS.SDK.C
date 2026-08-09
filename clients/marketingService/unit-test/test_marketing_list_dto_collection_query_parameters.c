#ifndef marketing_list_dto_collection_query_parameters_TEST
#define marketing_list_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_list_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_list_dto_collection_query_parameters.h"
marketing_list_dto_collection_query_parameters_t* instantiate_marketing_list_dto_collection_query_parameters(int include_optional);



marketing_list_dto_collection_query_parameters_t* instantiate_marketing_list_dto_collection_query_parameters(int include_optional) {
  marketing_list_dto_collection_query_parameters_t* marketing_list_dto_collection_query_parameters = NULL;
  if (include_optional) {
    marketing_list_dto_collection_query_parameters = marketing_list_dto_collection_query_parameters_create(
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
    marketing_list_dto_collection_query_parameters = marketing_list_dto_collection_query_parameters_create(
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

  return marketing_list_dto_collection_query_parameters;
}


#ifdef marketing_list_dto_collection_query_parameters_MAIN

void test_marketing_list_dto_collection_query_parameters(int include_optional) {
    marketing_list_dto_collection_query_parameters_t* marketing_list_dto_collection_query_parameters_1 = instantiate_marketing_list_dto_collection_query_parameters(include_optional);

	cJSON* jsonmarketing_list_dto_collection_query_parameters_1 = marketing_list_dto_collection_query_parameters_convertToJSON(marketing_list_dto_collection_query_parameters_1);
	printf("marketing_list_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonmarketing_list_dto_collection_query_parameters_1));
	marketing_list_dto_collection_query_parameters_t* marketing_list_dto_collection_query_parameters_2 = marketing_list_dto_collection_query_parameters_parseFromJSON(jsonmarketing_list_dto_collection_query_parameters_1);
	cJSON* jsonmarketing_list_dto_collection_query_parameters_2 = marketing_list_dto_collection_query_parameters_convertToJSON(marketing_list_dto_collection_query_parameters_2);
	printf("repeating marketing_list_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonmarketing_list_dto_collection_query_parameters_2));
}

int main() {
  test_marketing_list_dto_collection_query_parameters(1);
  test_marketing_list_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_list_dto_collection_query_parameters_MAIN
#endif // marketing_list_dto_collection_query_parameters_TEST
