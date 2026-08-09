#ifndef newsletter_dto_collection_query_parameters_TEST
#define newsletter_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_dto_collection_query_parameters.h"
newsletter_dto_collection_query_parameters_t* instantiate_newsletter_dto_collection_query_parameters(int include_optional);



newsletter_dto_collection_query_parameters_t* instantiate_newsletter_dto_collection_query_parameters(int include_optional) {
  newsletter_dto_collection_query_parameters_t* newsletter_dto_collection_query_parameters = NULL;
  if (include_optional) {
    newsletter_dto_collection_query_parameters = newsletter_dto_collection_query_parameters_create(
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
    newsletter_dto_collection_query_parameters = newsletter_dto_collection_query_parameters_create(
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

  return newsletter_dto_collection_query_parameters;
}


#ifdef newsletter_dto_collection_query_parameters_MAIN

void test_newsletter_dto_collection_query_parameters(int include_optional) {
    newsletter_dto_collection_query_parameters_t* newsletter_dto_collection_query_parameters_1 = instantiate_newsletter_dto_collection_query_parameters(include_optional);

	cJSON* jsonnewsletter_dto_collection_query_parameters_1 = newsletter_dto_collection_query_parameters_convertToJSON(newsletter_dto_collection_query_parameters_1);
	printf("newsletter_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonnewsletter_dto_collection_query_parameters_1));
	newsletter_dto_collection_query_parameters_t* newsletter_dto_collection_query_parameters_2 = newsletter_dto_collection_query_parameters_parseFromJSON(jsonnewsletter_dto_collection_query_parameters_1);
	cJSON* jsonnewsletter_dto_collection_query_parameters_2 = newsletter_dto_collection_query_parameters_convertToJSON(newsletter_dto_collection_query_parameters_2);
	printf("repeating newsletter_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonnewsletter_dto_collection_query_parameters_2));
}

int main() {
  test_newsletter_dto_collection_query_parameters(1);
  test_newsletter_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_dto_collection_query_parameters_MAIN
#endif // newsletter_dto_collection_query_parameters_TEST
