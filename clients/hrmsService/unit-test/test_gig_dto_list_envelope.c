#ifndef gig_dto_list_envelope_TEST
#define gig_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gig_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gig_dto_list_envelope.h"
gig_dto_list_envelope_t* instantiate_gig_dto_list_envelope(int include_optional);



gig_dto_list_envelope_t* instantiate_gig_dto_list_envelope(int include_optional) {
  gig_dto_list_envelope_t* gig_dto_list_envelope = NULL;
  if (include_optional) {
    gig_dto_list_envelope = gig_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    gig_dto_list_envelope = gig_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return gig_dto_list_envelope;
}


#ifdef gig_dto_list_envelope_MAIN

void test_gig_dto_list_envelope(int include_optional) {
    gig_dto_list_envelope_t* gig_dto_list_envelope_1 = instantiate_gig_dto_list_envelope(include_optional);

	cJSON* jsongig_dto_list_envelope_1 = gig_dto_list_envelope_convertToJSON(gig_dto_list_envelope_1);
	printf("gig_dto_list_envelope :\n%s\n", cJSON_Print(jsongig_dto_list_envelope_1));
	gig_dto_list_envelope_t* gig_dto_list_envelope_2 = gig_dto_list_envelope_parseFromJSON(jsongig_dto_list_envelope_1);
	cJSON* jsongig_dto_list_envelope_2 = gig_dto_list_envelope_convertToJSON(gig_dto_list_envelope_2);
	printf("repeating gig_dto_list_envelope:\n%s\n", cJSON_Print(jsongig_dto_list_envelope_2));
}

int main() {
  test_gig_dto_list_envelope(1);
  test_gig_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // gig_dto_list_envelope_MAIN
#endif // gig_dto_list_envelope_TEST
