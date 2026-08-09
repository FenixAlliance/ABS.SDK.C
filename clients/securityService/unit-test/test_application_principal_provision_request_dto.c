#ifndef application_principal_provision_request_dto_TEST
#define application_principal_provision_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define application_principal_provision_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/application_principal_provision_request_dto.h"
application_principal_provision_request_dto_t* instantiate_application_principal_provision_request_dto(int include_optional);



application_principal_provision_request_dto_t* instantiate_application_principal_provision_request_dto(int include_optional) {
  application_principal_provision_request_dto_t* application_principal_provision_request_dto = NULL;
  if (include_optional) {
    application_principal_provision_request_dto = application_principal_provision_request_dto_create(
      "0"
    );
  } else {
    application_principal_provision_request_dto = application_principal_provision_request_dto_create(
      "0"
    );
  }

  return application_principal_provision_request_dto;
}


#ifdef application_principal_provision_request_dto_MAIN

void test_application_principal_provision_request_dto(int include_optional) {
    application_principal_provision_request_dto_t* application_principal_provision_request_dto_1 = instantiate_application_principal_provision_request_dto(include_optional);

	cJSON* jsonapplication_principal_provision_request_dto_1 = application_principal_provision_request_dto_convertToJSON(application_principal_provision_request_dto_1);
	printf("application_principal_provision_request_dto :\n%s\n", cJSON_Print(jsonapplication_principal_provision_request_dto_1));
	application_principal_provision_request_dto_t* application_principal_provision_request_dto_2 = application_principal_provision_request_dto_parseFromJSON(jsonapplication_principal_provision_request_dto_1);
	cJSON* jsonapplication_principal_provision_request_dto_2 = application_principal_provision_request_dto_convertToJSON(application_principal_provision_request_dto_2);
	printf("repeating application_principal_provision_request_dto:\n%s\n", cJSON_Print(jsonapplication_principal_provision_request_dto_2));
}

int main() {
  test_application_principal_provision_request_dto(1);
  test_application_principal_provision_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // application_principal_provision_request_dto_MAIN
#endif // application_principal_provision_request_dto_TEST
