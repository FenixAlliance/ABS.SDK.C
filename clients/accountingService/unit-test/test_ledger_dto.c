#ifndef ledger_dto_TEST
#define ledger_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ledger_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ledger_dto.h"
ledger_dto_t* instantiate_ledger_dto(int include_optional);



ledger_dto_t* instantiate_ledger_dto(int include_optional) {
  ledger_dto_t* ledger_dto = NULL;
  if (include_optional) {
    ledger_dto = ledger_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    ledger_dto = ledger_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return ledger_dto;
}


#ifdef ledger_dto_MAIN

void test_ledger_dto(int include_optional) {
    ledger_dto_t* ledger_dto_1 = instantiate_ledger_dto(include_optional);

	cJSON* jsonledger_dto_1 = ledger_dto_convertToJSON(ledger_dto_1);
	printf("ledger_dto :\n%s\n", cJSON_Print(jsonledger_dto_1));
	ledger_dto_t* ledger_dto_2 = ledger_dto_parseFromJSON(jsonledger_dto_1);
	cJSON* jsonledger_dto_2 = ledger_dto_convertToJSON(ledger_dto_2);
	printf("repeating ledger_dto:\n%s\n", cJSON_Print(jsonledger_dto_2));
}

int main() {
  test_ledger_dto(1);
  test_ledger_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // ledger_dto_MAIN
#endif // ledger_dto_TEST
