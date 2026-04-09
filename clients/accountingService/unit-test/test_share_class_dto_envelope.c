#ifndef share_class_dto_envelope_TEST
#define share_class_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define share_class_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/share_class_dto_envelope.h"
share_class_dto_envelope_t* instantiate_share_class_dto_envelope(int include_optional);

#include "test_share_class_dto.c"


share_class_dto_envelope_t* instantiate_share_class_dto_envelope(int include_optional) {
  share_class_dto_envelope_t* share_class_dto_envelope = NULL;
  if (include_optional) {
    share_class_dto_envelope = share_class_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_share_class_dto(0)
    );
  } else {
    share_class_dto_envelope = share_class_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return share_class_dto_envelope;
}


#ifdef share_class_dto_envelope_MAIN

void test_share_class_dto_envelope(int include_optional) {
    share_class_dto_envelope_t* share_class_dto_envelope_1 = instantiate_share_class_dto_envelope(include_optional);

	cJSON* jsonshare_class_dto_envelope_1 = share_class_dto_envelope_convertToJSON(share_class_dto_envelope_1);
	printf("share_class_dto_envelope :\n%s\n", cJSON_Print(jsonshare_class_dto_envelope_1));
	share_class_dto_envelope_t* share_class_dto_envelope_2 = share_class_dto_envelope_parseFromJSON(jsonshare_class_dto_envelope_1);
	cJSON* jsonshare_class_dto_envelope_2 = share_class_dto_envelope_convertToJSON(share_class_dto_envelope_2);
	printf("repeating share_class_dto_envelope:\n%s\n", cJSON_Print(jsonshare_class_dto_envelope_2));
}

int main() {
  test_share_class_dto_envelope(1);
  test_share_class_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // share_class_dto_envelope_MAIN
#endif // share_class_dto_envelope_TEST
