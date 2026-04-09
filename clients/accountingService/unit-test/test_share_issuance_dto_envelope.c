#ifndef share_issuance_dto_envelope_TEST
#define share_issuance_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_issuance_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_issuance_dto_envelope.h"
share_issuance_dto_envelope_t* instantiate_share_issuance_dto_envelope(int include_optional);

#include "test_share_issuance_dto.c"


share_issuance_dto_envelope_t* instantiate_share_issuance_dto_envelope(int include_optional) {
  share_issuance_dto_envelope_t* share_issuance_dto_envelope = NULL;
  if (include_optional) {
    share_issuance_dto_envelope = share_issuance_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_share_issuance_dto(0)
    );
  } else {
    share_issuance_dto_envelope = share_issuance_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return share_issuance_dto_envelope;
}


#ifdef share_issuance_dto_envelope_MAIN

void test_share_issuance_dto_envelope(int include_optional) {
    share_issuance_dto_envelope_t* share_issuance_dto_envelope_1 = instantiate_share_issuance_dto_envelope(include_optional);

	cJSON* jsonshare_issuance_dto_envelope_1 = share_issuance_dto_envelope_convertToJSON(share_issuance_dto_envelope_1);
	printf("share_issuance_dto_envelope :\n%s\n", cJSON_Print(jsonshare_issuance_dto_envelope_1));
	share_issuance_dto_envelope_t* share_issuance_dto_envelope_2 = share_issuance_dto_envelope_parseFromJSON(jsonshare_issuance_dto_envelope_1);
	cJSON* jsonshare_issuance_dto_envelope_2 = share_issuance_dto_envelope_convertToJSON(share_issuance_dto_envelope_2);
	printf("repeating share_issuance_dto_envelope:\n%s\n", cJSON_Print(jsonshare_issuance_dto_envelope_2));
}

int main() {
  test_share_issuance_dto_envelope(1);
  test_share_issuance_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_issuance_dto_envelope_MAIN
#endif // share_issuance_dto_envelope_TEST
