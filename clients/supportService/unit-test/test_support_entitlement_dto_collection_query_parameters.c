#ifndef support_entitlement_dto_collection_query_parameters_TEST
#define support_entitlement_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define support_entitlement_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/support_entitlement_dto_collection_query_parameters.h"
support_entitlement_dto_collection_query_parameters_t* instantiate_support_entitlement_dto_collection_query_parameters(int include_optional);



support_entitlement_dto_collection_query_parameters_t* instantiate_support_entitlement_dto_collection_query_parameters(int include_optional) {
  support_entitlement_dto_collection_query_parameters_t* support_entitlement_dto_collection_query_parameters = NULL;
  if (include_optional) {
    support_entitlement_dto_collection_query_parameters = support_entitlement_dto_collection_query_parameters_create(
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
    support_entitlement_dto_collection_query_parameters = support_entitlement_dto_collection_query_parameters_create(
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

  return support_entitlement_dto_collection_query_parameters;
}


#ifdef support_entitlement_dto_collection_query_parameters_MAIN

void test_support_entitlement_dto_collection_query_parameters(int include_optional) {
    support_entitlement_dto_collection_query_parameters_t* support_entitlement_dto_collection_query_parameters_1 = instantiate_support_entitlement_dto_collection_query_parameters(include_optional);

	cJSON* jsonsupport_entitlement_dto_collection_query_parameters_1 = support_entitlement_dto_collection_query_parameters_convertToJSON(support_entitlement_dto_collection_query_parameters_1);
	printf("support_entitlement_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsupport_entitlement_dto_collection_query_parameters_1));
	support_entitlement_dto_collection_query_parameters_t* support_entitlement_dto_collection_query_parameters_2 = support_entitlement_dto_collection_query_parameters_parseFromJSON(jsonsupport_entitlement_dto_collection_query_parameters_1);
	cJSON* jsonsupport_entitlement_dto_collection_query_parameters_2 = support_entitlement_dto_collection_query_parameters_convertToJSON(support_entitlement_dto_collection_query_parameters_2);
	printf("repeating support_entitlement_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsupport_entitlement_dto_collection_query_parameters_2));
}

int main() {
  test_support_entitlement_dto_collection_query_parameters(1);
  test_support_entitlement_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // support_entitlement_dto_collection_query_parameters_MAIN
#endif // support_entitlement_dto_collection_query_parameters_TEST
