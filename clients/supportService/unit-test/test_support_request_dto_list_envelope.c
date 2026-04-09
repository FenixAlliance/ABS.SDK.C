#ifndef support_request_dto_list_envelope_TEST
#define support_request_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define support_request_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/support_request_dto_list_envelope.h"
support_request_dto_list_envelope_t* instantiate_support_request_dto_list_envelope(int include_optional);



support_request_dto_list_envelope_t* instantiate_support_request_dto_list_envelope(int include_optional) {
  support_request_dto_list_envelope_t* support_request_dto_list_envelope = NULL;
  if (include_optional) {
    support_request_dto_list_envelope = support_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    support_request_dto_list_envelope = support_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return support_request_dto_list_envelope;
}


#ifdef support_request_dto_list_envelope_MAIN

void test_support_request_dto_list_envelope(int include_optional) {
    support_request_dto_list_envelope_t* support_request_dto_list_envelope_1 = instantiate_support_request_dto_list_envelope(include_optional);

	cJSON* jsonsupport_request_dto_list_envelope_1 = support_request_dto_list_envelope_convertToJSON(support_request_dto_list_envelope_1);
	printf("support_request_dto_list_envelope :\n%s\n", cJSON_Print(jsonsupport_request_dto_list_envelope_1));
	support_request_dto_list_envelope_t* support_request_dto_list_envelope_2 = support_request_dto_list_envelope_parseFromJSON(jsonsupport_request_dto_list_envelope_1);
	cJSON* jsonsupport_request_dto_list_envelope_2 = support_request_dto_list_envelope_convertToJSON(support_request_dto_list_envelope_2);
	printf("repeating support_request_dto_list_envelope:\n%s\n", cJSON_Print(jsonsupport_request_dto_list_envelope_2));
}

int main() {
  test_support_request_dto_list_envelope(1);
  test_support_request_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // support_request_dto_list_envelope_MAIN
#endif // support_request_dto_list_envelope_TEST
