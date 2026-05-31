#ifndef expense_claim_dto_list_envelope_TEST
#define expense_claim_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_claim_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_claim_dto_list_envelope.h"
expense_claim_dto_list_envelope_t* instantiate_expense_claim_dto_list_envelope(int include_optional);



expense_claim_dto_list_envelope_t* instantiate_expense_claim_dto_list_envelope(int include_optional) {
  expense_claim_dto_list_envelope_t* expense_claim_dto_list_envelope = NULL;
  if (include_optional) {
    expense_claim_dto_list_envelope = expense_claim_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    expense_claim_dto_list_envelope = expense_claim_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return expense_claim_dto_list_envelope;
}


#ifdef expense_claim_dto_list_envelope_MAIN

void test_expense_claim_dto_list_envelope(int include_optional) {
    expense_claim_dto_list_envelope_t* expense_claim_dto_list_envelope_1 = instantiate_expense_claim_dto_list_envelope(include_optional);

	cJSON* jsonexpense_claim_dto_list_envelope_1 = expense_claim_dto_list_envelope_convertToJSON(expense_claim_dto_list_envelope_1);
	printf("expense_claim_dto_list_envelope :\n%s\n", cJSON_Print(jsonexpense_claim_dto_list_envelope_1));
	expense_claim_dto_list_envelope_t* expense_claim_dto_list_envelope_2 = expense_claim_dto_list_envelope_parseFromJSON(jsonexpense_claim_dto_list_envelope_1);
	cJSON* jsonexpense_claim_dto_list_envelope_2 = expense_claim_dto_list_envelope_convertToJSON(expense_claim_dto_list_envelope_2);
	printf("repeating expense_claim_dto_list_envelope:\n%s\n", cJSON_Print(jsonexpense_claim_dto_list_envelope_2));
}

int main() {
  test_expense_claim_dto_list_envelope(1);
  test_expense_claim_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_claim_dto_list_envelope_MAIN
#endif // expense_claim_dto_list_envelope_TEST
