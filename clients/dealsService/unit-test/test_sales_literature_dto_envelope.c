#ifndef sales_literature_dto_envelope_TEST
#define sales_literature_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sales_literature_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sales_literature_dto_envelope.h"
sales_literature_dto_envelope_t* instantiate_sales_literature_dto_envelope(int include_optional);

#include "test_sales_literature_dto.c"


sales_literature_dto_envelope_t* instantiate_sales_literature_dto_envelope(int include_optional) {
  sales_literature_dto_envelope_t* sales_literature_dto_envelope = NULL;
  if (include_optional) {
    sales_literature_dto_envelope = sales_literature_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_sales_literature_dto(0)
    );
  } else {
    sales_literature_dto_envelope = sales_literature_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return sales_literature_dto_envelope;
}


#ifdef sales_literature_dto_envelope_MAIN

void test_sales_literature_dto_envelope(int include_optional) {
    sales_literature_dto_envelope_t* sales_literature_dto_envelope_1 = instantiate_sales_literature_dto_envelope(include_optional);

	cJSON* jsonsales_literature_dto_envelope_1 = sales_literature_dto_envelope_convertToJSON(sales_literature_dto_envelope_1);
	printf("sales_literature_dto_envelope :\n%s\n", cJSON_Print(jsonsales_literature_dto_envelope_1));
	sales_literature_dto_envelope_t* sales_literature_dto_envelope_2 = sales_literature_dto_envelope_parseFromJSON(jsonsales_literature_dto_envelope_1);
	cJSON* jsonsales_literature_dto_envelope_2 = sales_literature_dto_envelope_convertToJSON(sales_literature_dto_envelope_2);
	printf("repeating sales_literature_dto_envelope:\n%s\n", cJSON_Print(jsonsales_literature_dto_envelope_2));
}

int main() {
  test_sales_literature_dto_envelope(1);
  test_sales_literature_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // sales_literature_dto_envelope_MAIN
#endif // sales_literature_dto_envelope_TEST
