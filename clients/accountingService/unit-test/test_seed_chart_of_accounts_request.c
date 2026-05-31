#ifndef seed_chart_of_accounts_request_TEST
#define seed_chart_of_accounts_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define seed_chart_of_accounts_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/seed_chart_of_accounts_request.h"
seed_chart_of_accounts_request_t* instantiate_seed_chart_of_accounts_request(int include_optional);



seed_chart_of_accounts_request_t* instantiate_seed_chart_of_accounts_request(int include_optional) {
  seed_chart_of_accounts_request_t* seed_chart_of_accounts_request = NULL;
  if (include_optional) {
    seed_chart_of_accounts_request = seed_chart_of_accounts_request_create(
      "0"
    );
  } else {
    seed_chart_of_accounts_request = seed_chart_of_accounts_request_create(
      "0"
    );
  }

  return seed_chart_of_accounts_request;
}


#ifdef seed_chart_of_accounts_request_MAIN

void test_seed_chart_of_accounts_request(int include_optional) {
    seed_chart_of_accounts_request_t* seed_chart_of_accounts_request_1 = instantiate_seed_chart_of_accounts_request(include_optional);

	cJSON* jsonseed_chart_of_accounts_request_1 = seed_chart_of_accounts_request_convertToJSON(seed_chart_of_accounts_request_1);
	printf("seed_chart_of_accounts_request :\n%s\n", cJSON_Print(jsonseed_chart_of_accounts_request_1));
	seed_chart_of_accounts_request_t* seed_chart_of_accounts_request_2 = seed_chart_of_accounts_request_parseFromJSON(jsonseed_chart_of_accounts_request_1);
	cJSON* jsonseed_chart_of_accounts_request_2 = seed_chart_of_accounts_request_convertToJSON(seed_chart_of_accounts_request_2);
	printf("repeating seed_chart_of_accounts_request:\n%s\n", cJSON_Print(jsonseed_chart_of_accounts_request_2));
}

int main() {
  test_seed_chart_of_accounts_request(1);
  test_seed_chart_of_accounts_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // seed_chart_of_accounts_request_MAIN
#endif // seed_chart_of_accounts_request_TEST
