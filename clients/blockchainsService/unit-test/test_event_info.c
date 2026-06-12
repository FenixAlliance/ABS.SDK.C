#ifndef event_info_TEST
#define event_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_info.h"
event_info_t* instantiate_event_info(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"
#include "test_method_info.c"
#include "test_method_info.c"
#include "test_method_info.c"
#include "test_type.c"


event_info_t* instantiate_event_info(int include_optional) {
  event_info_t* event_info = NULL;
  if (include_optional) {
    event_info = event_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_module(0),
      list_createList(),
      1,
      56,
      blockchainsservice_event_info_MEMBERTYPE_Constructor,
      blockchainsservice_event_info_ATTRIBUTES_None,
      1,
       // false, not to have infinite recursion
      instantiate_method_info(0),
       // false, not to have infinite recursion
      instantiate_method_info(0),
       // false, not to have infinite recursion
      instantiate_method_info(0),
      1,
       // false, not to have infinite recursion
      instantiate_type(0)
    );
  } else {
    event_info = event_info_create(
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56,
      blockchainsservice_event_info_MEMBERTYPE_Constructor,
      blockchainsservice_event_info_ATTRIBUTES_None,
      1,
      NULL,
      NULL,
      NULL,
      1,
      NULL
    );
  }

  return event_info;
}


#ifdef event_info_MAIN

void test_event_info(int include_optional) {
    event_info_t* event_info_1 = instantiate_event_info(include_optional);

	cJSON* jsonevent_info_1 = event_info_convertToJSON(event_info_1);
	printf("event_info :\n%s\n", cJSON_Print(jsonevent_info_1));
	event_info_t* event_info_2 = event_info_parseFromJSON(jsonevent_info_1);
	cJSON* jsonevent_info_2 = event_info_convertToJSON(event_info_2);
	printf("repeating event_info:\n%s\n", cJSON_Print(jsonevent_info_2));
}

int main() {
  test_event_info(1);
  test_event_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_info_MAIN
#endif // event_info_TEST
