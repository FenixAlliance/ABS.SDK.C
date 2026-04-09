#ifndef contact_profile_dto_list_envelope_TEST
#define contact_profile_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_profile_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_profile_dto_list_envelope.h"
contact_profile_dto_list_envelope_t* instantiate_contact_profile_dto_list_envelope(int include_optional);



contact_profile_dto_list_envelope_t* instantiate_contact_profile_dto_list_envelope(int include_optional) {
  contact_profile_dto_list_envelope_t* contact_profile_dto_list_envelope = NULL;
  if (include_optional) {
    contact_profile_dto_list_envelope = contact_profile_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    contact_profile_dto_list_envelope = contact_profile_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return contact_profile_dto_list_envelope;
}


#ifdef contact_profile_dto_list_envelope_MAIN

void test_contact_profile_dto_list_envelope(int include_optional) {
    contact_profile_dto_list_envelope_t* contact_profile_dto_list_envelope_1 = instantiate_contact_profile_dto_list_envelope(include_optional);

	cJSON* jsoncontact_profile_dto_list_envelope_1 = contact_profile_dto_list_envelope_convertToJSON(contact_profile_dto_list_envelope_1);
	printf("contact_profile_dto_list_envelope :\n%s\n", cJSON_Print(jsoncontact_profile_dto_list_envelope_1));
	contact_profile_dto_list_envelope_t* contact_profile_dto_list_envelope_2 = contact_profile_dto_list_envelope_parseFromJSON(jsoncontact_profile_dto_list_envelope_1);
	cJSON* jsoncontact_profile_dto_list_envelope_2 = contact_profile_dto_list_envelope_convertToJSON(contact_profile_dto_list_envelope_2);
	printf("repeating contact_profile_dto_list_envelope:\n%s\n", cJSON_Print(jsoncontact_profile_dto_list_envelope_2));
}

int main() {
  test_contact_profile_dto_list_envelope(1);
  test_contact_profile_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_profile_dto_list_envelope_MAIN
#endif // contact_profile_dto_list_envelope_TEST
