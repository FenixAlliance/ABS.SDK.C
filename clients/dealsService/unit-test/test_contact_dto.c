#ifndef contact_dto_TEST
#define contact_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_dto.h"
contact_dto_t* instantiate_contact_dto(int include_optional);



contact_dto_t* instantiate_contact_dto(int include_optional) {
  contact_dto_t* contact_dto = NULL;
  if (include_optional) {
    contact_dto = contact_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      dealsservice_contact_dto_TYPE_Individual,
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
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    contact_dto = contact_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      dealsservice_contact_dto_TYPE_Individual,
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
      "2013-10-20T19:20:30+01:00"
    );
  }

  return contact_dto;
}


#ifdef contact_dto_MAIN

void test_contact_dto(int include_optional) {
    contact_dto_t* contact_dto_1 = instantiate_contact_dto(include_optional);

	cJSON* jsoncontact_dto_1 = contact_dto_convertToJSON(contact_dto_1);
	printf("contact_dto :\n%s\n", cJSON_Print(jsoncontact_dto_1));
	contact_dto_t* contact_dto_2 = contact_dto_parseFromJSON(jsoncontact_dto_1);
	cJSON* jsoncontact_dto_2 = contact_dto_convertToJSON(contact_dto_2);
	printf("repeating contact_dto:\n%s\n", cJSON_Print(jsoncontact_dto_2));
}

int main() {
  test_contact_dto(1);
  test_contact_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_dto_MAIN
#endif // contact_dto_TEST
