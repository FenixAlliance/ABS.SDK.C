#ifndef address_dto_list_envelope_TEST
#define address_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_dto_list_envelope.h"
address_dto_list_envelope_t* instantiate_address_dto_list_envelope(int include_optional);



address_dto_list_envelope_t* instantiate_address_dto_list_envelope(int include_optional) {
  address_dto_list_envelope_t* address_dto_list_envelope = NULL;
  if (include_optional) {
    address_dto_list_envelope = address_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    address_dto_list_envelope = address_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return address_dto_list_envelope;
}


#ifdef address_dto_list_envelope_MAIN

void test_address_dto_list_envelope(int include_optional) {
    address_dto_list_envelope_t* address_dto_list_envelope_1 = instantiate_address_dto_list_envelope(include_optional);

	cJSON* jsonaddress_dto_list_envelope_1 = address_dto_list_envelope_convertToJSON(address_dto_list_envelope_1);
	printf("address_dto_list_envelope :\n%s\n", cJSON_Print(jsonaddress_dto_list_envelope_1));
	address_dto_list_envelope_t* address_dto_list_envelope_2 = address_dto_list_envelope_parseFromJSON(jsonaddress_dto_list_envelope_1);
	cJSON* jsonaddress_dto_list_envelope_2 = address_dto_list_envelope_convertToJSON(address_dto_list_envelope_2);
	printf("repeating address_dto_list_envelope:\n%s\n", cJSON_Print(jsonaddress_dto_list_envelope_2));
}

int main() {
  test_address_dto_list_envelope(1);
  test_address_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_dto_list_envelope_MAIN
#endif // address_dto_list_envelope_TEST
