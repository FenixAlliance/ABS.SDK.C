#ifndef signing_request_dto_TEST
#define signing_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_request_dto.h"
signing_request_dto_t* instantiate_signing_request_dto(int include_optional);



signing_request_dto_t* instantiate_signing_request_dto(int include_optional) {
  signing_request_dto_t* signing_request_dto = NULL;
  if (include_optional) {
    signing_request_dto = signing_request_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_request_dto_STATUS_Draft,
      trustservice_signing_request_dto_ROUTINGMODE_Parallel,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    signing_request_dto = signing_request_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_request_dto_STATUS_Draft,
      trustservice_signing_request_dto_ROUTINGMODE_Parallel,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return signing_request_dto;
}


#ifdef signing_request_dto_MAIN

void test_signing_request_dto(int include_optional) {
    signing_request_dto_t* signing_request_dto_1 = instantiate_signing_request_dto(include_optional);

	cJSON* jsonsigning_request_dto_1 = signing_request_dto_convertToJSON(signing_request_dto_1);
	printf("signing_request_dto :\n%s\n", cJSON_Print(jsonsigning_request_dto_1));
	signing_request_dto_t* signing_request_dto_2 = signing_request_dto_parseFromJSON(jsonsigning_request_dto_1);
	cJSON* jsonsigning_request_dto_2 = signing_request_dto_convertToJSON(signing_request_dto_2);
	printf("repeating signing_request_dto:\n%s\n", cJSON_Print(jsonsigning_request_dto_2));
}

int main() {
  test_signing_request_dto(1);
  test_signing_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_request_dto_MAIN
#endif // signing_request_dto_TEST
