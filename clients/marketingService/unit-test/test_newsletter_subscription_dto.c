#ifndef newsletter_subscription_dto_TEST
#define newsletter_subscription_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_subscription_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_subscription_dto.h"
newsletter_subscription_dto_t* instantiate_newsletter_subscription_dto(int include_optional);



newsletter_subscription_dto_t* instantiate_newsletter_subscription_dto(int include_optional) {
  newsletter_subscription_dto_t* newsletter_subscription_dto = NULL;
  if (include_optional) {
    newsletter_subscription_dto = newsletter_subscription_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    newsletter_subscription_dto = newsletter_subscription_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return newsletter_subscription_dto;
}


#ifdef newsletter_subscription_dto_MAIN

void test_newsletter_subscription_dto(int include_optional) {
    newsletter_subscription_dto_t* newsletter_subscription_dto_1 = instantiate_newsletter_subscription_dto(include_optional);

	cJSON* jsonnewsletter_subscription_dto_1 = newsletter_subscription_dto_convertToJSON(newsletter_subscription_dto_1);
	printf("newsletter_subscription_dto :\n%s\n", cJSON_Print(jsonnewsletter_subscription_dto_1));
	newsletter_subscription_dto_t* newsletter_subscription_dto_2 = newsletter_subscription_dto_parseFromJSON(jsonnewsletter_subscription_dto_1);
	cJSON* jsonnewsletter_subscription_dto_2 = newsletter_subscription_dto_convertToJSON(newsletter_subscription_dto_2);
	printf("repeating newsletter_subscription_dto:\n%s\n", cJSON_Print(jsonnewsletter_subscription_dto_2));
}

int main() {
  test_newsletter_subscription_dto(1);
  test_newsletter_subscription_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_subscription_dto_MAIN
#endif // newsletter_subscription_dto_TEST
