#ifndef create_signing_request_dto_TEST
#define create_signing_request_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_signing_request_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_signing_request_dto.h"
create_signing_request_dto_t* instantiate_create_signing_request_dto(int include_optional);



create_signing_request_dto_t* instantiate_create_signing_request_dto(int include_optional) {
  create_signing_request_dto_t* create_signing_request_dto = NULL;
  if (include_optional) {
    create_signing_request_dto = create_signing_request_dto_create(
      trustservice_create_signing_request_dto_ROUTINGMODE_Parallel,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    create_signing_request_dto = create_signing_request_dto_create(
      trustservice_create_signing_request_dto_ROUTINGMODE_Parallel,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return create_signing_request_dto;
}


#ifdef create_signing_request_dto_MAIN

void test_create_signing_request_dto(int include_optional) {
    create_signing_request_dto_t* create_signing_request_dto_1 = instantiate_create_signing_request_dto(include_optional);

	cJSON* jsoncreate_signing_request_dto_1 = create_signing_request_dto_convertToJSON(create_signing_request_dto_1);
	printf("create_signing_request_dto :\n%s\n", cJSON_Print(jsoncreate_signing_request_dto_1));
	create_signing_request_dto_t* create_signing_request_dto_2 = create_signing_request_dto_parseFromJSON(jsoncreate_signing_request_dto_1);
	cJSON* jsoncreate_signing_request_dto_2 = create_signing_request_dto_convertToJSON(create_signing_request_dto_2);
	printf("repeating create_signing_request_dto:\n%s\n", cJSON_Print(jsoncreate_signing_request_dto_2));
}

int main() {
  test_create_signing_request_dto(1);
  test_create_signing_request_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_signing_request_dto_MAIN
#endif // create_signing_request_dto_TEST
