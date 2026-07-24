#ifndef signing_profile_dto_list_envelope_TEST
#define signing_profile_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_profile_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_profile_dto_list_envelope.h"
signing_profile_dto_list_envelope_t* instantiate_signing_profile_dto_list_envelope(int include_optional);



signing_profile_dto_list_envelope_t* instantiate_signing_profile_dto_list_envelope(int include_optional) {
  signing_profile_dto_list_envelope_t* signing_profile_dto_list_envelope = NULL;
  if (include_optional) {
    signing_profile_dto_list_envelope = signing_profile_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    signing_profile_dto_list_envelope = signing_profile_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return signing_profile_dto_list_envelope;
}


#ifdef signing_profile_dto_list_envelope_MAIN

void test_signing_profile_dto_list_envelope(int include_optional) {
    signing_profile_dto_list_envelope_t* signing_profile_dto_list_envelope_1 = instantiate_signing_profile_dto_list_envelope(include_optional);

	cJSON* jsonsigning_profile_dto_list_envelope_1 = signing_profile_dto_list_envelope_convertToJSON(signing_profile_dto_list_envelope_1);
	printf("signing_profile_dto_list_envelope :\n%s\n", cJSON_Print(jsonsigning_profile_dto_list_envelope_1));
	signing_profile_dto_list_envelope_t* signing_profile_dto_list_envelope_2 = signing_profile_dto_list_envelope_parseFromJSON(jsonsigning_profile_dto_list_envelope_1);
	cJSON* jsonsigning_profile_dto_list_envelope_2 = signing_profile_dto_list_envelope_convertToJSON(signing_profile_dto_list_envelope_2);
	printf("repeating signing_profile_dto_list_envelope:\n%s\n", cJSON_Print(jsonsigning_profile_dto_list_envelope_2));
}

int main() {
  test_signing_profile_dto_list_envelope(1);
  test_signing_profile_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_profile_dto_list_envelope_MAIN
#endif // signing_profile_dto_list_envelope_TEST
