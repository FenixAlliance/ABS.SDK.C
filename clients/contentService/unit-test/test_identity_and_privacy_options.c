#ifndef identity_and_privacy_options_TEST
#define identity_and_privacy_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define identity_and_privacy_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/identity_and_privacy_options.h"
identity_and_privacy_options_t* instantiate_identity_and_privacy_options(int include_optional);

#include "test_store_data_retention_policy.c"
#include "test_store_data_retention_policy.c"
#include "test_store_data_retention_policy.c"
#include "test_store_data_retention_policy.c"
#include "test_store_data_retention_policy.c"


identity_and_privacy_options_t* instantiate_identity_and_privacy_options(int include_optional) {
  identity_and_privacy_options_t* identity_and_privacy_options = NULL;
  if (include_optional) {
    identity_and_privacy_options = identity_and_privacy_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_None,
       // false, not to have infinite recursion
      instantiate_store_data_retention_policy(0),
       // false, not to have infinite recursion
      instantiate_store_data_retention_policy(0),
       // false, not to have infinite recursion
      instantiate_store_data_retention_policy(0),
       // false, not to have infinite recursion
      instantiate_store_data_retention_policy(0),
       // false, not to have infinite recursion
      instantiate_store_data_retention_policy(0)
    );
  } else {
    identity_and_privacy_options = identity_and_privacy_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_None,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return identity_and_privacy_options;
}


#ifdef identity_and_privacy_options_MAIN

void test_identity_and_privacy_options(int include_optional) {
    identity_and_privacy_options_t* identity_and_privacy_options_1 = instantiate_identity_and_privacy_options(include_optional);

	cJSON* jsonidentity_and_privacy_options_1 = identity_and_privacy_options_convertToJSON(identity_and_privacy_options_1);
	printf("identity_and_privacy_options :\n%s\n", cJSON_Print(jsonidentity_and_privacy_options_1));
	identity_and_privacy_options_t* identity_and_privacy_options_2 = identity_and_privacy_options_parseFromJSON(jsonidentity_and_privacy_options_1);
	cJSON* jsonidentity_and_privacy_options_2 = identity_and_privacy_options_convertToJSON(identity_and_privacy_options_2);
	printf("repeating identity_and_privacy_options:\n%s\n", cJSON_Print(jsonidentity_and_privacy_options_2));
}

int main() {
  test_identity_and_privacy_options(1);
  test_identity_and_privacy_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // identity_and_privacy_options_MAIN
#endif // identity_and_privacy_options_TEST
