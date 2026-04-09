#ifndef contact_update_dto_TEST
#define contact_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_update_dto.h"
contact_update_dto_t* instantiate_contact_update_dto(int include_optional);



contact_update_dto_t* instantiate_contact_update_dto(int include_optional) {
  contact_update_dto_t* contact_update_dto = NULL;
  if (include_optional) {
    contact_update_dto = contact_update_dto_create(
      crmservice_contact_update_dto_TYPE_Individual,
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
      "0",
      "0"
    );
  } else {
    contact_update_dto = contact_update_dto_create(
      crmservice_contact_update_dto_TYPE_Individual,
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
      "0",
      "0"
    );
  }

  return contact_update_dto;
}


#ifdef contact_update_dto_MAIN

void test_contact_update_dto(int include_optional) {
    contact_update_dto_t* contact_update_dto_1 = instantiate_contact_update_dto(include_optional);

	cJSON* jsoncontact_update_dto_1 = contact_update_dto_convertToJSON(contact_update_dto_1);
	printf("contact_update_dto :\n%s\n", cJSON_Print(jsoncontact_update_dto_1));
	contact_update_dto_t* contact_update_dto_2 = contact_update_dto_parseFromJSON(jsoncontact_update_dto_1);
	cJSON* jsoncontact_update_dto_2 = contact_update_dto_convertToJSON(contact_update_dto_2);
	printf("repeating contact_update_dto:\n%s\n", cJSON_Print(jsoncontact_update_dto_2));
}

int main() {
  test_contact_update_dto(1);
  test_contact_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_update_dto_MAIN
#endif // contact_update_dto_TEST
