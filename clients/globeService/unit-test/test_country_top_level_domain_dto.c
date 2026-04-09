#ifndef country_top_level_domain_dto_TEST
#define country_top_level_domain_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_top_level_domain_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_top_level_domain_dto.h"
country_top_level_domain_dto_t* instantiate_country_top_level_domain_dto(int include_optional);



country_top_level_domain_dto_t* instantiate_country_top_level_domain_dto(int include_optional) {
  country_top_level_domain_dto_t* country_top_level_domain_dto = NULL;
  if (include_optional) {
    country_top_level_domain_dto = country_top_level_domain_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    country_top_level_domain_dto = country_top_level_domain_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return country_top_level_domain_dto;
}


#ifdef country_top_level_domain_dto_MAIN

void test_country_top_level_domain_dto(int include_optional) {
    country_top_level_domain_dto_t* country_top_level_domain_dto_1 = instantiate_country_top_level_domain_dto(include_optional);

	cJSON* jsoncountry_top_level_domain_dto_1 = country_top_level_domain_dto_convertToJSON(country_top_level_domain_dto_1);
	printf("country_top_level_domain_dto :\n%s\n", cJSON_Print(jsoncountry_top_level_domain_dto_1));
	country_top_level_domain_dto_t* country_top_level_domain_dto_2 = country_top_level_domain_dto_parseFromJSON(jsoncountry_top_level_domain_dto_1);
	cJSON* jsoncountry_top_level_domain_dto_2 = country_top_level_domain_dto_convertToJSON(country_top_level_domain_dto_2);
	printf("repeating country_top_level_domain_dto:\n%s\n", cJSON_Print(jsoncountry_top_level_domain_dto_2));
}

int main() {
  test_country_top_level_domain_dto(1);
  test_country_top_level_domain_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_top_level_domain_dto_MAIN
#endif // country_top_level_domain_dto_TEST
