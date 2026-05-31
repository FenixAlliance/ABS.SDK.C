#ifndef compute_clause_TEST
#define compute_clause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define compute_clause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/compute_clause.h"
compute_clause_t* instantiate_compute_clause(int include_optional);



compute_clause_t* instantiate_compute_clause(int include_optional) {
  compute_clause_t* compute_clause = NULL;
  if (include_optional) {
    compute_clause = compute_clause_create(
      list_createList()
    );
  } else {
    compute_clause = compute_clause_create(
      list_createList()
    );
  }

  return compute_clause;
}


#ifdef compute_clause_MAIN

void test_compute_clause(int include_optional) {
    compute_clause_t* compute_clause_1 = instantiate_compute_clause(include_optional);

	cJSON* jsoncompute_clause_1 = compute_clause_convertToJSON(compute_clause_1);
	printf("compute_clause :\n%s\n", cJSON_Print(jsoncompute_clause_1));
	compute_clause_t* compute_clause_2 = compute_clause_parseFromJSON(jsoncompute_clause_1);
	cJSON* jsoncompute_clause_2 = compute_clause_convertToJSON(compute_clause_2);
	printf("repeating compute_clause:\n%s\n", cJSON_Print(jsoncompute_clause_2));
}

int main() {
  test_compute_clause(1);
  test_compute_clause(0);

  printf("Hello world \n");
  return 0;
}

#endif // compute_clause_MAIN
#endif // compute_clause_TEST
