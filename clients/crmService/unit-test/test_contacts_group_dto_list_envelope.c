#ifndef contacts_group_dto_list_envelope_TEST
#define contacts_group_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacts_group_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacts_group_dto_list_envelope.h"
contacts_group_dto_list_envelope_t* instantiate_contacts_group_dto_list_envelope(int include_optional);



contacts_group_dto_list_envelope_t* instantiate_contacts_group_dto_list_envelope(int include_optional) {
  contacts_group_dto_list_envelope_t* contacts_group_dto_list_envelope = NULL;
  if (include_optional) {
    contacts_group_dto_list_envelope = contacts_group_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    contacts_group_dto_list_envelope = contacts_group_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return contacts_group_dto_list_envelope;
}


#ifdef contacts_group_dto_list_envelope_MAIN

void test_contacts_group_dto_list_envelope(int include_optional) {
    contacts_group_dto_list_envelope_t* contacts_group_dto_list_envelope_1 = instantiate_contacts_group_dto_list_envelope(include_optional);

	cJSON* jsoncontacts_group_dto_list_envelope_1 = contacts_group_dto_list_envelope_convertToJSON(contacts_group_dto_list_envelope_1);
	printf("contacts_group_dto_list_envelope :\n%s\n", cJSON_Print(jsoncontacts_group_dto_list_envelope_1));
	contacts_group_dto_list_envelope_t* contacts_group_dto_list_envelope_2 = contacts_group_dto_list_envelope_parseFromJSON(jsoncontacts_group_dto_list_envelope_1);
	cJSON* jsoncontacts_group_dto_list_envelope_2 = contacts_group_dto_list_envelope_convertToJSON(contacts_group_dto_list_envelope_2);
	printf("repeating contacts_group_dto_list_envelope:\n%s\n", cJSON_Print(jsoncontacts_group_dto_list_envelope_2));
}

int main() {
  test_contacts_group_dto_list_envelope(1);
  test_contacts_group_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacts_group_dto_list_envelope_MAIN
#endif // contacts_group_dto_list_envelope_TEST
