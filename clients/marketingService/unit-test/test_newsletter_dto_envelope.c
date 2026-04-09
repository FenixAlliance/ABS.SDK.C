#ifndef newsletter_dto_envelope_TEST
#define newsletter_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_dto_envelope.h"
newsletter_dto_envelope_t* instantiate_newsletter_dto_envelope(int include_optional);

#include "test_newsletter_dto.c"


newsletter_dto_envelope_t* instantiate_newsletter_dto_envelope(int include_optional) {
  newsletter_dto_envelope_t* newsletter_dto_envelope = NULL;
  if (include_optional) {
    newsletter_dto_envelope = newsletter_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_newsletter_dto(0)
    );
  } else {
    newsletter_dto_envelope = newsletter_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return newsletter_dto_envelope;
}


#ifdef newsletter_dto_envelope_MAIN

void test_newsletter_dto_envelope(int include_optional) {
    newsletter_dto_envelope_t* newsletter_dto_envelope_1 = instantiate_newsletter_dto_envelope(include_optional);

	cJSON* jsonnewsletter_dto_envelope_1 = newsletter_dto_envelope_convertToJSON(newsletter_dto_envelope_1);
	printf("newsletter_dto_envelope :\n%s\n", cJSON_Print(jsonnewsletter_dto_envelope_1));
	newsletter_dto_envelope_t* newsletter_dto_envelope_2 = newsletter_dto_envelope_parseFromJSON(jsonnewsletter_dto_envelope_1);
	cJSON* jsonnewsletter_dto_envelope_2 = newsletter_dto_envelope_convertToJSON(newsletter_dto_envelope_2);
	printf("repeating newsletter_dto_envelope:\n%s\n", cJSON_Print(jsonnewsletter_dto_envelope_2));
}

int main() {
  test_newsletter_dto_envelope(1);
  test_newsletter_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_dto_envelope_MAIN
#endif // newsletter_dto_envelope_TEST
