#ifndef signing_profile_graphical_representation_dto_TEST
#define signing_profile_graphical_representation_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signing_profile_graphical_representation_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signing_profile_graphical_representation_dto.h"
signing_profile_graphical_representation_dto_t* instantiate_signing_profile_graphical_representation_dto(int include_optional);



signing_profile_graphical_representation_dto_t* instantiate_signing_profile_graphical_representation_dto(int include_optional) {
  signing_profile_graphical_representation_dto_t* signing_profile_graphical_representation_dto = NULL;
  if (include_optional) {
    signing_profile_graphical_representation_dto = signing_profile_graphical_representation_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      trustservice_signing_profile_graphical_representation_dto_KIND_Drawn,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    signing_profile_graphical_representation_dto = signing_profile_graphical_representation_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      trustservice_signing_profile_graphical_representation_dto_KIND_Drawn,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return signing_profile_graphical_representation_dto;
}


#ifdef signing_profile_graphical_representation_dto_MAIN

void test_signing_profile_graphical_representation_dto(int include_optional) {
    signing_profile_graphical_representation_dto_t* signing_profile_graphical_representation_dto_1 = instantiate_signing_profile_graphical_representation_dto(include_optional);

	cJSON* jsonsigning_profile_graphical_representation_dto_1 = signing_profile_graphical_representation_dto_convertToJSON(signing_profile_graphical_representation_dto_1);
	printf("signing_profile_graphical_representation_dto :\n%s\n", cJSON_Print(jsonsigning_profile_graphical_representation_dto_1));
	signing_profile_graphical_representation_dto_t* signing_profile_graphical_representation_dto_2 = signing_profile_graphical_representation_dto_parseFromJSON(jsonsigning_profile_graphical_representation_dto_1);
	cJSON* jsonsigning_profile_graphical_representation_dto_2 = signing_profile_graphical_representation_dto_convertToJSON(signing_profile_graphical_representation_dto_2);
	printf("repeating signing_profile_graphical_representation_dto:\n%s\n", cJSON_Print(jsonsigning_profile_graphical_representation_dto_2));
}

int main() {
  test_signing_profile_graphical_representation_dto(1);
  test_signing_profile_graphical_representation_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // signing_profile_graphical_representation_dto_MAIN
#endif // signing_profile_graphical_representation_dto_TEST
