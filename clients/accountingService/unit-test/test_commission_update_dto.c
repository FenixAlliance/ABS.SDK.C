#ifndef commission_update_dto_TEST
#define commission_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define commission_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/commission_update_dto.h"
commission_update_dto_t* instantiate_commission_update_dto(int include_optional);



commission_update_dto_t* instantiate_commission_update_dto(int include_optional) {
  commission_update_dto_t* commission_update_dto = NULL;
  if (include_optional) {
    commission_update_dto = commission_update_dto_create(
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
    commission_update_dto = commission_update_dto_create(
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

  return commission_update_dto;
}


#ifdef commission_update_dto_MAIN

void test_commission_update_dto(int include_optional) {
    commission_update_dto_t* commission_update_dto_1 = instantiate_commission_update_dto(include_optional);

	cJSON* jsoncommission_update_dto_1 = commission_update_dto_convertToJSON(commission_update_dto_1);
	printf("commission_update_dto :\n%s\n", cJSON_Print(jsoncommission_update_dto_1));
	commission_update_dto_t* commission_update_dto_2 = commission_update_dto_parseFromJSON(jsoncommission_update_dto_1);
	cJSON* jsoncommission_update_dto_2 = commission_update_dto_convertToJSON(commission_update_dto_2);
	printf("repeating commission_update_dto:\n%s\n", cJSON_Print(jsoncommission_update_dto_2));
}

int main() {
  test_commission_update_dto(1);
  test_commission_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // commission_update_dto_MAIN
#endif // commission_update_dto_TEST
