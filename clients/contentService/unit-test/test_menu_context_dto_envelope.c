#ifndef menu_context_dto_envelope_TEST
#define menu_context_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define menu_context_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/menu_context_dto_envelope.h"
menu_context_dto_envelope_t* instantiate_menu_context_dto_envelope(int include_optional);

#include "test_menu_context_dto.c"


menu_context_dto_envelope_t* instantiate_menu_context_dto_envelope(int include_optional) {
  menu_context_dto_envelope_t* menu_context_dto_envelope = NULL;
  if (include_optional) {
    menu_context_dto_envelope = menu_context_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_menu_context_dto(0)
    );
  } else {
    menu_context_dto_envelope = menu_context_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return menu_context_dto_envelope;
}


#ifdef menu_context_dto_envelope_MAIN

void test_menu_context_dto_envelope(int include_optional) {
    menu_context_dto_envelope_t* menu_context_dto_envelope_1 = instantiate_menu_context_dto_envelope(include_optional);

	cJSON* jsonmenu_context_dto_envelope_1 = menu_context_dto_envelope_convertToJSON(menu_context_dto_envelope_1);
	printf("menu_context_dto_envelope :\n%s\n", cJSON_Print(jsonmenu_context_dto_envelope_1));
	menu_context_dto_envelope_t* menu_context_dto_envelope_2 = menu_context_dto_envelope_parseFromJSON(jsonmenu_context_dto_envelope_1);
	cJSON* jsonmenu_context_dto_envelope_2 = menu_context_dto_envelope_convertToJSON(menu_context_dto_envelope_2);
	printf("repeating menu_context_dto_envelope:\n%s\n", cJSON_Print(jsonmenu_context_dto_envelope_2));
}

int main() {
  test_menu_context_dto_envelope(1);
  test_menu_context_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // menu_context_dto_envelope_MAIN
#endif // menu_context_dto_envelope_TEST
