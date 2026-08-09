#ifndef address_dto_collection_query_parameters_TEST
#define address_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_dto_collection_query_parameters.h"
address_dto_collection_query_parameters_t* instantiate_address_dto_collection_query_parameters(int include_optional);



address_dto_collection_query_parameters_t* instantiate_address_dto_collection_query_parameters(int include_optional) {
  address_dto_collection_query_parameters_t* address_dto_collection_query_parameters = NULL;
  if (include_optional) {
    address_dto_collection_query_parameters = address_dto_collection_query_parameters_create(
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
    address_dto_collection_query_parameters = address_dto_collection_query_parameters_create(
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

  return address_dto_collection_query_parameters;
}


#ifdef address_dto_collection_query_parameters_MAIN

void test_address_dto_collection_query_parameters(int include_optional) {
    address_dto_collection_query_parameters_t* address_dto_collection_query_parameters_1 = instantiate_address_dto_collection_query_parameters(include_optional);

	cJSON* jsonaddress_dto_collection_query_parameters_1 = address_dto_collection_query_parameters_convertToJSON(address_dto_collection_query_parameters_1);
	printf("address_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonaddress_dto_collection_query_parameters_1));
	address_dto_collection_query_parameters_t* address_dto_collection_query_parameters_2 = address_dto_collection_query_parameters_parseFromJSON(jsonaddress_dto_collection_query_parameters_1);
	cJSON* jsonaddress_dto_collection_query_parameters_2 = address_dto_collection_query_parameters_convertToJSON(address_dto_collection_query_parameters_2);
	printf("repeating address_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonaddress_dto_collection_query_parameters_2));
}

int main() {
  test_address_dto_collection_query_parameters(1);
  test_address_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_dto_collection_query_parameters_MAIN
#endif // address_dto_collection_query_parameters_TEST
