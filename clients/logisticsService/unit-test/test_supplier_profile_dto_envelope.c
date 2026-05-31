#ifndef supplier_profile_dto_envelope_TEST
#define supplier_profile_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplier_profile_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplier_profile_dto_envelope.h"
supplier_profile_dto_envelope_t* instantiate_supplier_profile_dto_envelope(int include_optional);

#include "test_supplier_profile_dto.c"


supplier_profile_dto_envelope_t* instantiate_supplier_profile_dto_envelope(int include_optional) {
  supplier_profile_dto_envelope_t* supplier_profile_dto_envelope = NULL;
  if (include_optional) {
    supplier_profile_dto_envelope = supplier_profile_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_supplier_profile_dto(0)
    );
  } else {
    supplier_profile_dto_envelope = supplier_profile_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return supplier_profile_dto_envelope;
}


#ifdef supplier_profile_dto_envelope_MAIN

void test_supplier_profile_dto_envelope(int include_optional) {
    supplier_profile_dto_envelope_t* supplier_profile_dto_envelope_1 = instantiate_supplier_profile_dto_envelope(include_optional);

	cJSON* jsonsupplier_profile_dto_envelope_1 = supplier_profile_dto_envelope_convertToJSON(supplier_profile_dto_envelope_1);
	printf("supplier_profile_dto_envelope :\n%s\n", cJSON_Print(jsonsupplier_profile_dto_envelope_1));
	supplier_profile_dto_envelope_t* supplier_profile_dto_envelope_2 = supplier_profile_dto_envelope_parseFromJSON(jsonsupplier_profile_dto_envelope_1);
	cJSON* jsonsupplier_profile_dto_envelope_2 = supplier_profile_dto_envelope_convertToJSON(supplier_profile_dto_envelope_2);
	printf("repeating supplier_profile_dto_envelope:\n%s\n", cJSON_Print(jsonsupplier_profile_dto_envelope_2));
}

int main() {
  test_supplier_profile_dto_envelope(1);
  test_supplier_profile_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplier_profile_dto_envelope_MAIN
#endif // supplier_profile_dto_envelope_TEST
