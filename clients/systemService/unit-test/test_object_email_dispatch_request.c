#ifndef object_email_dispatch_request_TEST
#define object_email_dispatch_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define object_email_dispatch_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/object_email_dispatch_request.h"
object_email_dispatch_request_t* instantiate_object_email_dispatch_request(int include_optional);



object_email_dispatch_request_t* instantiate_object_email_dispatch_request(int include_optional) {
  object_email_dispatch_request_t* object_email_dispatch_request = NULL;
  if (include_optional) {
    object_email_dispatch_request = object_email_dispatch_request_create(
      "0",
      "0123456789",
      "0",
      "0",
      "0",
      systemservice_object_email_dispatch_request_ALERTTYPE_None,
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      null
    );
  } else {
    object_email_dispatch_request = object_email_dispatch_request_create(
      "0",
      "0123456789",
      "0",
      "0",
      "0",
      systemservice_object_email_dispatch_request_ALERTTYPE_None,
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      null
    );
  }

  return object_email_dispatch_request;
}


#ifdef object_email_dispatch_request_MAIN

void test_object_email_dispatch_request(int include_optional) {
    object_email_dispatch_request_t* object_email_dispatch_request_1 = instantiate_object_email_dispatch_request(include_optional);

	cJSON* jsonobject_email_dispatch_request_1 = object_email_dispatch_request_convertToJSON(object_email_dispatch_request_1);
	printf("object_email_dispatch_request :\n%s\n", cJSON_Print(jsonobject_email_dispatch_request_1));
	object_email_dispatch_request_t* object_email_dispatch_request_2 = object_email_dispatch_request_parseFromJSON(jsonobject_email_dispatch_request_1);
	cJSON* jsonobject_email_dispatch_request_2 = object_email_dispatch_request_convertToJSON(object_email_dispatch_request_2);
	printf("repeating object_email_dispatch_request:\n%s\n", cJSON_Print(jsonobject_email_dispatch_request_2));
}

int main() {
  test_object_email_dispatch_request(1);
  test_object_email_dispatch_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // object_email_dispatch_request_MAIN
#endif // object_email_dispatch_request_TEST
