#ifndef social_post_comment_dto_list_envelope_TEST
#define social_post_comment_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_post_comment_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_post_comment_dto_list_envelope.h"
social_post_comment_dto_list_envelope_t* instantiate_social_post_comment_dto_list_envelope(int include_optional);



social_post_comment_dto_list_envelope_t* instantiate_social_post_comment_dto_list_envelope(int include_optional) {
  social_post_comment_dto_list_envelope_t* social_post_comment_dto_list_envelope = NULL;
  if (include_optional) {
    social_post_comment_dto_list_envelope = social_post_comment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    social_post_comment_dto_list_envelope = social_post_comment_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return social_post_comment_dto_list_envelope;
}


#ifdef social_post_comment_dto_list_envelope_MAIN

void test_social_post_comment_dto_list_envelope(int include_optional) {
    social_post_comment_dto_list_envelope_t* social_post_comment_dto_list_envelope_1 = instantiate_social_post_comment_dto_list_envelope(include_optional);

	cJSON* jsonsocial_post_comment_dto_list_envelope_1 = social_post_comment_dto_list_envelope_convertToJSON(social_post_comment_dto_list_envelope_1);
	printf("social_post_comment_dto_list_envelope :\n%s\n", cJSON_Print(jsonsocial_post_comment_dto_list_envelope_1));
	social_post_comment_dto_list_envelope_t* social_post_comment_dto_list_envelope_2 = social_post_comment_dto_list_envelope_parseFromJSON(jsonsocial_post_comment_dto_list_envelope_1);
	cJSON* jsonsocial_post_comment_dto_list_envelope_2 = social_post_comment_dto_list_envelope_convertToJSON(social_post_comment_dto_list_envelope_2);
	printf("repeating social_post_comment_dto_list_envelope:\n%s\n", cJSON_Print(jsonsocial_post_comment_dto_list_envelope_2));
}

int main() {
  test_social_post_comment_dto_list_envelope(1);
  test_social_post_comment_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_post_comment_dto_list_envelope_MAIN
#endif // social_post_comment_dto_list_envelope_TEST
