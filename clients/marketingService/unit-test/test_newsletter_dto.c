#ifndef newsletter_dto_TEST
#define newsletter_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_dto.h"
newsletter_dto_t* instantiate_newsletter_dto(int include_optional);



newsletter_dto_t* instantiate_newsletter_dto(int include_optional) {
  newsletter_dto_t* newsletter_dto = NULL;
  if (include_optional) {
    newsletter_dto = newsletter_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    newsletter_dto = newsletter_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return newsletter_dto;
}


#ifdef newsletter_dto_MAIN

void test_newsletter_dto(int include_optional) {
    newsletter_dto_t* newsletter_dto_1 = instantiate_newsletter_dto(include_optional);

	cJSON* jsonnewsletter_dto_1 = newsletter_dto_convertToJSON(newsletter_dto_1);
	printf("newsletter_dto :\n%s\n", cJSON_Print(jsonnewsletter_dto_1));
	newsletter_dto_t* newsletter_dto_2 = newsletter_dto_parseFromJSON(jsonnewsletter_dto_1);
	cJSON* jsonnewsletter_dto_2 = newsletter_dto_convertToJSON(newsletter_dto_2);
	printf("repeating newsletter_dto:\n%s\n", cJSON_Print(jsonnewsletter_dto_2));
}

int main() {
  test_newsletter_dto(1);
  test_newsletter_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_dto_MAIN
#endif // newsletter_dto_TEST
