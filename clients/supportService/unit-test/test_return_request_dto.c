#ifndef return_request_dto_TEST
#define return_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_request_dto.h"
return_request_dto_t* instantiate_return_request_dto(int include_optional);



return_request_dto_t* instantiate_return_request_dto(int include_optional) {
  return_request_dto_t* return_request_dto = NULL;
  if (include_optional) {
    return_request_dto = return_request_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    return_request_dto = return_request_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return return_request_dto;
}


#ifdef return_request_dto_MAIN

void test_return_request_dto(int include_optional) {
    return_request_dto_t* return_request_dto_1 = instantiate_return_request_dto(include_optional);

	cJSON* jsonreturn_request_dto_1 = return_request_dto_convertToJSON(return_request_dto_1);
	printf("return_request_dto :\n%s\n", cJSON_Print(jsonreturn_request_dto_1));
	return_request_dto_t* return_request_dto_2 = return_request_dto_parseFromJSON(jsonreturn_request_dto_1);
	cJSON* jsonreturn_request_dto_2 = return_request_dto_convertToJSON(return_request_dto_2);
	printf("repeating return_request_dto:\n%s\n", cJSON_Print(jsonreturn_request_dto_2));
}

int main() {
  test_return_request_dto(1);
  test_return_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_request_dto_MAIN
#endif // return_request_dto_TEST
