#ifndef ledger_type_update_dto_TEST
#define ledger_type_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ledger_type_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ledger_type_update_dto.h"
ledger_type_update_dto_t* instantiate_ledger_type_update_dto(int include_optional);



ledger_type_update_dto_t* instantiate_ledger_type_update_dto(int include_optional) {
  ledger_type_update_dto_t* ledger_type_update_dto = NULL;
  if (include_optional) {
    ledger_type_update_dto = ledger_type_update_dto_create(
      "0",
      accountingservice_ledger_type_update_dto_LEDGERCLASS_Assets,
      "0",
      "0"
    );
  } else {
    ledger_type_update_dto = ledger_type_update_dto_create(
      "0",
      accountingservice_ledger_type_update_dto_LEDGERCLASS_Assets,
      "0",
      "0"
    );
  }

  return ledger_type_update_dto;
}


#ifdef ledger_type_update_dto_MAIN

void test_ledger_type_update_dto(int include_optional) {
    ledger_type_update_dto_t* ledger_type_update_dto_1 = instantiate_ledger_type_update_dto(include_optional);

	cJSON* jsonledger_type_update_dto_1 = ledger_type_update_dto_convertToJSON(ledger_type_update_dto_1);
	printf("ledger_type_update_dto :\n%s\n", cJSON_Print(jsonledger_type_update_dto_1));
	ledger_type_update_dto_t* ledger_type_update_dto_2 = ledger_type_update_dto_parseFromJSON(jsonledger_type_update_dto_1);
	cJSON* jsonledger_type_update_dto_2 = ledger_type_update_dto_convertToJSON(ledger_type_update_dto_2);
	printf("repeating ledger_type_update_dto:\n%s\n", cJSON_Print(jsonledger_type_update_dto_2));
}

int main() {
  test_ledger_type_update_dto(1);
  test_ledger_type_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // ledger_type_update_dto_MAIN
#endif // ledger_type_update_dto_TEST
