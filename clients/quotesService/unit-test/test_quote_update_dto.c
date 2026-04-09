#ifndef quote_update_dto_TEST
#define quote_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_update_dto.h"
quote_update_dto_t* instantiate_quote_update_dto(int include_optional);



quote_update_dto_t* instantiate_quote_update_dto(int include_optional) {
  quote_update_dto_t* quote_update_dto = NULL;
  if (include_optional) {
    quote_update_dto = quote_update_dto_create(
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
      quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_Automatic,
      quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      quotesservice_quote_update_dto_QUOTESTATUS_Draft,
      quotesservice_quote_update_dto_FREIGHTTERMS_FOB,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    quote_update_dto = quote_update_dto_create(
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
      quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_Automatic,
      quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_Included,
      "0",
      quotesservice_quote_update_dto_QUOTESTATUS_Draft,
      quotesservice_quote_update_dto_FREIGHTTERMS_FOB,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return quote_update_dto;
}


#ifdef quote_update_dto_MAIN

void test_quote_update_dto(int include_optional) {
    quote_update_dto_t* quote_update_dto_1 = instantiate_quote_update_dto(include_optional);

	cJSON* jsonquote_update_dto_1 = quote_update_dto_convertToJSON(quote_update_dto_1);
	printf("quote_update_dto :\n%s\n", cJSON_Print(jsonquote_update_dto_1));
	quote_update_dto_t* quote_update_dto_2 = quote_update_dto_parseFromJSON(jsonquote_update_dto_1);
	cJSON* jsonquote_update_dto_2 = quote_update_dto_convertToJSON(quote_update_dto_2);
	printf("repeating quote_update_dto:\n%s\n", cJSON_Print(jsonquote_update_dto_2));
}

int main() {
  test_quote_update_dto(1);
  test_quote_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_update_dto_MAIN
#endif // quote_update_dto_TEST
