#ifndef web_page_tag_dto_list_envelope_TEST
#define web_page_tag_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_page_tag_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_page_tag_dto_list_envelope.h"
web_page_tag_dto_list_envelope_t* instantiate_web_page_tag_dto_list_envelope(int include_optional);



web_page_tag_dto_list_envelope_t* instantiate_web_page_tag_dto_list_envelope(int include_optional) {
  web_page_tag_dto_list_envelope_t* web_page_tag_dto_list_envelope = NULL;
  if (include_optional) {
    web_page_tag_dto_list_envelope = web_page_tag_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    web_page_tag_dto_list_envelope = web_page_tag_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return web_page_tag_dto_list_envelope;
}


#ifdef web_page_tag_dto_list_envelope_MAIN

void test_web_page_tag_dto_list_envelope(int include_optional) {
    web_page_tag_dto_list_envelope_t* web_page_tag_dto_list_envelope_1 = instantiate_web_page_tag_dto_list_envelope(include_optional);

	cJSON* jsonweb_page_tag_dto_list_envelope_1 = web_page_tag_dto_list_envelope_convertToJSON(web_page_tag_dto_list_envelope_1);
	printf("web_page_tag_dto_list_envelope :\n%s\n", cJSON_Print(jsonweb_page_tag_dto_list_envelope_1));
	web_page_tag_dto_list_envelope_t* web_page_tag_dto_list_envelope_2 = web_page_tag_dto_list_envelope_parseFromJSON(jsonweb_page_tag_dto_list_envelope_1);
	cJSON* jsonweb_page_tag_dto_list_envelope_2 = web_page_tag_dto_list_envelope_convertToJSON(web_page_tag_dto_list_envelope_2);
	printf("repeating web_page_tag_dto_list_envelope:\n%s\n", cJSON_Print(jsonweb_page_tag_dto_list_envelope_2));
}

int main() {
  test_web_page_tag_dto_list_envelope(1);
  test_web_page_tag_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_page_tag_dto_list_envelope_MAIN
#endif // web_page_tag_dto_list_envelope_TEST
