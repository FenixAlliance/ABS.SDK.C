#ifndef tenant_size_dto_collection_query_parameters_TEST
#define tenant_size_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_size_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_size_dto_collection_query_parameters.h"
tenant_size_dto_collection_query_parameters_t* instantiate_tenant_size_dto_collection_query_parameters(int include_optional);



tenant_size_dto_collection_query_parameters_t* instantiate_tenant_size_dto_collection_query_parameters(int include_optional) {
  tenant_size_dto_collection_query_parameters_t* tenant_size_dto_collection_query_parameters = NULL;
  if (include_optional) {
    tenant_size_dto_collection_query_parameters = tenant_size_dto_collection_query_parameters_create(
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
    tenant_size_dto_collection_query_parameters = tenant_size_dto_collection_query_parameters_create(
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

  return tenant_size_dto_collection_query_parameters;
}


#ifdef tenant_size_dto_collection_query_parameters_MAIN

void test_tenant_size_dto_collection_query_parameters(int include_optional) {
    tenant_size_dto_collection_query_parameters_t* tenant_size_dto_collection_query_parameters_1 = instantiate_tenant_size_dto_collection_query_parameters(include_optional);

	cJSON* jsontenant_size_dto_collection_query_parameters_1 = tenant_size_dto_collection_query_parameters_convertToJSON(tenant_size_dto_collection_query_parameters_1);
	printf("tenant_size_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontenant_size_dto_collection_query_parameters_1));
	tenant_size_dto_collection_query_parameters_t* tenant_size_dto_collection_query_parameters_2 = tenant_size_dto_collection_query_parameters_parseFromJSON(jsontenant_size_dto_collection_query_parameters_1);
	cJSON* jsontenant_size_dto_collection_query_parameters_2 = tenant_size_dto_collection_query_parameters_convertToJSON(tenant_size_dto_collection_query_parameters_2);
	printf("repeating tenant_size_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontenant_size_dto_collection_query_parameters_2));
}

int main() {
  test_tenant_size_dto_collection_query_parameters(1);
  test_tenant_size_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_size_dto_collection_query_parameters_MAIN
#endif // tenant_size_dto_collection_query_parameters_TEST
