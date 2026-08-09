#ifndef user_order_summary_dto_TEST
#define user_order_summary_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_order_summary_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_order_summary_dto.h"
user_order_summary_dto_t* instantiate_user_order_summary_dto(int include_optional);



user_order_summary_dto_t* instantiate_user_order_summary_dto(int include_optional) {
  user_order_summary_dto_t* user_order_summary_dto = NULL;
  if (include_optional) {
    user_order_summary_dto = user_order_summary_dto_create(
      "0",
      systemservice_user_order_summary_dto_ORDERTYPE_SalesOrder,
      systemservice_user_order_summary_dto_ORDERSTATUS_New
    );
  } else {
    user_order_summary_dto = user_order_summary_dto_create(
      "0",
      systemservice_user_order_summary_dto_ORDERTYPE_SalesOrder,
      systemservice_user_order_summary_dto_ORDERSTATUS_New
    );
  }

  return user_order_summary_dto;
}


#ifdef user_order_summary_dto_MAIN

void test_user_order_summary_dto(int include_optional) {
    user_order_summary_dto_t* user_order_summary_dto_1 = instantiate_user_order_summary_dto(include_optional);

	cJSON* jsonuser_order_summary_dto_1 = user_order_summary_dto_convertToJSON(user_order_summary_dto_1);
	printf("user_order_summary_dto :\n%s\n", cJSON_Print(jsonuser_order_summary_dto_1));
	user_order_summary_dto_t* user_order_summary_dto_2 = user_order_summary_dto_parseFromJSON(jsonuser_order_summary_dto_1);
	cJSON* jsonuser_order_summary_dto_2 = user_order_summary_dto_convertToJSON(user_order_summary_dto_2);
	printf("repeating user_order_summary_dto:\n%s\n", cJSON_Print(jsonuser_order_summary_dto_2));
}

int main() {
  test_user_order_summary_dto(1);
  test_user_order_summary_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_order_summary_dto_MAIN
#endif // user_order_summary_dto_TEST
