#ifndef key_sizes_TEST
#define key_sizes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define key_sizes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/key_sizes.h"
key_sizes_t* instantiate_key_sizes(int include_optional);



key_sizes_t* instantiate_key_sizes(int include_optional) {
  key_sizes_t* key_sizes = NULL;
  if (include_optional) {
    key_sizes = key_sizes_create(
      56,
      56,
      56
    );
  } else {
    key_sizes = key_sizes_create(
      56,
      56,
      56
    );
  }

  return key_sizes;
}


#ifdef key_sizes_MAIN

void test_key_sizes(int include_optional) {
    key_sizes_t* key_sizes_1 = instantiate_key_sizes(include_optional);

	cJSON* jsonkey_sizes_1 = key_sizes_convertToJSON(key_sizes_1);
	printf("key_sizes :\n%s\n", cJSON_Print(jsonkey_sizes_1));
	key_sizes_t* key_sizes_2 = key_sizes_parseFromJSON(jsonkey_sizes_1);
	cJSON* jsonkey_sizes_2 = key_sizes_convertToJSON(key_sizes_2);
	printf("repeating key_sizes:\n%s\n", cJSON_Print(jsonkey_sizes_2));
}

int main() {
  test_key_sizes(1);
  test_key_sizes(0);

  printf("Hello world \n");
  return 0;
}

#endif // key_sizes_MAIN
#endif // key_sizes_TEST
