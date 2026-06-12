#ifndef i_edm_expression_TEST
#define i_edm_expression_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_expression_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_expression.h"
i_edm_expression_t* instantiate_i_edm_expression(int include_optional);



i_edm_expression_t* instantiate_i_edm_expression(int include_optional) {
  i_edm_expression_t* i_edm_expression = NULL;
  if (include_optional) {
    i_edm_expression = i_edm_expression_create(
      blockchainsservice_i_edm_expression_EXPRESSIONKIND_None
    );
  } else {
    i_edm_expression = i_edm_expression_create(
      blockchainsservice_i_edm_expression_EXPRESSIONKIND_None
    );
  }

  return i_edm_expression;
}


#ifdef i_edm_expression_MAIN

void test_i_edm_expression(int include_optional) {
    i_edm_expression_t* i_edm_expression_1 = instantiate_i_edm_expression(include_optional);

	cJSON* jsoni_edm_expression_1 = i_edm_expression_convertToJSON(i_edm_expression_1);
	printf("i_edm_expression :\n%s\n", cJSON_Print(jsoni_edm_expression_1));
	i_edm_expression_t* i_edm_expression_2 = i_edm_expression_parseFromJSON(jsoni_edm_expression_1);
	cJSON* jsoni_edm_expression_2 = i_edm_expression_convertToJSON(i_edm_expression_2);
	printf("repeating i_edm_expression:\n%s\n", cJSON_Print(jsoni_edm_expression_2));
}

int main() {
  test_i_edm_expression(1);
  test_i_edm_expression(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_expression_MAIN
#endif // i_edm_expression_TEST
