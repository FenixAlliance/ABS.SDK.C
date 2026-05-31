#ifndef employer_profile_update_dto_TEST
#define employer_profile_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define employer_profile_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/employer_profile_update_dto.h"
employer_profile_update_dto_t* instantiate_employer_profile_update_dto(int include_optional);



employer_profile_update_dto_t* instantiate_employer_profile_update_dto(int include_optional) {
  employer_profile_update_dto_t* employer_profile_update_dto = NULL;
  if (include_optional) {
    employer_profile_update_dto = employer_profile_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
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
    employer_profile_update_dto = employer_profile_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
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

  return employer_profile_update_dto;
}


#ifdef employer_profile_update_dto_MAIN

void test_employer_profile_update_dto(int include_optional) {
    employer_profile_update_dto_t* employer_profile_update_dto_1 = instantiate_employer_profile_update_dto(include_optional);

	cJSON* jsonemployer_profile_update_dto_1 = employer_profile_update_dto_convertToJSON(employer_profile_update_dto_1);
	printf("employer_profile_update_dto :\n%s\n", cJSON_Print(jsonemployer_profile_update_dto_1));
	employer_profile_update_dto_t* employer_profile_update_dto_2 = employer_profile_update_dto_parseFromJSON(jsonemployer_profile_update_dto_1);
	cJSON* jsonemployer_profile_update_dto_2 = employer_profile_update_dto_convertToJSON(employer_profile_update_dto_2);
	printf("repeating employer_profile_update_dto:\n%s\n", cJSON_Print(jsonemployer_profile_update_dto_2));
}

int main() {
  test_employer_profile_update_dto(1);
  test_employer_profile_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // employer_profile_update_dto_MAIN
#endif // employer_profile_update_dto_TEST
