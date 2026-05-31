#ifndef byte_read_only_memory_TEST
#define byte_read_only_memory_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define byte_read_only_memory_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/byte_read_only_memory.h"
byte_read_only_memory_t* instantiate_byte_read_only_memory(int include_optional);

#include "test_byte_read_only_span.c"


byte_read_only_memory_t* instantiate_byte_read_only_memory(int include_optional) {
  byte_read_only_memory_t* byte_read_only_memory = NULL;
  if (include_optional) {
    byte_read_only_memory = byte_read_only_memory_create(
      56,
      1,
       // false, not to have infinite recursion
      instantiate_byte_read_only_span(0)
    );
  } else {
    byte_read_only_memory = byte_read_only_memory_create(
      56,
      1,
      NULL
    );
  }

  return byte_read_only_memory;
}


#ifdef byte_read_only_memory_MAIN

void test_byte_read_only_memory(int include_optional) {
    byte_read_only_memory_t* byte_read_only_memory_1 = instantiate_byte_read_only_memory(include_optional);

	cJSON* jsonbyte_read_only_memory_1 = byte_read_only_memory_convertToJSON(byte_read_only_memory_1);
	printf("byte_read_only_memory :\n%s\n", cJSON_Print(jsonbyte_read_only_memory_1));
	byte_read_only_memory_t* byte_read_only_memory_2 = byte_read_only_memory_parseFromJSON(jsonbyte_read_only_memory_1);
	cJSON* jsonbyte_read_only_memory_2 = byte_read_only_memory_convertToJSON(byte_read_only_memory_2);
	printf("repeating byte_read_only_memory:\n%s\n", cJSON_Print(jsonbyte_read_only_memory_2));
}

int main() {
  test_byte_read_only_memory(1);
  test_byte_read_only_memory(0);

  printf("Hello world \n");
  return 0;
}

#endif // byte_read_only_memory_MAIN
#endif // byte_read_only_memory_TEST
