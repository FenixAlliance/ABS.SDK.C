#ifndef activity_record_dto_collection_query_parameters_TEST
#define activity_record_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activity_record_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activity_record_dto_collection_query_parameters.h"
activity_record_dto_collection_query_parameters_t* instantiate_activity_record_dto_collection_query_parameters(int include_optional);



activity_record_dto_collection_query_parameters_t* instantiate_activity_record_dto_collection_query_parameters(int include_optional) {
  activity_record_dto_collection_query_parameters_t* activity_record_dto_collection_query_parameters = NULL;
  if (include_optional) {
    activity_record_dto_collection_query_parameters = activity_record_dto_collection_query_parameters_create(
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
    activity_record_dto_collection_query_parameters = activity_record_dto_collection_query_parameters_create(
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

  return activity_record_dto_collection_query_parameters;
}


#ifdef activity_record_dto_collection_query_parameters_MAIN

void test_activity_record_dto_collection_query_parameters(int include_optional) {
    activity_record_dto_collection_query_parameters_t* activity_record_dto_collection_query_parameters_1 = instantiate_activity_record_dto_collection_query_parameters(include_optional);

	cJSON* jsonactivity_record_dto_collection_query_parameters_1 = activity_record_dto_collection_query_parameters_convertToJSON(activity_record_dto_collection_query_parameters_1);
	printf("activity_record_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonactivity_record_dto_collection_query_parameters_1));
	activity_record_dto_collection_query_parameters_t* activity_record_dto_collection_query_parameters_2 = activity_record_dto_collection_query_parameters_parseFromJSON(jsonactivity_record_dto_collection_query_parameters_1);
	cJSON* jsonactivity_record_dto_collection_query_parameters_2 = activity_record_dto_collection_query_parameters_convertToJSON(activity_record_dto_collection_query_parameters_2);
	printf("repeating activity_record_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonactivity_record_dto_collection_query_parameters_2));
}

int main() {
  test_activity_record_dto_collection_query_parameters(1);
  test_activity_record_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // activity_record_dto_collection_query_parameters_MAIN
#endif // activity_record_dto_collection_query_parameters_TEST
