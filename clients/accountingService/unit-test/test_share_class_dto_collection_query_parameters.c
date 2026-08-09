#ifndef share_class_dto_collection_query_parameters_TEST
#define share_class_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_class_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_class_dto_collection_query_parameters.h"
share_class_dto_collection_query_parameters_t* instantiate_share_class_dto_collection_query_parameters(int include_optional);



share_class_dto_collection_query_parameters_t* instantiate_share_class_dto_collection_query_parameters(int include_optional) {
  share_class_dto_collection_query_parameters_t* share_class_dto_collection_query_parameters = NULL;
  if (include_optional) {
    share_class_dto_collection_query_parameters = share_class_dto_collection_query_parameters_create(
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
    share_class_dto_collection_query_parameters = share_class_dto_collection_query_parameters_create(
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

  return share_class_dto_collection_query_parameters;
}


#ifdef share_class_dto_collection_query_parameters_MAIN

void test_share_class_dto_collection_query_parameters(int include_optional) {
    share_class_dto_collection_query_parameters_t* share_class_dto_collection_query_parameters_1 = instantiate_share_class_dto_collection_query_parameters(include_optional);

	cJSON* jsonshare_class_dto_collection_query_parameters_1 = share_class_dto_collection_query_parameters_convertToJSON(share_class_dto_collection_query_parameters_1);
	printf("share_class_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonshare_class_dto_collection_query_parameters_1));
	share_class_dto_collection_query_parameters_t* share_class_dto_collection_query_parameters_2 = share_class_dto_collection_query_parameters_parseFromJSON(jsonshare_class_dto_collection_query_parameters_1);
	cJSON* jsonshare_class_dto_collection_query_parameters_2 = share_class_dto_collection_query_parameters_convertToJSON(share_class_dto_collection_query_parameters_2);
	printf("repeating share_class_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonshare_class_dto_collection_query_parameters_2));
}

int main() {
  test_share_class_dto_collection_query_parameters(1);
  test_share_class_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_class_dto_collection_query_parameters_MAIN
#endif // share_class_dto_collection_query_parameters_TEST
