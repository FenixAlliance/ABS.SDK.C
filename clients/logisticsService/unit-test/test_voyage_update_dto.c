#ifndef voyage_update_dto_TEST
#define voyage_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define voyage_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/voyage_update_dto.h"
voyage_update_dto_t* instantiate_voyage_update_dto(int include_optional);



voyage_update_dto_t* instantiate_voyage_update_dto(int include_optional) {
  voyage_update_dto_t* voyage_update_dto = NULL;
  if (include_optional) {
    voyage_update_dto = voyage_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    voyage_update_dto = voyage_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return voyage_update_dto;
}


#ifdef voyage_update_dto_MAIN

void test_voyage_update_dto(int include_optional) {
    voyage_update_dto_t* voyage_update_dto_1 = instantiate_voyage_update_dto(include_optional);

	cJSON* jsonvoyage_update_dto_1 = voyage_update_dto_convertToJSON(voyage_update_dto_1);
	printf("voyage_update_dto :\n%s\n", cJSON_Print(jsonvoyage_update_dto_1));
	voyage_update_dto_t* voyage_update_dto_2 = voyage_update_dto_parseFromJSON(jsonvoyage_update_dto_1);
	cJSON* jsonvoyage_update_dto_2 = voyage_update_dto_convertToJSON(voyage_update_dto_2);
	printf("repeating voyage_update_dto:\n%s\n", cJSON_Print(jsonvoyage_update_dto_2));
}

int main() {
  test_voyage_update_dto(1);
  test_voyage_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // voyage_update_dto_MAIN
#endif // voyage_update_dto_TEST
