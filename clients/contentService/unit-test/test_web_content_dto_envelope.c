#ifndef web_content_dto_envelope_TEST
#define web_content_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_content_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_content_dto_envelope.h"
web_content_dto_envelope_t* instantiate_web_content_dto_envelope(int include_optional);

#include "test_web_content_dto.c"


web_content_dto_envelope_t* instantiate_web_content_dto_envelope(int include_optional) {
  web_content_dto_envelope_t* web_content_dto_envelope = NULL;
  if (include_optional) {
    web_content_dto_envelope = web_content_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_web_content_dto(0)
    );
  } else {
    web_content_dto_envelope = web_content_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return web_content_dto_envelope;
}


#ifdef web_content_dto_envelope_MAIN

void test_web_content_dto_envelope(int include_optional) {
    web_content_dto_envelope_t* web_content_dto_envelope_1 = instantiate_web_content_dto_envelope(include_optional);

	cJSON* jsonweb_content_dto_envelope_1 = web_content_dto_envelope_convertToJSON(web_content_dto_envelope_1);
	printf("web_content_dto_envelope :\n%s\n", cJSON_Print(jsonweb_content_dto_envelope_1));
	web_content_dto_envelope_t* web_content_dto_envelope_2 = web_content_dto_envelope_parseFromJSON(jsonweb_content_dto_envelope_1);
	cJSON* jsonweb_content_dto_envelope_2 = web_content_dto_envelope_convertToJSON(web_content_dto_envelope_2);
	printf("repeating web_content_dto_envelope:\n%s\n", cJSON_Print(jsonweb_content_dto_envelope_2));
}

int main() {
  test_web_content_dto_envelope(1);
  test_web_content_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_content_dto_envelope_MAIN
#endif // web_content_dto_envelope_TEST
