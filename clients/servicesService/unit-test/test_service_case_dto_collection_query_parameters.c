#ifndef service_case_dto_collection_query_parameters_TEST
#define service_case_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_case_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_case_dto_collection_query_parameters.h"
service_case_dto_collection_query_parameters_t* instantiate_service_case_dto_collection_query_parameters(int include_optional);



service_case_dto_collection_query_parameters_t* instantiate_service_case_dto_collection_query_parameters(int include_optional) {
  service_case_dto_collection_query_parameters_t* service_case_dto_collection_query_parameters = NULL;
  if (include_optional) {
    service_case_dto_collection_query_parameters = service_case_dto_collection_query_parameters_create(
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
    service_case_dto_collection_query_parameters = service_case_dto_collection_query_parameters_create(
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

  return service_case_dto_collection_query_parameters;
}


#ifdef service_case_dto_collection_query_parameters_MAIN

void test_service_case_dto_collection_query_parameters(int include_optional) {
    service_case_dto_collection_query_parameters_t* service_case_dto_collection_query_parameters_1 = instantiate_service_case_dto_collection_query_parameters(include_optional);

	cJSON* jsonservice_case_dto_collection_query_parameters_1 = service_case_dto_collection_query_parameters_convertToJSON(service_case_dto_collection_query_parameters_1);
	printf("service_case_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonservice_case_dto_collection_query_parameters_1));
	service_case_dto_collection_query_parameters_t* service_case_dto_collection_query_parameters_2 = service_case_dto_collection_query_parameters_parseFromJSON(jsonservice_case_dto_collection_query_parameters_1);
	cJSON* jsonservice_case_dto_collection_query_parameters_2 = service_case_dto_collection_query_parameters_convertToJSON(service_case_dto_collection_query_parameters_2);
	printf("repeating service_case_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonservice_case_dto_collection_query_parameters_2));
}

int main() {
  test_service_case_dto_collection_query_parameters(1);
  test_service_case_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_case_dto_collection_query_parameters_MAIN
#endif // service_case_dto_collection_query_parameters_TEST
