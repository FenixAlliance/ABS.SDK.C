#ifndef accounting_entry_dto_TEST
#define accounting_entry_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accounting_entry_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accounting_entry_dto.h"
accounting_entry_dto_t* instantiate_accounting_entry_dto(int include_optional);

#include "test_money.c"
#include "test_money.c"


accounting_entry_dto_t* instantiate_accounting_entry_dto(int include_optional) {
  accounting_entry_dto_t* accounting_entry_dto = NULL;
  if (include_optional) {
    accounting_entry_dto = accounting_entry_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      1.337,
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
      accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_None,
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_money(0)
    );
  } else {
    accounting_entry_dto = accounting_entry_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      "0",
      1.337,
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
      accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_None,
      NULL,
      NULL
    );
  }

  return accounting_entry_dto;
}


#ifdef accounting_entry_dto_MAIN

void test_accounting_entry_dto(int include_optional) {
    accounting_entry_dto_t* accounting_entry_dto_1 = instantiate_accounting_entry_dto(include_optional);

	cJSON* jsonaccounting_entry_dto_1 = accounting_entry_dto_convertToJSON(accounting_entry_dto_1);
	printf("accounting_entry_dto :\n%s\n", cJSON_Print(jsonaccounting_entry_dto_1));
	accounting_entry_dto_t* accounting_entry_dto_2 = accounting_entry_dto_parseFromJSON(jsonaccounting_entry_dto_1);
	cJSON* jsonaccounting_entry_dto_2 = accounting_entry_dto_convertToJSON(accounting_entry_dto_2);
	printf("repeating accounting_entry_dto:\n%s\n", cJSON_Print(jsonaccounting_entry_dto_2));
}

int main() {
  test_accounting_entry_dto(1);
  test_accounting_entry_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // accounting_entry_dto_MAIN
#endif // accounting_entry_dto_TEST
