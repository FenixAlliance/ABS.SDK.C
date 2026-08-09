#ifndef security_role_dto_collection_query_parameters_TEST
#define security_role_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_role_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_role_dto_collection_query_parameters.h"
security_role_dto_collection_query_parameters_t* instantiate_security_role_dto_collection_query_parameters(int include_optional);



security_role_dto_collection_query_parameters_t* instantiate_security_role_dto_collection_query_parameters(int include_optional) {
  security_role_dto_collection_query_parameters_t* security_role_dto_collection_query_parameters = NULL;
  if (include_optional) {
    security_role_dto_collection_query_parameters = security_role_dto_collection_query_parameters_create(
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
    security_role_dto_collection_query_parameters = security_role_dto_collection_query_parameters_create(
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

  return security_role_dto_collection_query_parameters;
}


#ifdef security_role_dto_collection_query_parameters_MAIN

void test_security_role_dto_collection_query_parameters(int include_optional) {
    security_role_dto_collection_query_parameters_t* security_role_dto_collection_query_parameters_1 = instantiate_security_role_dto_collection_query_parameters(include_optional);

	cJSON* jsonsecurity_role_dto_collection_query_parameters_1 = security_role_dto_collection_query_parameters_convertToJSON(security_role_dto_collection_query_parameters_1);
	printf("security_role_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonsecurity_role_dto_collection_query_parameters_1));
	security_role_dto_collection_query_parameters_t* security_role_dto_collection_query_parameters_2 = security_role_dto_collection_query_parameters_parseFromJSON(jsonsecurity_role_dto_collection_query_parameters_1);
	cJSON* jsonsecurity_role_dto_collection_query_parameters_2 = security_role_dto_collection_query_parameters_convertToJSON(security_role_dto_collection_query_parameters_2);
	printf("repeating security_role_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonsecurity_role_dto_collection_query_parameters_2));
}

int main() {
  test_security_role_dto_collection_query_parameters(1);
  test_security_role_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_role_dto_collection_query_parameters_MAIN
#endif // security_role_dto_collection_query_parameters_TEST
