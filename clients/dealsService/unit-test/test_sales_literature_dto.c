#ifndef sales_literature_dto_TEST
#define sales_literature_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sales_literature_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sales_literature_dto.h"
sales_literature_dto_t* instantiate_sales_literature_dto(int include_optional);



sales_literature_dto_t* instantiate_sales_literature_dto(int include_optional) {
  sales_literature_dto_t* sales_literature_dto = NULL;
  if (include_optional) {
    sales_literature_dto = sales_literature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    sales_literature_dto = sales_literature_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return sales_literature_dto;
}


#ifdef sales_literature_dto_MAIN

void test_sales_literature_dto(int include_optional) {
    sales_literature_dto_t* sales_literature_dto_1 = instantiate_sales_literature_dto(include_optional);

	cJSON* jsonsales_literature_dto_1 = sales_literature_dto_convertToJSON(sales_literature_dto_1);
	printf("sales_literature_dto :\n%s\n", cJSON_Print(jsonsales_literature_dto_1));
	sales_literature_dto_t* sales_literature_dto_2 = sales_literature_dto_parseFromJSON(jsonsales_literature_dto_1);
	cJSON* jsonsales_literature_dto_2 = sales_literature_dto_convertToJSON(sales_literature_dto_2);
	printf("repeating sales_literature_dto:\n%s\n", cJSON_Print(jsonsales_literature_dto_2));
}

int main() {
  test_sales_literature_dto(1);
  test_sales_literature_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // sales_literature_dto_MAIN
#endif // sales_literature_dto_TEST
