#ifndef log_dto_list_envelope_TEST
#define log_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define log_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/log_dto_list_envelope.h"
log_dto_list_envelope_t* instantiate_log_dto_list_envelope(int include_optional);



log_dto_list_envelope_t* instantiate_log_dto_list_envelope(int include_optional) {
  log_dto_list_envelope_t* log_dto_list_envelope = NULL;
  if (include_optional) {
    log_dto_list_envelope = log_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    log_dto_list_envelope = log_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return log_dto_list_envelope;
}


#ifdef log_dto_list_envelope_MAIN

void test_log_dto_list_envelope(int include_optional) {
    log_dto_list_envelope_t* log_dto_list_envelope_1 = instantiate_log_dto_list_envelope(include_optional);

	cJSON* jsonlog_dto_list_envelope_1 = log_dto_list_envelope_convertToJSON(log_dto_list_envelope_1);
	printf("log_dto_list_envelope :\n%s\n", cJSON_Print(jsonlog_dto_list_envelope_1));
	log_dto_list_envelope_t* log_dto_list_envelope_2 = log_dto_list_envelope_parseFromJSON(jsonlog_dto_list_envelope_1);
	cJSON* jsonlog_dto_list_envelope_2 = log_dto_list_envelope_convertToJSON(log_dto_list_envelope_2);
	printf("repeating log_dto_list_envelope:\n%s\n", cJSON_Print(jsonlog_dto_list_envelope_2));
}

int main() {
  test_log_dto_list_envelope(1);
  test_log_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // log_dto_list_envelope_MAIN
#endif // log_dto_list_envelope_TEST
