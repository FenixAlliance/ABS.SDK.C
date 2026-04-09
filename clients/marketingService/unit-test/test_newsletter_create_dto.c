#ifndef newsletter_create_dto_TEST
#define newsletter_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_create_dto.h"
newsletter_create_dto_t* instantiate_newsletter_create_dto(int include_optional);



newsletter_create_dto_t* instantiate_newsletter_create_dto(int include_optional) {
  newsletter_create_dto_t* newsletter_create_dto = NULL;
  if (include_optional) {
    newsletter_create_dto = newsletter_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    newsletter_create_dto = newsletter_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return newsletter_create_dto;
}


#ifdef newsletter_create_dto_MAIN

void test_newsletter_create_dto(int include_optional) {
    newsletter_create_dto_t* newsletter_create_dto_1 = instantiate_newsletter_create_dto(include_optional);

	cJSON* jsonnewsletter_create_dto_1 = newsletter_create_dto_convertToJSON(newsletter_create_dto_1);
	printf("newsletter_create_dto :\n%s\n", cJSON_Print(jsonnewsletter_create_dto_1));
	newsletter_create_dto_t* newsletter_create_dto_2 = newsletter_create_dto_parseFromJSON(jsonnewsletter_create_dto_1);
	cJSON* jsonnewsletter_create_dto_2 = newsletter_create_dto_convertToJSON(newsletter_create_dto_2);
	printf("repeating newsletter_create_dto:\n%s\n", cJSON_Print(jsonnewsletter_create_dto_2));
}

int main() {
  test_newsletter_create_dto(1);
  test_newsletter_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_create_dto_MAIN
#endif // newsletter_create_dto_TEST
