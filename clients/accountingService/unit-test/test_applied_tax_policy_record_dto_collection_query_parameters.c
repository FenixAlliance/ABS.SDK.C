#ifndef applied_tax_policy_record_dto_collection_query_parameters_TEST
#define applied_tax_policy_record_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define applied_tax_policy_record_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/applied_tax_policy_record_dto_collection_query_parameters.h"
applied_tax_policy_record_dto_collection_query_parameters_t* instantiate_applied_tax_policy_record_dto_collection_query_parameters(int include_optional);



applied_tax_policy_record_dto_collection_query_parameters_t* instantiate_applied_tax_policy_record_dto_collection_query_parameters(int include_optional) {
  applied_tax_policy_record_dto_collection_query_parameters_t* applied_tax_policy_record_dto_collection_query_parameters = NULL;
  if (include_optional) {
    applied_tax_policy_record_dto_collection_query_parameters = applied_tax_policy_record_dto_collection_query_parameters_create(
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
    applied_tax_policy_record_dto_collection_query_parameters = applied_tax_policy_record_dto_collection_query_parameters_create(
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

  return applied_tax_policy_record_dto_collection_query_parameters;
}


#ifdef applied_tax_policy_record_dto_collection_query_parameters_MAIN

void test_applied_tax_policy_record_dto_collection_query_parameters(int include_optional) {
    applied_tax_policy_record_dto_collection_query_parameters_t* applied_tax_policy_record_dto_collection_query_parameters_1 = instantiate_applied_tax_policy_record_dto_collection_query_parameters(include_optional);

	cJSON* jsonapplied_tax_policy_record_dto_collection_query_parameters_1 = applied_tax_policy_record_dto_collection_query_parameters_convertToJSON(applied_tax_policy_record_dto_collection_query_parameters_1);
	printf("applied_tax_policy_record_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonapplied_tax_policy_record_dto_collection_query_parameters_1));
	applied_tax_policy_record_dto_collection_query_parameters_t* applied_tax_policy_record_dto_collection_query_parameters_2 = applied_tax_policy_record_dto_collection_query_parameters_parseFromJSON(jsonapplied_tax_policy_record_dto_collection_query_parameters_1);
	cJSON* jsonapplied_tax_policy_record_dto_collection_query_parameters_2 = applied_tax_policy_record_dto_collection_query_parameters_convertToJSON(applied_tax_policy_record_dto_collection_query_parameters_2);
	printf("repeating applied_tax_policy_record_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonapplied_tax_policy_record_dto_collection_query_parameters_2));
}

int main() {
  test_applied_tax_policy_record_dto_collection_query_parameters(1);
  test_applied_tax_policy_record_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // applied_tax_policy_record_dto_collection_query_parameters_MAIN
#endif // applied_tax_policy_record_dto_collection_query_parameters_TEST
