#ifndef support_request_dto_TEST
#define support_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define support_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/support_request_dto.h"
support_request_dto_t* instantiate_support_request_dto(int include_optional);



support_request_dto_t* instantiate_support_request_dto(int include_optional) {
  support_request_dto_t* support_request_dto = NULL;
  if (include_optional) {
    support_request_dto = support_request_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    support_request_dto = support_request_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return support_request_dto;
}


#ifdef support_request_dto_MAIN

void test_support_request_dto(int include_optional) {
    support_request_dto_t* support_request_dto_1 = instantiate_support_request_dto(include_optional);

	cJSON* jsonsupport_request_dto_1 = support_request_dto_convertToJSON(support_request_dto_1);
	printf("support_request_dto :\n%s\n", cJSON_Print(jsonsupport_request_dto_1));
	support_request_dto_t* support_request_dto_2 = support_request_dto_parseFromJSON(jsonsupport_request_dto_1);
	cJSON* jsonsupport_request_dto_2 = support_request_dto_convertToJSON(support_request_dto_2);
	printf("repeating support_request_dto:\n%s\n", cJSON_Print(jsonsupport_request_dto_2));
}

int main() {
  test_support_request_dto(1);
  test_support_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // support_request_dto_MAIN
#endif // support_request_dto_TEST
