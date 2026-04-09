#ifndef fiscal_responsibility_record_create_dto_TEST
#define fiscal_responsibility_record_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fiscal_responsibility_record_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fiscal_responsibility_record_create_dto.h"
fiscal_responsibility_record_create_dto_t* instantiate_fiscal_responsibility_record_create_dto(int include_optional);



fiscal_responsibility_record_create_dto_t* instantiate_fiscal_responsibility_record_create_dto(int include_optional) {
  fiscal_responsibility_record_create_dto_t* fiscal_responsibility_record_create_dto = NULL;
  if (include_optional) {
    fiscal_responsibility_record_create_dto = fiscal_responsibility_record_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    fiscal_responsibility_record_create_dto = fiscal_responsibility_record_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return fiscal_responsibility_record_create_dto;
}


#ifdef fiscal_responsibility_record_create_dto_MAIN

void test_fiscal_responsibility_record_create_dto(int include_optional) {
    fiscal_responsibility_record_create_dto_t* fiscal_responsibility_record_create_dto_1 = instantiate_fiscal_responsibility_record_create_dto(include_optional);

	cJSON* jsonfiscal_responsibility_record_create_dto_1 = fiscal_responsibility_record_create_dto_convertToJSON(fiscal_responsibility_record_create_dto_1);
	printf("fiscal_responsibility_record_create_dto :\n%s\n", cJSON_Print(jsonfiscal_responsibility_record_create_dto_1));
	fiscal_responsibility_record_create_dto_t* fiscal_responsibility_record_create_dto_2 = fiscal_responsibility_record_create_dto_parseFromJSON(jsonfiscal_responsibility_record_create_dto_1);
	cJSON* jsonfiscal_responsibility_record_create_dto_2 = fiscal_responsibility_record_create_dto_convertToJSON(fiscal_responsibility_record_create_dto_2);
	printf("repeating fiscal_responsibility_record_create_dto:\n%s\n", cJSON_Print(jsonfiscal_responsibility_record_create_dto_2));
}

int main() {
  test_fiscal_responsibility_record_create_dto(1);
  test_fiscal_responsibility_record_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // fiscal_responsibility_record_create_dto_MAIN
#endif // fiscal_responsibility_record_create_dto_TEST
