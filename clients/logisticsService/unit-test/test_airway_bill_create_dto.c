#ifndef airway_bill_create_dto_TEST
#define airway_bill_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define airway_bill_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/airway_bill_create_dto.h"
airway_bill_create_dto_t* instantiate_airway_bill_create_dto(int include_optional);



airway_bill_create_dto_t* instantiate_airway_bill_create_dto(int include_optional) {
  airway_bill_create_dto_t* airway_bill_create_dto = NULL;
  if (include_optional) {
    airway_bill_create_dto = airway_bill_create_dto_create(
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
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      1.337,
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    airway_bill_create_dto = airway_bill_create_dto_create(
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
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      1.337,
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return airway_bill_create_dto;
}


#ifdef airway_bill_create_dto_MAIN

void test_airway_bill_create_dto(int include_optional) {
    airway_bill_create_dto_t* airway_bill_create_dto_1 = instantiate_airway_bill_create_dto(include_optional);

	cJSON* jsonairway_bill_create_dto_1 = airway_bill_create_dto_convertToJSON(airway_bill_create_dto_1);
	printf("airway_bill_create_dto :\n%s\n", cJSON_Print(jsonairway_bill_create_dto_1));
	airway_bill_create_dto_t* airway_bill_create_dto_2 = airway_bill_create_dto_parseFromJSON(jsonairway_bill_create_dto_1);
	cJSON* jsonairway_bill_create_dto_2 = airway_bill_create_dto_convertToJSON(airway_bill_create_dto_2);
	printf("repeating airway_bill_create_dto:\n%s\n", cJSON_Print(jsonairway_bill_create_dto_2));
}

int main() {
  test_airway_bill_create_dto(1);
  test_airway_bill_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // airway_bill_create_dto_MAIN
#endif // airway_bill_create_dto_TEST
