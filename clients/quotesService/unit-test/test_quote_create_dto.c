#ifndef quote_create_dto_TEST
#define quote_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_create_dto.h"
quote_create_dto_t* instantiate_quote_create_dto(int include_optional);



quote_create_dto_t* instantiate_quote_create_dto(int include_optional) {
  quote_create_dto_t* quote_create_dto = NULL;
  if (include_optional) {
    quote_create_dto = quote_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_Automatic,
      quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      quotesservice_quote_create_dto_QUOTESTATUS_Draft,
      list_createList()
    );
  } else {
    quote_create_dto = quote_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_Automatic,
      quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      quotesservice_quote_create_dto_QUOTESTATUS_Draft,
      list_createList()
    );
  }

  return quote_create_dto;
}


#ifdef quote_create_dto_MAIN

void test_quote_create_dto(int include_optional) {
    quote_create_dto_t* quote_create_dto_1 = instantiate_quote_create_dto(include_optional);

	cJSON* jsonquote_create_dto_1 = quote_create_dto_convertToJSON(quote_create_dto_1);
	printf("quote_create_dto :\n%s\n", cJSON_Print(jsonquote_create_dto_1));
	quote_create_dto_t* quote_create_dto_2 = quote_create_dto_parseFromJSON(jsonquote_create_dto_1);
	cJSON* jsonquote_create_dto_2 = quote_create_dto_convertToJSON(quote_create_dto_2);
	printf("repeating quote_create_dto:\n%s\n", cJSON_Print(jsonquote_create_dto_2));
}

int main() {
  test_quote_create_dto(1);
  test_quote_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_create_dto_MAIN
#endif // quote_create_dto_TEST
