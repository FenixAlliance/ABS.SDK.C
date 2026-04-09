#ifndef newsletter_update_dto_TEST
#define newsletter_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define newsletter_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/newsletter_update_dto.h"
newsletter_update_dto_t* instantiate_newsletter_update_dto(int include_optional);



newsletter_update_dto_t* instantiate_newsletter_update_dto(int include_optional) {
  newsletter_update_dto_t* newsletter_update_dto = NULL;
  if (include_optional) {
    newsletter_update_dto = newsletter_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    newsletter_update_dto = newsletter_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return newsletter_update_dto;
}


#ifdef newsletter_update_dto_MAIN

void test_newsletter_update_dto(int include_optional) {
    newsletter_update_dto_t* newsletter_update_dto_1 = instantiate_newsletter_update_dto(include_optional);

	cJSON* jsonnewsletter_update_dto_1 = newsletter_update_dto_convertToJSON(newsletter_update_dto_1);
	printf("newsletter_update_dto :\n%s\n", cJSON_Print(jsonnewsletter_update_dto_1));
	newsletter_update_dto_t* newsletter_update_dto_2 = newsletter_update_dto_parseFromJSON(jsonnewsletter_update_dto_1);
	cJSON* jsonnewsletter_update_dto_2 = newsletter_update_dto_convertToJSON(newsletter_update_dto_2);
	printf("repeating newsletter_update_dto:\n%s\n", cJSON_Print(jsonnewsletter_update_dto_2));
}

int main() {
  test_newsletter_update_dto(1);
  test_newsletter_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // newsletter_update_dto_MAIN
#endif // newsletter_update_dto_TEST
