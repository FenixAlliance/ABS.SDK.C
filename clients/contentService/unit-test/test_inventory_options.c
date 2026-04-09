#ifndef inventory_options_TEST
#define inventory_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inventory_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inventory_options.h"
inventory_options_t* instantiate_inventory_options(int include_optional);



inventory_options_t* instantiate_inventory_options(int include_optional) {
  inventory_options_t* inventory_options = NULL;
  if (include_optional) {
    inventory_options = inventory_options_create(
      1,
      1,
      1,
      1,
      "0",
      56,
      56,
      56,
      contentservice_inventory_options_STOCKDISPLAYFORMAT_AlwaysDisplayRemainingQuantity
    );
  } else {
    inventory_options = inventory_options_create(
      1,
      1,
      1,
      1,
      "0",
      56,
      56,
      56,
      contentservice_inventory_options_STOCKDISPLAYFORMAT_AlwaysDisplayRemainingQuantity
    );
  }

  return inventory_options;
}


#ifdef inventory_options_MAIN

void test_inventory_options(int include_optional) {
    inventory_options_t* inventory_options_1 = instantiate_inventory_options(include_optional);

	cJSON* jsoninventory_options_1 = inventory_options_convertToJSON(inventory_options_1);
	printf("inventory_options :\n%s\n", cJSON_Print(jsoninventory_options_1));
	inventory_options_t* inventory_options_2 = inventory_options_parseFromJSON(jsoninventory_options_1);
	cJSON* jsoninventory_options_2 = inventory_options_convertToJSON(inventory_options_2);
	printf("repeating inventory_options:\n%s\n", cJSON_Print(jsoninventory_options_2));
}

int main() {
  test_inventory_options(1);
  test_inventory_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // inventory_options_MAIN
#endif // inventory_options_TEST
