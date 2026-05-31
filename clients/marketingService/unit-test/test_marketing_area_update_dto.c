#ifndef marketing_area_update_dto_TEST
#define marketing_area_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_area_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_area_update_dto.h"
marketing_area_update_dto_t* instantiate_marketing_area_update_dto(int include_optional);



marketing_area_update_dto_t* instantiate_marketing_area_update_dto(int include_optional) {
  marketing_area_update_dto_t* marketing_area_update_dto = NULL;
  if (include_optional) {
    marketing_area_update_dto = marketing_area_update_dto_create(
      "0",
      "0"
    );
  } else {
    marketing_area_update_dto = marketing_area_update_dto_create(
      "0",
      "0"
    );
  }

  return marketing_area_update_dto;
}


#ifdef marketing_area_update_dto_MAIN

void test_marketing_area_update_dto(int include_optional) {
    marketing_area_update_dto_t* marketing_area_update_dto_1 = instantiate_marketing_area_update_dto(include_optional);

	cJSON* jsonmarketing_area_update_dto_1 = marketing_area_update_dto_convertToJSON(marketing_area_update_dto_1);
	printf("marketing_area_update_dto :\n%s\n", cJSON_Print(jsonmarketing_area_update_dto_1));
	marketing_area_update_dto_t* marketing_area_update_dto_2 = marketing_area_update_dto_parseFromJSON(jsonmarketing_area_update_dto_1);
	cJSON* jsonmarketing_area_update_dto_2 = marketing_area_update_dto_convertToJSON(marketing_area_update_dto_2);
	printf("repeating marketing_area_update_dto:\n%s\n", cJSON_Print(jsonmarketing_area_update_dto_2));
}

int main() {
  test_marketing_area_update_dto(1);
  test_marketing_area_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_area_update_dto_MAIN
#endif // marketing_area_update_dto_TEST
