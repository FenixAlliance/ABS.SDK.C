#ifndef bank_guarantee_update_dto_TEST
#define bank_guarantee_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_guarantee_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_guarantee_update_dto.h"
bank_guarantee_update_dto_t* instantiate_bank_guarantee_update_dto(int include_optional);



bank_guarantee_update_dto_t* instantiate_bank_guarantee_update_dto(int include_optional) {
  bank_guarantee_update_dto_t* bank_guarantee_update_dto = NULL;
  if (include_optional) {
    bank_guarantee_update_dto = bank_guarantee_update_dto_create(
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      accountingservice_bank_guarantee_update_dto_BANKGUARANTEETYPE_Receiving,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    bank_guarantee_update_dto = bank_guarantee_update_dto_create(
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      accountingservice_bank_guarantee_update_dto_BANKGUARANTEETYPE_Receiving,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return bank_guarantee_update_dto;
}


#ifdef bank_guarantee_update_dto_MAIN

void test_bank_guarantee_update_dto(int include_optional) {
    bank_guarantee_update_dto_t* bank_guarantee_update_dto_1 = instantiate_bank_guarantee_update_dto(include_optional);

	cJSON* jsonbank_guarantee_update_dto_1 = bank_guarantee_update_dto_convertToJSON(bank_guarantee_update_dto_1);
	printf("bank_guarantee_update_dto :\n%s\n", cJSON_Print(jsonbank_guarantee_update_dto_1));
	bank_guarantee_update_dto_t* bank_guarantee_update_dto_2 = bank_guarantee_update_dto_parseFromJSON(jsonbank_guarantee_update_dto_1);
	cJSON* jsonbank_guarantee_update_dto_2 = bank_guarantee_update_dto_convertToJSON(bank_guarantee_update_dto_2);
	printf("repeating bank_guarantee_update_dto:\n%s\n", cJSON_Print(jsonbank_guarantee_update_dto_2));
}

int main() {
  test_bank_guarantee_update_dto(1);
  test_bank_guarantee_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_guarantee_update_dto_MAIN
#endif // bank_guarantee_update_dto_TEST
