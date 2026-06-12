#ifndef i_edm_entity_container_TEST
#define i_edm_entity_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_entity_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_entity_container.h"
i_edm_entity_container_t* instantiate_i_edm_entity_container(int include_optional);



i_edm_entity_container_t* instantiate_i_edm_entity_container(int include_optional) {
  i_edm_entity_container_t* i_edm_entity_container = NULL;
  if (include_optional) {
    i_edm_entity_container = i_edm_entity_container_create(
      "0",
      blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_None,
      "0",
      list_createList()
    );
  } else {
    i_edm_entity_container = i_edm_entity_container_create(
      "0",
      blockchainsservice_i_edm_entity_container_SCHEMAELEMENTKIND_None,
      "0",
      list_createList()
    );
  }

  return i_edm_entity_container;
}


#ifdef i_edm_entity_container_MAIN

void test_i_edm_entity_container(int include_optional) {
    i_edm_entity_container_t* i_edm_entity_container_1 = instantiate_i_edm_entity_container(include_optional);

	cJSON* jsoni_edm_entity_container_1 = i_edm_entity_container_convertToJSON(i_edm_entity_container_1);
	printf("i_edm_entity_container :\n%s\n", cJSON_Print(jsoni_edm_entity_container_1));
	i_edm_entity_container_t* i_edm_entity_container_2 = i_edm_entity_container_parseFromJSON(jsoni_edm_entity_container_1);
	cJSON* jsoni_edm_entity_container_2 = i_edm_entity_container_convertToJSON(i_edm_entity_container_2);
	printf("repeating i_edm_entity_container:\n%s\n", cJSON_Print(jsoni_edm_entity_container_2));
}

int main() {
  test_i_edm_entity_container(1);
  test_i_edm_entity_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_entity_container_MAIN
#endif // i_edm_entity_container_TEST
