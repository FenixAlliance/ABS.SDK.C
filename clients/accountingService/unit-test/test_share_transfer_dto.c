#ifndef share_transfer_dto_TEST
#define share_transfer_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_transfer_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_transfer_dto.h"
share_transfer_dto_t* instantiate_share_transfer_dto(int include_optional);



share_transfer_dto_t* instantiate_share_transfer_dto(int include_optional) {
  share_transfer_dto_t* share_transfer_dto = NULL;
  if (include_optional) {
    share_transfer_dto = share_transfer_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    share_transfer_dto = share_transfer_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return share_transfer_dto;
}


#ifdef share_transfer_dto_MAIN

void test_share_transfer_dto(int include_optional) {
    share_transfer_dto_t* share_transfer_dto_1 = instantiate_share_transfer_dto(include_optional);

	cJSON* jsonshare_transfer_dto_1 = share_transfer_dto_convertToJSON(share_transfer_dto_1);
	printf("share_transfer_dto :\n%s\n", cJSON_Print(jsonshare_transfer_dto_1));
	share_transfer_dto_t* share_transfer_dto_2 = share_transfer_dto_parseFromJSON(jsonshare_transfer_dto_1);
	cJSON* jsonshare_transfer_dto_2 = share_transfer_dto_convertToJSON(share_transfer_dto_2);
	printf("repeating share_transfer_dto:\n%s\n", cJSON_Print(jsonshare_transfer_dto_2));
}

int main() {
  test_share_transfer_dto(1);
  test_share_transfer_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_transfer_dto_MAIN
#endif // share_transfer_dto_TEST
