#ifndef log_dto_TEST
#define log_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define log_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/log_dto.h"
log_dto_t* instantiate_log_dto(int include_optional);



log_dto_t* instantiate_log_dto(int include_optional) {
  log_dto_t* log_dto = NULL;
  if (include_optional) {
    log_dto = log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      securityservice_log_dto_LOGTYPE_Continue,
      "0"
    );
  } else {
    log_dto = log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      securityservice_log_dto_LOGTYPE_Continue,
      "0"
    );
  }

  return log_dto;
}


#ifdef log_dto_MAIN

void test_log_dto(int include_optional) {
    log_dto_t* log_dto_1 = instantiate_log_dto(include_optional);

	cJSON* jsonlog_dto_1 = log_dto_convertToJSON(log_dto_1);
	printf("log_dto :\n%s\n", cJSON_Print(jsonlog_dto_1));
	log_dto_t* log_dto_2 = log_dto_parseFromJSON(jsonlog_dto_1);
	cJSON* jsonlog_dto_2 = log_dto_convertToJSON(log_dto_2);
	printf("repeating log_dto:\n%s\n", cJSON_Print(jsonlog_dto_2));
}

int main() {
  test_log_dto(1);
  test_log_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // log_dto_MAIN
#endif // log_dto_TEST
