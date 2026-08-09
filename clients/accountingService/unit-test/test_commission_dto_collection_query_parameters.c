#ifndef commission_dto_collection_query_parameters_TEST
#define commission_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define commission_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/commission_dto_collection_query_parameters.h"
commission_dto_collection_query_parameters_t* instantiate_commission_dto_collection_query_parameters(int include_optional);



commission_dto_collection_query_parameters_t* instantiate_commission_dto_collection_query_parameters(int include_optional) {
  commission_dto_collection_query_parameters_t* commission_dto_collection_query_parameters = NULL;
  if (include_optional) {
    commission_dto_collection_query_parameters = commission_dto_collection_query_parameters_create(
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
    commission_dto_collection_query_parameters = commission_dto_collection_query_parameters_create(
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

  return commission_dto_collection_query_parameters;
}


#ifdef commission_dto_collection_query_parameters_MAIN

void test_commission_dto_collection_query_parameters(int include_optional) {
    commission_dto_collection_query_parameters_t* commission_dto_collection_query_parameters_1 = instantiate_commission_dto_collection_query_parameters(include_optional);

	cJSON* jsoncommission_dto_collection_query_parameters_1 = commission_dto_collection_query_parameters_convertToJSON(commission_dto_collection_query_parameters_1);
	printf("commission_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncommission_dto_collection_query_parameters_1));
	commission_dto_collection_query_parameters_t* commission_dto_collection_query_parameters_2 = commission_dto_collection_query_parameters_parseFromJSON(jsoncommission_dto_collection_query_parameters_1);
	cJSON* jsoncommission_dto_collection_query_parameters_2 = commission_dto_collection_query_parameters_convertToJSON(commission_dto_collection_query_parameters_2);
	printf("repeating commission_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncommission_dto_collection_query_parameters_2));
}

int main() {
  test_commission_dto_collection_query_parameters(1);
  test_commission_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // commission_dto_collection_query_parameters_MAIN
#endif // commission_dto_collection_query_parameters_TEST
