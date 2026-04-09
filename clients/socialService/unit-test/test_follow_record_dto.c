#ifndef follow_record_dto_TEST
#define follow_record_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define follow_record_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/follow_record_dto.h"
follow_record_dto_t* instantiate_follow_record_dto(int include_optional);



follow_record_dto_t* instantiate_follow_record_dto(int include_optional) {
  follow_record_dto_t* follow_record_dto = NULL;
  if (include_optional) {
    follow_record_dto = follow_record_dto_create(
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    follow_record_dto = follow_record_dto_create(
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return follow_record_dto;
}


#ifdef follow_record_dto_MAIN

void test_follow_record_dto(int include_optional) {
    follow_record_dto_t* follow_record_dto_1 = instantiate_follow_record_dto(include_optional);

	cJSON* jsonfollow_record_dto_1 = follow_record_dto_convertToJSON(follow_record_dto_1);
	printf("follow_record_dto :\n%s\n", cJSON_Print(jsonfollow_record_dto_1));
	follow_record_dto_t* follow_record_dto_2 = follow_record_dto_parseFromJSON(jsonfollow_record_dto_1);
	cJSON* jsonfollow_record_dto_2 = follow_record_dto_convertToJSON(follow_record_dto_2);
	printf("repeating follow_record_dto:\n%s\n", cJSON_Print(jsonfollow_record_dto_2));
}

int main() {
  test_follow_record_dto(1);
  test_follow_record_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // follow_record_dto_MAIN
#endif // follow_record_dto_TEST
