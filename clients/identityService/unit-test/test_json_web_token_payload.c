#ifndef json_web_token_payload_TEST
#define json_web_token_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define json_web_token_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/json_web_token_payload.h"
json_web_token_payload_t* instantiate_json_web_token_payload(int include_optional);



json_web_token_payload_t* instantiate_json_web_token_payload(int include_optional) {
  json_web_token_payload_t* json_web_token_payload = NULL;
  if (include_optional) {
    json_web_token_payload = json_web_token_payload_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      list_createList()
    );
  } else {
    json_web_token_payload = json_web_token_payload_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      list_createList()
    );
  }

  return json_web_token_payload;
}


#ifdef json_web_token_payload_MAIN

void test_json_web_token_payload(int include_optional) {
    json_web_token_payload_t* json_web_token_payload_1 = instantiate_json_web_token_payload(include_optional);

	cJSON* jsonjson_web_token_payload_1 = json_web_token_payload_convertToJSON(json_web_token_payload_1);
	printf("json_web_token_payload :\n%s\n", cJSON_Print(jsonjson_web_token_payload_1));
	json_web_token_payload_t* json_web_token_payload_2 = json_web_token_payload_parseFromJSON(jsonjson_web_token_payload_1);
	cJSON* jsonjson_web_token_payload_2 = json_web_token_payload_convertToJSON(json_web_token_payload_2);
	printf("repeating json_web_token_payload:\n%s\n", cJSON_Print(jsonjson_web_token_payload_2));
}

int main() {
  test_json_web_token_payload(1);
  test_json_web_token_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // json_web_token_payload_MAIN
#endif // json_web_token_payload_TEST
