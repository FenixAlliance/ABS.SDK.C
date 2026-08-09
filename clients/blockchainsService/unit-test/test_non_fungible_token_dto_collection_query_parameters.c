#ifndef non_fungible_token_dto_collection_query_parameters_TEST
#define non_fungible_token_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define non_fungible_token_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/non_fungible_token_dto_collection_query_parameters.h"
non_fungible_token_dto_collection_query_parameters_t* instantiate_non_fungible_token_dto_collection_query_parameters(int include_optional);



non_fungible_token_dto_collection_query_parameters_t* instantiate_non_fungible_token_dto_collection_query_parameters(int include_optional) {
  non_fungible_token_dto_collection_query_parameters_t* non_fungible_token_dto_collection_query_parameters = NULL;
  if (include_optional) {
    non_fungible_token_dto_collection_query_parameters = non_fungible_token_dto_collection_query_parameters_create(
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
    non_fungible_token_dto_collection_query_parameters = non_fungible_token_dto_collection_query_parameters_create(
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

  return non_fungible_token_dto_collection_query_parameters;
}


#ifdef non_fungible_token_dto_collection_query_parameters_MAIN

void test_non_fungible_token_dto_collection_query_parameters(int include_optional) {
    non_fungible_token_dto_collection_query_parameters_t* non_fungible_token_dto_collection_query_parameters_1 = instantiate_non_fungible_token_dto_collection_query_parameters(include_optional);

	cJSON* jsonnon_fungible_token_dto_collection_query_parameters_1 = non_fungible_token_dto_collection_query_parameters_convertToJSON(non_fungible_token_dto_collection_query_parameters_1);
	printf("non_fungible_token_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_collection_query_parameters_1));
	non_fungible_token_dto_collection_query_parameters_t* non_fungible_token_dto_collection_query_parameters_2 = non_fungible_token_dto_collection_query_parameters_parseFromJSON(jsonnon_fungible_token_dto_collection_query_parameters_1);
	cJSON* jsonnon_fungible_token_dto_collection_query_parameters_2 = non_fungible_token_dto_collection_query_parameters_convertToJSON(non_fungible_token_dto_collection_query_parameters_2);
	printf("repeating non_fungible_token_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_collection_query_parameters_2));
}

int main() {
  test_non_fungible_token_dto_collection_query_parameters(1);
  test_non_fungible_token_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // non_fungible_token_dto_collection_query_parameters_MAIN
#endif // non_fungible_token_dto_collection_query_parameters_TEST
