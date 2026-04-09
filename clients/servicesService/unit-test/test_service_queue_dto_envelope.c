#ifndef service_queue_dto_envelope_TEST
#define service_queue_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_queue_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_queue_dto_envelope.h"
service_queue_dto_envelope_t* instantiate_service_queue_dto_envelope(int include_optional);

#include "test_service_queue_dto.c"


service_queue_dto_envelope_t* instantiate_service_queue_dto_envelope(int include_optional) {
  service_queue_dto_envelope_t* service_queue_dto_envelope = NULL;
  if (include_optional) {
    service_queue_dto_envelope = service_queue_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_service_queue_dto(0)
    );
  } else {
    service_queue_dto_envelope = service_queue_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return service_queue_dto_envelope;
}


#ifdef service_queue_dto_envelope_MAIN

void test_service_queue_dto_envelope(int include_optional) {
    service_queue_dto_envelope_t* service_queue_dto_envelope_1 = instantiate_service_queue_dto_envelope(include_optional);

	cJSON* jsonservice_queue_dto_envelope_1 = service_queue_dto_envelope_convertToJSON(service_queue_dto_envelope_1);
	printf("service_queue_dto_envelope :\n%s\n", cJSON_Print(jsonservice_queue_dto_envelope_1));
	service_queue_dto_envelope_t* service_queue_dto_envelope_2 = service_queue_dto_envelope_parseFromJSON(jsonservice_queue_dto_envelope_1);
	cJSON* jsonservice_queue_dto_envelope_2 = service_queue_dto_envelope_convertToJSON(service_queue_dto_envelope_2);
	printf("repeating service_queue_dto_envelope:\n%s\n", cJSON_Print(jsonservice_queue_dto_envelope_2));
}

int main() {
  test_service_queue_dto_envelope(1);
  test_service_queue_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_queue_dto_envelope_MAIN
#endif // service_queue_dto_envelope_TEST
