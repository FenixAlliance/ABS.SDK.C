#ifndef operation_TEST
#define operation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define operation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/operation.h"
operation_t* instantiate_operation(int include_optional);



operation_t* instantiate_operation(int include_optional) {
  operation_t* operation = NULL;
  if (include_optional) {
    operation = operation_create(
      crmservice_operation_OPERATIONTYPE_Add,
      "0",
      "0",
      "0",
      null
    );
  } else {
    operation = operation_create(
      crmservice_operation_OPERATIONTYPE_Add,
      "0",
      "0",
      "0",
      null
    );
  }

  return operation;
}


#ifdef operation_MAIN

void test_operation(int include_optional) {
    operation_t* operation_1 = instantiate_operation(include_optional);

	cJSON* jsonoperation_1 = operation_convertToJSON(operation_1);
	printf("operation :\n%s\n", cJSON_Print(jsonoperation_1));
	operation_t* operation_2 = operation_parseFromJSON(jsonoperation_1);
	cJSON* jsonoperation_2 = operation_convertToJSON(operation_2);
	printf("repeating operation:\n%s\n", cJSON_Print(jsonoperation_2));
}

int main() {
  test_operation(1);
  test_operation(0);

  printf("Hello world \n");
  return 0;
}

#endif // operation_MAIN
#endif // operation_TEST
