#ifndef contact_options_TEST
#define contact_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_options.h"
contact_options_t* instantiate_contact_options(int include_optional);



contact_options_t* instantiate_contact_options(int include_optional) {
  contact_options_t* contact_options = NULL;
  if (include_optional) {
    contact_options = contact_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    contact_options = contact_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return contact_options;
}


#ifdef contact_options_MAIN

void test_contact_options(int include_optional) {
    contact_options_t* contact_options_1 = instantiate_contact_options(include_optional);

	cJSON* jsoncontact_options_1 = contact_options_convertToJSON(contact_options_1);
	printf("contact_options :\n%s\n", cJSON_Print(jsoncontact_options_1));
	contact_options_t* contact_options_2 = contact_options_parseFromJSON(jsoncontact_options_1);
	cJSON* jsoncontact_options_2 = contact_options_convertToJSON(contact_options_2);
	printf("repeating contact_options:\n%s\n", cJSON_Print(jsoncontact_options_2));
}

int main() {
  test_contact_options(1);
  test_contact_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_options_MAIN
#endif // contact_options_TEST
