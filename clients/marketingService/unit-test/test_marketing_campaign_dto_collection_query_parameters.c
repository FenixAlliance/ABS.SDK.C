#ifndef marketing_campaign_dto_collection_query_parameters_TEST
#define marketing_campaign_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_campaign_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_campaign_dto_collection_query_parameters.h"
marketing_campaign_dto_collection_query_parameters_t* instantiate_marketing_campaign_dto_collection_query_parameters(int include_optional);



marketing_campaign_dto_collection_query_parameters_t* instantiate_marketing_campaign_dto_collection_query_parameters(int include_optional) {
  marketing_campaign_dto_collection_query_parameters_t* marketing_campaign_dto_collection_query_parameters = NULL;
  if (include_optional) {
    marketing_campaign_dto_collection_query_parameters = marketing_campaign_dto_collection_query_parameters_create(
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
    marketing_campaign_dto_collection_query_parameters = marketing_campaign_dto_collection_query_parameters_create(
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

  return marketing_campaign_dto_collection_query_parameters;
}


#ifdef marketing_campaign_dto_collection_query_parameters_MAIN

void test_marketing_campaign_dto_collection_query_parameters(int include_optional) {
    marketing_campaign_dto_collection_query_parameters_t* marketing_campaign_dto_collection_query_parameters_1 = instantiate_marketing_campaign_dto_collection_query_parameters(include_optional);

	cJSON* jsonmarketing_campaign_dto_collection_query_parameters_1 = marketing_campaign_dto_collection_query_parameters_convertToJSON(marketing_campaign_dto_collection_query_parameters_1);
	printf("marketing_campaign_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonmarketing_campaign_dto_collection_query_parameters_1));
	marketing_campaign_dto_collection_query_parameters_t* marketing_campaign_dto_collection_query_parameters_2 = marketing_campaign_dto_collection_query_parameters_parseFromJSON(jsonmarketing_campaign_dto_collection_query_parameters_1);
	cJSON* jsonmarketing_campaign_dto_collection_query_parameters_2 = marketing_campaign_dto_collection_query_parameters_convertToJSON(marketing_campaign_dto_collection_query_parameters_2);
	printf("repeating marketing_campaign_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonmarketing_campaign_dto_collection_query_parameters_2));
}

int main() {
  test_marketing_campaign_dto_collection_query_parameters(1);
  test_marketing_campaign_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_campaign_dto_collection_query_parameters_MAIN
#endif // marketing_campaign_dto_collection_query_parameters_TEST
