#ifndef i_edm_entity_type_TEST
#define i_edm_entity_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_entity_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_entity_type.h"
i_edm_entity_type_t* instantiate_i_edm_entity_type(int include_optional);

#include "test_i_edm_structured_type.c"


i_edm_entity_type_t* instantiate_i_edm_entity_type(int include_optional) {
  i_edm_entity_type_t* i_edm_entity_type = NULL;
  if (include_optional) {
    i_edm_entity_type = i_edm_entity_type_create(
      blockchainsservice_i_edm_entity_type_TYPEKIND_None,
      "0",
      1,
      1,
       // false, not to have infinite recursion
      instantiate_i_edm_structured_type(0),
      list_createList(),
      blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_None,
      "0",
      list_createList(),
      1
    );
  } else {
    i_edm_entity_type = i_edm_entity_type_create(
      blockchainsservice_i_edm_entity_type_TYPEKIND_None,
      "0",
      1,
      1,
      NULL,
      list_createList(),
      blockchainsservice_i_edm_entity_type_SCHEMAELEMENTKIND_None,
      "0",
      list_createList(),
      1
    );
  }

  return i_edm_entity_type;
}


#ifdef i_edm_entity_type_MAIN

void test_i_edm_entity_type(int include_optional) {
    i_edm_entity_type_t* i_edm_entity_type_1 = instantiate_i_edm_entity_type(include_optional);

	cJSON* jsoni_edm_entity_type_1 = i_edm_entity_type_convertToJSON(i_edm_entity_type_1);
	printf("i_edm_entity_type :\n%s\n", cJSON_Print(jsoni_edm_entity_type_1));
	i_edm_entity_type_t* i_edm_entity_type_2 = i_edm_entity_type_parseFromJSON(jsoni_edm_entity_type_1);
	cJSON* jsoni_edm_entity_type_2 = i_edm_entity_type_convertToJSON(i_edm_entity_type_2);
	printf("repeating i_edm_entity_type:\n%s\n", cJSON_Print(jsoni_edm_entity_type_2));
}

int main() {
  test_i_edm_entity_type(1);
  test_i_edm_entity_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_entity_type_MAIN
#endif // i_edm_entity_type_TEST
