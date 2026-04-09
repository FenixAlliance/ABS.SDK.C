#ifndef json_web_token_header_TEST
#define json_web_token_header_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define json_web_token_header_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/json_web_token_header.h"
json_web_token_header_t* instantiate_json_web_token_header(int include_optional);



json_web_token_header_t* instantiate_json_web_token_header(int include_optional) {
  json_web_token_header_t* json_web_token_header = NULL;
  if (include_optional) {
    json_web_token_header = json_web_token_header_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    json_web_token_header = json_web_token_header_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return json_web_token_header;
}


#ifdef json_web_token_header_MAIN

void test_json_web_token_header(int include_optional) {
    json_web_token_header_t* json_web_token_header_1 = instantiate_json_web_token_header(include_optional);

	cJSON* jsonjson_web_token_header_1 = json_web_token_header_convertToJSON(json_web_token_header_1);
	printf("json_web_token_header :\n%s\n", cJSON_Print(jsonjson_web_token_header_1));
	json_web_token_header_t* json_web_token_header_2 = json_web_token_header_parseFromJSON(jsonjson_web_token_header_1);
	cJSON* jsonjson_web_token_header_2 = json_web_token_header_convertToJSON(json_web_token_header_2);
	printf("repeating json_web_token_header:\n%s\n", cJSON_Print(jsonjson_web_token_header_2));
}

int main() {
  test_json_web_token_header(1);
  test_json_web_token_header(0);

  printf("Hello world \n");
  return 0;
}

#endif // json_web_token_header_MAIN
#endif // json_web_token_header_TEST
