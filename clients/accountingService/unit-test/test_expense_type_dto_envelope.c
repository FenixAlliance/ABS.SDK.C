#ifndef expense_type_dto_envelope_TEST
#define expense_type_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_type_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_type_dto_envelope.h"
expense_type_dto_envelope_t* instantiate_expense_type_dto_envelope(int include_optional);

#include "test_expense_type_dto.c"


expense_type_dto_envelope_t* instantiate_expense_type_dto_envelope(int include_optional) {
  expense_type_dto_envelope_t* expense_type_dto_envelope = NULL;
  if (include_optional) {
    expense_type_dto_envelope = expense_type_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_expense_type_dto(0)
    );
  } else {
    expense_type_dto_envelope = expense_type_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return expense_type_dto_envelope;
}


#ifdef expense_type_dto_envelope_MAIN

void test_expense_type_dto_envelope(int include_optional) {
    expense_type_dto_envelope_t* expense_type_dto_envelope_1 = instantiate_expense_type_dto_envelope(include_optional);

	cJSON* jsonexpense_type_dto_envelope_1 = expense_type_dto_envelope_convertToJSON(expense_type_dto_envelope_1);
	printf("expense_type_dto_envelope :\n%s\n", cJSON_Print(jsonexpense_type_dto_envelope_1));
	expense_type_dto_envelope_t* expense_type_dto_envelope_2 = expense_type_dto_envelope_parseFromJSON(jsonexpense_type_dto_envelope_1);
	cJSON* jsonexpense_type_dto_envelope_2 = expense_type_dto_envelope_convertToJSON(expense_type_dto_envelope_2);
	printf("repeating expense_type_dto_envelope:\n%s\n", cJSON_Print(jsonexpense_type_dto_envelope_2));
}

int main() {
  test_expense_type_dto_envelope(1);
  test_expense_type_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_type_dto_envelope_MAIN
#endif // expense_type_dto_envelope_TEST
