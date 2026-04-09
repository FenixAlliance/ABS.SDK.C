#ifndef accounting_period_create_dto_TEST
#define accounting_period_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accounting_period_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accounting_period_create_dto.h"
accounting_period_create_dto_t* instantiate_accounting_period_create_dto(int include_optional);



accounting_period_create_dto_t* instantiate_accounting_period_create_dto(int include_optional) {
  accounting_period_create_dto_t* accounting_period_create_dto = NULL;
  if (include_optional) {
    accounting_period_create_dto = accounting_period_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    accounting_period_create_dto = accounting_period_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return accounting_period_create_dto;
}


#ifdef accounting_period_create_dto_MAIN

void test_accounting_period_create_dto(int include_optional) {
    accounting_period_create_dto_t* accounting_period_create_dto_1 = instantiate_accounting_period_create_dto(include_optional);

	cJSON* jsonaccounting_period_create_dto_1 = accounting_period_create_dto_convertToJSON(accounting_period_create_dto_1);
	printf("accounting_period_create_dto :\n%s\n", cJSON_Print(jsonaccounting_period_create_dto_1));
	accounting_period_create_dto_t* accounting_period_create_dto_2 = accounting_period_create_dto_parseFromJSON(jsonaccounting_period_create_dto_1);
	cJSON* jsonaccounting_period_create_dto_2 = accounting_period_create_dto_convertToJSON(accounting_period_create_dto_2);
	printf("repeating accounting_period_create_dto:\n%s\n", cJSON_Print(jsonaccounting_period_create_dto_2));
}

int main() {
  test_accounting_period_create_dto(1);
  test_accounting_period_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // accounting_period_create_dto_MAIN
#endif // accounting_period_create_dto_TEST
