#ifndef signing_participant_dto_TEST
#define signing_participant_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_participant_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_participant_dto.h"
signing_participant_dto_t* instantiate_signing_participant_dto(int include_optional);



signing_participant_dto_t* instantiate_signing_participant_dto(int include_optional) {
  signing_participant_dto_t* signing_participant_dto = NULL;
  if (include_optional) {
    signing_participant_dto = signing_participant_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_participant_dto_ROLE_Signer,
      trustservice_signing_participant_dto_STATUS_Pending,
      56,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    signing_participant_dto = signing_participant_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      trustservice_signing_participant_dto_ROLE_Signer,
      trustservice_signing_participant_dto_STATUS_Pending,
      56,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return signing_participant_dto;
}


#ifdef signing_participant_dto_MAIN

void test_signing_participant_dto(int include_optional) {
    signing_participant_dto_t* signing_participant_dto_1 = instantiate_signing_participant_dto(include_optional);

	cJSON* jsonsigning_participant_dto_1 = signing_participant_dto_convertToJSON(signing_participant_dto_1);
	printf("signing_participant_dto :\n%s\n", cJSON_Print(jsonsigning_participant_dto_1));
	signing_participant_dto_t* signing_participant_dto_2 = signing_participant_dto_parseFromJSON(jsonsigning_participant_dto_1);
	cJSON* jsonsigning_participant_dto_2 = signing_participant_dto_convertToJSON(signing_participant_dto_2);
	printf("repeating signing_participant_dto:\n%s\n", cJSON_Print(jsonsigning_participant_dto_2));
}

int main() {
  test_signing_participant_dto(1);
  test_signing_participant_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_participant_dto_MAIN
#endif // signing_participant_dto_TEST
