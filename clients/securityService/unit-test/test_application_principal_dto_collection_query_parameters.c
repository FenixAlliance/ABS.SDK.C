#ifndef application_principal_dto_collection_query_parameters_TEST
#define application_principal_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define application_principal_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/application_principal_dto_collection_query_parameters.h"
application_principal_dto_collection_query_parameters_t* instantiate_application_principal_dto_collection_query_parameters(int include_optional);



application_principal_dto_collection_query_parameters_t* instantiate_application_principal_dto_collection_query_parameters(int include_optional) {
  application_principal_dto_collection_query_parameters_t* application_principal_dto_collection_query_parameters = NULL;
  if (include_optional) {
    application_principal_dto_collection_query_parameters = application_principal_dto_collection_query_parameters_create(
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
    application_principal_dto_collection_query_parameters = application_principal_dto_collection_query_parameters_create(
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

  return application_principal_dto_collection_query_parameters;
}


#ifdef application_principal_dto_collection_query_parameters_MAIN

void test_application_principal_dto_collection_query_parameters(int include_optional) {
    application_principal_dto_collection_query_parameters_t* application_principal_dto_collection_query_parameters_1 = instantiate_application_principal_dto_collection_query_parameters(include_optional);

	cJSON* jsonapplication_principal_dto_collection_query_parameters_1 = application_principal_dto_collection_query_parameters_convertToJSON(application_principal_dto_collection_query_parameters_1);
	printf("application_principal_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonapplication_principal_dto_collection_query_parameters_1));
	application_principal_dto_collection_query_parameters_t* application_principal_dto_collection_query_parameters_2 = application_principal_dto_collection_query_parameters_parseFromJSON(jsonapplication_principal_dto_collection_query_parameters_1);
	cJSON* jsonapplication_principal_dto_collection_query_parameters_2 = application_principal_dto_collection_query_parameters_convertToJSON(application_principal_dto_collection_query_parameters_2);
	printf("repeating application_principal_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonapplication_principal_dto_collection_query_parameters_2));
}

int main() {
  test_application_principal_dto_collection_query_parameters(1);
  test_application_principal_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // application_principal_dto_collection_query_parameters_MAIN
#endif // application_principal_dto_collection_query_parameters_TEST
