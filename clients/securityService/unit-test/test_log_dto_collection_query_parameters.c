#ifndef log_dto_collection_query_parameters_TEST
#define log_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define log_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/log_dto_collection_query_parameters.h"
log_dto_collection_query_parameters_t* instantiate_log_dto_collection_query_parameters(int include_optional);



log_dto_collection_query_parameters_t* instantiate_log_dto_collection_query_parameters(int include_optional) {
  log_dto_collection_query_parameters_t* log_dto_collection_query_parameters = NULL;
  if (include_optional) {
    log_dto_collection_query_parameters = log_dto_collection_query_parameters_create(
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
    log_dto_collection_query_parameters = log_dto_collection_query_parameters_create(
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

  return log_dto_collection_query_parameters;
}


#ifdef log_dto_collection_query_parameters_MAIN

void test_log_dto_collection_query_parameters(int include_optional) {
    log_dto_collection_query_parameters_t* log_dto_collection_query_parameters_1 = instantiate_log_dto_collection_query_parameters(include_optional);

	cJSON* jsonlog_dto_collection_query_parameters_1 = log_dto_collection_query_parameters_convertToJSON(log_dto_collection_query_parameters_1);
	printf("log_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonlog_dto_collection_query_parameters_1));
	log_dto_collection_query_parameters_t* log_dto_collection_query_parameters_2 = log_dto_collection_query_parameters_parseFromJSON(jsonlog_dto_collection_query_parameters_1);
	cJSON* jsonlog_dto_collection_query_parameters_2 = log_dto_collection_query_parameters_convertToJSON(log_dto_collection_query_parameters_2);
	printf("repeating log_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonlog_dto_collection_query_parameters_2));
}

int main() {
  test_log_dto_collection_query_parameters(1);
  test_log_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // log_dto_collection_query_parameters_MAIN
#endif // log_dto_collection_query_parameters_TEST
