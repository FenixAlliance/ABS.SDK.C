#ifndef store_data_retention_policy_TEST
#define store_data_retention_policy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define store_data_retention_policy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/store_data_retention_policy.h"
store_data_retention_policy_t* instantiate_store_data_retention_policy(int include_optional);



store_data_retention_policy_t* instantiate_store_data_retention_policy(int include_optional) {
  store_data_retention_policy_t* store_data_retention_policy = NULL;
  if (include_optional) {
    store_data_retention_policy = store_data_retention_policy_create(
      56,
      contentservice_store_data_retention_policy_RETENTIONTIMESPAN_Days
    );
  } else {
    store_data_retention_policy = store_data_retention_policy_create(
      56,
      contentservice_store_data_retention_policy_RETENTIONTIMESPAN_Days
    );
  }

  return store_data_retention_policy;
}


#ifdef store_data_retention_policy_MAIN

void test_store_data_retention_policy(int include_optional) {
    store_data_retention_policy_t* store_data_retention_policy_1 = instantiate_store_data_retention_policy(include_optional);

	cJSON* jsonstore_data_retention_policy_1 = store_data_retention_policy_convertToJSON(store_data_retention_policy_1);
	printf("store_data_retention_policy :\n%s\n", cJSON_Print(jsonstore_data_retention_policy_1));
	store_data_retention_policy_t* store_data_retention_policy_2 = store_data_retention_policy_parseFromJSON(jsonstore_data_retention_policy_1);
	cJSON* jsonstore_data_retention_policy_2 = store_data_retention_policy_convertToJSON(store_data_retention_policy_2);
	printf("repeating store_data_retention_policy:\n%s\n", cJSON_Print(jsonstore_data_retention_policy_2));
}

int main() {
  test_store_data_retention_policy(1);
  test_store_data_retention_policy(0);

  printf("Hello world \n");
  return 0;
}

#endif // store_data_retention_policy_MAIN
#endif // store_data_retention_policy_TEST
