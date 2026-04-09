#ifndef tax_rate_update_dto_TEST
#define tax_rate_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_rate_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_rate_update_dto.h"
tax_rate_update_dto_t* instantiate_tax_rate_update_dto(int include_optional);



tax_rate_update_dto_t* instantiate_tax_rate_update_dto(int include_optional) {
  tax_rate_update_dto_t* tax_rate_update_dto = NULL;
  if (include_optional) {
    tax_rate_update_dto = tax_rate_update_dto_create(
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      56,
      1,
      1,
      1,
      1.337,
      1.337,
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
    tax_rate_update_dto = tax_rate_update_dto_create(
      "0",
      1.337,
      1.337,
      "0",
      "0",
      "0",
      56,
      1,
      1,
      1,
      1.337,
      1.337,
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

  return tax_rate_update_dto;
}


#ifdef tax_rate_update_dto_MAIN

void test_tax_rate_update_dto(int include_optional) {
    tax_rate_update_dto_t* tax_rate_update_dto_1 = instantiate_tax_rate_update_dto(include_optional);

	cJSON* jsontax_rate_update_dto_1 = tax_rate_update_dto_convertToJSON(tax_rate_update_dto_1);
	printf("tax_rate_update_dto :\n%s\n", cJSON_Print(jsontax_rate_update_dto_1));
	tax_rate_update_dto_t* tax_rate_update_dto_2 = tax_rate_update_dto_parseFromJSON(jsontax_rate_update_dto_1);
	cJSON* jsontax_rate_update_dto_2 = tax_rate_update_dto_convertToJSON(tax_rate_update_dto_2);
	printf("repeating tax_rate_update_dto:\n%s\n", cJSON_Print(jsontax_rate_update_dto_2));
}

int main() {
  test_tax_rate_update_dto(1);
  test_tax_rate_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_rate_update_dto_MAIN
#endif // tax_rate_update_dto_TEST
