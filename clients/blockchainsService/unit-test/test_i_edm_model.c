#ifndef i_edm_model_TEST
#define i_edm_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_model.h"
i_edm_model_t* instantiate_i_edm_model(int include_optional);

#include "test_i_edm_entity_container.c"


i_edm_model_t* instantiate_i_edm_model(int include_optional) {
  i_edm_model_t* i_edm_model = NULL;
  if (include_optional) {
    i_edm_model = i_edm_model_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
       // false, not to have infinite recursion
      instantiate_i_edm_entity_container(0)
    );
  } else {
    i_edm_model = i_edm_model_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      NULL
    );
  }

  return i_edm_model;
}


#ifdef i_edm_model_MAIN

void test_i_edm_model(int include_optional) {
    i_edm_model_t* i_edm_model_1 = instantiate_i_edm_model(include_optional);

	cJSON* jsoni_edm_model_1 = i_edm_model_convertToJSON(i_edm_model_1);
	printf("i_edm_model :\n%s\n", cJSON_Print(jsoni_edm_model_1));
	i_edm_model_t* i_edm_model_2 = i_edm_model_parseFromJSON(jsoni_edm_model_1);
	cJSON* jsoni_edm_model_2 = i_edm_model_convertToJSON(i_edm_model_2);
	printf("repeating i_edm_model:\n%s\n", cJSON_Print(jsoni_edm_model_2));
}

int main() {
  test_i_edm_model(1);
  test_i_edm_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_model_MAIN
#endif // i_edm_model_TEST
