#ifndef financial_book_dto_collection_query_parameters_TEST
#define financial_book_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define financial_book_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/financial_book_dto_collection_query_parameters.h"
financial_book_dto_collection_query_parameters_t* instantiate_financial_book_dto_collection_query_parameters(int include_optional);



financial_book_dto_collection_query_parameters_t* instantiate_financial_book_dto_collection_query_parameters(int include_optional) {
  financial_book_dto_collection_query_parameters_t* financial_book_dto_collection_query_parameters = NULL;
  if (include_optional) {
    financial_book_dto_collection_query_parameters = financial_book_dto_collection_query_parameters_create(
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
    financial_book_dto_collection_query_parameters = financial_book_dto_collection_query_parameters_create(
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

  return financial_book_dto_collection_query_parameters;
}


#ifdef financial_book_dto_collection_query_parameters_MAIN

void test_financial_book_dto_collection_query_parameters(int include_optional) {
    financial_book_dto_collection_query_parameters_t* financial_book_dto_collection_query_parameters_1 = instantiate_financial_book_dto_collection_query_parameters(include_optional);

	cJSON* jsonfinancial_book_dto_collection_query_parameters_1 = financial_book_dto_collection_query_parameters_convertToJSON(financial_book_dto_collection_query_parameters_1);
	printf("financial_book_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonfinancial_book_dto_collection_query_parameters_1));
	financial_book_dto_collection_query_parameters_t* financial_book_dto_collection_query_parameters_2 = financial_book_dto_collection_query_parameters_parseFromJSON(jsonfinancial_book_dto_collection_query_parameters_1);
	cJSON* jsonfinancial_book_dto_collection_query_parameters_2 = financial_book_dto_collection_query_parameters_convertToJSON(financial_book_dto_collection_query_parameters_2);
	printf("repeating financial_book_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonfinancial_book_dto_collection_query_parameters_2));
}

int main() {
  test_financial_book_dto_collection_query_parameters(1);
  test_financial_book_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // financial_book_dto_collection_query_parameters_MAIN
#endif // financial_book_dto_collection_query_parameters_TEST
