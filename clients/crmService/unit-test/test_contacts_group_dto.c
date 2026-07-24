#ifndef contacts_group_dto_TEST
#define contacts_group_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacts_group_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacts_group_dto.h"
contacts_group_dto_t* instantiate_contacts_group_dto(int include_optional);



contacts_group_dto_t* instantiate_contacts_group_dto(int include_optional) {
  contacts_group_dto_t* contacts_group_dto = NULL;
  if (include_optional) {
    contacts_group_dto = contacts_group_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    contacts_group_dto = contacts_group_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return contacts_group_dto;
}


#ifdef contacts_group_dto_MAIN

void test_contacts_group_dto(int include_optional) {
    contacts_group_dto_t* contacts_group_dto_1 = instantiate_contacts_group_dto(include_optional);

	cJSON* jsoncontacts_group_dto_1 = contacts_group_dto_convertToJSON(contacts_group_dto_1);
	printf("contacts_group_dto :\n%s\n", cJSON_Print(jsoncontacts_group_dto_1));
	contacts_group_dto_t* contacts_group_dto_2 = contacts_group_dto_parseFromJSON(jsoncontacts_group_dto_1);
	cJSON* jsoncontacts_group_dto_2 = contacts_group_dto_convertToJSON(contacts_group_dto_2);
	printf("repeating contacts_group_dto:\n%s\n", cJSON_Print(jsoncontacts_group_dto_2));
}

int main() {
  test_contacts_group_dto(1);
  test_contacts_group_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacts_group_dto_MAIN
#endif // contacts_group_dto_TEST
