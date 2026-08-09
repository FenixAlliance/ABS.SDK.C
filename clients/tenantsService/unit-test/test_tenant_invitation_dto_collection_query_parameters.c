#ifndef tenant_invitation_dto_collection_query_parameters_TEST
#define tenant_invitation_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tenant_invitation_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tenant_invitation_dto_collection_query_parameters.h"
tenant_invitation_dto_collection_query_parameters_t* instantiate_tenant_invitation_dto_collection_query_parameters(int include_optional);



tenant_invitation_dto_collection_query_parameters_t* instantiate_tenant_invitation_dto_collection_query_parameters(int include_optional) {
  tenant_invitation_dto_collection_query_parameters_t* tenant_invitation_dto_collection_query_parameters = NULL;
  if (include_optional) {
    tenant_invitation_dto_collection_query_parameters = tenant_invitation_dto_collection_query_parameters_create(
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
    tenant_invitation_dto_collection_query_parameters = tenant_invitation_dto_collection_query_parameters_create(
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

  return tenant_invitation_dto_collection_query_parameters;
}


#ifdef tenant_invitation_dto_collection_query_parameters_MAIN

void test_tenant_invitation_dto_collection_query_parameters(int include_optional) {
    tenant_invitation_dto_collection_query_parameters_t* tenant_invitation_dto_collection_query_parameters_1 = instantiate_tenant_invitation_dto_collection_query_parameters(include_optional);

	cJSON* jsontenant_invitation_dto_collection_query_parameters_1 = tenant_invitation_dto_collection_query_parameters_convertToJSON(tenant_invitation_dto_collection_query_parameters_1);
	printf("tenant_invitation_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontenant_invitation_dto_collection_query_parameters_1));
	tenant_invitation_dto_collection_query_parameters_t* tenant_invitation_dto_collection_query_parameters_2 = tenant_invitation_dto_collection_query_parameters_parseFromJSON(jsontenant_invitation_dto_collection_query_parameters_1);
	cJSON* jsontenant_invitation_dto_collection_query_parameters_2 = tenant_invitation_dto_collection_query_parameters_convertToJSON(tenant_invitation_dto_collection_query_parameters_2);
	printf("repeating tenant_invitation_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontenant_invitation_dto_collection_query_parameters_2));
}

int main() {
  test_tenant_invitation_dto_collection_query_parameters(1);
  test_tenant_invitation_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // tenant_invitation_dto_collection_query_parameters_MAIN
#endif // tenant_invitation_dto_collection_query_parameters_TEST
