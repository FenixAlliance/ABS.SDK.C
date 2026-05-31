#ifndef i_edm_entity_container_element_TEST
#define i_edm_entity_container_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_entity_container_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_entity_container_element.h"
i_edm_entity_container_element_t* instantiate_i_edm_entity_container_element(int include_optional);

#include "test_i_edm_entity_container.c"


i_edm_entity_container_element_t* instantiate_i_edm_entity_container_element(int include_optional) {
  i_edm_entity_container_element_t* i_edm_entity_container_element = NULL;
  if (include_optional) {
    i_edm_entity_container_element = i_edm_entity_container_element_create(
      "0",
      contentservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_None,
       // false, not to have infinite recursion
      instantiate_i_edm_entity_container(0)
    );
  } else {
    i_edm_entity_container_element = i_edm_entity_container_element_create(
      "0",
      contentservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_None,
      NULL
    );
  }

  return i_edm_entity_container_element;
}


#ifdef i_edm_entity_container_element_MAIN

void test_i_edm_entity_container_element(int include_optional) {
    i_edm_entity_container_element_t* i_edm_entity_container_element_1 = instantiate_i_edm_entity_container_element(include_optional);

	cJSON* jsoni_edm_entity_container_element_1 = i_edm_entity_container_element_convertToJSON(i_edm_entity_container_element_1);
	printf("i_edm_entity_container_element :\n%s\n", cJSON_Print(jsoni_edm_entity_container_element_1));
	i_edm_entity_container_element_t* i_edm_entity_container_element_2 = i_edm_entity_container_element_parseFromJSON(jsoni_edm_entity_container_element_1);
	cJSON* jsoni_edm_entity_container_element_2 = i_edm_entity_container_element_convertToJSON(i_edm_entity_container_element_2);
	printf("repeating i_edm_entity_container_element:\n%s\n", cJSON_Print(jsoni_edm_entity_container_element_2));
}

int main() {
  test_i_edm_entity_container_element(1);
  test_i_edm_entity_container_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_entity_container_element_MAIN
#endif // i_edm_entity_container_element_TEST
