#ifndef supplier_profile_create_dto_TEST
#define supplier_profile_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplier_profile_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplier_profile_create_dto.h"
supplier_profile_create_dto_t* instantiate_supplier_profile_create_dto(int include_optional);



supplier_profile_create_dto_t* instantiate_supplier_profile_create_dto(int include_optional) {
  supplier_profile_create_dto_t* supplier_profile_create_dto = NULL;
  if (include_optional) {
    supplier_profile_create_dto = supplier_profile_create_dto_create(
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
      "0",
      "0",
      "0"
    );
  } else {
    supplier_profile_create_dto = supplier_profile_create_dto_create(
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
      "0",
      "0",
      "0"
    );
  }

  return supplier_profile_create_dto;
}


#ifdef supplier_profile_create_dto_MAIN

void test_supplier_profile_create_dto(int include_optional) {
    supplier_profile_create_dto_t* supplier_profile_create_dto_1 = instantiate_supplier_profile_create_dto(include_optional);

	cJSON* jsonsupplier_profile_create_dto_1 = supplier_profile_create_dto_convertToJSON(supplier_profile_create_dto_1);
	printf("supplier_profile_create_dto :\n%s\n", cJSON_Print(jsonsupplier_profile_create_dto_1));
	supplier_profile_create_dto_t* supplier_profile_create_dto_2 = supplier_profile_create_dto_parseFromJSON(jsonsupplier_profile_create_dto_1);
	cJSON* jsonsupplier_profile_create_dto_2 = supplier_profile_create_dto_convertToJSON(supplier_profile_create_dto_2);
	printf("repeating supplier_profile_create_dto:\n%s\n", cJSON_Print(jsonsupplier_profile_create_dto_2));
}

int main() {
  test_supplier_profile_create_dto(1);
  test_supplier_profile_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplier_profile_create_dto_MAIN
#endif // supplier_profile_create_dto_TEST
