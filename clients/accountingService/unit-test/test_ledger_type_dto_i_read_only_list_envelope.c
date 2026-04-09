#ifndef ledger_type_dto_i_read_only_list_envelope_TEST
#define ledger_type_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ledger_type_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ledger_type_dto_i_read_only_list_envelope.h"
ledger_type_dto_i_read_only_list_envelope_t* instantiate_ledger_type_dto_i_read_only_list_envelope(int include_optional);



ledger_type_dto_i_read_only_list_envelope_t* instantiate_ledger_type_dto_i_read_only_list_envelope(int include_optional) {
  ledger_type_dto_i_read_only_list_envelope_t* ledger_type_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    ledger_type_dto_i_read_only_list_envelope = ledger_type_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    ledger_type_dto_i_read_only_list_envelope = ledger_type_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return ledger_type_dto_i_read_only_list_envelope;
}


#ifdef ledger_type_dto_i_read_only_list_envelope_MAIN

void test_ledger_type_dto_i_read_only_list_envelope(int include_optional) {
    ledger_type_dto_i_read_only_list_envelope_t* ledger_type_dto_i_read_only_list_envelope_1 = instantiate_ledger_type_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonledger_type_dto_i_read_only_list_envelope_1 = ledger_type_dto_i_read_only_list_envelope_convertToJSON(ledger_type_dto_i_read_only_list_envelope_1);
	printf("ledger_type_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonledger_type_dto_i_read_only_list_envelope_1));
	ledger_type_dto_i_read_only_list_envelope_t* ledger_type_dto_i_read_only_list_envelope_2 = ledger_type_dto_i_read_only_list_envelope_parseFromJSON(jsonledger_type_dto_i_read_only_list_envelope_1);
	cJSON* jsonledger_type_dto_i_read_only_list_envelope_2 = ledger_type_dto_i_read_only_list_envelope_convertToJSON(ledger_type_dto_i_read_only_list_envelope_2);
	printf("repeating ledger_type_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonledger_type_dto_i_read_only_list_envelope_2));
}

int main() {
  test_ledger_type_dto_i_read_only_list_envelope(1);
  test_ledger_type_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // ledger_type_dto_i_read_only_list_envelope_MAIN
#endif // ledger_type_dto_i_read_only_list_envelope_TEST
