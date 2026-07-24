#ifndef info_response_TEST
#define info_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define info_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/info_response.h"
info_response_t* instantiate_info_response(int include_optional);



info_response_t* instantiate_info_response(int include_optional) {
  info_response_t* info_response = NULL;
  if (include_optional) {
    info_response = info_response_create(
      "0",
      1
    );
  } else {
    info_response = info_response_create(
      "0",
      1
    );
  }

  return info_response;
}


#ifdef info_response_MAIN

void test_info_response(int include_optional) {
    info_response_t* info_response_1 = instantiate_info_response(include_optional);

	cJSON* jsoninfo_response_1 = info_response_convertToJSON(info_response_1);
	printf("info_response :\n%s\n", cJSON_Print(jsoninfo_response_1));
	info_response_t* info_response_2 = info_response_parseFromJSON(jsoninfo_response_1);
	cJSON* jsoninfo_response_2 = info_response_convertToJSON(info_response_2);
	printf("repeating info_response:\n%s\n", cJSON_Print(jsoninfo_response_2));
}

int main() {
  test_info_response(1);
  test_info_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // info_response_MAIN
#endif // info_response_TEST
