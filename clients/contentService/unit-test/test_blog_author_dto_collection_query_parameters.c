#ifndef blog_author_dto_collection_query_parameters_TEST
#define blog_author_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blog_author_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blog_author_dto_collection_query_parameters.h"
blog_author_dto_collection_query_parameters_t* instantiate_blog_author_dto_collection_query_parameters(int include_optional);



blog_author_dto_collection_query_parameters_t* instantiate_blog_author_dto_collection_query_parameters(int include_optional) {
  blog_author_dto_collection_query_parameters_t* blog_author_dto_collection_query_parameters = NULL;
  if (include_optional) {
    blog_author_dto_collection_query_parameters = blog_author_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    blog_author_dto_collection_query_parameters = blog_author_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return blog_author_dto_collection_query_parameters;
}


#ifdef blog_author_dto_collection_query_parameters_MAIN

void test_blog_author_dto_collection_query_parameters(int include_optional) {
    blog_author_dto_collection_query_parameters_t* blog_author_dto_collection_query_parameters_1 = instantiate_blog_author_dto_collection_query_parameters(include_optional);

	cJSON* jsonblog_author_dto_collection_query_parameters_1 = blog_author_dto_collection_query_parameters_convertToJSON(blog_author_dto_collection_query_parameters_1);
	printf("blog_author_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonblog_author_dto_collection_query_parameters_1));
	blog_author_dto_collection_query_parameters_t* blog_author_dto_collection_query_parameters_2 = blog_author_dto_collection_query_parameters_parseFromJSON(jsonblog_author_dto_collection_query_parameters_1);
	cJSON* jsonblog_author_dto_collection_query_parameters_2 = blog_author_dto_collection_query_parameters_convertToJSON(blog_author_dto_collection_query_parameters_2);
	printf("repeating blog_author_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonblog_author_dto_collection_query_parameters_2));
}

int main() {
  test_blog_author_dto_collection_query_parameters(1);
  test_blog_author_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // blog_author_dto_collection_query_parameters_MAIN
#endif // blog_author_dto_collection_query_parameters_TEST
