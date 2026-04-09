#ifndef private_message_update_dto_TEST
#define private_message_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define private_message_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/private_message_update_dto.h"
private_message_update_dto_t* instantiate_private_message_update_dto(int include_optional);



private_message_update_dto_t* instantiate_private_message_update_dto(int include_optional) {
  private_message_update_dto_t* private_message_update_dto = NULL;
  if (include_optional) {
    private_message_update_dto = private_message_update_dto_create(
      "0",
      "0"
    );
  } else {
    private_message_update_dto = private_message_update_dto_create(
      "0",
      "0"
    );
  }

  return private_message_update_dto;
}


#ifdef private_message_update_dto_MAIN

void test_private_message_update_dto(int include_optional) {
    private_message_update_dto_t* private_message_update_dto_1 = instantiate_private_message_update_dto(include_optional);

	cJSON* jsonprivate_message_update_dto_1 = private_message_update_dto_convertToJSON(private_message_update_dto_1);
	printf("private_message_update_dto :\n%s\n", cJSON_Print(jsonprivate_message_update_dto_1));
	private_message_update_dto_t* private_message_update_dto_2 = private_message_update_dto_parseFromJSON(jsonprivate_message_update_dto_1);
	cJSON* jsonprivate_message_update_dto_2 = private_message_update_dto_convertToJSON(private_message_update_dto_2);
	printf("repeating private_message_update_dto:\n%s\n", cJSON_Print(jsonprivate_message_update_dto_2));
}

int main() {
  test_private_message_update_dto(1);
  test_private_message_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // private_message_update_dto_MAIN
#endif // private_message_update_dto_TEST
