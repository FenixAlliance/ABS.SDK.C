#ifndef forum_options_TEST
#define forum_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define forum_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/forum_options.h"
forum_options_t* instantiate_forum_options(int include_optional);



forum_options_t* instantiate_forum_options(int include_optional) {
  forum_options_t* forum_options = NULL;
  if (include_optional) {
    forum_options = forum_options_create(
      56
    );
  } else {
    forum_options = forum_options_create(
      56
    );
  }

  return forum_options;
}


#ifdef forum_options_MAIN

void test_forum_options(int include_optional) {
    forum_options_t* forum_options_1 = instantiate_forum_options(include_optional);

	cJSON* jsonforum_options_1 = forum_options_convertToJSON(forum_options_1);
	printf("forum_options :\n%s\n", cJSON_Print(jsonforum_options_1));
	forum_options_t* forum_options_2 = forum_options_parseFromJSON(jsonforum_options_1);
	cJSON* jsonforum_options_2 = forum_options_convertToJSON(forum_options_2);
	printf("repeating forum_options:\n%s\n", cJSON_Print(jsonforum_options_2));
}

int main() {
  test_forum_options(1);
  test_forum_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // forum_options_MAIN
#endif // forum_options_TEST
