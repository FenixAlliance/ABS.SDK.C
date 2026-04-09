#ifndef social_reaction_dto_TEST
#define social_reaction_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define social_reaction_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/social_reaction_dto.h"
social_reaction_dto_t* instantiate_social_reaction_dto(int include_optional);



social_reaction_dto_t* instantiate_social_reaction_dto(int include_optional) {
  social_reaction_dto_t* social_reaction_dto = NULL;
  if (include_optional) {
    social_reaction_dto = social_reaction_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      socialservice_social_reaction_dto_REACTION_Like,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    social_reaction_dto = social_reaction_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      socialservice_social_reaction_dto_REACTION_Like,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return social_reaction_dto;
}


#ifdef social_reaction_dto_MAIN

void test_social_reaction_dto(int include_optional) {
    social_reaction_dto_t* social_reaction_dto_1 = instantiate_social_reaction_dto(include_optional);

	cJSON* jsonsocial_reaction_dto_1 = social_reaction_dto_convertToJSON(social_reaction_dto_1);
	printf("social_reaction_dto :\n%s\n", cJSON_Print(jsonsocial_reaction_dto_1));
	social_reaction_dto_t* social_reaction_dto_2 = social_reaction_dto_parseFromJSON(jsonsocial_reaction_dto_1);
	cJSON* jsonsocial_reaction_dto_2 = social_reaction_dto_convertToJSON(social_reaction_dto_2);
	printf("repeating social_reaction_dto:\n%s\n", cJSON_Print(jsonsocial_reaction_dto_2));
}

int main() {
  test_social_reaction_dto(1);
  test_social_reaction_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // social_reaction_dto_MAIN
#endif // social_reaction_dto_TEST
