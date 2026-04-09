#ifndef accounting_period_dto_list_envelope_TEST
#define accounting_period_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accounting_period_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accounting_period_dto_list_envelope.h"
accounting_period_dto_list_envelope_t* instantiate_accounting_period_dto_list_envelope(int include_optional);



accounting_period_dto_list_envelope_t* instantiate_accounting_period_dto_list_envelope(int include_optional) {
  accounting_period_dto_list_envelope_t* accounting_period_dto_list_envelope = NULL;
  if (include_optional) {
    accounting_period_dto_list_envelope = accounting_period_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    accounting_period_dto_list_envelope = accounting_period_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return accounting_period_dto_list_envelope;
}


#ifdef accounting_period_dto_list_envelope_MAIN

void test_accounting_period_dto_list_envelope(int include_optional) {
    accounting_period_dto_list_envelope_t* accounting_period_dto_list_envelope_1 = instantiate_accounting_period_dto_list_envelope(include_optional);

	cJSON* jsonaccounting_period_dto_list_envelope_1 = accounting_period_dto_list_envelope_convertToJSON(accounting_period_dto_list_envelope_1);
	printf("accounting_period_dto_list_envelope :\n%s\n", cJSON_Print(jsonaccounting_period_dto_list_envelope_1));
	accounting_period_dto_list_envelope_t* accounting_period_dto_list_envelope_2 = accounting_period_dto_list_envelope_parseFromJSON(jsonaccounting_period_dto_list_envelope_1);
	cJSON* jsonaccounting_period_dto_list_envelope_2 = accounting_period_dto_list_envelope_convertToJSON(accounting_period_dto_list_envelope_2);
	printf("repeating accounting_period_dto_list_envelope:\n%s\n", cJSON_Print(jsonaccounting_period_dto_list_envelope_2));
}

int main() {
  test_accounting_period_dto_list_envelope(1);
  test_accounting_period_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // accounting_period_dto_list_envelope_MAIN
#endif // accounting_period_dto_list_envelope_TEST
