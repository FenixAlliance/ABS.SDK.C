#ifndef json_web_token_TEST
#define json_web_token_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define json_web_token_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/json_web_token.h"
json_web_token_t* instantiate_json_web_token(int include_optional);

#include "test_json_web_token_header.c"
#include "test_json_web_token_payload.c"


json_web_token_t* instantiate_json_web_token(int include_optional) {
  json_web_token_t* json_web_token = NULL;
  if (include_optional) {
    json_web_token = json_web_token_create(
       // false, not to have infinite recursion
      instantiate_json_web_token_header(0),
       // false, not to have infinite recursion
      instantiate_json_web_token_payload(0),
      "0",
      "0",
      56,
      "0"
    );
  } else {
    json_web_token = json_web_token_create(
      NULL,
      NULL,
      "0",
      "0",
      56,
      "0"
    );
  }

  return json_web_token;
}


#ifdef json_web_token_MAIN

void test_json_web_token(int include_optional) {
    json_web_token_t* json_web_token_1 = instantiate_json_web_token(include_optional);

	cJSON* jsonjson_web_token_1 = json_web_token_convertToJSON(json_web_token_1);
	printf("json_web_token :\n%s\n", cJSON_Print(jsonjson_web_token_1));
	json_web_token_t* json_web_token_2 = json_web_token_parseFromJSON(jsonjson_web_token_1);
	cJSON* jsonjson_web_token_2 = json_web_token_convertToJSON(json_web_token_2);
	printf("repeating json_web_token:\n%s\n", cJSON_Print(jsonjson_web_token_2));
}

int main() {
  test_json_web_token(1);
  test_json_web_token(0);

  printf("Hello world \n");
  return 0;
}

#endif // json_web_token_MAIN
#endif // json_web_token_TEST
