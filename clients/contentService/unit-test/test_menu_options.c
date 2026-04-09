#ifndef menu_options_TEST
#define menu_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define menu_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/menu_options.h"
menu_options_t* instantiate_menu_options(int include_optional);

#include "test_typography.c"


menu_options_t* instantiate_menu_options(int include_optional) {
  menu_options_t* menu_options = NULL;
  if (include_optional) {
    menu_options = menu_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_typography(0),
      contentservice_menu_options_MENUHIGHLIGHTSTYLE_TopBar,
      contentservice_menu_options_MAINMENUSEARCHLAYOUT_Dropdown,
      contentservice_menu_options_MENUDROPDOWNANIMATION_Fade,
      contentservice_menu_options_MENUDROPDOWNINDICATOR_None
    );
  } else {
    menu_options = menu_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      NULL,
      contentservice_menu_options_MENUHIGHLIGHTSTYLE_TopBar,
      contentservice_menu_options_MAINMENUSEARCHLAYOUT_Dropdown,
      contentservice_menu_options_MENUDROPDOWNANIMATION_Fade,
      contentservice_menu_options_MENUDROPDOWNINDICATOR_None
    );
  }

  return menu_options;
}


#ifdef menu_options_MAIN

void test_menu_options(int include_optional) {
    menu_options_t* menu_options_1 = instantiate_menu_options(include_optional);

	cJSON* jsonmenu_options_1 = menu_options_convertToJSON(menu_options_1);
	printf("menu_options :\n%s\n", cJSON_Print(jsonmenu_options_1));
	menu_options_t* menu_options_2 = menu_options_parseFromJSON(jsonmenu_options_1);
	cJSON* jsonmenu_options_2 = menu_options_convertToJSON(menu_options_2);
	printf("repeating menu_options:\n%s\n", cJSON_Print(jsonmenu_options_2));
}

int main() {
  test_menu_options(1);
  test_menu_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // menu_options_MAIN
#endif // menu_options_TEST
