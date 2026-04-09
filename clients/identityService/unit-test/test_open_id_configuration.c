#ifndef open_id_configuration_TEST
#define open_id_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define open_id_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/open_id_configuration.h"
open_id_configuration_t* instantiate_open_id_configuration(int include_optional);



open_id_configuration_t* instantiate_open_id_configuration(int include_optional) {
  open_id_configuration_t* open_id_configuration = NULL;
  if (include_optional) {
    open_id_configuration = open_id_configuration_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    open_id_configuration = open_id_configuration_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return open_id_configuration;
}


#ifdef open_id_configuration_MAIN

void test_open_id_configuration(int include_optional) {
    open_id_configuration_t* open_id_configuration_1 = instantiate_open_id_configuration(include_optional);

	cJSON* jsonopen_id_configuration_1 = open_id_configuration_convertToJSON(open_id_configuration_1);
	printf("open_id_configuration :\n%s\n", cJSON_Print(jsonopen_id_configuration_1));
	open_id_configuration_t* open_id_configuration_2 = open_id_configuration_parseFromJSON(jsonopen_id_configuration_1);
	cJSON* jsonopen_id_configuration_2 = open_id_configuration_convertToJSON(open_id_configuration_2);
	printf("repeating open_id_configuration:\n%s\n", cJSON_Print(jsonopen_id_configuration_2));
}

int main() {
  test_open_id_configuration(1);
  test_open_id_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // open_id_configuration_MAIN
#endif // open_id_configuration_TEST
