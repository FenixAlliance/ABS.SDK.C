#ifndef menu_context_dto_list_envelope_TEST
#define menu_context_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define menu_context_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/menu_context_dto_list_envelope.h"
menu_context_dto_list_envelope_t* instantiate_menu_context_dto_list_envelope(int include_optional);



menu_context_dto_list_envelope_t* instantiate_menu_context_dto_list_envelope(int include_optional) {
  menu_context_dto_list_envelope_t* menu_context_dto_list_envelope = NULL;
  if (include_optional) {
    menu_context_dto_list_envelope = menu_context_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    menu_context_dto_list_envelope = menu_context_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return menu_context_dto_list_envelope;
}


#ifdef menu_context_dto_list_envelope_MAIN

void test_menu_context_dto_list_envelope(int include_optional) {
    menu_context_dto_list_envelope_t* menu_context_dto_list_envelope_1 = instantiate_menu_context_dto_list_envelope(include_optional);

	cJSON* jsonmenu_context_dto_list_envelope_1 = menu_context_dto_list_envelope_convertToJSON(menu_context_dto_list_envelope_1);
	printf("menu_context_dto_list_envelope :\n%s\n", cJSON_Print(jsonmenu_context_dto_list_envelope_1));
	menu_context_dto_list_envelope_t* menu_context_dto_list_envelope_2 = menu_context_dto_list_envelope_parseFromJSON(jsonmenu_context_dto_list_envelope_1);
	cJSON* jsonmenu_context_dto_list_envelope_2 = menu_context_dto_list_envelope_convertToJSON(menu_context_dto_list_envelope_2);
	printf("repeating menu_context_dto_list_envelope:\n%s\n", cJSON_Print(jsonmenu_context_dto_list_envelope_2));
}

int main() {
  test_menu_context_dto_list_envelope(1);
  test_menu_context_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // menu_context_dto_list_envelope_MAIN
#endif // menu_context_dto_list_envelope_TEST
