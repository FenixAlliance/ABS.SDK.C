#ifndef contact_profile_dto_TEST
#define contact_profile_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_profile_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_profile_dto.h"
contact_profile_dto_t* instantiate_contact_profile_dto(int include_optional);



contact_profile_dto_t* instantiate_contact_profile_dto(int include_optional) {
  contact_profile_dto_t* contact_profile_dto = NULL;
  if (include_optional) {
    contact_profile_dto = contact_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
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
    contact_profile_dto = contact_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
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

  return contact_profile_dto;
}


#ifdef contact_profile_dto_MAIN

void test_contact_profile_dto(int include_optional) {
    contact_profile_dto_t* contact_profile_dto_1 = instantiate_contact_profile_dto(include_optional);

	cJSON* jsoncontact_profile_dto_1 = contact_profile_dto_convertToJSON(contact_profile_dto_1);
	printf("contact_profile_dto :\n%s\n", cJSON_Print(jsoncontact_profile_dto_1));
	contact_profile_dto_t* contact_profile_dto_2 = contact_profile_dto_parseFromJSON(jsoncontact_profile_dto_1);
	cJSON* jsoncontact_profile_dto_2 = contact_profile_dto_convertToJSON(contact_profile_dto_2);
	printf("repeating contact_profile_dto:\n%s\n", cJSON_Print(jsoncontact_profile_dto_2));
}

int main() {
  test_contact_profile_dto(1);
  test_contact_profile_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_profile_dto_MAIN
#endif // contact_profile_dto_TEST
