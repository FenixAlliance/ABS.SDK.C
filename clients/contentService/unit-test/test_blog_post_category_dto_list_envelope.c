#ifndef blog_post_category_dto_list_envelope_TEST
#define blog_post_category_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blog_post_category_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blog_post_category_dto_list_envelope.h"
blog_post_category_dto_list_envelope_t* instantiate_blog_post_category_dto_list_envelope(int include_optional);



blog_post_category_dto_list_envelope_t* instantiate_blog_post_category_dto_list_envelope(int include_optional) {
  blog_post_category_dto_list_envelope_t* blog_post_category_dto_list_envelope = NULL;
  if (include_optional) {
    blog_post_category_dto_list_envelope = blog_post_category_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    blog_post_category_dto_list_envelope = blog_post_category_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return blog_post_category_dto_list_envelope;
}


#ifdef blog_post_category_dto_list_envelope_MAIN

void test_blog_post_category_dto_list_envelope(int include_optional) {
    blog_post_category_dto_list_envelope_t* blog_post_category_dto_list_envelope_1 = instantiate_blog_post_category_dto_list_envelope(include_optional);

	cJSON* jsonblog_post_category_dto_list_envelope_1 = blog_post_category_dto_list_envelope_convertToJSON(blog_post_category_dto_list_envelope_1);
	printf("blog_post_category_dto_list_envelope :\n%s\n", cJSON_Print(jsonblog_post_category_dto_list_envelope_1));
	blog_post_category_dto_list_envelope_t* blog_post_category_dto_list_envelope_2 = blog_post_category_dto_list_envelope_parseFromJSON(jsonblog_post_category_dto_list_envelope_1);
	cJSON* jsonblog_post_category_dto_list_envelope_2 = blog_post_category_dto_list_envelope_convertToJSON(blog_post_category_dto_list_envelope_2);
	printf("repeating blog_post_category_dto_list_envelope:\n%s\n", cJSON_Print(jsonblog_post_category_dto_list_envelope_2));
}

int main() {
  test_blog_post_category_dto_list_envelope(1);
  test_blog_post_category_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // blog_post_category_dto_list_envelope_MAIN
#endif // blog_post_category_dto_list_envelope_TEST
