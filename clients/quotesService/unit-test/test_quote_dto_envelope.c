#ifndef quote_dto_envelope_TEST
#define quote_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_dto_envelope.h"
quote_dto_envelope_t* instantiate_quote_dto_envelope(int include_optional);

#include "test_quote_dto.c"


quote_dto_envelope_t* instantiate_quote_dto_envelope(int include_optional) {
  quote_dto_envelope_t* quote_dto_envelope = NULL;
  if (include_optional) {
    quote_dto_envelope = quote_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_quote_dto(0)
    );
  } else {
    quote_dto_envelope = quote_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return quote_dto_envelope;
}


#ifdef quote_dto_envelope_MAIN

void test_quote_dto_envelope(int include_optional) {
    quote_dto_envelope_t* quote_dto_envelope_1 = instantiate_quote_dto_envelope(include_optional);

	cJSON* jsonquote_dto_envelope_1 = quote_dto_envelope_convertToJSON(quote_dto_envelope_1);
	printf("quote_dto_envelope :\n%s\n", cJSON_Print(jsonquote_dto_envelope_1));
	quote_dto_envelope_t* quote_dto_envelope_2 = quote_dto_envelope_parseFromJSON(jsonquote_dto_envelope_1);
	cJSON* jsonquote_dto_envelope_2 = quote_dto_envelope_convertToJSON(quote_dto_envelope_2);
	printf("repeating quote_dto_envelope:\n%s\n", cJSON_Print(jsonquote_dto_envelope_2));
}

int main() {
  test_quote_dto_envelope(1);
  test_quote_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_dto_envelope_MAIN
#endif // quote_dto_envelope_TEST
