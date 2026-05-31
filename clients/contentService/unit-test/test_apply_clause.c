#ifndef apply_clause_TEST
#define apply_clause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apply_clause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apply_clause.h"
apply_clause_t* instantiate_apply_clause(int include_optional);



apply_clause_t* instantiate_apply_clause(int include_optional) {
  apply_clause_t* apply_clause = NULL;
  if (include_optional) {
    apply_clause = apply_clause_create(
      list_createList()
    );
  } else {
    apply_clause = apply_clause_create(
      list_createList()
    );
  }

  return apply_clause;
}


#ifdef apply_clause_MAIN

void test_apply_clause(int include_optional) {
    apply_clause_t* apply_clause_1 = instantiate_apply_clause(include_optional);

	cJSON* jsonapply_clause_1 = apply_clause_convertToJSON(apply_clause_1);
	printf("apply_clause :\n%s\n", cJSON_Print(jsonapply_clause_1));
	apply_clause_t* apply_clause_2 = apply_clause_parseFromJSON(jsonapply_clause_1);
	cJSON* jsonapply_clause_2 = apply_clause_convertToJSON(apply_clause_2);
	printf("repeating apply_clause:\n%s\n", cJSON_Print(jsonapply_clause_2));
}

int main() {
  test_apply_clause(1);
  test_apply_clause(0);

  printf("Hello world \n");
  return 0;
}

#endif // apply_clause_MAIN
#endif // apply_clause_TEST
