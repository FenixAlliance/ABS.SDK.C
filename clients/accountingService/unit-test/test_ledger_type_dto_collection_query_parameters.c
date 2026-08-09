#ifndef ledger_type_dto_collection_query_parameters_TEST
#define ledger_type_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ledger_type_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ledger_type_dto_collection_query_parameters.h"
ledger_type_dto_collection_query_parameters_t* instantiate_ledger_type_dto_collection_query_parameters(int include_optional);



ledger_type_dto_collection_query_parameters_t* instantiate_ledger_type_dto_collection_query_parameters(int include_optional) {
  ledger_type_dto_collection_query_parameters_t* ledger_type_dto_collection_query_parameters = NULL;
  if (include_optional) {
    ledger_type_dto_collection_query_parameters = ledger_type_dto_collection_query_parameters_create(
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
    ledger_type_dto_collection_query_parameters = ledger_type_dto_collection_query_parameters_create(
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

  return ledger_type_dto_collection_query_parameters;
}


#ifdef ledger_type_dto_collection_query_parameters_MAIN

void test_ledger_type_dto_collection_query_parameters(int include_optional) {
    ledger_type_dto_collection_query_parameters_t* ledger_type_dto_collection_query_parameters_1 = instantiate_ledger_type_dto_collection_query_parameters(include_optional);

	cJSON* jsonledger_type_dto_collection_query_parameters_1 = ledger_type_dto_collection_query_parameters_convertToJSON(ledger_type_dto_collection_query_parameters_1);
	printf("ledger_type_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonledger_type_dto_collection_query_parameters_1));
	ledger_type_dto_collection_query_parameters_t* ledger_type_dto_collection_query_parameters_2 = ledger_type_dto_collection_query_parameters_parseFromJSON(jsonledger_type_dto_collection_query_parameters_1);
	cJSON* jsonledger_type_dto_collection_query_parameters_2 = ledger_type_dto_collection_query_parameters_convertToJSON(ledger_type_dto_collection_query_parameters_2);
	printf("repeating ledger_type_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonledger_type_dto_collection_query_parameters_2));
}

int main() {
  test_ledger_type_dto_collection_query_parameters(1);
  test_ledger_type_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // ledger_type_dto_collection_query_parameters_MAIN
#endif // ledger_type_dto_collection_query_parameters_TEST
