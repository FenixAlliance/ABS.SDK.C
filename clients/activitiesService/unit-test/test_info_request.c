#ifndef info_request_TEST
#define info_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define info_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/info_request.h"
info_request_t* instantiate_info_request(int include_optional);



info_request_t* instantiate_info_request(int include_optional) {
  info_request_t* info_request = NULL;
  if (include_optional) {
    info_request = info_request_create(
      "0",
      "0",
      "0"
    );
  } else {
    info_request = info_request_create(
      "0",
      "0",
      "0"
    );
  }

  return info_request;
}


#ifdef info_request_MAIN

void test_info_request(int include_optional) {
    info_request_t* info_request_1 = instantiate_info_request(include_optional);

	cJSON* jsoninfo_request_1 = info_request_convertToJSON(info_request_1);
	printf("info_request :\n%s\n", cJSON_Print(jsoninfo_request_1));
	info_request_t* info_request_2 = info_request_parseFromJSON(jsoninfo_request_1);
	cJSON* jsoninfo_request_2 = info_request_convertToJSON(info_request_2);
	printf("repeating info_request:\n%s\n", cJSON_Print(jsoninfo_request_2));
}

int main() {
  test_info_request(1);
  test_info_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // info_request_MAIN
#endif // info_request_TEST
