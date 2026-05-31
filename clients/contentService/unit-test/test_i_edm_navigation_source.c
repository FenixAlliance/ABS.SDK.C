#ifndef i_edm_navigation_source_TEST
#define i_edm_navigation_source_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_navigation_source_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_navigation_source.h"
i_edm_navigation_source_t* instantiate_i_edm_navigation_source(int include_optional);

#include "test_i_edm_path_expression.c"
#include "test_i_edm_type.c"
#include "test_i_edm_entity_type.c"


i_edm_navigation_source_t* instantiate_i_edm_navigation_source(int include_optional) {
  i_edm_navigation_source_t* i_edm_navigation_source = NULL;
  if (include_optional) {
    i_edm_navigation_source = i_edm_navigation_source_create(
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_i_edm_path_expression(0),
       // false, not to have infinite recursion
      instantiate_i_edm_type(0),
       // false, not to have infinite recursion
      instantiate_i_edm_entity_type(0)
    );
  } else {
    i_edm_navigation_source = i_edm_navigation_source_create(
      "0",
      list_createList(),
      NULL,
      NULL,
      NULL
    );
  }

  return i_edm_navigation_source;
}


#ifdef i_edm_navigation_source_MAIN

void test_i_edm_navigation_source(int include_optional) {
    i_edm_navigation_source_t* i_edm_navigation_source_1 = instantiate_i_edm_navigation_source(include_optional);

	cJSON* jsoni_edm_navigation_source_1 = i_edm_navigation_source_convertToJSON(i_edm_navigation_source_1);
	printf("i_edm_navigation_source :\n%s\n", cJSON_Print(jsoni_edm_navigation_source_1));
	i_edm_navigation_source_t* i_edm_navigation_source_2 = i_edm_navigation_source_parseFromJSON(jsoni_edm_navigation_source_1);
	cJSON* jsoni_edm_navigation_source_2 = i_edm_navigation_source_convertToJSON(i_edm_navigation_source_2);
	printf("repeating i_edm_navigation_source:\n%s\n", cJSON_Print(jsoni_edm_navigation_source_2));
}

int main() {
  test_i_edm_navigation_source(1);
  test_i_edm_navigation_source(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_navigation_source_MAIN
#endif // i_edm_navigation_source_TEST
