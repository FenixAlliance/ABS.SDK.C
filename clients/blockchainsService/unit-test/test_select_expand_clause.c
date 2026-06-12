#ifndef select_expand_clause_TEST
#define select_expand_clause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define select_expand_clause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/select_expand_clause.h"
select_expand_clause_t* instantiate_select_expand_clause(int include_optional);



select_expand_clause_t* instantiate_select_expand_clause(int include_optional) {
  select_expand_clause_t* select_expand_clause = NULL;
  if (include_optional) {
    select_expand_clause = select_expand_clause_create(
      list_createList(),
      1
    );
  } else {
    select_expand_clause = select_expand_clause_create(
      list_createList(),
      1
    );
  }

  return select_expand_clause;
}


#ifdef select_expand_clause_MAIN

void test_select_expand_clause(int include_optional) {
    select_expand_clause_t* select_expand_clause_1 = instantiate_select_expand_clause(include_optional);

	cJSON* jsonselect_expand_clause_1 = select_expand_clause_convertToJSON(select_expand_clause_1);
	printf("select_expand_clause :\n%s\n", cJSON_Print(jsonselect_expand_clause_1));
	select_expand_clause_t* select_expand_clause_2 = select_expand_clause_parseFromJSON(jsonselect_expand_clause_1);
	cJSON* jsonselect_expand_clause_2 = select_expand_clause_convertToJSON(select_expand_clause_2);
	printf("repeating select_expand_clause:\n%s\n", cJSON_Print(jsonselect_expand_clause_2));
}

int main() {
  test_select_expand_clause(1);
  test_select_expand_clause(0);

  printf("Hello world \n");
  return 0;
}

#endif // select_expand_clause_MAIN
#endif // select_expand_clause_TEST
