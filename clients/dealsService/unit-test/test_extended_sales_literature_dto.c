#ifndef extended_sales_literature_dto_TEST
#define extended_sales_literature_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_sales_literature_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_sales_literature_dto.h"
extended_sales_literature_dto_t* instantiate_extended_sales_literature_dto(int include_optional);

#include "test_sales_literature_type_dto.c"
#include "test_tenant_dto.c"


extended_sales_literature_dto_t* instantiate_extended_sales_literature_dto(int include_optional) {
  extended_sales_literature_dto_t* extended_sales_literature_dto = NULL;
  if (include_optional) {
    extended_sales_literature_dto = extended_sales_literature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_sales_literature_type_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_dto(0)
    );
  } else {
    extended_sales_literature_dto = extended_sales_literature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return extended_sales_literature_dto;
}


#ifdef extended_sales_literature_dto_MAIN

void test_extended_sales_literature_dto(int include_optional) {
    extended_sales_literature_dto_t* extended_sales_literature_dto_1 = instantiate_extended_sales_literature_dto(include_optional);

	cJSON* jsonextended_sales_literature_dto_1 = extended_sales_literature_dto_convertToJSON(extended_sales_literature_dto_1);
	printf("extended_sales_literature_dto :\n%s\n", cJSON_Print(jsonextended_sales_literature_dto_1));
	extended_sales_literature_dto_t* extended_sales_literature_dto_2 = extended_sales_literature_dto_parseFromJSON(jsonextended_sales_literature_dto_1);
	cJSON* jsonextended_sales_literature_dto_2 = extended_sales_literature_dto_convertToJSON(extended_sales_literature_dto_2);
	printf("repeating extended_sales_literature_dto:\n%s\n", cJSON_Print(jsonextended_sales_literature_dto_2));
}

int main() {
  test_extended_sales_literature_dto(1);
  test_extended_sales_literature_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_sales_literature_dto_MAIN
#endif // extended_sales_literature_dto_TEST
