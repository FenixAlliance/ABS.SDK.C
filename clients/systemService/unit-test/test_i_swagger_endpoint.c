#ifndef i_swagger_endpoint_TEST
#define i_swagger_endpoint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_swagger_endpoint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_swagger_endpoint.h"
i_swagger_endpoint_t* instantiate_i_swagger_endpoint(int include_optional);



i_swagger_endpoint_t* instantiate_i_swagger_endpoint(int include_optional) {
  i_swagger_endpoint_t* i_swagger_endpoint = NULL;
  if (include_optional) {
    i_swagger_endpoint = i_swagger_endpoint_create(
      1,
      "0",
      "0"
    );
  } else {
    i_swagger_endpoint = i_swagger_endpoint_create(
      1,
      "0",
      "0"
    );
  }

  return i_swagger_endpoint;
}


#ifdef i_swagger_endpoint_MAIN

void test_i_swagger_endpoint(int include_optional) {
    i_swagger_endpoint_t* i_swagger_endpoint_1 = instantiate_i_swagger_endpoint(include_optional);

	cJSON* jsoni_swagger_endpoint_1 = i_swagger_endpoint_convertToJSON(i_swagger_endpoint_1);
	printf("i_swagger_endpoint :\n%s\n", cJSON_Print(jsoni_swagger_endpoint_1));
	i_swagger_endpoint_t* i_swagger_endpoint_2 = i_swagger_endpoint_parseFromJSON(jsoni_swagger_endpoint_1);
	cJSON* jsoni_swagger_endpoint_2 = i_swagger_endpoint_convertToJSON(i_swagger_endpoint_2);
	printf("repeating i_swagger_endpoint:\n%s\n", cJSON_Print(jsoni_swagger_endpoint_2));
}

int main() {
  test_i_swagger_endpoint(1);
  test_i_swagger_endpoint(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_swagger_endpoint_MAIN
#endif // i_swagger_endpoint_TEST
