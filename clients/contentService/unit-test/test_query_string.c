#ifndef query_string_TEST
#define query_string_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define query_string_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/query_string.h"
query_string_t* instantiate_query_string(int include_optional);



query_string_t* instantiate_query_string(int include_optional) {
  query_string_t* query_string = NULL;
  if (include_optional) {
    query_string = query_string_create(
      "0",
      1
    );
  } else {
    query_string = query_string_create(
      "0",
      1
    );
  }

  return query_string;
}


#ifdef query_string_MAIN

void test_query_string(int include_optional) {
    query_string_t* query_string_1 = instantiate_query_string(include_optional);

	cJSON* jsonquery_string_1 = query_string_convertToJSON(query_string_1);
	printf("query_string :\n%s\n", cJSON_Print(jsonquery_string_1));
	query_string_t* query_string_2 = query_string_parseFromJSON(jsonquery_string_1);
	cJSON* jsonquery_string_2 = query_string_convertToJSON(query_string_2);
	printf("repeating query_string:\n%s\n", cJSON_Print(jsonquery_string_2));
}

int main() {
  test_query_string(1);
  test_query_string(0);

  printf("Hello world \n");
  return 0;
}

#endif // query_string_MAIN
#endif // query_string_TEST
