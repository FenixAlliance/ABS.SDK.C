#ifndef json_web_key_TEST
#define json_web_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define json_web_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/json_web_key.h"
json_web_key_t* instantiate_json_web_key(int include_optional);



json_web_key_t* instantiate_json_web_key(int include_optional) {
  json_web_key_t* json_web_key = NULL;
  if (include_optional) {
    json_web_key = json_web_key_create(
      "0",
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    json_web_key = json_web_key_create(
      "0",
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return json_web_key;
}


#ifdef json_web_key_MAIN

void test_json_web_key(int include_optional) {
    json_web_key_t* json_web_key_1 = instantiate_json_web_key(include_optional);

	cJSON* jsonjson_web_key_1 = json_web_key_convertToJSON(json_web_key_1);
	printf("json_web_key :\n%s\n", cJSON_Print(jsonjson_web_key_1));
	json_web_key_t* json_web_key_2 = json_web_key_parseFromJSON(jsonjson_web_key_1);
	cJSON* jsonjson_web_key_2 = json_web_key_convertToJSON(json_web_key_2);
	printf("repeating json_web_key:\n%s\n", cJSON_Print(jsonjson_web_key_2));
}

int main() {
  test_json_web_key(1);
  test_json_web_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // json_web_key_MAIN
#endif // json_web_key_TEST
