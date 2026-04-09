#ifndef quote_line_dto_envelope_TEST
#define quote_line_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_line_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_line_dto_envelope.h"
quote_line_dto_envelope_t* instantiate_quote_line_dto_envelope(int include_optional);

#include "test_quote_line_dto.c"


quote_line_dto_envelope_t* instantiate_quote_line_dto_envelope(int include_optional) {
  quote_line_dto_envelope_t* quote_line_dto_envelope = NULL;
  if (include_optional) {
    quote_line_dto_envelope = quote_line_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_quote_line_dto(0)
    );
  } else {
    quote_line_dto_envelope = quote_line_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return quote_line_dto_envelope;
}


#ifdef quote_line_dto_envelope_MAIN

void test_quote_line_dto_envelope(int include_optional) {
    quote_line_dto_envelope_t* quote_line_dto_envelope_1 = instantiate_quote_line_dto_envelope(include_optional);

	cJSON* jsonquote_line_dto_envelope_1 = quote_line_dto_envelope_convertToJSON(quote_line_dto_envelope_1);
	printf("quote_line_dto_envelope :\n%s\n", cJSON_Print(jsonquote_line_dto_envelope_1));
	quote_line_dto_envelope_t* quote_line_dto_envelope_2 = quote_line_dto_envelope_parseFromJSON(jsonquote_line_dto_envelope_1);
	cJSON* jsonquote_line_dto_envelope_2 = quote_line_dto_envelope_convertToJSON(quote_line_dto_envelope_2);
	printf("repeating quote_line_dto_envelope:\n%s\n", cJSON_Print(jsonquote_line_dto_envelope_2));
}

int main() {
  test_quote_line_dto_envelope(1);
  test_quote_line_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_line_dto_envelope_MAIN
#endif // quote_line_dto_envelope_TEST
