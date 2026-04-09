#ifndef new_wish_list_request_TEST
#define new_wish_list_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define new_wish_list_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/new_wish_list_request.h"
new_wish_list_request_t* instantiate_new_wish_list_request(int include_optional);



new_wish_list_request_t* instantiate_new_wish_list_request(int include_optional) {
  new_wish_list_request_t* new_wish_list_request = NULL;
  if (include_optional) {
    new_wish_list_request = new_wish_list_request_create(
      "0",
      "0",
      "0",
      1
    );
  } else {
    new_wish_list_request = new_wish_list_request_create(
      "0",
      "0",
      "0",
      1
    );
  }

  return new_wish_list_request;
}


#ifdef new_wish_list_request_MAIN

void test_new_wish_list_request(int include_optional) {
    new_wish_list_request_t* new_wish_list_request_1 = instantiate_new_wish_list_request(include_optional);

	cJSON* jsonnew_wish_list_request_1 = new_wish_list_request_convertToJSON(new_wish_list_request_1);
	printf("new_wish_list_request :\n%s\n", cJSON_Print(jsonnew_wish_list_request_1));
	new_wish_list_request_t* new_wish_list_request_2 = new_wish_list_request_parseFromJSON(jsonnew_wish_list_request_1);
	cJSON* jsonnew_wish_list_request_2 = new_wish_list_request_convertToJSON(new_wish_list_request_2);
	printf("repeating new_wish_list_request:\n%s\n", cJSON_Print(jsonnew_wish_list_request_2));
}

int main() {
  test_new_wish_list_request(1);
  test_new_wish_list_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // new_wish_list_request_MAIN
#endif // new_wish_list_request_TEST
