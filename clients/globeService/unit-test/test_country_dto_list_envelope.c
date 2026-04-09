#ifndef country_dto_list_envelope_TEST
#define country_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_dto_list_envelope.h"
country_dto_list_envelope_t* instantiate_country_dto_list_envelope(int include_optional);



country_dto_list_envelope_t* instantiate_country_dto_list_envelope(int include_optional) {
  country_dto_list_envelope_t* country_dto_list_envelope = NULL;
  if (include_optional) {
    country_dto_list_envelope = country_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    country_dto_list_envelope = country_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return country_dto_list_envelope;
}


#ifdef country_dto_list_envelope_MAIN

void test_country_dto_list_envelope(int include_optional) {
    country_dto_list_envelope_t* country_dto_list_envelope_1 = instantiate_country_dto_list_envelope(include_optional);

	cJSON* jsoncountry_dto_list_envelope_1 = country_dto_list_envelope_convertToJSON(country_dto_list_envelope_1);
	printf("country_dto_list_envelope :\n%s\n", cJSON_Print(jsoncountry_dto_list_envelope_1));
	country_dto_list_envelope_t* country_dto_list_envelope_2 = country_dto_list_envelope_parseFromJSON(jsoncountry_dto_list_envelope_1);
	cJSON* jsoncountry_dto_list_envelope_2 = country_dto_list_envelope_convertToJSON(country_dto_list_envelope_2);
	printf("repeating country_dto_list_envelope:\n%s\n", cJSON_Print(jsoncountry_dto_list_envelope_2));
}

int main() {
  test_country_dto_list_envelope(1);
  test_country_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_dto_list_envelope_MAIN
#endif // country_dto_list_envelope_TEST
