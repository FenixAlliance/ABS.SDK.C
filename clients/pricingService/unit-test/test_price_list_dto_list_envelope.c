#ifndef price_list_dto_list_envelope_TEST
#define price_list_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define price_list_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/price_list_dto_list_envelope.h"
price_list_dto_list_envelope_t* instantiate_price_list_dto_list_envelope(int include_optional);



price_list_dto_list_envelope_t* instantiate_price_list_dto_list_envelope(int include_optional) {
  price_list_dto_list_envelope_t* price_list_dto_list_envelope = NULL;
  if (include_optional) {
    price_list_dto_list_envelope = price_list_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    price_list_dto_list_envelope = price_list_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return price_list_dto_list_envelope;
}


#ifdef price_list_dto_list_envelope_MAIN

void test_price_list_dto_list_envelope(int include_optional) {
    price_list_dto_list_envelope_t* price_list_dto_list_envelope_1 = instantiate_price_list_dto_list_envelope(include_optional);

	cJSON* jsonprice_list_dto_list_envelope_1 = price_list_dto_list_envelope_convertToJSON(price_list_dto_list_envelope_1);
	printf("price_list_dto_list_envelope :\n%s\n", cJSON_Print(jsonprice_list_dto_list_envelope_1));
	price_list_dto_list_envelope_t* price_list_dto_list_envelope_2 = price_list_dto_list_envelope_parseFromJSON(jsonprice_list_dto_list_envelope_1);
	cJSON* jsonprice_list_dto_list_envelope_2 = price_list_dto_list_envelope_convertToJSON(price_list_dto_list_envelope_2);
	printf("repeating price_list_dto_list_envelope:\n%s\n", cJSON_Print(jsonprice_list_dto_list_envelope_2));
}

int main() {
  test_price_list_dto_list_envelope(1);
  test_price_list_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // price_list_dto_list_envelope_MAIN
#endif // price_list_dto_list_envelope_TEST
