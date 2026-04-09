#ifndef create_ledger_dto_TEST
#define create_ledger_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_ledger_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_ledger_dto.h"
create_ledger_dto_t* instantiate_create_ledger_dto(int include_optional);



create_ledger_dto_t* instantiate_create_ledger_dto(int include_optional) {
  create_ledger_dto_t* create_ledger_dto = NULL;
  if (include_optional) {
    create_ledger_dto = create_ledger_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    create_ledger_dto = create_ledger_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return create_ledger_dto;
}


#ifdef create_ledger_dto_MAIN

void test_create_ledger_dto(int include_optional) {
    create_ledger_dto_t* create_ledger_dto_1 = instantiate_create_ledger_dto(include_optional);

	cJSON* jsoncreate_ledger_dto_1 = create_ledger_dto_convertToJSON(create_ledger_dto_1);
	printf("create_ledger_dto :\n%s\n", cJSON_Print(jsoncreate_ledger_dto_1));
	create_ledger_dto_t* create_ledger_dto_2 = create_ledger_dto_parseFromJSON(jsoncreate_ledger_dto_1);
	cJSON* jsoncreate_ledger_dto_2 = create_ledger_dto_convertToJSON(create_ledger_dto_2);
	printf("repeating create_ledger_dto:\n%s\n", cJSON_Print(jsoncreate_ledger_dto_2));
}

int main() {
  test_create_ledger_dto(1);
  test_create_ledger_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_ledger_dto_MAIN
#endif // create_ledger_dto_TEST
