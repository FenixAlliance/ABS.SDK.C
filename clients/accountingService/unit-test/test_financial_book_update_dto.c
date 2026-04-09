#ifndef financial_book_update_dto_TEST
#define financial_book_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define financial_book_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/financial_book_update_dto.h"
financial_book_update_dto_t* instantiate_financial_book_update_dto(int include_optional);



financial_book_update_dto_t* instantiate_financial_book_update_dto(int include_optional) {
  financial_book_update_dto_t* financial_book_update_dto = NULL;
  if (include_optional) {
    financial_book_update_dto = financial_book_update_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    financial_book_update_dto = financial_book_update_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return financial_book_update_dto;
}


#ifdef financial_book_update_dto_MAIN

void test_financial_book_update_dto(int include_optional) {
    financial_book_update_dto_t* financial_book_update_dto_1 = instantiate_financial_book_update_dto(include_optional);

	cJSON* jsonfinancial_book_update_dto_1 = financial_book_update_dto_convertToJSON(financial_book_update_dto_1);
	printf("financial_book_update_dto :\n%s\n", cJSON_Print(jsonfinancial_book_update_dto_1));
	financial_book_update_dto_t* financial_book_update_dto_2 = financial_book_update_dto_parseFromJSON(jsonfinancial_book_update_dto_1);
	cJSON* jsonfinancial_book_update_dto_2 = financial_book_update_dto_convertToJSON(financial_book_update_dto_2);
	printf("repeating financial_book_update_dto:\n%s\n", cJSON_Print(jsonfinancial_book_update_dto_2));
}

int main() {
  test_financial_book_update_dto(1);
  test_financial_book_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // financial_book_update_dto_MAIN
#endif // financial_book_update_dto_TEST
