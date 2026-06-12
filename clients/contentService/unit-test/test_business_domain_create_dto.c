#ifndef business_domain_create_dto_TEST
#define business_domain_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_domain_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_domain_create_dto.h"
business_domain_create_dto_t* instantiate_business_domain_create_dto(int include_optional);



business_domain_create_dto_t* instantiate_business_domain_create_dto(int include_optional) {
  business_domain_create_dto_t* business_domain_create_dto = NULL;
  if (include_optional) {
    business_domain_create_dto = business_domain_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "012"
    );
  } else {
    business_domain_create_dto = business_domain_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "012"
    );
  }

  return business_domain_create_dto;
}


#ifdef business_domain_create_dto_MAIN

void test_business_domain_create_dto(int include_optional) {
    business_domain_create_dto_t* business_domain_create_dto_1 = instantiate_business_domain_create_dto(include_optional);

	cJSON* jsonbusiness_domain_create_dto_1 = business_domain_create_dto_convertToJSON(business_domain_create_dto_1);
	printf("business_domain_create_dto :\n%s\n", cJSON_Print(jsonbusiness_domain_create_dto_1));
	business_domain_create_dto_t* business_domain_create_dto_2 = business_domain_create_dto_parseFromJSON(jsonbusiness_domain_create_dto_1);
	cJSON* jsonbusiness_domain_create_dto_2 = business_domain_create_dto_convertToJSON(business_domain_create_dto_2);
	printf("repeating business_domain_create_dto:\n%s\n", cJSON_Print(jsonbusiness_domain_create_dto_2));
}

int main() {
  test_business_domain_create_dto(1);
  test_business_domain_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_domain_create_dto_MAIN
#endif // business_domain_create_dto_TEST
