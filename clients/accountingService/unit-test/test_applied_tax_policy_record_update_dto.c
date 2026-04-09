#ifndef applied_tax_policy_record_update_dto_TEST
#define applied_tax_policy_record_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define applied_tax_policy_record_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/applied_tax_policy_record_update_dto.h"
applied_tax_policy_record_update_dto_t* instantiate_applied_tax_policy_record_update_dto(int include_optional);



applied_tax_policy_record_update_dto_t* instantiate_applied_tax_policy_record_update_dto(int include_optional) {
  applied_tax_policy_record_update_dto_t* applied_tax_policy_record_update_dto = NULL;
  if (include_optional) {
    applied_tax_policy_record_update_dto = applied_tax_policy_record_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337
    );
  } else {
    applied_tax_policy_record_update_dto = applied_tax_policy_record_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337
    );
  }

  return applied_tax_policy_record_update_dto;
}


#ifdef applied_tax_policy_record_update_dto_MAIN

void test_applied_tax_policy_record_update_dto(int include_optional) {
    applied_tax_policy_record_update_dto_t* applied_tax_policy_record_update_dto_1 = instantiate_applied_tax_policy_record_update_dto(include_optional);

	cJSON* jsonapplied_tax_policy_record_update_dto_1 = applied_tax_policy_record_update_dto_convertToJSON(applied_tax_policy_record_update_dto_1);
	printf("applied_tax_policy_record_update_dto :\n%s\n", cJSON_Print(jsonapplied_tax_policy_record_update_dto_1));
	applied_tax_policy_record_update_dto_t* applied_tax_policy_record_update_dto_2 = applied_tax_policy_record_update_dto_parseFromJSON(jsonapplied_tax_policy_record_update_dto_1);
	cJSON* jsonapplied_tax_policy_record_update_dto_2 = applied_tax_policy_record_update_dto_convertToJSON(applied_tax_policy_record_update_dto_2);
	printf("repeating applied_tax_policy_record_update_dto:\n%s\n", cJSON_Print(jsonapplied_tax_policy_record_update_dto_2));
}

int main() {
  test_applied_tax_policy_record_update_dto(1);
  test_applied_tax_policy_record_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // applied_tax_policy_record_update_dto_MAIN
#endif // applied_tax_policy_record_update_dto_TEST
