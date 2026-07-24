#ifndef i_open_api_endpoint_TEST
#define i_open_api_endpoint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_open_api_endpoint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_open_api_endpoint.h"
i_open_api_endpoint_t* instantiate_i_open_api_endpoint(int include_optional);



i_open_api_endpoint_t* instantiate_i_open_api_endpoint(int include_optional) {
  i_open_api_endpoint_t* i_open_api_endpoint = NULL;
  if (include_optional) {
    i_open_api_endpoint = i_open_api_endpoint_create(
      1,
      "0",
      "0"
    );
  } else {
    i_open_api_endpoint = i_open_api_endpoint_create(
      1,
      "0",
      "0"
    );
  }

  return i_open_api_endpoint;
}


#ifdef i_open_api_endpoint_MAIN

void test_i_open_api_endpoint(int include_optional) {
    i_open_api_endpoint_t* i_open_api_endpoint_1 = instantiate_i_open_api_endpoint(include_optional);

	cJSON* jsoni_open_api_endpoint_1 = i_open_api_endpoint_convertToJSON(i_open_api_endpoint_1);
	printf("i_open_api_endpoint :\n%s\n", cJSON_Print(jsoni_open_api_endpoint_1));
	i_open_api_endpoint_t* i_open_api_endpoint_2 = i_open_api_endpoint_parseFromJSON(jsoni_open_api_endpoint_1);
	cJSON* jsoni_open_api_endpoint_2 = i_open_api_endpoint_convertToJSON(i_open_api_endpoint_2);
	printf("repeating i_open_api_endpoint:\n%s\n", cJSON_Print(jsoni_open_api_endpoint_2));
}

int main() {
  test_i_open_api_endpoint(1);
  test_i_open_api_endpoint(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_open_api_endpoint_MAIN
#endif // i_open_api_endpoint_TEST
