#ifndef byte_read_only_span_TEST
#define byte_read_only_span_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define byte_read_only_span_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/byte_read_only_span.h"
byte_read_only_span_t* instantiate_byte_read_only_span(int include_optional);



byte_read_only_span_t* instantiate_byte_read_only_span(int include_optional) {
  byte_read_only_span_t* byte_read_only_span = NULL;
  if (include_optional) {
    byte_read_only_span = byte_read_only_span_create(
      56,
      1
    );
  } else {
    byte_read_only_span = byte_read_only_span_create(
      56,
      1
    );
  }

  return byte_read_only_span;
}


#ifdef byte_read_only_span_MAIN

void test_byte_read_only_span(int include_optional) {
    byte_read_only_span_t* byte_read_only_span_1 = instantiate_byte_read_only_span(include_optional);

	cJSON* jsonbyte_read_only_span_1 = byte_read_only_span_convertToJSON(byte_read_only_span_1);
	printf("byte_read_only_span :\n%s\n", cJSON_Print(jsonbyte_read_only_span_1));
	byte_read_only_span_t* byte_read_only_span_2 = byte_read_only_span_parseFromJSON(jsonbyte_read_only_span_1);
	cJSON* jsonbyte_read_only_span_2 = byte_read_only_span_convertToJSON(byte_read_only_span_2);
	printf("repeating byte_read_only_span:\n%s\n", cJSON_Print(jsonbyte_read_only_span_2));
}

int main() {
  test_byte_read_only_span(1);
  test_byte_read_only_span(0);

  printf("Hello world \n");
  return 0;
}

#endif // byte_read_only_span_MAIN
#endif // byte_read_only_span_TEST
