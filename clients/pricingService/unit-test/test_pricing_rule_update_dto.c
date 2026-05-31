#ifndef pricing_rule_update_dto_TEST
#define pricing_rule_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pricing_rule_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pricing_rule_update_dto.h"
pricing_rule_update_dto_t* instantiate_pricing_rule_update_dto(int include_optional);



pricing_rule_update_dto_t* instantiate_pricing_rule_update_dto(int include_optional) {
  pricing_rule_update_dto_t* pricing_rule_update_dto = NULL;
  if (include_optional) {
    pricing_rule_update_dto = pricing_rule_update_dto_create(
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
      "0"
    );
  } else {
    pricing_rule_update_dto = pricing_rule_update_dto_create(
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
      "0"
    );
  }

  return pricing_rule_update_dto;
}


#ifdef pricing_rule_update_dto_MAIN

void test_pricing_rule_update_dto(int include_optional) {
    pricing_rule_update_dto_t* pricing_rule_update_dto_1 = instantiate_pricing_rule_update_dto(include_optional);

	cJSON* jsonpricing_rule_update_dto_1 = pricing_rule_update_dto_convertToJSON(pricing_rule_update_dto_1);
	printf("pricing_rule_update_dto :\n%s\n", cJSON_Print(jsonpricing_rule_update_dto_1));
	pricing_rule_update_dto_t* pricing_rule_update_dto_2 = pricing_rule_update_dto_parseFromJSON(jsonpricing_rule_update_dto_1);
	cJSON* jsonpricing_rule_update_dto_2 = pricing_rule_update_dto_convertToJSON(pricing_rule_update_dto_2);
	printf("repeating pricing_rule_update_dto:\n%s\n", cJSON_Print(jsonpricing_rule_update_dto_2));
}

int main() {
  test_pricing_rule_update_dto(1);
  test_pricing_rule_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // pricing_rule_update_dto_MAIN
#endif // pricing_rule_update_dto_TEST
