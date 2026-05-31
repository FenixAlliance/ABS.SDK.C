#ifndef parameter_info_TEST
#define parameter_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define parameter_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/parameter_info.h"
parameter_info_t* instantiate_parameter_info(int include_optional);

#include "test_member_info.c"
#include "test_type.c"


parameter_info_t* instantiate_parameter_info(int include_optional) {
  parameter_info_t* parameter_info = NULL;
  if (include_optional) {
    parameter_info = parameter_info_create(
      contentservice_parameter_info_ATTRIBUTES_None,
       // false, not to have infinite recursion
      instantiate_member_info(0),
      "0",
       // false, not to have infinite recursion
      instantiate_type(0),
      56,
      1,
      1,
      1,
      1,
      1,
      null,
      null,
      1,
      list_createList(),
      56
    );
  } else {
    parameter_info = parameter_info_create(
      contentservice_parameter_info_ATTRIBUTES_None,
      NULL,
      "0",
      NULL,
      56,
      1,
      1,
      1,
      1,
      1,
      null,
      null,
      1,
      list_createList(),
      56
    );
  }

  return parameter_info;
}


#ifdef parameter_info_MAIN

void test_parameter_info(int include_optional) {
    parameter_info_t* parameter_info_1 = instantiate_parameter_info(include_optional);

	cJSON* jsonparameter_info_1 = parameter_info_convertToJSON(parameter_info_1);
	printf("parameter_info :\n%s\n", cJSON_Print(jsonparameter_info_1));
	parameter_info_t* parameter_info_2 = parameter_info_parseFromJSON(jsonparameter_info_1);
	cJSON* jsonparameter_info_2 = parameter_info_convertToJSON(parameter_info_2);
	printf("repeating parameter_info:\n%s\n", cJSON_Print(jsonparameter_info_2));
}

int main() {
  test_parameter_info(1);
  test_parameter_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // parameter_info_MAIN
#endif // parameter_info_TEST
