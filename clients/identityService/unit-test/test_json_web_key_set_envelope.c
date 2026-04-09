#ifndef json_web_key_set_envelope_TEST
#define json_web_key_set_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define json_web_key_set_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/json_web_key_set_envelope.h"
json_web_key_set_envelope_t* instantiate_json_web_key_set_envelope(int include_optional);

#include "test_json_web_key_set.c"


json_web_key_set_envelope_t* instantiate_json_web_key_set_envelope(int include_optional) {
  json_web_key_set_envelope_t* json_web_key_set_envelope = NULL;
  if (include_optional) {
    json_web_key_set_envelope = json_web_key_set_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_json_web_key_set(0)
    );
  } else {
    json_web_key_set_envelope = json_web_key_set_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return json_web_key_set_envelope;
}


#ifdef json_web_key_set_envelope_MAIN

void test_json_web_key_set_envelope(int include_optional) {
    json_web_key_set_envelope_t* json_web_key_set_envelope_1 = instantiate_json_web_key_set_envelope(include_optional);

	cJSON* jsonjson_web_key_set_envelope_1 = json_web_key_set_envelope_convertToJSON(json_web_key_set_envelope_1);
	printf("json_web_key_set_envelope :\n%s\n", cJSON_Print(jsonjson_web_key_set_envelope_1));
	json_web_key_set_envelope_t* json_web_key_set_envelope_2 = json_web_key_set_envelope_parseFromJSON(jsonjson_web_key_set_envelope_1);
	cJSON* jsonjson_web_key_set_envelope_2 = json_web_key_set_envelope_convertToJSON(json_web_key_set_envelope_2);
	printf("repeating json_web_key_set_envelope:\n%s\n", cJSON_Print(jsonjson_web_key_set_envelope_2));
}

int main() {
  test_json_web_key_set_envelope(1);
  test_json_web_key_set_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // json_web_key_set_envelope_MAIN
#endif // json_web_key_set_envelope_TEST
