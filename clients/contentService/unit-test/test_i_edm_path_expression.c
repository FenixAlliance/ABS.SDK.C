#ifndef i_edm_path_expression_TEST
#define i_edm_path_expression_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_edm_path_expression_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_edm_path_expression.h"
i_edm_path_expression_t* instantiate_i_edm_path_expression(int include_optional);



i_edm_path_expression_t* instantiate_i_edm_path_expression(int include_optional) {
  i_edm_path_expression_t* i_edm_path_expression = NULL;
  if (include_optional) {
    i_edm_path_expression = i_edm_path_expression_create(
      contentservice_i_edm_path_expression_EXPRESSIONKIND_None,
      list_createList(),
      "0"
    );
  } else {
    i_edm_path_expression = i_edm_path_expression_create(
      contentservice_i_edm_path_expression_EXPRESSIONKIND_None,
      list_createList(),
      "0"
    );
  }

  return i_edm_path_expression;
}


#ifdef i_edm_path_expression_MAIN

void test_i_edm_path_expression(int include_optional) {
    i_edm_path_expression_t* i_edm_path_expression_1 = instantiate_i_edm_path_expression(include_optional);

	cJSON* jsoni_edm_path_expression_1 = i_edm_path_expression_convertToJSON(i_edm_path_expression_1);
	printf("i_edm_path_expression :\n%s\n", cJSON_Print(jsoni_edm_path_expression_1));
	i_edm_path_expression_t* i_edm_path_expression_2 = i_edm_path_expression_parseFromJSON(jsoni_edm_path_expression_1);
	cJSON* jsoni_edm_path_expression_2 = i_edm_path_expression_convertToJSON(i_edm_path_expression_2);
	printf("repeating i_edm_path_expression:\n%s\n", cJSON_Print(jsoni_edm_path_expression_2));
}

int main() {
  test_i_edm_path_expression(1);
  test_i_edm_path_expression(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_edm_path_expression_MAIN
#endif // i_edm_path_expression_TEST
