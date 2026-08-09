#ifndef outbox_admin_reason_dto_TEST
#define outbox_admin_reason_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define outbox_admin_reason_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/outbox_admin_reason_dto.h"
outbox_admin_reason_dto_t* instantiate_outbox_admin_reason_dto(int include_optional);



outbox_admin_reason_dto_t* instantiate_outbox_admin_reason_dto(int include_optional) {
  outbox_admin_reason_dto_t* outbox_admin_reason_dto = NULL;
  if (include_optional) {
    outbox_admin_reason_dto = outbox_admin_reason_dto_create(
      "0"
    );
  } else {
    outbox_admin_reason_dto = outbox_admin_reason_dto_create(
      "0"
    );
  }

  return outbox_admin_reason_dto;
}


#ifdef outbox_admin_reason_dto_MAIN

void test_outbox_admin_reason_dto(int include_optional) {
    outbox_admin_reason_dto_t* outbox_admin_reason_dto_1 = instantiate_outbox_admin_reason_dto(include_optional);

	cJSON* jsonoutbox_admin_reason_dto_1 = outbox_admin_reason_dto_convertToJSON(outbox_admin_reason_dto_1);
	printf("outbox_admin_reason_dto :\n%s\n", cJSON_Print(jsonoutbox_admin_reason_dto_1));
	outbox_admin_reason_dto_t* outbox_admin_reason_dto_2 = outbox_admin_reason_dto_parseFromJSON(jsonoutbox_admin_reason_dto_1);
	cJSON* jsonoutbox_admin_reason_dto_2 = outbox_admin_reason_dto_convertToJSON(outbox_admin_reason_dto_2);
	printf("repeating outbox_admin_reason_dto:\n%s\n", cJSON_Print(jsonoutbox_admin_reason_dto_2));
}

int main() {
  test_outbox_admin_reason_dto(1);
  test_outbox_admin_reason_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // outbox_admin_reason_dto_MAIN
#endif // outbox_admin_reason_dto_TEST
