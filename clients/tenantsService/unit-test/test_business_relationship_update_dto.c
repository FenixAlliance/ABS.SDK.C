#ifndef business_relationship_update_dto_TEST
#define business_relationship_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define business_relationship_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/business_relationship_update_dto.h"
business_relationship_update_dto_t* instantiate_business_relationship_update_dto(int include_optional);



business_relationship_update_dto_t* instantiate_business_relationship_update_dto(int include_optional) {
  business_relationship_update_dto_t* business_relationship_update_dto = NULL;
  if (include_optional) {
    business_relationship_update_dto = business_relationship_update_dto_create(
      "0",
      1.337
    );
  } else {
    business_relationship_update_dto = business_relationship_update_dto_create(
      "0",
      1.337
    );
  }

  return business_relationship_update_dto;
}


#ifdef business_relationship_update_dto_MAIN

void test_business_relationship_update_dto(int include_optional) {
    business_relationship_update_dto_t* business_relationship_update_dto_1 = instantiate_business_relationship_update_dto(include_optional);

	cJSON* jsonbusiness_relationship_update_dto_1 = business_relationship_update_dto_convertToJSON(business_relationship_update_dto_1);
	printf("business_relationship_update_dto :\n%s\n", cJSON_Print(jsonbusiness_relationship_update_dto_1));
	business_relationship_update_dto_t* business_relationship_update_dto_2 = business_relationship_update_dto_parseFromJSON(jsonbusiness_relationship_update_dto_1);
	cJSON* jsonbusiness_relationship_update_dto_2 = business_relationship_update_dto_convertToJSON(business_relationship_update_dto_2);
	printf("repeating business_relationship_update_dto:\n%s\n", cJSON_Print(jsonbusiness_relationship_update_dto_2));
}

int main() {
  test_business_relationship_update_dto(1);
  test_business_relationship_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // business_relationship_update_dto_MAIN
#endif // business_relationship_update_dto_TEST
