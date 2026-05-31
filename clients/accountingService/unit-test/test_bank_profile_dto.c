#ifndef bank_profile_dto_TEST
#define bank_profile_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bank_profile_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bank_profile_dto.h"
bank_profile_dto_t* instantiate_bank_profile_dto(int include_optional);

#include "test_contact_dto.c"


bank_profile_dto_t* instantiate_bank_profile_dto(int include_optional) {
  bank_profile_dto_t* bank_profile_dto = NULL;
  if (include_optional) {
    bank_profile_dto = bank_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_contact_dto(0),
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    bank_profile_dto = bank_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      NULL,
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return bank_profile_dto;
}


#ifdef bank_profile_dto_MAIN

void test_bank_profile_dto(int include_optional) {
    bank_profile_dto_t* bank_profile_dto_1 = instantiate_bank_profile_dto(include_optional);

	cJSON* jsonbank_profile_dto_1 = bank_profile_dto_convertToJSON(bank_profile_dto_1);
	printf("bank_profile_dto :\n%s\n", cJSON_Print(jsonbank_profile_dto_1));
	bank_profile_dto_t* bank_profile_dto_2 = bank_profile_dto_parseFromJSON(jsonbank_profile_dto_1);
	cJSON* jsonbank_profile_dto_2 = bank_profile_dto_convertToJSON(bank_profile_dto_2);
	printf("repeating bank_profile_dto:\n%s\n", cJSON_Print(jsonbank_profile_dto_2));
}

int main() {
  test_bank_profile_dto(1);
  test_bank_profile_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // bank_profile_dto_MAIN
#endif // bank_profile_dto_TEST
