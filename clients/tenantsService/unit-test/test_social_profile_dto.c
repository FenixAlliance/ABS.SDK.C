#ifndef social_profile_dto_TEST
#define social_profile_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_profile_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_profile_dto.h"
social_profile_dto_t* instantiate_social_profile_dto(int include_optional);



social_profile_dto_t* instantiate_social_profile_dto(int include_optional) {
  social_profile_dto_t* social_profile_dto = NULL;
  if (include_optional) {
    social_profile_dto = social_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      tenantsservice_social_profile_dto_TYPE_User,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    social_profile_dto = social_profile_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      tenantsservice_social_profile_dto_TYPE_User,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return social_profile_dto;
}


#ifdef social_profile_dto_MAIN

void test_social_profile_dto(int include_optional) {
    social_profile_dto_t* social_profile_dto_1 = instantiate_social_profile_dto(include_optional);

	cJSON* jsonsocial_profile_dto_1 = social_profile_dto_convertToJSON(social_profile_dto_1);
	printf("social_profile_dto :\n%s\n", cJSON_Print(jsonsocial_profile_dto_1));
	social_profile_dto_t* social_profile_dto_2 = social_profile_dto_parseFromJSON(jsonsocial_profile_dto_1);
	cJSON* jsonsocial_profile_dto_2 = social_profile_dto_convertToJSON(social_profile_dto_2);
	printf("repeating social_profile_dto:\n%s\n", cJSON_Print(jsonsocial_profile_dto_2));
}

int main() {
  test_social_profile_dto(1);
  test_social_profile_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_profile_dto_MAIN
#endif // social_profile_dto_TEST
