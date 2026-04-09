#ifndef share_issuance_dto_list_envelope_TEST
#define share_issuance_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_issuance_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_issuance_dto_list_envelope.h"
share_issuance_dto_list_envelope_t* instantiate_share_issuance_dto_list_envelope(int include_optional);



share_issuance_dto_list_envelope_t* instantiate_share_issuance_dto_list_envelope(int include_optional) {
  share_issuance_dto_list_envelope_t* share_issuance_dto_list_envelope = NULL;
  if (include_optional) {
    share_issuance_dto_list_envelope = share_issuance_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    share_issuance_dto_list_envelope = share_issuance_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return share_issuance_dto_list_envelope;
}


#ifdef share_issuance_dto_list_envelope_MAIN

void test_share_issuance_dto_list_envelope(int include_optional) {
    share_issuance_dto_list_envelope_t* share_issuance_dto_list_envelope_1 = instantiate_share_issuance_dto_list_envelope(include_optional);

	cJSON* jsonshare_issuance_dto_list_envelope_1 = share_issuance_dto_list_envelope_convertToJSON(share_issuance_dto_list_envelope_1);
	printf("share_issuance_dto_list_envelope :\n%s\n", cJSON_Print(jsonshare_issuance_dto_list_envelope_1));
	share_issuance_dto_list_envelope_t* share_issuance_dto_list_envelope_2 = share_issuance_dto_list_envelope_parseFromJSON(jsonshare_issuance_dto_list_envelope_1);
	cJSON* jsonshare_issuance_dto_list_envelope_2 = share_issuance_dto_list_envelope_convertToJSON(share_issuance_dto_list_envelope_2);
	printf("repeating share_issuance_dto_list_envelope:\n%s\n", cJSON_Print(jsonshare_issuance_dto_list_envelope_2));
}

int main() {
  test_share_issuance_dto_list_envelope(1);
  test_share_issuance_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_issuance_dto_list_envelope_MAIN
#endif // share_issuance_dto_list_envelope_TEST
