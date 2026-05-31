#ifndef loyalty_program_create_dto_TEST
#define loyalty_program_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loyalty_program_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loyalty_program_create_dto.h"
loyalty_program_create_dto_t* instantiate_loyalty_program_create_dto(int include_optional);



loyalty_program_create_dto_t* instantiate_loyalty_program_create_dto(int include_optional) {
  loyalty_program_create_dto_t* loyalty_program_create_dto = NULL;
  if (include_optional) {
    loyalty_program_create_dto = loyalty_program_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    loyalty_program_create_dto = loyalty_program_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return loyalty_program_create_dto;
}


#ifdef loyalty_program_create_dto_MAIN

void test_loyalty_program_create_dto(int include_optional) {
    loyalty_program_create_dto_t* loyalty_program_create_dto_1 = instantiate_loyalty_program_create_dto(include_optional);

	cJSON* jsonloyalty_program_create_dto_1 = loyalty_program_create_dto_convertToJSON(loyalty_program_create_dto_1);
	printf("loyalty_program_create_dto :\n%s\n", cJSON_Print(jsonloyalty_program_create_dto_1));
	loyalty_program_create_dto_t* loyalty_program_create_dto_2 = loyalty_program_create_dto_parseFromJSON(jsonloyalty_program_create_dto_1);
	cJSON* jsonloyalty_program_create_dto_2 = loyalty_program_create_dto_convertToJSON(loyalty_program_create_dto_2);
	printf("repeating loyalty_program_create_dto:\n%s\n", cJSON_Print(jsonloyalty_program_create_dto_2));
}

int main() {
  test_loyalty_program_create_dto(1);
  test_loyalty_program_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // loyalty_program_create_dto_MAIN
#endif // loyalty_program_create_dto_TEST
