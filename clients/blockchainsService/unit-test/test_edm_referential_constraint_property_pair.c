#ifndef edm_referential_constraint_property_pair_TEST
#define edm_referential_constraint_property_pair_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define edm_referential_constraint_property_pair_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/edm_referential_constraint_property_pair.h"
edm_referential_constraint_property_pair_t* instantiate_edm_referential_constraint_property_pair(int include_optional);

#include "test_i_edm_structural_property.c"
#include "test_i_edm_structural_property.c"


edm_referential_constraint_property_pair_t* instantiate_edm_referential_constraint_property_pair(int include_optional) {
  edm_referential_constraint_property_pair_t* edm_referential_constraint_property_pair = NULL;
  if (include_optional) {
    edm_referential_constraint_property_pair = edm_referential_constraint_property_pair_create(
       // false, not to have infinite recursion
      instantiate_i_edm_structural_property(0),
       // false, not to have infinite recursion
      instantiate_i_edm_structural_property(0)
    );
  } else {
    edm_referential_constraint_property_pair = edm_referential_constraint_property_pair_create(
      NULL,
      NULL
    );
  }

  return edm_referential_constraint_property_pair;
}


#ifdef edm_referential_constraint_property_pair_MAIN

void test_edm_referential_constraint_property_pair(int include_optional) {
    edm_referential_constraint_property_pair_t* edm_referential_constraint_property_pair_1 = instantiate_edm_referential_constraint_property_pair(include_optional);

	cJSON* jsonedm_referential_constraint_property_pair_1 = edm_referential_constraint_property_pair_convertToJSON(edm_referential_constraint_property_pair_1);
	printf("edm_referential_constraint_property_pair :\n%s\n", cJSON_Print(jsonedm_referential_constraint_property_pair_1));
	edm_referential_constraint_property_pair_t* edm_referential_constraint_property_pair_2 = edm_referential_constraint_property_pair_parseFromJSON(jsonedm_referential_constraint_property_pair_1);
	cJSON* jsonedm_referential_constraint_property_pair_2 = edm_referential_constraint_property_pair_convertToJSON(edm_referential_constraint_property_pair_2);
	printf("repeating edm_referential_constraint_property_pair:\n%s\n", cJSON_Print(jsonedm_referential_constraint_property_pair_2));
}

int main() {
  test_edm_referential_constraint_property_pair(1);
  test_edm_referential_constraint_property_pair(0);

  printf("Hello world \n");
  return 0;
}

#endif // edm_referential_constraint_property_pair_MAIN
#endif // edm_referential_constraint_property_pair_TEST
