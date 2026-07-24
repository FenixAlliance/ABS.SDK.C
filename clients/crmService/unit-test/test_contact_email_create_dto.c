#ifndef contact_email_create_dto_TEST
#define contact_email_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_email_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_email_create_dto.h"
contact_email_create_dto_t* instantiate_contact_email_create_dto(int include_optional);



contact_email_create_dto_t* instantiate_contact_email_create_dto(int include_optional) {
  contact_email_create_dto_t* contact_email_create_dto = NULL;
  if (include_optional) {
    contact_email_create_dto = contact_email_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1
    );
  } else {
    contact_email_create_dto = contact_email_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1
    );
  }

  return contact_email_create_dto;
}


#ifdef contact_email_create_dto_MAIN

void test_contact_email_create_dto(int include_optional) {
    contact_email_create_dto_t* contact_email_create_dto_1 = instantiate_contact_email_create_dto(include_optional);

	cJSON* jsoncontact_email_create_dto_1 = contact_email_create_dto_convertToJSON(contact_email_create_dto_1);
	printf("contact_email_create_dto :\n%s\n", cJSON_Print(jsoncontact_email_create_dto_1));
	contact_email_create_dto_t* contact_email_create_dto_2 = contact_email_create_dto_parseFromJSON(jsoncontact_email_create_dto_1);
	cJSON* jsoncontact_email_create_dto_2 = contact_email_create_dto_convertToJSON(contact_email_create_dto_2);
	printf("repeating contact_email_create_dto:\n%s\n", cJSON_Print(jsoncontact_email_create_dto_2));
}

int main() {
  test_contact_email_create_dto(1);
  test_contact_email_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_email_create_dto_MAIN
#endif // contact_email_create_dto_TEST
