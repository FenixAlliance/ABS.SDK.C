#ifndef contact_point_TEST
#define contact_point_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_point_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_point.h"
contact_point_t* instantiate_contact_point(int include_optional);



contact_point_t* instantiate_contact_point(int include_optional) {
  contact_point_t* contact_point = NULL;
  if (include_optional) {
    contact_point = contact_point_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0"
    );
  } else {
    contact_point = contact_point_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0"
    );
  }

  return contact_point;
}


#ifdef contact_point_MAIN

void test_contact_point(int include_optional) {
    contact_point_t* contact_point_1 = instantiate_contact_point(include_optional);

	cJSON* jsoncontact_point_1 = contact_point_convertToJSON(contact_point_1);
	printf("contact_point :\n%s\n", cJSON_Print(jsoncontact_point_1));
	contact_point_t* contact_point_2 = contact_point_parseFromJSON(jsoncontact_point_1);
	cJSON* jsoncontact_point_2 = contact_point_convertToJSON(contact_point_2);
	printf("repeating contact_point:\n%s\n", cJSON_Print(jsoncontact_point_2));
}

int main() {
  test_contact_point(1);
  test_contact_point(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_point_MAIN
#endif // contact_point_TEST
