#ifndef commission_dto_TEST
#define commission_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define commission_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/commission_dto.h"
commission_dto_t* instantiate_commission_dto(int include_optional);



commission_dto_t* instantiate_commission_dto(int include_optional) {
  commission_dto_t* commission_dto = NULL;
  if (include_optional) {
    commission_dto = commission_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    commission_dto = commission_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return commission_dto;
}


#ifdef commission_dto_MAIN

void test_commission_dto(int include_optional) {
    commission_dto_t* commission_dto_1 = instantiate_commission_dto(include_optional);

	cJSON* jsoncommission_dto_1 = commission_dto_convertToJSON(commission_dto_1);
	printf("commission_dto :\n%s\n", cJSON_Print(jsoncommission_dto_1));
	commission_dto_t* commission_dto_2 = commission_dto_parseFromJSON(jsoncommission_dto_1);
	cJSON* jsoncommission_dto_2 = commission_dto_convertToJSON(commission_dto_2);
	printf("repeating commission_dto:\n%s\n", cJSON_Print(jsoncommission_dto_2));
}

int main() {
  test_commission_dto(1);
  test_commission_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // commission_dto_MAIN
#endif // commission_dto_TEST
