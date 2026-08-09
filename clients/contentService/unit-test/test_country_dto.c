#ifndef country_dto_TEST
#define country_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_dto.h"
country_dto_t* instantiate_country_dto(int include_optional);



country_dto_t* instantiate_country_dto(int include_optional) {
  country_dto_t* country_dto = NULL;
  if (include_optional) {
    country_dto = country_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    country_dto = country_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return country_dto;
}


#ifdef country_dto_MAIN

void test_country_dto(int include_optional) {
    country_dto_t* country_dto_1 = instantiate_country_dto(include_optional);

	cJSON* jsoncountry_dto_1 = country_dto_convertToJSON(country_dto_1);
	printf("country_dto :\n%s\n", cJSON_Print(jsoncountry_dto_1));
	country_dto_t* country_dto_2 = country_dto_parseFromJSON(jsoncountry_dto_1);
	cJSON* jsoncountry_dto_2 = country_dto_convertToJSON(country_dto_2);
	printf("repeating country_dto:\n%s\n", cJSON_Print(jsoncountry_dto_2));
}

int main() {
  test_country_dto(1);
  test_country_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_dto_MAIN
#endif // country_dto_TEST
