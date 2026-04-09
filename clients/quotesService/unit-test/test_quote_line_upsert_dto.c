#ifndef quote_line_upsert_dto_TEST
#define quote_line_upsert_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quote_line_upsert_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quote_line_upsert_dto.h"
quote_line_upsert_dto_t* instantiate_quote_line_upsert_dto(int include_optional);



quote_line_upsert_dto_t* instantiate_quote_line_upsert_dto(int include_optional) {
  quote_line_upsert_dto_t* quote_line_upsert_dto = NULL;
  if (include_optional) {
    quote_line_upsert_dto = quote_line_upsert_dto_create(
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
      1.337,
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
      "0",
      "0",
      "0",
      quotesservice_quote_line_upsert_dto_TAXCALCULATIONMETHOD_Included,
      quotesservice_quote_line_upsert_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
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
      "0"
    );
  } else {
    quote_line_upsert_dto = quote_line_upsert_dto_create(
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
      1.337,
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
      "0",
      "0",
      "0",
      quotesservice_quote_line_upsert_dto_TAXCALCULATIONMETHOD_Included,
      quotesservice_quote_line_upsert_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
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
      "0"
    );
  }

  return quote_line_upsert_dto;
}


#ifdef quote_line_upsert_dto_MAIN

void test_quote_line_upsert_dto(int include_optional) {
    quote_line_upsert_dto_t* quote_line_upsert_dto_1 = instantiate_quote_line_upsert_dto(include_optional);

	cJSON* jsonquote_line_upsert_dto_1 = quote_line_upsert_dto_convertToJSON(quote_line_upsert_dto_1);
	printf("quote_line_upsert_dto :\n%s\n", cJSON_Print(jsonquote_line_upsert_dto_1));
	quote_line_upsert_dto_t* quote_line_upsert_dto_2 = quote_line_upsert_dto_parseFromJSON(jsonquote_line_upsert_dto_1);
	cJSON* jsonquote_line_upsert_dto_2 = quote_line_upsert_dto_convertToJSON(quote_line_upsert_dto_2);
	printf("repeating quote_line_upsert_dto:\n%s\n", cJSON_Print(jsonquote_line_upsert_dto_2));
}

int main() {
  test_quote_line_upsert_dto(1);
  test_quote_line_upsert_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // quote_line_upsert_dto_MAIN
#endif // quote_line_upsert_dto_TEST
