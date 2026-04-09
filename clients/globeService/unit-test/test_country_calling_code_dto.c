#ifndef country_calling_code_dto_TEST
#define country_calling_code_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_calling_code_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_calling_code_dto.h"
country_calling_code_dto_t* instantiate_country_calling_code_dto(int include_optional);



country_calling_code_dto_t* instantiate_country_calling_code_dto(int include_optional) {
  country_calling_code_dto_t* country_calling_code_dto = NULL;
  if (include_optional) {
    country_calling_code_dto = country_calling_code_dto_create(
      56,
      "0",
      "0"
    );
  } else {
    country_calling_code_dto = country_calling_code_dto_create(
      56,
      "0",
      "0"
    );
  }

  return country_calling_code_dto;
}


#ifdef country_calling_code_dto_MAIN

void test_country_calling_code_dto(int include_optional) {
    country_calling_code_dto_t* country_calling_code_dto_1 = instantiate_country_calling_code_dto(include_optional);

	cJSON* jsoncountry_calling_code_dto_1 = country_calling_code_dto_convertToJSON(country_calling_code_dto_1);
	printf("country_calling_code_dto :\n%s\n", cJSON_Print(jsoncountry_calling_code_dto_1));
	country_calling_code_dto_t* country_calling_code_dto_2 = country_calling_code_dto_parseFromJSON(jsoncountry_calling_code_dto_1);
	cJSON* jsoncountry_calling_code_dto_2 = country_calling_code_dto_convertToJSON(country_calling_code_dto_2);
	printf("repeating country_calling_code_dto:\n%s\n", cJSON_Print(jsoncountry_calling_code_dto_2));
}

int main() {
  test_country_calling_code_dto(1);
  test_country_calling_code_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_calling_code_dto_MAIN
#endif // country_calling_code_dto_TEST
