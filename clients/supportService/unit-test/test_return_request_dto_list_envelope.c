#ifndef return_request_dto_list_envelope_TEST
#define return_request_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_request_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_request_dto_list_envelope.h"
return_request_dto_list_envelope_t* instantiate_return_request_dto_list_envelope(int include_optional);



return_request_dto_list_envelope_t* instantiate_return_request_dto_list_envelope(int include_optional) {
  return_request_dto_list_envelope_t* return_request_dto_list_envelope = NULL;
  if (include_optional) {
    return_request_dto_list_envelope = return_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    return_request_dto_list_envelope = return_request_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return return_request_dto_list_envelope;
}


#ifdef return_request_dto_list_envelope_MAIN

void test_return_request_dto_list_envelope(int include_optional) {
    return_request_dto_list_envelope_t* return_request_dto_list_envelope_1 = instantiate_return_request_dto_list_envelope(include_optional);

	cJSON* jsonreturn_request_dto_list_envelope_1 = return_request_dto_list_envelope_convertToJSON(return_request_dto_list_envelope_1);
	printf("return_request_dto_list_envelope :\n%s\n", cJSON_Print(jsonreturn_request_dto_list_envelope_1));
	return_request_dto_list_envelope_t* return_request_dto_list_envelope_2 = return_request_dto_list_envelope_parseFromJSON(jsonreturn_request_dto_list_envelope_1);
	cJSON* jsonreturn_request_dto_list_envelope_2 = return_request_dto_list_envelope_convertToJSON(return_request_dto_list_envelope_2);
	printf("repeating return_request_dto_list_envelope:\n%s\n", cJSON_Print(jsonreturn_request_dto_list_envelope_2));
}

int main() {
  test_return_request_dto_list_envelope(1);
  test_return_request_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_request_dto_list_envelope_MAIN
#endif // return_request_dto_list_envelope_TEST
