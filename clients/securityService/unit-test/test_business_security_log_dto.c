#ifndef business_security_log_dto_TEST
#define business_security_log_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_security_log_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_security_log_dto.h"
business_security_log_dto_t* instantiate_business_security_log_dto(int include_optional);



business_security_log_dto_t* instantiate_business_security_log_dto(int include_optional) {
  business_security_log_dto_t* business_security_log_dto = NULL;
  if (include_optional) {
    business_security_log_dto = business_security_log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0"
    );
  } else {
    business_security_log_dto = business_security_log_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0"
    );
  }

  return business_security_log_dto;
}


#ifdef business_security_log_dto_MAIN

void test_business_security_log_dto(int include_optional) {
    business_security_log_dto_t* business_security_log_dto_1 = instantiate_business_security_log_dto(include_optional);

	cJSON* jsonbusiness_security_log_dto_1 = business_security_log_dto_convertToJSON(business_security_log_dto_1);
	printf("business_security_log_dto :\n%s\n", cJSON_Print(jsonbusiness_security_log_dto_1));
	business_security_log_dto_t* business_security_log_dto_2 = business_security_log_dto_parseFromJSON(jsonbusiness_security_log_dto_1);
	cJSON* jsonbusiness_security_log_dto_2 = business_security_log_dto_convertToJSON(business_security_log_dto_2);
	printf("repeating business_security_log_dto:\n%s\n", cJSON_Print(jsonbusiness_security_log_dto_2));
}

int main() {
  test_business_security_log_dto(1);
  test_business_security_log_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_security_log_dto_MAIN
#endif // business_security_log_dto_TEST
