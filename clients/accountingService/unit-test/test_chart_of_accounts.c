#ifndef chart_of_accounts_TEST
#define chart_of_accounts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define chart_of_accounts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/chart_of_accounts.h"
chart_of_accounts_t* instantiate_chart_of_accounts(int include_optional);



chart_of_accounts_t* instantiate_chart_of_accounts(int include_optional) {
  chart_of_accounts_t* chart_of_accounts = NULL;
  if (include_optional) {
    chart_of_accounts = chart_of_accounts_create(
      "0",
      1,
      "0",
      list_createList()
    );
  } else {
    chart_of_accounts = chart_of_accounts_create(
      "0",
      1,
      "0",
      list_createList()
    );
  }

  return chart_of_accounts;
}


#ifdef chart_of_accounts_MAIN

void test_chart_of_accounts(int include_optional) {
    chart_of_accounts_t* chart_of_accounts_1 = instantiate_chart_of_accounts(include_optional);

	cJSON* jsonchart_of_accounts_1 = chart_of_accounts_convertToJSON(chart_of_accounts_1);
	printf("chart_of_accounts :\n%s\n", cJSON_Print(jsonchart_of_accounts_1));
	chart_of_accounts_t* chart_of_accounts_2 = chart_of_accounts_parseFromJSON(jsonchart_of_accounts_1);
	cJSON* jsonchart_of_accounts_2 = chart_of_accounts_convertToJSON(chart_of_accounts_2);
	printf("repeating chart_of_accounts:\n%s\n", cJSON_Print(jsonchart_of_accounts_2));
}

int main() {
  test_chart_of_accounts(1);
  test_chart_of_accounts(0);

  printf("Hello world \n");
  return 0;
}

#endif // chart_of_accounts_MAIN
#endif // chart_of_accounts_TEST
