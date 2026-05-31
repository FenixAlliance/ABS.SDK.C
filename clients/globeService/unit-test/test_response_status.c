#ifndef response_status_TEST
#define response_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define response_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/response_status.h"
response_status_t* instantiate_response_status(int include_optional);

#include "test_error.c"


response_status_t* instantiate_response_status(int include_optional) {
  response_status_t* response_status = NULL;
  if (include_optional) {
    response_status = response_status_create(
      1,
       // false, not to have infinite recursion
      instantiate_error(0),
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    response_status = response_status_create(
      1,
      NULL,
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return response_status;
}


#ifdef response_status_MAIN

void test_response_status(int include_optional) {
    response_status_t* response_status_1 = instantiate_response_status(include_optional);

	cJSON* jsonresponse_status_1 = response_status_convertToJSON(response_status_1);
	printf("response_status :\n%s\n", cJSON_Print(jsonresponse_status_1));
	response_status_t* response_status_2 = response_status_parseFromJSON(jsonresponse_status_1);
	cJSON* jsonresponse_status_2 = response_status_convertToJSON(response_status_2);
	printf("repeating response_status:\n%s\n", cJSON_Print(jsonresponse_status_2));
}

int main() {
  test_response_status(1);
  test_response_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // response_status_MAIN
#endif // response_status_TEST
