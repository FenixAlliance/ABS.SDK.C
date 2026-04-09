#ifndef business_application_simple_dto_list_envelope_TEST
#define business_application_simple_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_application_simple_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_application_simple_dto_list_envelope.h"
business_application_simple_dto_list_envelope_t* instantiate_business_application_simple_dto_list_envelope(int include_optional);



business_application_simple_dto_list_envelope_t* instantiate_business_application_simple_dto_list_envelope(int include_optional) {
  business_application_simple_dto_list_envelope_t* business_application_simple_dto_list_envelope = NULL;
  if (include_optional) {
    business_application_simple_dto_list_envelope = business_application_simple_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    business_application_simple_dto_list_envelope = business_application_simple_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return business_application_simple_dto_list_envelope;
}


#ifdef business_application_simple_dto_list_envelope_MAIN

void test_business_application_simple_dto_list_envelope(int include_optional) {
    business_application_simple_dto_list_envelope_t* business_application_simple_dto_list_envelope_1 = instantiate_business_application_simple_dto_list_envelope(include_optional);

	cJSON* jsonbusiness_application_simple_dto_list_envelope_1 = business_application_simple_dto_list_envelope_convertToJSON(business_application_simple_dto_list_envelope_1);
	printf("business_application_simple_dto_list_envelope :\n%s\n", cJSON_Print(jsonbusiness_application_simple_dto_list_envelope_1));
	business_application_simple_dto_list_envelope_t* business_application_simple_dto_list_envelope_2 = business_application_simple_dto_list_envelope_parseFromJSON(jsonbusiness_application_simple_dto_list_envelope_1);
	cJSON* jsonbusiness_application_simple_dto_list_envelope_2 = business_application_simple_dto_list_envelope_convertToJSON(business_application_simple_dto_list_envelope_2);
	printf("repeating business_application_simple_dto_list_envelope:\n%s\n", cJSON_Print(jsonbusiness_application_simple_dto_list_envelope_2));
}

int main() {
  test_business_application_simple_dto_list_envelope(1);
  test_business_application_simple_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_application_simple_dto_list_envelope_MAIN
#endif // business_application_simple_dto_list_envelope_TEST
