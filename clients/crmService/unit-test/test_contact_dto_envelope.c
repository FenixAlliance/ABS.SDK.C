#ifndef contact_dto_envelope_TEST
#define contact_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_dto_envelope.h"
contact_dto_envelope_t* instantiate_contact_dto_envelope(int include_optional);

#include "test_contact_dto.c"


contact_dto_envelope_t* instantiate_contact_dto_envelope(int include_optional) {
  contact_dto_envelope_t* contact_dto_envelope = NULL;
  if (include_optional) {
    contact_dto_envelope = contact_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_contact_dto(0)
    );
  } else {
    contact_dto_envelope = contact_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return contact_dto_envelope;
}


#ifdef contact_dto_envelope_MAIN

void test_contact_dto_envelope(int include_optional) {
    contact_dto_envelope_t* contact_dto_envelope_1 = instantiate_contact_dto_envelope(include_optional);

	cJSON* jsoncontact_dto_envelope_1 = contact_dto_envelope_convertToJSON(contact_dto_envelope_1);
	printf("contact_dto_envelope :\n%s\n", cJSON_Print(jsoncontact_dto_envelope_1));
	contact_dto_envelope_t* contact_dto_envelope_2 = contact_dto_envelope_parseFromJSON(jsoncontact_dto_envelope_1);
	cJSON* jsoncontact_dto_envelope_2 = contact_dto_envelope_convertToJSON(contact_dto_envelope_2);
	printf("repeating contact_dto_envelope:\n%s\n", cJSON_Print(jsoncontact_dto_envelope_2));
}

int main() {
  test_contact_dto_envelope(1);
  test_contact_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_dto_envelope_MAIN
#endif // contact_dto_envelope_TEST
