#ifndef posting_book_result_dto_TEST
#define posting_book_result_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define posting_book_result_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/posting_book_result_dto.h"
posting_book_result_dto_t* instantiate_posting_book_result_dto(int include_optional);



posting_book_result_dto_t* instantiate_posting_book_result_dto(int include_optional) {
  posting_book_result_dto_t* posting_book_result_dto = NULL;
  if (include_optional) {
    posting_book_result_dto = posting_book_result_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      accountingservice_posting_book_result_dto_STATUS_Posted,
      "0",
      "0"
    );
  } else {
    posting_book_result_dto = posting_book_result_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      accountingservice_posting_book_result_dto_STATUS_Posted,
      "0",
      "0"
    );
  }

  return posting_book_result_dto;
}


#ifdef posting_book_result_dto_MAIN

void test_posting_book_result_dto(int include_optional) {
    posting_book_result_dto_t* posting_book_result_dto_1 = instantiate_posting_book_result_dto(include_optional);

	cJSON* jsonposting_book_result_dto_1 = posting_book_result_dto_convertToJSON(posting_book_result_dto_1);
	printf("posting_book_result_dto :\n%s\n", cJSON_Print(jsonposting_book_result_dto_1));
	posting_book_result_dto_t* posting_book_result_dto_2 = posting_book_result_dto_parseFromJSON(jsonposting_book_result_dto_1);
	cJSON* jsonposting_book_result_dto_2 = posting_book_result_dto_convertToJSON(posting_book_result_dto_2);
	printf("repeating posting_book_result_dto:\n%s\n", cJSON_Print(jsonposting_book_result_dto_2));
}

int main() {
  test_posting_book_result_dto(1);
  test_posting_book_result_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // posting_book_result_dto_MAIN
#endif // posting_book_result_dto_TEST
