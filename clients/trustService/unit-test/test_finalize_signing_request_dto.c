#ifndef finalize_signing_request_dto_TEST
#define finalize_signing_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define finalize_signing_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/finalize_signing_request_dto.h"
finalize_signing_request_dto_t* instantiate_finalize_signing_request_dto(int include_optional);



finalize_signing_request_dto_t* instantiate_finalize_signing_request_dto(int include_optional) {
  finalize_signing_request_dto_t* finalize_signing_request_dto = NULL;
  if (include_optional) {
    finalize_signing_request_dto = finalize_signing_request_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    finalize_signing_request_dto = finalize_signing_request_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return finalize_signing_request_dto;
}


#ifdef finalize_signing_request_dto_MAIN

void test_finalize_signing_request_dto(int include_optional) {
    finalize_signing_request_dto_t* finalize_signing_request_dto_1 = instantiate_finalize_signing_request_dto(include_optional);

	cJSON* jsonfinalize_signing_request_dto_1 = finalize_signing_request_dto_convertToJSON(finalize_signing_request_dto_1);
	printf("finalize_signing_request_dto :\n%s\n", cJSON_Print(jsonfinalize_signing_request_dto_1));
	finalize_signing_request_dto_t* finalize_signing_request_dto_2 = finalize_signing_request_dto_parseFromJSON(jsonfinalize_signing_request_dto_1);
	cJSON* jsonfinalize_signing_request_dto_2 = finalize_signing_request_dto_convertToJSON(finalize_signing_request_dto_2);
	printf("repeating finalize_signing_request_dto:\n%s\n", cJSON_Print(jsonfinalize_signing_request_dto_2));
}

int main() {
  test_finalize_signing_request_dto(1);
  test_finalize_signing_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // finalize_signing_request_dto_MAIN
#endif // finalize_signing_request_dto_TEST
