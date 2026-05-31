#ifndef applied_item_tax_record_update_dto_TEST
#define applied_item_tax_record_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define applied_item_tax_record_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/applied_item_tax_record_update_dto.h"
applied_item_tax_record_update_dto_t* instantiate_applied_item_tax_record_update_dto(int include_optional);



applied_item_tax_record_update_dto_t* instantiate_applied_item_tax_record_update_dto(int include_optional) {
  applied_item_tax_record_update_dto_t* applied_item_tax_record_update_dto = NULL;
  if (include_optional) {
    applied_item_tax_record_update_dto = applied_item_tax_record_update_dto_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0"
    );
  } else {
    applied_item_tax_record_update_dto = applied_item_tax_record_update_dto_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0"
    );
  }

  return applied_item_tax_record_update_dto;
}


#ifdef applied_item_tax_record_update_dto_MAIN

void test_applied_item_tax_record_update_dto(int include_optional) {
    applied_item_tax_record_update_dto_t* applied_item_tax_record_update_dto_1 = instantiate_applied_item_tax_record_update_dto(include_optional);

	cJSON* jsonapplied_item_tax_record_update_dto_1 = applied_item_tax_record_update_dto_convertToJSON(applied_item_tax_record_update_dto_1);
	printf("applied_item_tax_record_update_dto :\n%s\n", cJSON_Print(jsonapplied_item_tax_record_update_dto_1));
	applied_item_tax_record_update_dto_t* applied_item_tax_record_update_dto_2 = applied_item_tax_record_update_dto_parseFromJSON(jsonapplied_item_tax_record_update_dto_1);
	cJSON* jsonapplied_item_tax_record_update_dto_2 = applied_item_tax_record_update_dto_convertToJSON(applied_item_tax_record_update_dto_2);
	printf("repeating applied_item_tax_record_update_dto:\n%s\n", cJSON_Print(jsonapplied_item_tax_record_update_dto_2));
}

int main() {
  test_applied_item_tax_record_update_dto(1);
  test_applied_item_tax_record_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // applied_item_tax_record_update_dto_MAIN
#endif // applied_item_tax_record_update_dto_TEST
