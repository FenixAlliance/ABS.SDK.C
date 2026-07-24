#ifndef work_order_dto_TEST
#define work_order_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define work_order_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/work_order_dto.h"
work_order_dto_t* instantiate_work_order_dto(int include_optional);



work_order_dto_t* instantiate_work_order_dto(int include_optional) {
  work_order_dto_t* work_order_dto = NULL;
  if (include_optional) {
    work_order_dto = work_order_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    work_order_dto = work_order_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return work_order_dto;
}


#ifdef work_order_dto_MAIN

void test_work_order_dto(int include_optional) {
    work_order_dto_t* work_order_dto_1 = instantiate_work_order_dto(include_optional);

	cJSON* jsonwork_order_dto_1 = work_order_dto_convertToJSON(work_order_dto_1);
	printf("work_order_dto :\n%s\n", cJSON_Print(jsonwork_order_dto_1));
	work_order_dto_t* work_order_dto_2 = work_order_dto_parseFromJSON(jsonwork_order_dto_1);
	cJSON* jsonwork_order_dto_2 = work_order_dto_convertToJSON(work_order_dto_2);
	printf("repeating work_order_dto:\n%s\n", cJSON_Print(jsonwork_order_dto_2));
}

int main() {
  test_work_order_dto(1);
  test_work_order_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // work_order_dto_MAIN
#endif // work_order_dto_TEST
