#ifndef share_issuance_create_dto_TEST
#define share_issuance_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_issuance_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_issuance_create_dto.h"
share_issuance_create_dto_t* instantiate_share_issuance_create_dto(int include_optional);



share_issuance_create_dto_t* instantiate_share_issuance_create_dto(int include_optional) {
  share_issuance_create_dto_t* share_issuance_create_dto = NULL;
  if (include_optional) {
    share_issuance_create_dto = share_issuance_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      56,
      1,
      "0"
    );
  } else {
    share_issuance_create_dto = share_issuance_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      56,
      1,
      "0"
    );
  }

  return share_issuance_create_dto;
}


#ifdef share_issuance_create_dto_MAIN

void test_share_issuance_create_dto(int include_optional) {
    share_issuance_create_dto_t* share_issuance_create_dto_1 = instantiate_share_issuance_create_dto(include_optional);

	cJSON* jsonshare_issuance_create_dto_1 = share_issuance_create_dto_convertToJSON(share_issuance_create_dto_1);
	printf("share_issuance_create_dto :\n%s\n", cJSON_Print(jsonshare_issuance_create_dto_1));
	share_issuance_create_dto_t* share_issuance_create_dto_2 = share_issuance_create_dto_parseFromJSON(jsonshare_issuance_create_dto_1);
	cJSON* jsonshare_issuance_create_dto_2 = share_issuance_create_dto_convertToJSON(share_issuance_create_dto_2);
	printf("repeating share_issuance_create_dto:\n%s\n", cJSON_Print(jsonshare_issuance_create_dto_2));
}

int main() {
  test_share_issuance_create_dto(1);
  test_share_issuance_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_issuance_create_dto_MAIN
#endif // share_issuance_create_dto_TEST
