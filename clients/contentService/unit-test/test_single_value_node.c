#ifndef single_value_node_TEST
#define single_value_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define single_value_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/single_value_node.h"
single_value_node_t* instantiate_single_value_node(int include_optional);

#include "test_i_edm_type_reference.c"


single_value_node_t* instantiate_single_value_node(int include_optional) {
  single_value_node_t* single_value_node = NULL;
  if (include_optional) {
    single_value_node = single_value_node_create(
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0),
      contentservice_single_value_node_KIND_None
    );
  } else {
    single_value_node = single_value_node_create(
      NULL,
      contentservice_single_value_node_KIND_None
    );
  }

  return single_value_node;
}


#ifdef single_value_node_MAIN

void test_single_value_node(int include_optional) {
    single_value_node_t* single_value_node_1 = instantiate_single_value_node(include_optional);

	cJSON* jsonsingle_value_node_1 = single_value_node_convertToJSON(single_value_node_1);
	printf("single_value_node :\n%s\n", cJSON_Print(jsonsingle_value_node_1));
	single_value_node_t* single_value_node_2 = single_value_node_parseFromJSON(jsonsingle_value_node_1);
	cJSON* jsonsingle_value_node_2 = single_value_node_convertToJSON(single_value_node_2);
	printf("repeating single_value_node:\n%s\n", cJSON_Print(jsonsingle_value_node_2));
}

int main() {
  test_single_value_node(1);
  test_single_value_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // single_value_node_MAIN
#endif // single_value_node_TEST
