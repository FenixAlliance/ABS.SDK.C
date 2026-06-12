#ifndef o_data_query_context_TEST
#define o_data_query_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define o_data_query_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/o_data_query_context.h"
o_data_query_context_t* instantiate_o_data_query_context(int include_optional);

#include "test_default_query_configurations.c"
#include "test_i_edm_model.c"
#include "test_i_edm_type.c"
#include "test_i_edm_navigation_source.c"
#include "test_type.c"


o_data_query_context_t* instantiate_o_data_query_context(int include_optional) {
  o_data_query_context_t* o_data_query_context = NULL;
  if (include_optional) {
    o_data_query_context = o_data_query_context_create(
       // false, not to have infinite recursion
      instantiate_default_query_configurations(0),
       // false, not to have infinite recursion
      instantiate_i_edm_model(0),
       // false, not to have infinite recursion
      instantiate_i_edm_type(0),
       // false, not to have infinite recursion
      instantiate_i_edm_navigation_source(0),
       // false, not to have infinite recursion
      instantiate_type(0),
      list_createList(),
      0
    );
  } else {
    o_data_query_context = o_data_query_context_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      0
    );
  }

  return o_data_query_context;
}


#ifdef o_data_query_context_MAIN

void test_o_data_query_context(int include_optional) {
    o_data_query_context_t* o_data_query_context_1 = instantiate_o_data_query_context(include_optional);

	cJSON* jsono_data_query_context_1 = o_data_query_context_convertToJSON(o_data_query_context_1);
	printf("o_data_query_context :\n%s\n", cJSON_Print(jsono_data_query_context_1));
	o_data_query_context_t* o_data_query_context_2 = o_data_query_context_parseFromJSON(jsono_data_query_context_1);
	cJSON* jsono_data_query_context_2 = o_data_query_context_convertToJSON(o_data_query_context_2);
	printf("repeating o_data_query_context:\n%s\n", cJSON_Print(jsono_data_query_context_2));
}

int main() {
  test_o_data_query_context(1);
  test_o_data_query_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // o_data_query_context_MAIN
#endif // o_data_query_context_TEST
