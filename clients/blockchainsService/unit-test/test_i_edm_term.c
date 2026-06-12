#ifndef i_edm_term_TEST
#define i_edm_term_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_term_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_term.h"
i_edm_term_t* instantiate_i_edm_term(int include_optional);

#include "test_i_edm_type_reference.c"


i_edm_term_t* instantiate_i_edm_term(int include_optional) {
  i_edm_term_t* i_edm_term = NULL;
  if (include_optional) {
    i_edm_term = i_edm_term_create(
      "0",
      blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_None,
      "0",
       // false, not to have infinite recursion
      instantiate_i_edm_type_reference(0),
      "0",
      "0"
    );
  } else {
    i_edm_term = i_edm_term_create(
      "0",
      blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_None,
      "0",
      NULL,
      "0",
      "0"
    );
  }

  return i_edm_term;
}


#ifdef i_edm_term_MAIN

void test_i_edm_term(int include_optional) {
    i_edm_term_t* i_edm_term_1 = instantiate_i_edm_term(include_optional);

	cJSON* jsoni_edm_term_1 = i_edm_term_convertToJSON(i_edm_term_1);
	printf("i_edm_term :\n%s\n", cJSON_Print(jsoni_edm_term_1));
	i_edm_term_t* i_edm_term_2 = i_edm_term_parseFromJSON(jsoni_edm_term_1);
	cJSON* jsoni_edm_term_2 = i_edm_term_convertToJSON(i_edm_term_2);
	printf("repeating i_edm_term:\n%s\n", cJSON_Print(jsoni_edm_term_2));
}

int main() {
  test_i_edm_term(1);
  test_i_edm_term(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_term_MAIN
#endif // i_edm_term_TEST
