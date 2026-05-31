#ifndef money_envelope_TEST
#define money_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define money_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/money_envelope.h"
money_envelope_t* instantiate_money_envelope(int include_optional);

#include "test_money.c"


money_envelope_t* instantiate_money_envelope(int include_optional) {
  money_envelope_t* money_envelope = NULL;
  if (include_optional) {
    money_envelope = money_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_money(0)
    );
  } else {
    money_envelope = money_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return money_envelope;
}


#ifdef money_envelope_MAIN

void test_money_envelope(int include_optional) {
    money_envelope_t* money_envelope_1 = instantiate_money_envelope(include_optional);

	cJSON* jsonmoney_envelope_1 = money_envelope_convertToJSON(money_envelope_1);
	printf("money_envelope :\n%s\n", cJSON_Print(jsonmoney_envelope_1));
	money_envelope_t* money_envelope_2 = money_envelope_parseFromJSON(jsonmoney_envelope_1);
	cJSON* jsonmoney_envelope_2 = money_envelope_convertToJSON(money_envelope_2);
	printf("repeating money_envelope:\n%s\n", cJSON_Print(jsonmoney_envelope_2));
}

int main() {
  test_money_envelope(1);
  test_money_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // money_envelope_MAIN
#endif // money_envelope_TEST
