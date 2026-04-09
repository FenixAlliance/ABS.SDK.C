#ifndef address_dto_TEST
#define address_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_dto.h"
address_dto_t* instantiate_address_dto(int include_optional);



address_dto_t* instantiate_address_dto(int include_optional) {
  address_dto_t* address_dto = NULL;
  if (include_optional) {
    address_dto = address_dto_create(
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
      1.337,
      1.337,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    address_dto = address_dto_create(
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
      1.337,
      1.337,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return address_dto;
}


#ifdef address_dto_MAIN

void test_address_dto(int include_optional) {
    address_dto_t* address_dto_1 = instantiate_address_dto(include_optional);

	cJSON* jsonaddress_dto_1 = address_dto_convertToJSON(address_dto_1);
	printf("address_dto :\n%s\n", cJSON_Print(jsonaddress_dto_1));
	address_dto_t* address_dto_2 = address_dto_parseFromJSON(jsonaddress_dto_1);
	cJSON* jsonaddress_dto_2 = address_dto_convertToJSON(address_dto_2);
	printf("repeating address_dto:\n%s\n", cJSON_Print(jsonaddress_dto_2));
}

int main() {
  test_address_dto(1);
  test_address_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_dto_MAIN
#endif // address_dto_TEST
