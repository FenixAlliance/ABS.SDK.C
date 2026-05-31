#ifndef airway_bill_dto_envelope_TEST
#define airway_bill_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define airway_bill_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/airway_bill_dto_envelope.h"
airway_bill_dto_envelope_t* instantiate_airway_bill_dto_envelope(int include_optional);

#include "test_airway_bill_dto.c"


airway_bill_dto_envelope_t* instantiate_airway_bill_dto_envelope(int include_optional) {
  airway_bill_dto_envelope_t* airway_bill_dto_envelope = NULL;
  if (include_optional) {
    airway_bill_dto_envelope = airway_bill_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_airway_bill_dto(0)
    );
  } else {
    airway_bill_dto_envelope = airway_bill_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return airway_bill_dto_envelope;
}


#ifdef airway_bill_dto_envelope_MAIN

void test_airway_bill_dto_envelope(int include_optional) {
    airway_bill_dto_envelope_t* airway_bill_dto_envelope_1 = instantiate_airway_bill_dto_envelope(include_optional);

	cJSON* jsonairway_bill_dto_envelope_1 = airway_bill_dto_envelope_convertToJSON(airway_bill_dto_envelope_1);
	printf("airway_bill_dto_envelope :\n%s\n", cJSON_Print(jsonairway_bill_dto_envelope_1));
	airway_bill_dto_envelope_t* airway_bill_dto_envelope_2 = airway_bill_dto_envelope_parseFromJSON(jsonairway_bill_dto_envelope_1);
	cJSON* jsonairway_bill_dto_envelope_2 = airway_bill_dto_envelope_convertToJSON(airway_bill_dto_envelope_2);
	printf("repeating airway_bill_dto_envelope:\n%s\n", cJSON_Print(jsonairway_bill_dto_envelope_2));
}

int main() {
  test_airway_bill_dto_envelope(1);
  test_airway_bill_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // airway_bill_dto_envelope_MAIN
#endif // airway_bill_dto_envelope_TEST
