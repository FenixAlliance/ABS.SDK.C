#ifndef i_identity_TEST
#define i_identity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_identity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_identity.h"
i_identity_t* instantiate_i_identity(int include_optional);



i_identity_t* instantiate_i_identity(int include_optional) {
  i_identity_t* i_identity = NULL;
  if (include_optional) {
    i_identity = i_identity_create(
      "0",
      "0",
      1
    );
  } else {
    i_identity = i_identity_create(
      "0",
      "0",
      1
    );
  }

  return i_identity;
}


#ifdef i_identity_MAIN

void test_i_identity(int include_optional) {
    i_identity_t* i_identity_1 = instantiate_i_identity(include_optional);

	cJSON* jsoni_identity_1 = i_identity_convertToJSON(i_identity_1);
	printf("i_identity :\n%s\n", cJSON_Print(jsoni_identity_1));
	i_identity_t* i_identity_2 = i_identity_parseFromJSON(jsoni_identity_1);
	cJSON* jsoni_identity_2 = i_identity_convertToJSON(i_identity_2);
	printf("repeating i_identity:\n%s\n", cJSON_Print(jsoni_identity_2));
}

int main() {
  test_i_identity(1);
  test_i_identity(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_identity_MAIN
#endif // i_identity_TEST
