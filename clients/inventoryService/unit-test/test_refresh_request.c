#ifndef refresh_request_TEST
#define refresh_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define refresh_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/refresh_request.h"
refresh_request_t* instantiate_refresh_request(int include_optional);



refresh_request_t* instantiate_refresh_request(int include_optional) {
  refresh_request_t* refresh_request = NULL;
  if (include_optional) {
    refresh_request = refresh_request_create(
      "0"
    );
  } else {
    refresh_request = refresh_request_create(
      "0"
    );
  }

  return refresh_request;
}


#ifdef refresh_request_MAIN

void test_refresh_request(int include_optional) {
    refresh_request_t* refresh_request_1 = instantiate_refresh_request(include_optional);

	cJSON* jsonrefresh_request_1 = refresh_request_convertToJSON(refresh_request_1);
	printf("refresh_request :\n%s\n", cJSON_Print(jsonrefresh_request_1));
	refresh_request_t* refresh_request_2 = refresh_request_parseFromJSON(jsonrefresh_request_1);
	cJSON* jsonrefresh_request_2 = refresh_request_convertToJSON(refresh_request_2);
	printf("repeating refresh_request:\n%s\n", cJSON_Print(jsonrefresh_request_2));
}

int main() {
  test_refresh_request(1);
  test_refresh_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // refresh_request_MAIN
#endif // refresh_request_TEST
