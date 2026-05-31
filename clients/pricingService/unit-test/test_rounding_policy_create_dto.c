#ifndef rounding_policy_create_dto_TEST
#define rounding_policy_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rounding_policy_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rounding_policy_create_dto.h"
rounding_policy_create_dto_t* instantiate_rounding_policy_create_dto(int include_optional);



rounding_policy_create_dto_t* instantiate_rounding_policy_create_dto(int include_optional) {
  rounding_policy_create_dto_t* rounding_policy_create_dto = NULL;
  if (include_optional) {
    rounding_policy_create_dto = rounding_policy_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    rounding_policy_create_dto = rounding_policy_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return rounding_policy_create_dto;
}


#ifdef rounding_policy_create_dto_MAIN

void test_rounding_policy_create_dto(int include_optional) {
    rounding_policy_create_dto_t* rounding_policy_create_dto_1 = instantiate_rounding_policy_create_dto(include_optional);

	cJSON* jsonrounding_policy_create_dto_1 = rounding_policy_create_dto_convertToJSON(rounding_policy_create_dto_1);
	printf("rounding_policy_create_dto :\n%s\n", cJSON_Print(jsonrounding_policy_create_dto_1));
	rounding_policy_create_dto_t* rounding_policy_create_dto_2 = rounding_policy_create_dto_parseFromJSON(jsonrounding_policy_create_dto_1);
	cJSON* jsonrounding_policy_create_dto_2 = rounding_policy_create_dto_convertToJSON(rounding_policy_create_dto_2);
	printf("repeating rounding_policy_create_dto:\n%s\n", cJSON_Print(jsonrounding_policy_create_dto_2));
}

int main() {
  test_rounding_policy_create_dto(1);
  test_rounding_policy_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // rounding_policy_create_dto_MAIN
#endif // rounding_policy_create_dto_TEST
