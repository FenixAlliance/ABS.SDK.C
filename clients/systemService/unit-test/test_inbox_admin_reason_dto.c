#ifndef inbox_admin_reason_dto_TEST
#define inbox_admin_reason_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inbox_admin_reason_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inbox_admin_reason_dto.h"
inbox_admin_reason_dto_t* instantiate_inbox_admin_reason_dto(int include_optional);



inbox_admin_reason_dto_t* instantiate_inbox_admin_reason_dto(int include_optional) {
  inbox_admin_reason_dto_t* inbox_admin_reason_dto = NULL;
  if (include_optional) {
    inbox_admin_reason_dto = inbox_admin_reason_dto_create(
      "0"
    );
  } else {
    inbox_admin_reason_dto = inbox_admin_reason_dto_create(
      "0"
    );
  }

  return inbox_admin_reason_dto;
}


#ifdef inbox_admin_reason_dto_MAIN

void test_inbox_admin_reason_dto(int include_optional) {
    inbox_admin_reason_dto_t* inbox_admin_reason_dto_1 = instantiate_inbox_admin_reason_dto(include_optional);

	cJSON* jsoninbox_admin_reason_dto_1 = inbox_admin_reason_dto_convertToJSON(inbox_admin_reason_dto_1);
	printf("inbox_admin_reason_dto :\n%s\n", cJSON_Print(jsoninbox_admin_reason_dto_1));
	inbox_admin_reason_dto_t* inbox_admin_reason_dto_2 = inbox_admin_reason_dto_parseFromJSON(jsoninbox_admin_reason_dto_1);
	cJSON* jsoninbox_admin_reason_dto_2 = inbox_admin_reason_dto_convertToJSON(inbox_admin_reason_dto_2);
	printf("repeating inbox_admin_reason_dto:\n%s\n", cJSON_Print(jsoninbox_admin_reason_dto_2));
}

int main() {
  test_inbox_admin_reason_dto(1);
  test_inbox_admin_reason_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // inbox_admin_reason_dto_MAIN
#endif // inbox_admin_reason_dto_TEST
