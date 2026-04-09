#ifndef social_post_dto_TEST
#define social_post_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_post_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_post_dto.h"
social_post_dto_t* instantiate_social_post_dto(int include_optional);



social_post_dto_t* instantiate_social_post_dto(int include_optional) {
  social_post_dto_t* social_post_dto = NULL;
  if (include_optional) {
    social_post_dto = social_post_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56
    );
  } else {
    social_post_dto = social_post_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56
    );
  }

  return social_post_dto;
}


#ifdef social_post_dto_MAIN

void test_social_post_dto(int include_optional) {
    social_post_dto_t* social_post_dto_1 = instantiate_social_post_dto(include_optional);

	cJSON* jsonsocial_post_dto_1 = social_post_dto_convertToJSON(social_post_dto_1);
	printf("social_post_dto :\n%s\n", cJSON_Print(jsonsocial_post_dto_1));
	social_post_dto_t* social_post_dto_2 = social_post_dto_parseFromJSON(jsonsocial_post_dto_1);
	cJSON* jsonsocial_post_dto_2 = social_post_dto_convertToJSON(social_post_dto_2);
	printf("repeating social_post_dto:\n%s\n", cJSON_Print(jsonsocial_post_dto_2));
}

int main() {
  test_social_post_dto(1);
  test_social_post_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_post_dto_MAIN
#endif // social_post_dto_TEST
