#ifndef notification_dto_collection_query_parameters_TEST
#define notification_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_dto_collection_query_parameters.h"
notification_dto_collection_query_parameters_t* instantiate_notification_dto_collection_query_parameters(int include_optional);



notification_dto_collection_query_parameters_t* instantiate_notification_dto_collection_query_parameters(int include_optional) {
  notification_dto_collection_query_parameters_t* notification_dto_collection_query_parameters = NULL;
  if (include_optional) {
    notification_dto_collection_query_parameters = notification_dto_collection_query_parameters_create(
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
    notification_dto_collection_query_parameters = notification_dto_collection_query_parameters_create(
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

  return notification_dto_collection_query_parameters;
}


#ifdef notification_dto_collection_query_parameters_MAIN

void test_notification_dto_collection_query_parameters(int include_optional) {
    notification_dto_collection_query_parameters_t* notification_dto_collection_query_parameters_1 = instantiate_notification_dto_collection_query_parameters(include_optional);

	cJSON* jsonnotification_dto_collection_query_parameters_1 = notification_dto_collection_query_parameters_convertToJSON(notification_dto_collection_query_parameters_1);
	printf("notification_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonnotification_dto_collection_query_parameters_1));
	notification_dto_collection_query_parameters_t* notification_dto_collection_query_parameters_2 = notification_dto_collection_query_parameters_parseFromJSON(jsonnotification_dto_collection_query_parameters_1);
	cJSON* jsonnotification_dto_collection_query_parameters_2 = notification_dto_collection_query_parameters_convertToJSON(notification_dto_collection_query_parameters_2);
	printf("repeating notification_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonnotification_dto_collection_query_parameters_2));
}

int main() {
  test_notification_dto_collection_query_parameters(1);
  test_notification_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_dto_collection_query_parameters_MAIN
#endif // notification_dto_collection_query_parameters_TEST
