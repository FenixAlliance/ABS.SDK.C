#ifndef execute_signing_request_dto_TEST
#define execute_signing_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execute_signing_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execute_signing_request_dto.h"
execute_signing_request_dto_t* instantiate_execute_signing_request_dto(int include_optional);



execute_signing_request_dto_t* instantiate_execute_signing_request_dto(int include_optional) {
  execute_signing_request_dto_t* execute_signing_request_dto = NULL;
  if (include_optional) {
    execute_signing_request_dto = execute_signing_request_dto_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    execute_signing_request_dto = execute_signing_request_dto_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return execute_signing_request_dto;
}


#ifdef execute_signing_request_dto_MAIN

void test_execute_signing_request_dto(int include_optional) {
    execute_signing_request_dto_t* execute_signing_request_dto_1 = instantiate_execute_signing_request_dto(include_optional);

	cJSON* jsonexecute_signing_request_dto_1 = execute_signing_request_dto_convertToJSON(execute_signing_request_dto_1);
	printf("execute_signing_request_dto :\n%s\n", cJSON_Print(jsonexecute_signing_request_dto_1));
	execute_signing_request_dto_t* execute_signing_request_dto_2 = execute_signing_request_dto_parseFromJSON(jsonexecute_signing_request_dto_1);
	cJSON* jsonexecute_signing_request_dto_2 = execute_signing_request_dto_convertToJSON(execute_signing_request_dto_2);
	printf("repeating execute_signing_request_dto:\n%s\n", cJSON_Print(jsonexecute_signing_request_dto_2));
}

int main() {
  test_execute_signing_request_dto(1);
  test_execute_signing_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // execute_signing_request_dto_MAIN
#endif // execute_signing_request_dto_TEST
