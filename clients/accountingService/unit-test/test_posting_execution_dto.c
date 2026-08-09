#ifndef posting_execution_dto_TEST
#define posting_execution_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define posting_execution_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/posting_execution_dto.h"
posting_execution_dto_t* instantiate_posting_execution_dto(int include_optional);



posting_execution_dto_t* instantiate_posting_execution_dto(int include_optional) {
  posting_execution_dto_t* posting_execution_dto = NULL;
  if (include_optional) {
    posting_execution_dto = posting_execution_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_posting_execution_dto_STATUS_Received,
      accountingservice_posting_execution_dto_FAILUREKIND_UnknownOperation,
      "0",
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      accountingservice_posting_execution_dto_FAILURECLASS_Retryable
    );
  } else {
    posting_execution_dto = posting_execution_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      accountingservice_posting_execution_dto_STATUS_Received,
      accountingservice_posting_execution_dto_FAILUREKIND_UnknownOperation,
      "0",
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      accountingservice_posting_execution_dto_FAILURECLASS_Retryable
    );
  }

  return posting_execution_dto;
}


#ifdef posting_execution_dto_MAIN

void test_posting_execution_dto(int include_optional) {
    posting_execution_dto_t* posting_execution_dto_1 = instantiate_posting_execution_dto(include_optional);

	cJSON* jsonposting_execution_dto_1 = posting_execution_dto_convertToJSON(posting_execution_dto_1);
	printf("posting_execution_dto :\n%s\n", cJSON_Print(jsonposting_execution_dto_1));
	posting_execution_dto_t* posting_execution_dto_2 = posting_execution_dto_parseFromJSON(jsonposting_execution_dto_1);
	cJSON* jsonposting_execution_dto_2 = posting_execution_dto_convertToJSON(posting_execution_dto_2);
	printf("repeating posting_execution_dto:\n%s\n", cJSON_Print(jsonposting_execution_dto_2));
}

int main() {
  test_posting_execution_dto(1);
  test_posting_execution_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // posting_execution_dto_MAIN
#endif // posting_execution_dto_TEST
