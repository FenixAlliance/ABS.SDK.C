#ifndef i_session_TEST
#define i_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_session.h"
i_session_t* instantiate_i_session(int include_optional);



i_session_t* instantiate_i_session(int include_optional) {
  i_session_t* i_session = NULL;
  if (include_optional) {
    i_session = i_session_create(
      1,
      "0",
      list_createList()
    );
  } else {
    i_session = i_session_create(
      1,
      "0",
      list_createList()
    );
  }

  return i_session;
}


#ifdef i_session_MAIN

void test_i_session(int include_optional) {
    i_session_t* i_session_1 = instantiate_i_session(include_optional);

	cJSON* jsoni_session_1 = i_session_convertToJSON(i_session_1);
	printf("i_session :\n%s\n", cJSON_Print(jsoni_session_1));
	i_session_t* i_session_2 = i_session_parseFromJSON(jsoni_session_1);
	cJSON* jsoni_session_2 = i_session_convertToJSON(i_session_2);
	printf("repeating i_session:\n%s\n", cJSON_Print(jsoni_session_2));
}

int main() {
  test_i_session(1);
  test_i_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_session_MAIN
#endif // i_session_TEST
