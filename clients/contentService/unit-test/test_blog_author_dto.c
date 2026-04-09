#ifndef blog_author_dto_TEST
#define blog_author_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blog_author_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blog_author_dto.h"
blog_author_dto_t* instantiate_blog_author_dto(int include_optional);



blog_author_dto_t* instantiate_blog_author_dto(int include_optional) {
  blog_author_dto_t* blog_author_dto = NULL;
  if (include_optional) {
    blog_author_dto = blog_author_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_blog_author_dto_GENDER_Unknown,
      "0",
      "0",
      "0",
      "0",
      1,
      contentservice_blog_author_dto_AVAILABILITY_DND
    );
  } else {
    blog_author_dto = blog_author_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_blog_author_dto_GENDER_Unknown,
      "0",
      "0",
      "0",
      "0",
      1,
      contentservice_blog_author_dto_AVAILABILITY_DND
    );
  }

  return blog_author_dto;
}


#ifdef blog_author_dto_MAIN

void test_blog_author_dto(int include_optional) {
    blog_author_dto_t* blog_author_dto_1 = instantiate_blog_author_dto(include_optional);

	cJSON* jsonblog_author_dto_1 = blog_author_dto_convertToJSON(blog_author_dto_1);
	printf("blog_author_dto :\n%s\n", cJSON_Print(jsonblog_author_dto_1));
	blog_author_dto_t* blog_author_dto_2 = blog_author_dto_parseFromJSON(jsonblog_author_dto_1);
	cJSON* jsonblog_author_dto_2 = blog_author_dto_convertToJSON(blog_author_dto_2);
	printf("repeating blog_author_dto:\n%s\n", cJSON_Print(jsonblog_author_dto_2));
}

int main() {
  test_blog_author_dto(1);
  test_blog_author_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // blog_author_dto_MAIN
#endif // blog_author_dto_TEST
