#ifndef share_class_dto_TEST
#define share_class_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_class_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_class_dto.h"
share_class_dto_t* instantiate_share_class_dto(int include_optional);



share_class_dto_t* instantiate_share_class_dto(int include_optional) {
  share_class_dto_t* share_class_dto = NULL;
  if (include_optional) {
    share_class_dto = share_class_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    share_class_dto = share_class_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return share_class_dto;
}


#ifdef share_class_dto_MAIN

void test_share_class_dto(int include_optional) {
    share_class_dto_t* share_class_dto_1 = instantiate_share_class_dto(include_optional);

	cJSON* jsonshare_class_dto_1 = share_class_dto_convertToJSON(share_class_dto_1);
	printf("share_class_dto :\n%s\n", cJSON_Print(jsonshare_class_dto_1));
	share_class_dto_t* share_class_dto_2 = share_class_dto_parseFromJSON(jsonshare_class_dto_1);
	cJSON* jsonshare_class_dto_2 = share_class_dto_convertToJSON(share_class_dto_2);
	printf("repeating share_class_dto:\n%s\n", cJSON_Print(jsonshare_class_dto_2));
}

int main() {
  test_share_class_dto(1);
  test_share_class_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_class_dto_MAIN
#endif // share_class_dto_TEST
