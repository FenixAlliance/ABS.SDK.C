#ifndef business_application_update_dto_TEST
#define business_application_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_application_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_application_update_dto.h"
business_application_update_dto_t* instantiate_business_application_update_dto(int include_optional);



business_application_update_dto_t* instantiate_business_application_update_dto(int include_optional) {
  business_application_update_dto_t* business_application_update_dto = NULL;
  if (include_optional) {
    business_application_update_dto = business_application_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      1,
      "0",
      1
    );
  } else {
    business_application_update_dto = business_application_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      1,
      "0",
      1
    );
  }

  return business_application_update_dto;
}


#ifdef business_application_update_dto_MAIN

void test_business_application_update_dto(int include_optional) {
    business_application_update_dto_t* business_application_update_dto_1 = instantiate_business_application_update_dto(include_optional);

	cJSON* jsonbusiness_application_update_dto_1 = business_application_update_dto_convertToJSON(business_application_update_dto_1);
	printf("business_application_update_dto :\n%s\n", cJSON_Print(jsonbusiness_application_update_dto_1));
	business_application_update_dto_t* business_application_update_dto_2 = business_application_update_dto_parseFromJSON(jsonbusiness_application_update_dto_1);
	cJSON* jsonbusiness_application_update_dto_2 = business_application_update_dto_convertToJSON(business_application_update_dto_2);
	printf("repeating business_application_update_dto:\n%s\n", cJSON_Print(jsonbusiness_application_update_dto_2));
}

int main() {
  test_business_application_update_dto(1);
  test_business_application_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_application_update_dto_MAIN
#endif // business_application_update_dto_TEST
