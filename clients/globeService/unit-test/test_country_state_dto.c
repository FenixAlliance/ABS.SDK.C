#ifndef country_state_dto_TEST
#define country_state_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_state_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_state_dto.h"
country_state_dto_t* instantiate_country_state_dto(int include_optional);



country_state_dto_t* instantiate_country_state_dto(int include_optional) {
  country_state_dto_t* country_state_dto = NULL;
  if (include_optional) {
    country_state_dto = country_state_dto_create(
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    country_state_dto = country_state_dto_create(
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return country_state_dto;
}


#ifdef country_state_dto_MAIN

void test_country_state_dto(int include_optional) {
    country_state_dto_t* country_state_dto_1 = instantiate_country_state_dto(include_optional);

	cJSON* jsoncountry_state_dto_1 = country_state_dto_convertToJSON(country_state_dto_1);
	printf("country_state_dto :\n%s\n", cJSON_Print(jsoncountry_state_dto_1));
	country_state_dto_t* country_state_dto_2 = country_state_dto_parseFromJSON(jsoncountry_state_dto_1);
	cJSON* jsoncountry_state_dto_2 = country_state_dto_convertToJSON(country_state_dto_2);
	printf("repeating country_state_dto:\n%s\n", cJSON_Print(jsoncountry_state_dto_2));
}

int main() {
  test_country_state_dto(1);
  test_country_state_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_state_dto_MAIN
#endif // country_state_dto_TEST
