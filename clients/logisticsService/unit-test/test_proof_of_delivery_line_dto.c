#ifndef proof_of_delivery_line_dto_TEST
#define proof_of_delivery_line_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define proof_of_delivery_line_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/proof_of_delivery_line_dto.h"
proof_of_delivery_line_dto_t* instantiate_proof_of_delivery_line_dto(int include_optional);



proof_of_delivery_line_dto_t* instantiate_proof_of_delivery_line_dto(int include_optional) {
  proof_of_delivery_line_dto_t* proof_of_delivery_line_dto = NULL;
  if (include_optional) {
    proof_of_delivery_line_dto = proof_of_delivery_line_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      "0",
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    proof_of_delivery_line_dto = proof_of_delivery_line_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      "0",
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return proof_of_delivery_line_dto;
}


#ifdef proof_of_delivery_line_dto_MAIN

void test_proof_of_delivery_line_dto(int include_optional) {
    proof_of_delivery_line_dto_t* proof_of_delivery_line_dto_1 = instantiate_proof_of_delivery_line_dto(include_optional);

	cJSON* jsonproof_of_delivery_line_dto_1 = proof_of_delivery_line_dto_convertToJSON(proof_of_delivery_line_dto_1);
	printf("proof_of_delivery_line_dto :\n%s\n", cJSON_Print(jsonproof_of_delivery_line_dto_1));
	proof_of_delivery_line_dto_t* proof_of_delivery_line_dto_2 = proof_of_delivery_line_dto_parseFromJSON(jsonproof_of_delivery_line_dto_1);
	cJSON* jsonproof_of_delivery_line_dto_2 = proof_of_delivery_line_dto_convertToJSON(proof_of_delivery_line_dto_2);
	printf("repeating proof_of_delivery_line_dto:\n%s\n", cJSON_Print(jsonproof_of_delivery_line_dto_2));
}

int main() {
  test_proof_of_delivery_line_dto(1);
  test_proof_of_delivery_line_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // proof_of_delivery_line_dto_MAIN
#endif // proof_of_delivery_line_dto_TEST
