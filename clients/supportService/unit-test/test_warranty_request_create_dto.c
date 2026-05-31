#ifndef warranty_request_create_dto_TEST
#define warranty_request_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define warranty_request_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/warranty_request_create_dto.h"
warranty_request_create_dto_t* instantiate_warranty_request_create_dto(int include_optional);



warranty_request_create_dto_t* instantiate_warranty_request_create_dto(int include_optional) {
  warranty_request_create_dto_t* warranty_request_create_dto = NULL;
  if (include_optional) {
    warranty_request_create_dto = warranty_request_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    warranty_request_create_dto = warranty_request_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return warranty_request_create_dto;
}


#ifdef warranty_request_create_dto_MAIN

void test_warranty_request_create_dto(int include_optional) {
    warranty_request_create_dto_t* warranty_request_create_dto_1 = instantiate_warranty_request_create_dto(include_optional);

	cJSON* jsonwarranty_request_create_dto_1 = warranty_request_create_dto_convertToJSON(warranty_request_create_dto_1);
	printf("warranty_request_create_dto :\n%s\n", cJSON_Print(jsonwarranty_request_create_dto_1));
	warranty_request_create_dto_t* warranty_request_create_dto_2 = warranty_request_create_dto_parseFromJSON(jsonwarranty_request_create_dto_1);
	cJSON* jsonwarranty_request_create_dto_2 = warranty_request_create_dto_convertToJSON(warranty_request_create_dto_2);
	printf("repeating warranty_request_create_dto:\n%s\n", cJSON_Print(jsonwarranty_request_create_dto_2));
}

int main() {
  test_warranty_request_create_dto(1);
  test_warranty_request_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // warranty_request_create_dto_MAIN
#endif // warranty_request_create_dto_TEST
