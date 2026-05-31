#ifndef expense_type_dto_list_envelope_TEST
#define expense_type_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_type_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_type_dto_list_envelope.h"
expense_type_dto_list_envelope_t* instantiate_expense_type_dto_list_envelope(int include_optional);



expense_type_dto_list_envelope_t* instantiate_expense_type_dto_list_envelope(int include_optional) {
  expense_type_dto_list_envelope_t* expense_type_dto_list_envelope = NULL;
  if (include_optional) {
    expense_type_dto_list_envelope = expense_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    expense_type_dto_list_envelope = expense_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return expense_type_dto_list_envelope;
}


#ifdef expense_type_dto_list_envelope_MAIN

void test_expense_type_dto_list_envelope(int include_optional) {
    expense_type_dto_list_envelope_t* expense_type_dto_list_envelope_1 = instantiate_expense_type_dto_list_envelope(include_optional);

	cJSON* jsonexpense_type_dto_list_envelope_1 = expense_type_dto_list_envelope_convertToJSON(expense_type_dto_list_envelope_1);
	printf("expense_type_dto_list_envelope :\n%s\n", cJSON_Print(jsonexpense_type_dto_list_envelope_1));
	expense_type_dto_list_envelope_t* expense_type_dto_list_envelope_2 = expense_type_dto_list_envelope_parseFromJSON(jsonexpense_type_dto_list_envelope_1);
	cJSON* jsonexpense_type_dto_list_envelope_2 = expense_type_dto_list_envelope_convertToJSON(expense_type_dto_list_envelope_2);
	printf("repeating expense_type_dto_list_envelope:\n%s\n", cJSON_Print(jsonexpense_type_dto_list_envelope_2));
}

int main() {
  test_expense_type_dto_list_envelope(1);
  test_expense_type_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_type_dto_list_envelope_MAIN
#endif // expense_type_dto_list_envelope_TEST
