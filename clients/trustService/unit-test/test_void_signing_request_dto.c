#ifndef void_signing_request_dto_TEST
#define void_signing_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define void_signing_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/void_signing_request_dto.h"
void_signing_request_dto_t* instantiate_void_signing_request_dto(int include_optional);



void_signing_request_dto_t* instantiate_void_signing_request_dto(int include_optional) {
  void_signing_request_dto_t* void_signing_request_dto = NULL;
  if (include_optional) {
    void_signing_request_dto = void_signing_request_dto_create(
      "0"
    );
  } else {
    void_signing_request_dto = void_signing_request_dto_create(
      "0"
    );
  }

  return void_signing_request_dto;
}


#ifdef void_signing_request_dto_MAIN

void test_void_signing_request_dto(int include_optional) {
    void_signing_request_dto_t* void_signing_request_dto_1 = instantiate_void_signing_request_dto(include_optional);

	cJSON* jsonvoid_signing_request_dto_1 = void_signing_request_dto_convertToJSON(void_signing_request_dto_1);
	printf("void_signing_request_dto :\n%s\n", cJSON_Print(jsonvoid_signing_request_dto_1));
	void_signing_request_dto_t* void_signing_request_dto_2 = void_signing_request_dto_parseFromJSON(jsonvoid_signing_request_dto_1);
	cJSON* jsonvoid_signing_request_dto_2 = void_signing_request_dto_convertToJSON(void_signing_request_dto_2);
	printf("repeating void_signing_request_dto:\n%s\n", cJSON_Print(jsonvoid_signing_request_dto_2));
}

int main() {
  test_void_signing_request_dto(1);
  test_void_signing_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // void_signing_request_dto_MAIN
#endif // void_signing_request_dto_TEST
