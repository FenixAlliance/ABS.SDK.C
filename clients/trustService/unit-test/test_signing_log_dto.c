#ifndef signing_log_dto_TEST
#define signing_log_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_log_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_log_dto.h"
signing_log_dto_t* instantiate_signing_log_dto(int include_optional);



signing_log_dto_t* instantiate_signing_log_dto(int include_optional) {
  signing_log_dto_t* signing_log_dto = NULL;
  if (include_optional) {
    signing_log_dto = signing_log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      trustservice_signing_log_dto_LOGTYPE_Continue,
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_log_dto_OPERATIONTYPE_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    signing_log_dto = signing_log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      trustservice_signing_log_dto_LOGTYPE_Continue,
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_log_dto_OPERATIONTYPE_Unknown,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return signing_log_dto;
}


#ifdef signing_log_dto_MAIN

void test_signing_log_dto(int include_optional) {
    signing_log_dto_t* signing_log_dto_1 = instantiate_signing_log_dto(include_optional);

	cJSON* jsonsigning_log_dto_1 = signing_log_dto_convertToJSON(signing_log_dto_1);
	printf("signing_log_dto :\n%s\n", cJSON_Print(jsonsigning_log_dto_1));
	signing_log_dto_t* signing_log_dto_2 = signing_log_dto_parseFromJSON(jsonsigning_log_dto_1);
	cJSON* jsonsigning_log_dto_2 = signing_log_dto_convertToJSON(signing_log_dto_2);
	printf("repeating signing_log_dto:\n%s\n", cJSON_Print(jsonsigning_log_dto_2));
}

int main() {
  test_signing_log_dto(1);
  test_signing_log_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_log_dto_MAIN
#endif // signing_log_dto_TEST
