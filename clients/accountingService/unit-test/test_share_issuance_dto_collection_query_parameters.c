#ifndef share_issuance_dto_collection_query_parameters_TEST
#define share_issuance_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_issuance_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_issuance_dto_collection_query_parameters.h"
share_issuance_dto_collection_query_parameters_t* instantiate_share_issuance_dto_collection_query_parameters(int include_optional);



share_issuance_dto_collection_query_parameters_t* instantiate_share_issuance_dto_collection_query_parameters(int include_optional) {
  share_issuance_dto_collection_query_parameters_t* share_issuance_dto_collection_query_parameters = NULL;
  if (include_optional) {
    share_issuance_dto_collection_query_parameters = share_issuance_dto_collection_query_parameters_create(
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
    share_issuance_dto_collection_query_parameters = share_issuance_dto_collection_query_parameters_create(
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

  return share_issuance_dto_collection_query_parameters;
}


#ifdef share_issuance_dto_collection_query_parameters_MAIN

void test_share_issuance_dto_collection_query_parameters(int include_optional) {
    share_issuance_dto_collection_query_parameters_t* share_issuance_dto_collection_query_parameters_1 = instantiate_share_issuance_dto_collection_query_parameters(include_optional);

	cJSON* jsonshare_issuance_dto_collection_query_parameters_1 = share_issuance_dto_collection_query_parameters_convertToJSON(share_issuance_dto_collection_query_parameters_1);
	printf("share_issuance_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonshare_issuance_dto_collection_query_parameters_1));
	share_issuance_dto_collection_query_parameters_t* share_issuance_dto_collection_query_parameters_2 = share_issuance_dto_collection_query_parameters_parseFromJSON(jsonshare_issuance_dto_collection_query_parameters_1);
	cJSON* jsonshare_issuance_dto_collection_query_parameters_2 = share_issuance_dto_collection_query_parameters_convertToJSON(share_issuance_dto_collection_query_parameters_2);
	printf("repeating share_issuance_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonshare_issuance_dto_collection_query_parameters_2));
}

int main() {
  test_share_issuance_dto_collection_query_parameters(1);
  test_share_issuance_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_issuance_dto_collection_query_parameters_MAIN
#endif // share_issuance_dto_collection_query_parameters_TEST
