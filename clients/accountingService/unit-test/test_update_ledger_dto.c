#ifndef update_ledger_dto_TEST
#define update_ledger_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_ledger_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_ledger_dto.h"
update_ledger_dto_t* instantiate_update_ledger_dto(int include_optional);



update_ledger_dto_t* instantiate_update_ledger_dto(int include_optional) {
  update_ledger_dto_t* update_ledger_dto = NULL;
  if (include_optional) {
    update_ledger_dto = update_ledger_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    update_ledger_dto = update_ledger_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return update_ledger_dto;
}


#ifdef update_ledger_dto_MAIN

void test_update_ledger_dto(int include_optional) {
    update_ledger_dto_t* update_ledger_dto_1 = instantiate_update_ledger_dto(include_optional);

	cJSON* jsonupdate_ledger_dto_1 = update_ledger_dto_convertToJSON(update_ledger_dto_1);
	printf("update_ledger_dto :\n%s\n", cJSON_Print(jsonupdate_ledger_dto_1));
	update_ledger_dto_t* update_ledger_dto_2 = update_ledger_dto_parseFromJSON(jsonupdate_ledger_dto_1);
	cJSON* jsonupdate_ledger_dto_2 = update_ledger_dto_convertToJSON(update_ledger_dto_2);
	printf("repeating update_ledger_dto:\n%s\n", cJSON_Print(jsonupdate_ledger_dto_2));
}

int main() {
  test_update_ledger_dto(1);
  test_update_ledger_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_ledger_dto_MAIN
#endif // update_ledger_dto_TEST
