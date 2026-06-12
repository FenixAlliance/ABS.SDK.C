#ifndef menu_context_update_dto_TEST
#define menu_context_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define menu_context_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/menu_context_update_dto.h"
menu_context_update_dto_t* instantiate_menu_context_update_dto(int include_optional);



menu_context_update_dto_t* instantiate_menu_context_update_dto(int include_optional) {
  menu_context_update_dto_t* menu_context_update_dto = NULL;
  if (include_optional) {
    menu_context_update_dto = menu_context_update_dto_create(
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    menu_context_update_dto = menu_context_update_dto_create(
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return menu_context_update_dto;
}


#ifdef menu_context_update_dto_MAIN

void test_menu_context_update_dto(int include_optional) {
    menu_context_update_dto_t* menu_context_update_dto_1 = instantiate_menu_context_update_dto(include_optional);

	cJSON* jsonmenu_context_update_dto_1 = menu_context_update_dto_convertToJSON(menu_context_update_dto_1);
	printf("menu_context_update_dto :\n%s\n", cJSON_Print(jsonmenu_context_update_dto_1));
	menu_context_update_dto_t* menu_context_update_dto_2 = menu_context_update_dto_parseFromJSON(jsonmenu_context_update_dto_1);
	cJSON* jsonmenu_context_update_dto_2 = menu_context_update_dto_convertToJSON(menu_context_update_dto_2);
	printf("repeating menu_context_update_dto:\n%s\n", cJSON_Print(jsonmenu_context_update_dto_2));
}

int main() {
  test_menu_context_update_dto(1);
  test_menu_context_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // menu_context_update_dto_MAIN
#endif // menu_context_update_dto_TEST
