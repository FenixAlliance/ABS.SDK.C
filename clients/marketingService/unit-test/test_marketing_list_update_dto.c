#ifndef marketing_list_update_dto_TEST
#define marketing_list_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketing_list_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketing_list_update_dto.h"
marketing_list_update_dto_t* instantiate_marketing_list_update_dto(int include_optional);



marketing_list_update_dto_t* instantiate_marketing_list_update_dto(int include_optional) {
  marketing_list_update_dto_t* marketing_list_update_dto = NULL;
  if (include_optional) {
    marketing_list_update_dto = marketing_list_update_dto_create(
      1,
      "0",
      "0",
      "0",
      "0",
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_Static,
      marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_Individual
    );
  } else {
    marketing_list_update_dto = marketing_list_update_dto_create(
      1,
      "0",
      "0",
      "0",
      "0",
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_Static,
      marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_Individual
    );
  }

  return marketing_list_update_dto;
}


#ifdef marketing_list_update_dto_MAIN

void test_marketing_list_update_dto(int include_optional) {
    marketing_list_update_dto_t* marketing_list_update_dto_1 = instantiate_marketing_list_update_dto(include_optional);

	cJSON* jsonmarketing_list_update_dto_1 = marketing_list_update_dto_convertToJSON(marketing_list_update_dto_1);
	printf("marketing_list_update_dto :\n%s\n", cJSON_Print(jsonmarketing_list_update_dto_1));
	marketing_list_update_dto_t* marketing_list_update_dto_2 = marketing_list_update_dto_parseFromJSON(jsonmarketing_list_update_dto_1);
	cJSON* jsonmarketing_list_update_dto_2 = marketing_list_update_dto_convertToJSON(marketing_list_update_dto_2);
	printf("repeating marketing_list_update_dto:\n%s\n", cJSON_Print(jsonmarketing_list_update_dto_2));
}

int main() {
  test_marketing_list_update_dto(1);
  test_marketing_list_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketing_list_update_dto_MAIN
#endif // marketing_list_update_dto_TEST
