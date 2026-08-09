#ifndef time_interval_dto_collection_query_parameters_TEST
#define time_interval_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define time_interval_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/time_interval_dto_collection_query_parameters.h"
time_interval_dto_collection_query_parameters_t* instantiate_time_interval_dto_collection_query_parameters(int include_optional);



time_interval_dto_collection_query_parameters_t* instantiate_time_interval_dto_collection_query_parameters(int include_optional) {
  time_interval_dto_collection_query_parameters_t* time_interval_dto_collection_query_parameters = NULL;
  if (include_optional) {
    time_interval_dto_collection_query_parameters = time_interval_dto_collection_query_parameters_create(
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
    time_interval_dto_collection_query_parameters = time_interval_dto_collection_query_parameters_create(
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

  return time_interval_dto_collection_query_parameters;
}


#ifdef time_interval_dto_collection_query_parameters_MAIN

void test_time_interval_dto_collection_query_parameters(int include_optional) {
    time_interval_dto_collection_query_parameters_t* time_interval_dto_collection_query_parameters_1 = instantiate_time_interval_dto_collection_query_parameters(include_optional);

	cJSON* jsontime_interval_dto_collection_query_parameters_1 = time_interval_dto_collection_query_parameters_convertToJSON(time_interval_dto_collection_query_parameters_1);
	printf("time_interval_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontime_interval_dto_collection_query_parameters_1));
	time_interval_dto_collection_query_parameters_t* time_interval_dto_collection_query_parameters_2 = time_interval_dto_collection_query_parameters_parseFromJSON(jsontime_interval_dto_collection_query_parameters_1);
	cJSON* jsontime_interval_dto_collection_query_parameters_2 = time_interval_dto_collection_query_parameters_convertToJSON(time_interval_dto_collection_query_parameters_2);
	printf("repeating time_interval_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontime_interval_dto_collection_query_parameters_2));
}

int main() {
  test_time_interval_dto_collection_query_parameters(1);
  test_time_interval_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // time_interval_dto_collection_query_parameters_MAIN
#endif // time_interval_dto_collection_query_parameters_TEST
