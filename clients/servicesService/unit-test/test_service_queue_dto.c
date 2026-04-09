#ifndef service_queue_dto_TEST
#define service_queue_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_queue_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_queue_dto.h"
service_queue_dto_t* instantiate_service_queue_dto(int include_optional);



service_queue_dto_t* instantiate_service_queue_dto(int include_optional) {
  service_queue_dto_t* service_queue_dto = NULL;
  if (include_optional) {
    service_queue_dto = service_queue_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    service_queue_dto = service_queue_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return service_queue_dto;
}


#ifdef service_queue_dto_MAIN

void test_service_queue_dto(int include_optional) {
    service_queue_dto_t* service_queue_dto_1 = instantiate_service_queue_dto(include_optional);

	cJSON* jsonservice_queue_dto_1 = service_queue_dto_convertToJSON(service_queue_dto_1);
	printf("service_queue_dto :\n%s\n", cJSON_Print(jsonservice_queue_dto_1));
	service_queue_dto_t* service_queue_dto_2 = service_queue_dto_parseFromJSON(jsonservice_queue_dto_1);
	cJSON* jsonservice_queue_dto_2 = service_queue_dto_convertToJSON(service_queue_dto_2);
	printf("repeating service_queue_dto:\n%s\n", cJSON_Print(jsonservice_queue_dto_2));
}

int main() {
  test_service_queue_dto(1);
  test_service_queue_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_queue_dto_MAIN
#endif // service_queue_dto_TEST
