#ifndef i_edm_type_TEST
#define i_edm_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_type.h"
i_edm_type_t* instantiate_i_edm_type(int include_optional);



i_edm_type_t* instantiate_i_edm_type(int include_optional) {
  i_edm_type_t* i_edm_type = NULL;
  if (include_optional) {
    i_edm_type = i_edm_type_create(
      blockchainsservice_i_edm_type_TYPEKIND_None
    );
  } else {
    i_edm_type = i_edm_type_create(
      blockchainsservice_i_edm_type_TYPEKIND_None
    );
  }

  return i_edm_type;
}


#ifdef i_edm_type_MAIN

void test_i_edm_type(int include_optional) {
    i_edm_type_t* i_edm_type_1 = instantiate_i_edm_type(include_optional);

	cJSON* jsoni_edm_type_1 = i_edm_type_convertToJSON(i_edm_type_1);
	printf("i_edm_type :\n%s\n", cJSON_Print(jsoni_edm_type_1));
	i_edm_type_t* i_edm_type_2 = i_edm_type_parseFromJSON(jsoni_edm_type_1);
	cJSON* jsoni_edm_type_2 = i_edm_type_convertToJSON(i_edm_type_2);
	printf("repeating i_edm_type:\n%s\n", cJSON_Print(jsoni_edm_type_2));
}

int main() {
  test_i_edm_type(1);
  test_i_edm_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_type_MAIN
#endif // i_edm_type_TEST
