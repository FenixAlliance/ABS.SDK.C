#ifndef quote_line_dto_collection_query_parameters_TEST
#define quote_line_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_line_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_line_dto_collection_query_parameters.h"
quote_line_dto_collection_query_parameters_t* instantiate_quote_line_dto_collection_query_parameters(int include_optional);



quote_line_dto_collection_query_parameters_t* instantiate_quote_line_dto_collection_query_parameters(int include_optional) {
  quote_line_dto_collection_query_parameters_t* quote_line_dto_collection_query_parameters = NULL;
  if (include_optional) {
    quote_line_dto_collection_query_parameters = quote_line_dto_collection_query_parameters_create(
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
    quote_line_dto_collection_query_parameters = quote_line_dto_collection_query_parameters_create(
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

  return quote_line_dto_collection_query_parameters;
}


#ifdef quote_line_dto_collection_query_parameters_MAIN

void test_quote_line_dto_collection_query_parameters(int include_optional) {
    quote_line_dto_collection_query_parameters_t* quote_line_dto_collection_query_parameters_1 = instantiate_quote_line_dto_collection_query_parameters(include_optional);

	cJSON* jsonquote_line_dto_collection_query_parameters_1 = quote_line_dto_collection_query_parameters_convertToJSON(quote_line_dto_collection_query_parameters_1);
	printf("quote_line_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonquote_line_dto_collection_query_parameters_1));
	quote_line_dto_collection_query_parameters_t* quote_line_dto_collection_query_parameters_2 = quote_line_dto_collection_query_parameters_parseFromJSON(jsonquote_line_dto_collection_query_parameters_1);
	cJSON* jsonquote_line_dto_collection_query_parameters_2 = quote_line_dto_collection_query_parameters_convertToJSON(quote_line_dto_collection_query_parameters_2);
	printf("repeating quote_line_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonquote_line_dto_collection_query_parameters_2));
}

int main() {
  test_quote_line_dto_collection_query_parameters(1);
  test_quote_line_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_line_dto_collection_query_parameters_MAIN
#endif // quote_line_dto_collection_query_parameters_TEST
