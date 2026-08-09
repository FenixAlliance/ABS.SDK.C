#ifndef airway_bill_dto_collection_query_parameters_TEST
#define airway_bill_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define airway_bill_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/airway_bill_dto_collection_query_parameters.h"
airway_bill_dto_collection_query_parameters_t* instantiate_airway_bill_dto_collection_query_parameters(int include_optional);



airway_bill_dto_collection_query_parameters_t* instantiate_airway_bill_dto_collection_query_parameters(int include_optional) {
  airway_bill_dto_collection_query_parameters_t* airway_bill_dto_collection_query_parameters = NULL;
  if (include_optional) {
    airway_bill_dto_collection_query_parameters = airway_bill_dto_collection_query_parameters_create(
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
    airway_bill_dto_collection_query_parameters = airway_bill_dto_collection_query_parameters_create(
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

  return airway_bill_dto_collection_query_parameters;
}


#ifdef airway_bill_dto_collection_query_parameters_MAIN

void test_airway_bill_dto_collection_query_parameters(int include_optional) {
    airway_bill_dto_collection_query_parameters_t* airway_bill_dto_collection_query_parameters_1 = instantiate_airway_bill_dto_collection_query_parameters(include_optional);

	cJSON* jsonairway_bill_dto_collection_query_parameters_1 = airway_bill_dto_collection_query_parameters_convertToJSON(airway_bill_dto_collection_query_parameters_1);
	printf("airway_bill_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonairway_bill_dto_collection_query_parameters_1));
	airway_bill_dto_collection_query_parameters_t* airway_bill_dto_collection_query_parameters_2 = airway_bill_dto_collection_query_parameters_parseFromJSON(jsonairway_bill_dto_collection_query_parameters_1);
	cJSON* jsonairway_bill_dto_collection_query_parameters_2 = airway_bill_dto_collection_query_parameters_convertToJSON(airway_bill_dto_collection_query_parameters_2);
	printf("repeating airway_bill_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonairway_bill_dto_collection_query_parameters_2));
}

int main() {
  test_airway_bill_dto_collection_query_parameters(1);
  test_airway_bill_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // airway_bill_dto_collection_query_parameters_MAIN
#endif // airway_bill_dto_collection_query_parameters_TEST
