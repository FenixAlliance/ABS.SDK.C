#ifndef billing_profile_create_dto_TEST
#define billing_profile_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_profile_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_profile_create_dto.h"
billing_profile_create_dto_t* instantiate_billing_profile_create_dto(int include_optional);



billing_profile_create_dto_t* instantiate_billing_profile_create_dto(int include_optional) {
  billing_profile_create_dto_t* billing_profile_create_dto = NULL;
  if (include_optional) {
    billing_profile_create_dto = billing_profile_create_dto_create(
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
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    billing_profile_create_dto = billing_profile_create_dto_create(
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
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return billing_profile_create_dto;
}


#ifdef billing_profile_create_dto_MAIN

void test_billing_profile_create_dto(int include_optional) {
    billing_profile_create_dto_t* billing_profile_create_dto_1 = instantiate_billing_profile_create_dto(include_optional);

	cJSON* jsonbilling_profile_create_dto_1 = billing_profile_create_dto_convertToJSON(billing_profile_create_dto_1);
	printf("billing_profile_create_dto :\n%s\n", cJSON_Print(jsonbilling_profile_create_dto_1));
	billing_profile_create_dto_t* billing_profile_create_dto_2 = billing_profile_create_dto_parseFromJSON(jsonbilling_profile_create_dto_1);
	cJSON* jsonbilling_profile_create_dto_2 = billing_profile_create_dto_convertToJSON(billing_profile_create_dto_2);
	printf("repeating billing_profile_create_dto:\n%s\n", cJSON_Print(jsonbilling_profile_create_dto_2));
}

int main() {
  test_billing_profile_create_dto(1);
  test_billing_profile_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_profile_create_dto_MAIN
#endif // billing_profile_create_dto_TEST
