#ifndef menu_context_dto_collection_query_parameters_TEST
#define menu_context_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define menu_context_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/menu_context_dto_collection_query_parameters.h"
menu_context_dto_collection_query_parameters_t* instantiate_menu_context_dto_collection_query_parameters(int include_optional);



menu_context_dto_collection_query_parameters_t* instantiate_menu_context_dto_collection_query_parameters(int include_optional) {
  menu_context_dto_collection_query_parameters_t* menu_context_dto_collection_query_parameters = NULL;
  if (include_optional) {
    menu_context_dto_collection_query_parameters = menu_context_dto_collection_query_parameters_create(
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
    menu_context_dto_collection_query_parameters = menu_context_dto_collection_query_parameters_create(
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

  return menu_context_dto_collection_query_parameters;
}


#ifdef menu_context_dto_collection_query_parameters_MAIN

void test_menu_context_dto_collection_query_parameters(int include_optional) {
    menu_context_dto_collection_query_parameters_t* menu_context_dto_collection_query_parameters_1 = instantiate_menu_context_dto_collection_query_parameters(include_optional);

	cJSON* jsonmenu_context_dto_collection_query_parameters_1 = menu_context_dto_collection_query_parameters_convertToJSON(menu_context_dto_collection_query_parameters_1);
	printf("menu_context_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonmenu_context_dto_collection_query_parameters_1));
	menu_context_dto_collection_query_parameters_t* menu_context_dto_collection_query_parameters_2 = menu_context_dto_collection_query_parameters_parseFromJSON(jsonmenu_context_dto_collection_query_parameters_1);
	cJSON* jsonmenu_context_dto_collection_query_parameters_2 = menu_context_dto_collection_query_parameters_convertToJSON(menu_context_dto_collection_query_parameters_2);
	printf("repeating menu_context_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonmenu_context_dto_collection_query_parameters_2));
}

int main() {
  test_menu_context_dto_collection_query_parameters(1);
  test_menu_context_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // menu_context_dto_collection_query_parameters_MAIN
#endif // menu_context_dto_collection_query_parameters_TEST
