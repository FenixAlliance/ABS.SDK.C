#ifndef simple_user_dto_TEST
#define simple_user_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define simple_user_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/simple_user_dto.h"
simple_user_dto_t* instantiate_simple_user_dto(int include_optional);



simple_user_dto_t* instantiate_simple_user_dto(int include_optional) {
  simple_user_dto_t* simple_user_dto = NULL;
  if (include_optional) {
    simple_user_dto = simple_user_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    simple_user_dto = simple_user_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return simple_user_dto;
}


#ifdef simple_user_dto_MAIN

void test_simple_user_dto(int include_optional) {
    simple_user_dto_t* simple_user_dto_1 = instantiate_simple_user_dto(include_optional);

	cJSON* jsonsimple_user_dto_1 = simple_user_dto_convertToJSON(simple_user_dto_1);
	printf("simple_user_dto :\n%s\n", cJSON_Print(jsonsimple_user_dto_1));
	simple_user_dto_t* simple_user_dto_2 = simple_user_dto_parseFromJSON(jsonsimple_user_dto_1);
	cJSON* jsonsimple_user_dto_2 = simple_user_dto_convertToJSON(simple_user_dto_2);
	printf("repeating simple_user_dto:\n%s\n", cJSON_Print(jsonsimple_user_dto_2));
}

int main() {
  test_simple_user_dto(1);
  test_simple_user_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // simple_user_dto_MAIN
#endif // simple_user_dto_TEST
