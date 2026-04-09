#ifndef blog_options_TEST
#define blog_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blog_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blog_options.h"
blog_options_t* instantiate_blog_options(int include_optional);



blog_options_t* instantiate_blog_options(int include_optional) {
  blog_options_t* blog_options = NULL;
  if (include_optional) {
    blog_options = blog_options_create(
      56,
      1
    );
  } else {
    blog_options = blog_options_create(
      56,
      1
    );
  }

  return blog_options;
}


#ifdef blog_options_MAIN

void test_blog_options(int include_optional) {
    blog_options_t* blog_options_1 = instantiate_blog_options(include_optional);

	cJSON* jsonblog_options_1 = blog_options_convertToJSON(blog_options_1);
	printf("blog_options :\n%s\n", cJSON_Print(jsonblog_options_1));
	blog_options_t* blog_options_2 = blog_options_parseFromJSON(jsonblog_options_1);
	cJSON* jsonblog_options_2 = blog_options_convertToJSON(blog_options_2);
	printf("repeating blog_options:\n%s\n", cJSON_Print(jsonblog_options_2));
}

int main() {
  test_blog_options(1);
  test_blog_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // blog_options_MAIN
#endif // blog_options_TEST
