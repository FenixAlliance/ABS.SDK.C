#ifndef account_dto_collection_query_parameters_TEST
#define account_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_dto_collection_query_parameters.h"
account_dto_collection_query_parameters_t* instantiate_account_dto_collection_query_parameters(int include_optional);



account_dto_collection_query_parameters_t* instantiate_account_dto_collection_query_parameters(int include_optional) {
  account_dto_collection_query_parameters_t* account_dto_collection_query_parameters = NULL;
  if (include_optional) {
    account_dto_collection_query_parameters = account_dto_collection_query_parameters_create(
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
    account_dto_collection_query_parameters = account_dto_collection_query_parameters_create(
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

  return account_dto_collection_query_parameters;
}


#ifdef account_dto_collection_query_parameters_MAIN

void test_account_dto_collection_query_parameters(int include_optional) {
    account_dto_collection_query_parameters_t* account_dto_collection_query_parameters_1 = instantiate_account_dto_collection_query_parameters(include_optional);

	cJSON* jsonaccount_dto_collection_query_parameters_1 = account_dto_collection_query_parameters_convertToJSON(account_dto_collection_query_parameters_1);
	printf("account_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonaccount_dto_collection_query_parameters_1));
	account_dto_collection_query_parameters_t* account_dto_collection_query_parameters_2 = account_dto_collection_query_parameters_parseFromJSON(jsonaccount_dto_collection_query_parameters_1);
	cJSON* jsonaccount_dto_collection_query_parameters_2 = account_dto_collection_query_parameters_convertToJSON(account_dto_collection_query_parameters_2);
	printf("repeating account_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonaccount_dto_collection_query_parameters_2));
}

int main() {
  test_account_dto_collection_query_parameters(1);
  test_account_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_dto_collection_query_parameters_MAIN
#endif // account_dto_collection_query_parameters_TEST
