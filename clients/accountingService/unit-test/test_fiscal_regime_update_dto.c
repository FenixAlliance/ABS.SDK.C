#ifndef fiscal_regime_update_dto_TEST
#define fiscal_regime_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fiscal_regime_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fiscal_regime_update_dto.h"
fiscal_regime_update_dto_t* instantiate_fiscal_regime_update_dto(int include_optional);



fiscal_regime_update_dto_t* instantiate_fiscal_regime_update_dto(int include_optional) {
  fiscal_regime_update_dto_t* fiscal_regime_update_dto = NULL;
  if (include_optional) {
    fiscal_regime_update_dto = fiscal_regime_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    fiscal_regime_update_dto = fiscal_regime_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return fiscal_regime_update_dto;
}


#ifdef fiscal_regime_update_dto_MAIN

void test_fiscal_regime_update_dto(int include_optional) {
    fiscal_regime_update_dto_t* fiscal_regime_update_dto_1 = instantiate_fiscal_regime_update_dto(include_optional);

	cJSON* jsonfiscal_regime_update_dto_1 = fiscal_regime_update_dto_convertToJSON(fiscal_regime_update_dto_1);
	printf("fiscal_regime_update_dto :\n%s\n", cJSON_Print(jsonfiscal_regime_update_dto_1));
	fiscal_regime_update_dto_t* fiscal_regime_update_dto_2 = fiscal_regime_update_dto_parseFromJSON(jsonfiscal_regime_update_dto_1);
	cJSON* jsonfiscal_regime_update_dto_2 = fiscal_regime_update_dto_convertToJSON(fiscal_regime_update_dto_2);
	printf("repeating fiscal_regime_update_dto:\n%s\n", cJSON_Print(jsonfiscal_regime_update_dto_2));
}

int main() {
  test_fiscal_regime_update_dto(1);
  test_fiscal_regime_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // fiscal_regime_update_dto_MAIN
#endif // fiscal_regime_update_dto_TEST
