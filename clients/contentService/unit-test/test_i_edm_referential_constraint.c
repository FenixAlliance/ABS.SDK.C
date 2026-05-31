#ifndef i_edm_referential_constraint_TEST
#define i_edm_referential_constraint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_referential_constraint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_referential_constraint.h"
i_edm_referential_constraint_t* instantiate_i_edm_referential_constraint(int include_optional);



i_edm_referential_constraint_t* instantiate_i_edm_referential_constraint(int include_optional) {
  i_edm_referential_constraint_t* i_edm_referential_constraint = NULL;
  if (include_optional) {
    i_edm_referential_constraint = i_edm_referential_constraint_create(
      list_createList()
    );
  } else {
    i_edm_referential_constraint = i_edm_referential_constraint_create(
      list_createList()
    );
  }

  return i_edm_referential_constraint;
}


#ifdef i_edm_referential_constraint_MAIN

void test_i_edm_referential_constraint(int include_optional) {
    i_edm_referential_constraint_t* i_edm_referential_constraint_1 = instantiate_i_edm_referential_constraint(include_optional);

	cJSON* jsoni_edm_referential_constraint_1 = i_edm_referential_constraint_convertToJSON(i_edm_referential_constraint_1);
	printf("i_edm_referential_constraint :\n%s\n", cJSON_Print(jsoni_edm_referential_constraint_1));
	i_edm_referential_constraint_t* i_edm_referential_constraint_2 = i_edm_referential_constraint_parseFromJSON(jsoni_edm_referential_constraint_1);
	cJSON* jsoni_edm_referential_constraint_2 = i_edm_referential_constraint_convertToJSON(i_edm_referential_constraint_2);
	printf("repeating i_edm_referential_constraint:\n%s\n", cJSON_Print(jsoni_edm_referential_constraint_2));
}

int main() {
  test_i_edm_referential_constraint(1);
  test_i_edm_referential_constraint(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_referential_constraint_MAIN
#endif // i_edm_referential_constraint_TEST
