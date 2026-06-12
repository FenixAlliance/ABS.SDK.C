#ifndef web_socket_manager_TEST
#define web_socket_manager_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define web_socket_manager_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/web_socket_manager.h"
web_socket_manager_t* instantiate_web_socket_manager(int include_optional);



web_socket_manager_t* instantiate_web_socket_manager(int include_optional) {
  web_socket_manager_t* web_socket_manager = NULL;
  if (include_optional) {
    web_socket_manager = web_socket_manager_create(
      1,
      list_createList()
    );
  } else {
    web_socket_manager = web_socket_manager_create(
      1,
      list_createList()
    );
  }

  return web_socket_manager;
}


#ifdef web_socket_manager_MAIN

void test_web_socket_manager(int include_optional) {
    web_socket_manager_t* web_socket_manager_1 = instantiate_web_socket_manager(include_optional);

	cJSON* jsonweb_socket_manager_1 = web_socket_manager_convertToJSON(web_socket_manager_1);
	printf("web_socket_manager :\n%s\n", cJSON_Print(jsonweb_socket_manager_1));
	web_socket_manager_t* web_socket_manager_2 = web_socket_manager_parseFromJSON(jsonweb_socket_manager_1);
	cJSON* jsonweb_socket_manager_2 = web_socket_manager_convertToJSON(web_socket_manager_2);
	printf("repeating web_socket_manager:\n%s\n", cJSON_Print(jsonweb_socket_manager_2));
}

int main() {
  test_web_socket_manager(1);
  test_web_socket_manager(0);

  printf("Hello world \n");
  return 0;
}

#endif // web_socket_manager_MAIN
#endif // web_socket_manager_TEST
