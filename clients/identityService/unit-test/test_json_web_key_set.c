#ifndef json_web_key_set_TEST
#define json_web_key_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define json_web_key_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/json_web_key_set.h"
json_web_key_set_t* instantiate_json_web_key_set(int include_optional);



json_web_key_set_t* instantiate_json_web_key_set(int include_optional) {
  json_web_key_set_t* json_web_key_set = NULL;
  if (include_optional) {
    json_web_key_set = json_web_key_set_create(
      list_createList()
    );
  } else {
    json_web_key_set = json_web_key_set_create(
      list_createList()
    );
  }

  return json_web_key_set;
}


#ifdef json_web_key_set_MAIN

void test_json_web_key_set(int include_optional) {
    json_web_key_set_t* json_web_key_set_1 = instantiate_json_web_key_set(include_optional);

	cJSON* jsonjson_web_key_set_1 = json_web_key_set_convertToJSON(json_web_key_set_1);
	printf("json_web_key_set :\n%s\n", cJSON_Print(jsonjson_web_key_set_1));
	json_web_key_set_t* json_web_key_set_2 = json_web_key_set_parseFromJSON(jsonjson_web_key_set_1);
	cJSON* jsonjson_web_key_set_2 = json_web_key_set_convertToJSON(json_web_key_set_2);
	printf("repeating json_web_key_set:\n%s\n", cJSON_Print(jsonjson_web_key_set_2));
}

int main() {
  test_json_web_key_set(1);
  test_json_web_key_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // json_web_key_set_MAIN
#endif // json_web_key_set_TEST
