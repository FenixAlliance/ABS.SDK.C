#ifndef social_media_post_create_dto_TEST
#define social_media_post_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_media_post_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_media_post_create_dto.h"
social_media_post_create_dto_t* instantiate_social_media_post_create_dto(int include_optional);



social_media_post_create_dto_t* instantiate_social_media_post_create_dto(int include_optional) {
  social_media_post_create_dto_t* social_media_post_create_dto = NULL;
  if (include_optional) {
    social_media_post_create_dto = social_media_post_create_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    social_media_post_create_dto = social_media_post_create_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return social_media_post_create_dto;
}


#ifdef social_media_post_create_dto_MAIN

void test_social_media_post_create_dto(int include_optional) {
    social_media_post_create_dto_t* social_media_post_create_dto_1 = instantiate_social_media_post_create_dto(include_optional);

	cJSON* jsonsocial_media_post_create_dto_1 = social_media_post_create_dto_convertToJSON(social_media_post_create_dto_1);
	printf("social_media_post_create_dto :\n%s\n", cJSON_Print(jsonsocial_media_post_create_dto_1));
	social_media_post_create_dto_t* social_media_post_create_dto_2 = social_media_post_create_dto_parseFromJSON(jsonsocial_media_post_create_dto_1);
	cJSON* jsonsocial_media_post_create_dto_2 = social_media_post_create_dto_convertToJSON(social_media_post_create_dto_2);
	printf("repeating social_media_post_create_dto:\n%s\n", cJSON_Print(jsonsocial_media_post_create_dto_2));
}

int main() {
  test_social_media_post_create_dto(1);
  test_social_media_post_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_media_post_create_dto_MAIN
#endif // social_media_post_create_dto_TEST
