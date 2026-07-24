#ifndef contact_source_update_dto_TEST
#define contact_source_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_source_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_source_update_dto.h"
contact_source_update_dto_t* instantiate_contact_source_update_dto(int include_optional);



contact_source_update_dto_t* instantiate_contact_source_update_dto(int include_optional) {
  contact_source_update_dto_t* contact_source_update_dto = NULL;
  if (include_optional) {
    contact_source_update_dto = contact_source_update_dto_create(
      "0",
      "0"
    );
  } else {
    contact_source_update_dto = contact_source_update_dto_create(
      "0",
      "0"
    );
  }

  return contact_source_update_dto;
}


#ifdef contact_source_update_dto_MAIN

void test_contact_source_update_dto(int include_optional) {
    contact_source_update_dto_t* contact_source_update_dto_1 = instantiate_contact_source_update_dto(include_optional);

	cJSON* jsoncontact_source_update_dto_1 = contact_source_update_dto_convertToJSON(contact_source_update_dto_1);
	printf("contact_source_update_dto :\n%s\n", cJSON_Print(jsoncontact_source_update_dto_1));
	contact_source_update_dto_t* contact_source_update_dto_2 = contact_source_update_dto_parseFromJSON(jsoncontact_source_update_dto_1);
	cJSON* jsoncontact_source_update_dto_2 = contact_source_update_dto_convertToJSON(contact_source_update_dto_2);
	printf("repeating contact_source_update_dto:\n%s\n", cJSON_Print(jsoncontact_source_update_dto_2));
}

int main() {
  test_contact_source_update_dto(1);
  test_contact_source_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_source_update_dto_MAIN
#endif // contact_source_update_dto_TEST
