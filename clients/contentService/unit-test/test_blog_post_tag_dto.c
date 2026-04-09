#ifndef blog_post_tag_dto_TEST
#define blog_post_tag_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blog_post_tag_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blog_post_tag_dto.h"
blog_post_tag_dto_t* instantiate_blog_post_tag_dto(int include_optional);



blog_post_tag_dto_t* instantiate_blog_post_tag_dto(int include_optional) {
  blog_post_tag_dto_t* blog_post_tag_dto = NULL;
  if (include_optional) {
    blog_post_tag_dto = blog_post_tag_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    blog_post_tag_dto = blog_post_tag_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return blog_post_tag_dto;
}


#ifdef blog_post_tag_dto_MAIN

void test_blog_post_tag_dto(int include_optional) {
    blog_post_tag_dto_t* blog_post_tag_dto_1 = instantiate_blog_post_tag_dto(include_optional);

	cJSON* jsonblog_post_tag_dto_1 = blog_post_tag_dto_convertToJSON(blog_post_tag_dto_1);
	printf("blog_post_tag_dto :\n%s\n", cJSON_Print(jsonblog_post_tag_dto_1));
	blog_post_tag_dto_t* blog_post_tag_dto_2 = blog_post_tag_dto_parseFromJSON(jsonblog_post_tag_dto_1);
	cJSON* jsonblog_post_tag_dto_2 = blog_post_tag_dto_convertToJSON(blog_post_tag_dto_2);
	printf("repeating blog_post_tag_dto:\n%s\n", cJSON_Print(jsonblog_post_tag_dto_2));
}

int main() {
  test_blog_post_tag_dto(1);
  test_blog_post_tag_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // blog_post_tag_dto_MAIN
#endif // blog_post_tag_dto_TEST
