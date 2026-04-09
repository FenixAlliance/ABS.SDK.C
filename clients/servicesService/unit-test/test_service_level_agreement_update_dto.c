#ifndef service_level_agreement_update_dto_TEST
#define service_level_agreement_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_level_agreement_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_level_agreement_update_dto.h"
service_level_agreement_update_dto_t* instantiate_service_level_agreement_update_dto(int include_optional);



service_level_agreement_update_dto_t* instantiate_service_level_agreement_update_dto(int include_optional) {
  service_level_agreement_update_dto_t* service_level_agreement_update_dto = NULL;
  if (include_optional) {
    service_level_agreement_update_dto = service_level_agreement_update_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    service_level_agreement_update_dto = service_level_agreement_update_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return service_level_agreement_update_dto;
}


#ifdef service_level_agreement_update_dto_MAIN

void test_service_level_agreement_update_dto(int include_optional) {
    service_level_agreement_update_dto_t* service_level_agreement_update_dto_1 = instantiate_service_level_agreement_update_dto(include_optional);

	cJSON* jsonservice_level_agreement_update_dto_1 = service_level_agreement_update_dto_convertToJSON(service_level_agreement_update_dto_1);
	printf("service_level_agreement_update_dto :\n%s\n", cJSON_Print(jsonservice_level_agreement_update_dto_1));
	service_level_agreement_update_dto_t* service_level_agreement_update_dto_2 = service_level_agreement_update_dto_parseFromJSON(jsonservice_level_agreement_update_dto_1);
	cJSON* jsonservice_level_agreement_update_dto_2 = service_level_agreement_update_dto_convertToJSON(service_level_agreement_update_dto_2);
	printf("repeating service_level_agreement_update_dto:\n%s\n", cJSON_Print(jsonservice_level_agreement_update_dto_2));
}

int main() {
  test_service_level_agreement_update_dto(1);
  test_service_level_agreement_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_level_agreement_update_dto_MAIN
#endif // service_level_agreement_update_dto_TEST
