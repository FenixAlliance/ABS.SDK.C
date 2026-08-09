#ifndef deal_unit_flow_dto_collection_query_parameters_TEST
#define deal_unit_flow_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deal_unit_flow_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deal_unit_flow_dto_collection_query_parameters.h"
deal_unit_flow_dto_collection_query_parameters_t* instantiate_deal_unit_flow_dto_collection_query_parameters(int include_optional);



deal_unit_flow_dto_collection_query_parameters_t* instantiate_deal_unit_flow_dto_collection_query_parameters(int include_optional) {
  deal_unit_flow_dto_collection_query_parameters_t* deal_unit_flow_dto_collection_query_parameters = NULL;
  if (include_optional) {
    deal_unit_flow_dto_collection_query_parameters = deal_unit_flow_dto_collection_query_parameters_create(
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
    deal_unit_flow_dto_collection_query_parameters = deal_unit_flow_dto_collection_query_parameters_create(
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

  return deal_unit_flow_dto_collection_query_parameters;
}


#ifdef deal_unit_flow_dto_collection_query_parameters_MAIN

void test_deal_unit_flow_dto_collection_query_parameters(int include_optional) {
    deal_unit_flow_dto_collection_query_parameters_t* deal_unit_flow_dto_collection_query_parameters_1 = instantiate_deal_unit_flow_dto_collection_query_parameters(include_optional);

	cJSON* jsondeal_unit_flow_dto_collection_query_parameters_1 = deal_unit_flow_dto_collection_query_parameters_convertToJSON(deal_unit_flow_dto_collection_query_parameters_1);
	printf("deal_unit_flow_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsondeal_unit_flow_dto_collection_query_parameters_1));
	deal_unit_flow_dto_collection_query_parameters_t* deal_unit_flow_dto_collection_query_parameters_2 = deal_unit_flow_dto_collection_query_parameters_parseFromJSON(jsondeal_unit_flow_dto_collection_query_parameters_1);
	cJSON* jsondeal_unit_flow_dto_collection_query_parameters_2 = deal_unit_flow_dto_collection_query_parameters_convertToJSON(deal_unit_flow_dto_collection_query_parameters_2);
	printf("repeating deal_unit_flow_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsondeal_unit_flow_dto_collection_query_parameters_2));
}

int main() {
  test_deal_unit_flow_dto_collection_query_parameters(1);
  test_deal_unit_flow_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // deal_unit_flow_dto_collection_query_parameters_MAIN
#endif // deal_unit_flow_dto_collection_query_parameters_TEST
