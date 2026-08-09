#ifndef leave_type_dto_collection_query_parameters_TEST
#define leave_type_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define leave_type_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/leave_type_dto_collection_query_parameters.h"
leave_type_dto_collection_query_parameters_t* instantiate_leave_type_dto_collection_query_parameters(int include_optional);



leave_type_dto_collection_query_parameters_t* instantiate_leave_type_dto_collection_query_parameters(int include_optional) {
  leave_type_dto_collection_query_parameters_t* leave_type_dto_collection_query_parameters = NULL;
  if (include_optional) {
    leave_type_dto_collection_query_parameters = leave_type_dto_collection_query_parameters_create(
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
    leave_type_dto_collection_query_parameters = leave_type_dto_collection_query_parameters_create(
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

  return leave_type_dto_collection_query_parameters;
}


#ifdef leave_type_dto_collection_query_parameters_MAIN

void test_leave_type_dto_collection_query_parameters(int include_optional) {
    leave_type_dto_collection_query_parameters_t* leave_type_dto_collection_query_parameters_1 = instantiate_leave_type_dto_collection_query_parameters(include_optional);

	cJSON* jsonleave_type_dto_collection_query_parameters_1 = leave_type_dto_collection_query_parameters_convertToJSON(leave_type_dto_collection_query_parameters_1);
	printf("leave_type_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonleave_type_dto_collection_query_parameters_1));
	leave_type_dto_collection_query_parameters_t* leave_type_dto_collection_query_parameters_2 = leave_type_dto_collection_query_parameters_parseFromJSON(jsonleave_type_dto_collection_query_parameters_1);
	cJSON* jsonleave_type_dto_collection_query_parameters_2 = leave_type_dto_collection_query_parameters_convertToJSON(leave_type_dto_collection_query_parameters_2);
	printf("repeating leave_type_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonleave_type_dto_collection_query_parameters_2));
}

int main() {
  test_leave_type_dto_collection_query_parameters(1);
  test_leave_type_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // leave_type_dto_collection_query_parameters_MAIN
#endif // leave_type_dto_collection_query_parameters_TEST
