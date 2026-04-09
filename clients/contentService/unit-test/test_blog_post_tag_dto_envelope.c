#ifndef blog_post_tag_dto_envelope_TEST
#define blog_post_tag_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blog_post_tag_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blog_post_tag_dto_envelope.h"
blog_post_tag_dto_envelope_t* instantiate_blog_post_tag_dto_envelope(int include_optional);

#include "test_blog_post_tag_dto.c"


blog_post_tag_dto_envelope_t* instantiate_blog_post_tag_dto_envelope(int include_optional) {
  blog_post_tag_dto_envelope_t* blog_post_tag_dto_envelope = NULL;
  if (include_optional) {
    blog_post_tag_dto_envelope = blog_post_tag_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_blog_post_tag_dto(0)
    );
  } else {
    blog_post_tag_dto_envelope = blog_post_tag_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return blog_post_tag_dto_envelope;
}


#ifdef blog_post_tag_dto_envelope_MAIN

void test_blog_post_tag_dto_envelope(int include_optional) {
    blog_post_tag_dto_envelope_t* blog_post_tag_dto_envelope_1 = instantiate_blog_post_tag_dto_envelope(include_optional);

	cJSON* jsonblog_post_tag_dto_envelope_1 = blog_post_tag_dto_envelope_convertToJSON(blog_post_tag_dto_envelope_1);
	printf("blog_post_tag_dto_envelope :\n%s\n", cJSON_Print(jsonblog_post_tag_dto_envelope_1));
	blog_post_tag_dto_envelope_t* blog_post_tag_dto_envelope_2 = blog_post_tag_dto_envelope_parseFromJSON(jsonblog_post_tag_dto_envelope_1);
	cJSON* jsonblog_post_tag_dto_envelope_2 = blog_post_tag_dto_envelope_convertToJSON(blog_post_tag_dto_envelope_2);
	printf("repeating blog_post_tag_dto_envelope:\n%s\n", cJSON_Print(jsonblog_post_tag_dto_envelope_2));
}

int main() {
  test_blog_post_tag_dto_envelope(1);
  test_blog_post_tag_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // blog_post_tag_dto_envelope_MAIN
#endif // blog_post_tag_dto_envelope_TEST
