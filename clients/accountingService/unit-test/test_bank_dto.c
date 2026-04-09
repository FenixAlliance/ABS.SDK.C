#ifndef bank_dto_TEST
#define bank_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_dto.h"
bank_dto_t* instantiate_bank_dto(int include_optional);



bank_dto_t* instantiate_bank_dto(int include_optional) {
  bank_dto_t* bank_dto = NULL;
  if (include_optional) {
    bank_dto = bank_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    bank_dto = bank_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return bank_dto;
}


#ifdef bank_dto_MAIN

void test_bank_dto(int include_optional) {
    bank_dto_t* bank_dto_1 = instantiate_bank_dto(include_optional);

	cJSON* jsonbank_dto_1 = bank_dto_convertToJSON(bank_dto_1);
	printf("bank_dto :\n%s\n", cJSON_Print(jsonbank_dto_1));
	bank_dto_t* bank_dto_2 = bank_dto_parseFromJSON(jsonbank_dto_1);
	cJSON* jsonbank_dto_2 = bank_dto_convertToJSON(bank_dto_2);
	printf("repeating bank_dto:\n%s\n", cJSON_Print(jsonbank_dto_2));
}

int main() {
  test_bank_dto(1);
  test_bank_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_dto_MAIN
#endif // bank_dto_TEST
