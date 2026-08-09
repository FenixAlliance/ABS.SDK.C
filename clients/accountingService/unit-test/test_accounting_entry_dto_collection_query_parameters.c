#ifndef accounting_entry_dto_collection_query_parameters_TEST
#define accounting_entry_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accounting_entry_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accounting_entry_dto_collection_query_parameters.h"
accounting_entry_dto_collection_query_parameters_t* instantiate_accounting_entry_dto_collection_query_parameters(int include_optional);



accounting_entry_dto_collection_query_parameters_t* instantiate_accounting_entry_dto_collection_query_parameters(int include_optional) {
  accounting_entry_dto_collection_query_parameters_t* accounting_entry_dto_collection_query_parameters = NULL;
  if (include_optional) {
    accounting_entry_dto_collection_query_parameters = accounting_entry_dto_collection_query_parameters_create(
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
    accounting_entry_dto_collection_query_parameters = accounting_entry_dto_collection_query_parameters_create(
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

  return accounting_entry_dto_collection_query_parameters;
}


#ifdef accounting_entry_dto_collection_query_parameters_MAIN

void test_accounting_entry_dto_collection_query_parameters(int include_optional) {
    accounting_entry_dto_collection_query_parameters_t* accounting_entry_dto_collection_query_parameters_1 = instantiate_accounting_entry_dto_collection_query_parameters(include_optional);

	cJSON* jsonaccounting_entry_dto_collection_query_parameters_1 = accounting_entry_dto_collection_query_parameters_convertToJSON(accounting_entry_dto_collection_query_parameters_1);
	printf("accounting_entry_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonaccounting_entry_dto_collection_query_parameters_1));
	accounting_entry_dto_collection_query_parameters_t* accounting_entry_dto_collection_query_parameters_2 = accounting_entry_dto_collection_query_parameters_parseFromJSON(jsonaccounting_entry_dto_collection_query_parameters_1);
	cJSON* jsonaccounting_entry_dto_collection_query_parameters_2 = accounting_entry_dto_collection_query_parameters_convertToJSON(accounting_entry_dto_collection_query_parameters_2);
	printf("repeating accounting_entry_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonaccounting_entry_dto_collection_query_parameters_2));
}

int main() {
  test_accounting_entry_dto_collection_query_parameters(1);
  test_accounting_entry_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // accounting_entry_dto_collection_query_parameters_MAIN
#endif // accounting_entry_dto_collection_query_parameters_TEST
