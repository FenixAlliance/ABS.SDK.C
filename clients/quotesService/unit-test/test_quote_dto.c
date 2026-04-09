#ifndef quote_dto_TEST
#define quote_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_dto.h"
quote_dto_t* instantiate_quote_dto(int include_optional);



quote_dto_t* instantiate_quote_dto(int include_optional) {
  quote_dto_t* quote_dto = NULL;
  if (include_optional) {
    quote_dto = quote_dto_create(
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
      "0",
      "0",
      "0",
      "0",
      "0",
      quotesservice_quote_dto_TAXCALCULATIONMETHOD_Included,
      quotesservice_quote_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      quotesservice_quote_dto_QUOTESTATUS_Draft,
      quotesservice_quote_dto_FREIGHTTERMS_FOB,
      1.337
    );
  } else {
    quote_dto = quote_dto_create(
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
      "0",
      "0",
      "0",
      "0",
      "0",
      quotesservice_quote_dto_TAXCALCULATIONMETHOD_Included,
      quotesservice_quote_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      quotesservice_quote_dto_QUOTESTATUS_Draft,
      quotesservice_quote_dto_FREIGHTTERMS_FOB,
      1.337
    );
  }

  return quote_dto;
}


#ifdef quote_dto_MAIN

void test_quote_dto(int include_optional) {
    quote_dto_t* quote_dto_1 = instantiate_quote_dto(include_optional);

	cJSON* jsonquote_dto_1 = quote_dto_convertToJSON(quote_dto_1);
	printf("quote_dto :\n%s\n", cJSON_Print(jsonquote_dto_1));
	quote_dto_t* quote_dto_2 = quote_dto_parseFromJSON(jsonquote_dto_1);
	cJSON* jsonquote_dto_2 = quote_dto_convertToJSON(quote_dto_2);
	printf("repeating quote_dto:\n%s\n", cJSON_Print(jsonquote_dto_2));
}

int main() {
  test_quote_dto(1);
  test_quote_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_dto_MAIN
#endif // quote_dto_TEST
