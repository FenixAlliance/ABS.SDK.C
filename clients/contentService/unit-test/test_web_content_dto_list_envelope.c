#ifndef web_content_dto_list_envelope_TEST
#define web_content_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_content_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_content_dto_list_envelope.h"
web_content_dto_list_envelope_t* instantiate_web_content_dto_list_envelope(int include_optional);



web_content_dto_list_envelope_t* instantiate_web_content_dto_list_envelope(int include_optional) {
  web_content_dto_list_envelope_t* web_content_dto_list_envelope = NULL;
  if (include_optional) {
    web_content_dto_list_envelope = web_content_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    web_content_dto_list_envelope = web_content_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return web_content_dto_list_envelope;
}


#ifdef web_content_dto_list_envelope_MAIN

void test_web_content_dto_list_envelope(int include_optional) {
    web_content_dto_list_envelope_t* web_content_dto_list_envelope_1 = instantiate_web_content_dto_list_envelope(include_optional);

	cJSON* jsonweb_content_dto_list_envelope_1 = web_content_dto_list_envelope_convertToJSON(web_content_dto_list_envelope_1);
	printf("web_content_dto_list_envelope :\n%s\n", cJSON_Print(jsonweb_content_dto_list_envelope_1));
	web_content_dto_list_envelope_t* web_content_dto_list_envelope_2 = web_content_dto_list_envelope_parseFromJSON(jsonweb_content_dto_list_envelope_1);
	cJSON* jsonweb_content_dto_list_envelope_2 = web_content_dto_list_envelope_convertToJSON(web_content_dto_list_envelope_2);
	printf("repeating web_content_dto_list_envelope:\n%s\n", cJSON_Print(jsonweb_content_dto_list_envelope_2));
}

int main() {
  test_web_content_dto_list_envelope(1);
  test_web_content_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_content_dto_list_envelope_MAIN
#endif // web_content_dto_list_envelope_TEST
