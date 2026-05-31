#ifndef expense_type_create_dto_TEST
#define expense_type_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expense_type_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expense_type_create_dto.h"
expense_type_create_dto_t* instantiate_expense_type_create_dto(int include_optional);



expense_type_create_dto_t* instantiate_expense_type_create_dto(int include_optional) {
  expense_type_create_dto_t* expense_type_create_dto = NULL;
  if (include_optional) {
    expense_type_create_dto = expense_type_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1
    );
  } else {
    expense_type_create_dto = expense_type_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1
    );
  }

  return expense_type_create_dto;
}


#ifdef expense_type_create_dto_MAIN

void test_expense_type_create_dto(int include_optional) {
    expense_type_create_dto_t* expense_type_create_dto_1 = instantiate_expense_type_create_dto(include_optional);

	cJSON* jsonexpense_type_create_dto_1 = expense_type_create_dto_convertToJSON(expense_type_create_dto_1);
	printf("expense_type_create_dto :\n%s\n", cJSON_Print(jsonexpense_type_create_dto_1));
	expense_type_create_dto_t* expense_type_create_dto_2 = expense_type_create_dto_parseFromJSON(jsonexpense_type_create_dto_1);
	cJSON* jsonexpense_type_create_dto_2 = expense_type_create_dto_convertToJSON(expense_type_create_dto_2);
	printf("repeating expense_type_create_dto:\n%s\n", cJSON_Print(jsonexpense_type_create_dto_2));
}

int main() {
  test_expense_type_create_dto(1);
  test_expense_type_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // expense_type_create_dto_MAIN
#endif // expense_type_create_dto_TEST
