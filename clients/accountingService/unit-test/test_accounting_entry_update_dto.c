#ifndef accounting_entry_update_dto_TEST
#define accounting_entry_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accounting_entry_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accounting_entry_update_dto.h"
accounting_entry_update_dto_t* instantiate_accounting_entry_update_dto(int include_optional);



accounting_entry_update_dto_t* instantiate_accounting_entry_update_dto(int include_optional) {
  accounting_entry_update_dto_t* accounting_entry_update_dto = NULL;
  if (include_optional) {
    accounting_entry_update_dto = accounting_entry_update_dto_create(
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "0",
      0.01,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      accountingservice_accounting_entry_update_dto_ACCOUNTINGENTRYTYPE_None
    );
  } else {
    accounting_entry_update_dto = accounting_entry_update_dto_create(
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "0",
      0.01,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      accountingservice_accounting_entry_update_dto_ACCOUNTINGENTRYTYPE_None
    );
  }

  return accounting_entry_update_dto;
}


#ifdef accounting_entry_update_dto_MAIN

void test_accounting_entry_update_dto(int include_optional) {
    accounting_entry_update_dto_t* accounting_entry_update_dto_1 = instantiate_accounting_entry_update_dto(include_optional);

	cJSON* jsonaccounting_entry_update_dto_1 = accounting_entry_update_dto_convertToJSON(accounting_entry_update_dto_1);
	printf("accounting_entry_update_dto :\n%s\n", cJSON_Print(jsonaccounting_entry_update_dto_1));
	accounting_entry_update_dto_t* accounting_entry_update_dto_2 = accounting_entry_update_dto_parseFromJSON(jsonaccounting_entry_update_dto_1);
	cJSON* jsonaccounting_entry_update_dto_2 = accounting_entry_update_dto_convertToJSON(accounting_entry_update_dto_2);
	printf("repeating accounting_entry_update_dto:\n%s\n", cJSON_Print(jsonaccounting_entry_update_dto_2));
}

int main() {
  test_accounting_entry_update_dto(1);
  test_accounting_entry_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // accounting_entry_update_dto_MAIN
#endif // accounting_entry_update_dto_TEST
