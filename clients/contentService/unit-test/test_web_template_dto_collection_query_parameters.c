#ifndef web_template_dto_collection_query_parameters_TEST
#define web_template_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_template_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_template_dto_collection_query_parameters.h"
web_template_dto_collection_query_parameters_t* instantiate_web_template_dto_collection_query_parameters(int include_optional);



web_template_dto_collection_query_parameters_t* instantiate_web_template_dto_collection_query_parameters(int include_optional) {
  web_template_dto_collection_query_parameters_t* web_template_dto_collection_query_parameters = NULL;
  if (include_optional) {
    web_template_dto_collection_query_parameters = web_template_dto_collection_query_parameters_create(
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
    web_template_dto_collection_query_parameters = web_template_dto_collection_query_parameters_create(
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

  return web_template_dto_collection_query_parameters;
}


#ifdef web_template_dto_collection_query_parameters_MAIN

void test_web_template_dto_collection_query_parameters(int include_optional) {
    web_template_dto_collection_query_parameters_t* web_template_dto_collection_query_parameters_1 = instantiate_web_template_dto_collection_query_parameters(include_optional);

	cJSON* jsonweb_template_dto_collection_query_parameters_1 = web_template_dto_collection_query_parameters_convertToJSON(web_template_dto_collection_query_parameters_1);
	printf("web_template_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonweb_template_dto_collection_query_parameters_1));
	web_template_dto_collection_query_parameters_t* web_template_dto_collection_query_parameters_2 = web_template_dto_collection_query_parameters_parseFromJSON(jsonweb_template_dto_collection_query_parameters_1);
	cJSON* jsonweb_template_dto_collection_query_parameters_2 = web_template_dto_collection_query_parameters_convertToJSON(web_template_dto_collection_query_parameters_2);
	printf("repeating web_template_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonweb_template_dto_collection_query_parameters_2));
}

int main() {
  test_web_template_dto_collection_query_parameters(1);
  test_web_template_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_template_dto_collection_query_parameters_MAIN
#endif // web_template_dto_collection_query_parameters_TEST
