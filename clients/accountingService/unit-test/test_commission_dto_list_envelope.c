#ifndef commission_dto_list_envelope_TEST
#define commission_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define commission_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/commission_dto_list_envelope.h"
commission_dto_list_envelope_t* instantiate_commission_dto_list_envelope(int include_optional);



commission_dto_list_envelope_t* instantiate_commission_dto_list_envelope(int include_optional) {
  commission_dto_list_envelope_t* commission_dto_list_envelope = NULL;
  if (include_optional) {
    commission_dto_list_envelope = commission_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    commission_dto_list_envelope = commission_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return commission_dto_list_envelope;
}


#ifdef commission_dto_list_envelope_MAIN

void test_commission_dto_list_envelope(int include_optional) {
    commission_dto_list_envelope_t* commission_dto_list_envelope_1 = instantiate_commission_dto_list_envelope(include_optional);

	cJSON* jsoncommission_dto_list_envelope_1 = commission_dto_list_envelope_convertToJSON(commission_dto_list_envelope_1);
	printf("commission_dto_list_envelope :\n%s\n", cJSON_Print(jsoncommission_dto_list_envelope_1));
	commission_dto_list_envelope_t* commission_dto_list_envelope_2 = commission_dto_list_envelope_parseFromJSON(jsoncommission_dto_list_envelope_1);
	cJSON* jsoncommission_dto_list_envelope_2 = commission_dto_list_envelope_convertToJSON(commission_dto_list_envelope_2);
	printf("repeating commission_dto_list_envelope:\n%s\n", cJSON_Print(jsoncommission_dto_list_envelope_2));
}

int main() {
  test_commission_dto_list_envelope(1);
  test_commission_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // commission_dto_list_envelope_MAIN
#endif // commission_dto_list_envelope_TEST
