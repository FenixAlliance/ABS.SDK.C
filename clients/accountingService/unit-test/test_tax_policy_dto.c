#ifndef tax_policy_dto_TEST
#define tax_policy_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_policy_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_policy_dto.h"
tax_policy_dto_t* instantiate_tax_policy_dto(int include_optional);



tax_policy_dto_t* instantiate_tax_policy_dto(int include_optional) {
  tax_policy_dto_t* tax_policy_dto = NULL;
  if (include_optional) {
    tax_policy_dto = tax_policy_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  } else {
    tax_policy_dto = tax_policy_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      56,
      56,
      56,
      56,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      "0"
    );
  }

  return tax_policy_dto;
}


#ifdef tax_policy_dto_MAIN

void test_tax_policy_dto(int include_optional) {
    tax_policy_dto_t* tax_policy_dto_1 = instantiate_tax_policy_dto(include_optional);

	cJSON* jsontax_policy_dto_1 = tax_policy_dto_convertToJSON(tax_policy_dto_1);
	printf("tax_policy_dto :\n%s\n", cJSON_Print(jsontax_policy_dto_1));
	tax_policy_dto_t* tax_policy_dto_2 = tax_policy_dto_parseFromJSON(jsontax_policy_dto_1);
	cJSON* jsontax_policy_dto_2 = tax_policy_dto_convertToJSON(tax_policy_dto_2);
	printf("repeating tax_policy_dto:\n%s\n", cJSON_Print(jsontax_policy_dto_2));
}

int main() {
  test_tax_policy_dto(1);
  test_tax_policy_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_policy_dto_MAIN
#endif // tax_policy_dto_TEST
