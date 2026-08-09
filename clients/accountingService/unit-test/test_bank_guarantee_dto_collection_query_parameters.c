#ifndef bank_guarantee_dto_collection_query_parameters_TEST
#define bank_guarantee_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_guarantee_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_guarantee_dto_collection_query_parameters.h"
bank_guarantee_dto_collection_query_parameters_t* instantiate_bank_guarantee_dto_collection_query_parameters(int include_optional);



bank_guarantee_dto_collection_query_parameters_t* instantiate_bank_guarantee_dto_collection_query_parameters(int include_optional) {
  bank_guarantee_dto_collection_query_parameters_t* bank_guarantee_dto_collection_query_parameters = NULL;
  if (include_optional) {
    bank_guarantee_dto_collection_query_parameters = bank_guarantee_dto_collection_query_parameters_create(
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
    bank_guarantee_dto_collection_query_parameters = bank_guarantee_dto_collection_query_parameters_create(
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

  return bank_guarantee_dto_collection_query_parameters;
}


#ifdef bank_guarantee_dto_collection_query_parameters_MAIN

void test_bank_guarantee_dto_collection_query_parameters(int include_optional) {
    bank_guarantee_dto_collection_query_parameters_t* bank_guarantee_dto_collection_query_parameters_1 = instantiate_bank_guarantee_dto_collection_query_parameters(include_optional);

	cJSON* jsonbank_guarantee_dto_collection_query_parameters_1 = bank_guarantee_dto_collection_query_parameters_convertToJSON(bank_guarantee_dto_collection_query_parameters_1);
	printf("bank_guarantee_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonbank_guarantee_dto_collection_query_parameters_1));
	bank_guarantee_dto_collection_query_parameters_t* bank_guarantee_dto_collection_query_parameters_2 = bank_guarantee_dto_collection_query_parameters_parseFromJSON(jsonbank_guarantee_dto_collection_query_parameters_1);
	cJSON* jsonbank_guarantee_dto_collection_query_parameters_2 = bank_guarantee_dto_collection_query_parameters_convertToJSON(bank_guarantee_dto_collection_query_parameters_2);
	printf("repeating bank_guarantee_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonbank_guarantee_dto_collection_query_parameters_2));
}

int main() {
  test_bank_guarantee_dto_collection_query_parameters(1);
  test_bank_guarantee_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_guarantee_dto_collection_query_parameters_MAIN
#endif // bank_guarantee_dto_collection_query_parameters_TEST
