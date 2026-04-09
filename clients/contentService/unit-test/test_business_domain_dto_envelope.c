#ifndef business_domain_dto_envelope_TEST
#define business_domain_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_domain_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_domain_dto_envelope.h"
business_domain_dto_envelope_t* instantiate_business_domain_dto_envelope(int include_optional);

#include "test_business_domain_dto.c"


business_domain_dto_envelope_t* instantiate_business_domain_dto_envelope(int include_optional) {
  business_domain_dto_envelope_t* business_domain_dto_envelope = NULL;
  if (include_optional) {
    business_domain_dto_envelope = business_domain_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_business_domain_dto(0)
    );
  } else {
    business_domain_dto_envelope = business_domain_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return business_domain_dto_envelope;
}


#ifdef business_domain_dto_envelope_MAIN

void test_business_domain_dto_envelope(int include_optional) {
    business_domain_dto_envelope_t* business_domain_dto_envelope_1 = instantiate_business_domain_dto_envelope(include_optional);

	cJSON* jsonbusiness_domain_dto_envelope_1 = business_domain_dto_envelope_convertToJSON(business_domain_dto_envelope_1);
	printf("business_domain_dto_envelope :\n%s\n", cJSON_Print(jsonbusiness_domain_dto_envelope_1));
	business_domain_dto_envelope_t* business_domain_dto_envelope_2 = business_domain_dto_envelope_parseFromJSON(jsonbusiness_domain_dto_envelope_1);
	cJSON* jsonbusiness_domain_dto_envelope_2 = business_domain_dto_envelope_convertToJSON(business_domain_dto_envelope_2);
	printf("repeating business_domain_dto_envelope:\n%s\n", cJSON_Print(jsonbusiness_domain_dto_envelope_2));
}

int main() {
  test_business_domain_dto_envelope(1);
  test_business_domain_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_domain_dto_envelope_MAIN
#endif // business_domain_dto_envelope_TEST
