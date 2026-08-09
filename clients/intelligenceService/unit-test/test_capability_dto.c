#ifndef capability_dto_TEST
#define capability_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define capability_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/capability_dto.h"
capability_dto_t* instantiate_capability_dto(int include_optional);



capability_dto_t* instantiate_capability_dto(int include_optional) {
  capability_dto_t* capability_dto = NULL;
  if (include_optional) {
    capability_dto = capability_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      1,
      list_createList()
    );
  } else {
    capability_dto = capability_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      1,
      list_createList()
    );
  }

  return capability_dto;
}


#ifdef capability_dto_MAIN

void test_capability_dto(int include_optional) {
    capability_dto_t* capability_dto_1 = instantiate_capability_dto(include_optional);

	cJSON* jsoncapability_dto_1 = capability_dto_convertToJSON(capability_dto_1);
	printf("capability_dto :\n%s\n", cJSON_Print(jsoncapability_dto_1));
	capability_dto_t* capability_dto_2 = capability_dto_parseFromJSON(jsoncapability_dto_1);
	cJSON* jsoncapability_dto_2 = capability_dto_convertToJSON(capability_dto_2);
	printf("repeating capability_dto:\n%s\n", cJSON_Print(jsoncapability_dto_2));
}

int main() {
  test_capability_dto(1);
  test_capability_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // capability_dto_MAIN
#endif // capability_dto_TEST
