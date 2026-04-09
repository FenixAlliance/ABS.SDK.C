#ifndef service_case_dto_TEST
#define service_case_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_case_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_case_dto.h"
service_case_dto_t* instantiate_service_case_dto(int include_optional);



service_case_dto_t* instantiate_service_case_dto(int include_optional) {
  service_case_dto_t* service_case_dto = NULL;
  if (include_optional) {
    service_case_dto = service_case_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    service_case_dto = service_case_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return service_case_dto;
}


#ifdef service_case_dto_MAIN

void test_service_case_dto(int include_optional) {
    service_case_dto_t* service_case_dto_1 = instantiate_service_case_dto(include_optional);

	cJSON* jsonservice_case_dto_1 = service_case_dto_convertToJSON(service_case_dto_1);
	printf("service_case_dto :\n%s\n", cJSON_Print(jsonservice_case_dto_1));
	service_case_dto_t* service_case_dto_2 = service_case_dto_parseFromJSON(jsonservice_case_dto_1);
	cJSON* jsonservice_case_dto_2 = service_case_dto_convertToJSON(service_case_dto_2);
	printf("repeating service_case_dto:\n%s\n", cJSON_Print(jsonservice_case_dto_2));
}

int main() {
  test_service_case_dto(1);
  test_service_case_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_case_dto_MAIN
#endif // service_case_dto_TEST
