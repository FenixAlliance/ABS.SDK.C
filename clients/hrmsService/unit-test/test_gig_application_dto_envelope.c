#ifndef gig_application_dto_envelope_TEST
#define gig_application_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gig_application_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gig_application_dto_envelope.h"
gig_application_dto_envelope_t* instantiate_gig_application_dto_envelope(int include_optional);

#include "test_gig_application_dto.c"


gig_application_dto_envelope_t* instantiate_gig_application_dto_envelope(int include_optional) {
  gig_application_dto_envelope_t* gig_application_dto_envelope = NULL;
  if (include_optional) {
    gig_application_dto_envelope = gig_application_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_gig_application_dto(0)
    );
  } else {
    gig_application_dto_envelope = gig_application_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return gig_application_dto_envelope;
}


#ifdef gig_application_dto_envelope_MAIN

void test_gig_application_dto_envelope(int include_optional) {
    gig_application_dto_envelope_t* gig_application_dto_envelope_1 = instantiate_gig_application_dto_envelope(include_optional);

	cJSON* jsongig_application_dto_envelope_1 = gig_application_dto_envelope_convertToJSON(gig_application_dto_envelope_1);
	printf("gig_application_dto_envelope :\n%s\n", cJSON_Print(jsongig_application_dto_envelope_1));
	gig_application_dto_envelope_t* gig_application_dto_envelope_2 = gig_application_dto_envelope_parseFromJSON(jsongig_application_dto_envelope_1);
	cJSON* jsongig_application_dto_envelope_2 = gig_application_dto_envelope_convertToJSON(gig_application_dto_envelope_2);
	printf("repeating gig_application_dto_envelope:\n%s\n", cJSON_Print(jsongig_application_dto_envelope_2));
}

int main() {
  test_gig_application_dto_envelope(1);
  test_gig_application_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // gig_application_dto_envelope_MAIN
#endif // gig_application_dto_envelope_TEST
