#ifndef schedule_dto_collection_query_parameters_TEST
#define schedule_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define schedule_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/schedule_dto_collection_query_parameters.h"
schedule_dto_collection_query_parameters_t* instantiate_schedule_dto_collection_query_parameters(int include_optional);



schedule_dto_collection_query_parameters_t* instantiate_schedule_dto_collection_query_parameters(int include_optional) {
  schedule_dto_collection_query_parameters_t* schedule_dto_collection_query_parameters = NULL;
  if (include_optional) {
    schedule_dto_collection_query_parameters = schedule_dto_collection_query_parameters_create(
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
    schedule_dto_collection_query_parameters = schedule_dto_collection_query_parameters_create(
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

  return schedule_dto_collection_query_parameters;
}


#ifdef schedule_dto_collection_query_parameters_MAIN

void test_schedule_dto_collection_query_parameters(int include_optional) {
    schedule_dto_collection_query_parameters_t* schedule_dto_collection_query_parameters_1 = instantiate_schedule_dto_collection_query_parameters(include_optional);

	cJSON* jsonschedule_dto_collection_query_parameters_1 = schedule_dto_collection_query_parameters_convertToJSON(schedule_dto_collection_query_parameters_1);
	printf("schedule_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonschedule_dto_collection_query_parameters_1));
	schedule_dto_collection_query_parameters_t* schedule_dto_collection_query_parameters_2 = schedule_dto_collection_query_parameters_parseFromJSON(jsonschedule_dto_collection_query_parameters_1);
	cJSON* jsonschedule_dto_collection_query_parameters_2 = schedule_dto_collection_query_parameters_convertToJSON(schedule_dto_collection_query_parameters_2);
	printf("repeating schedule_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonschedule_dto_collection_query_parameters_2));
}

int main() {
  test_schedule_dto_collection_query_parameters(1);
  test_schedule_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // schedule_dto_collection_query_parameters_MAIN
#endif // schedule_dto_collection_query_parameters_TEST
