#ifndef city_dto_TEST
#define city_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define city_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/city_dto.h"
city_dto_t* instantiate_city_dto(int include_optional);



city_dto_t* instantiate_city_dto(int include_optional) {
  city_dto_t* city_dto = NULL;
  if (include_optional) {
    city_dto = city_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    city_dto = city_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return city_dto;
}


#ifdef city_dto_MAIN

void test_city_dto(int include_optional) {
    city_dto_t* city_dto_1 = instantiate_city_dto(include_optional);

	cJSON* jsoncity_dto_1 = city_dto_convertToJSON(city_dto_1);
	printf("city_dto :\n%s\n", cJSON_Print(jsoncity_dto_1));
	city_dto_t* city_dto_2 = city_dto_parseFromJSON(jsoncity_dto_1);
	cJSON* jsoncity_dto_2 = city_dto_convertToJSON(city_dto_2);
	printf("repeating city_dto:\n%s\n", cJSON_Print(jsoncity_dto_2));
}

int main() {
  test_city_dto(1);
  test_city_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // city_dto_MAIN
#endif // city_dto_TEST
