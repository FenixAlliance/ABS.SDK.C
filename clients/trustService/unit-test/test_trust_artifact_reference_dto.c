#ifndef trust_artifact_reference_dto_TEST
#define trust_artifact_reference_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_artifact_reference_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_artifact_reference_dto.h"
trust_artifact_reference_dto_t* instantiate_trust_artifact_reference_dto(int include_optional);



trust_artifact_reference_dto_t* instantiate_trust_artifact_reference_dto(int include_optional) {
  trust_artifact_reference_dto_t* trust_artifact_reference_dto = NULL;
  if (include_optional) {
    trust_artifact_reference_dto = trust_artifact_reference_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0"
    );
  } else {
    trust_artifact_reference_dto = trust_artifact_reference_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0"
    );
  }

  return trust_artifact_reference_dto;
}


#ifdef trust_artifact_reference_dto_MAIN

void test_trust_artifact_reference_dto(int include_optional) {
    trust_artifact_reference_dto_t* trust_artifact_reference_dto_1 = instantiate_trust_artifact_reference_dto(include_optional);

	cJSON* jsontrust_artifact_reference_dto_1 = trust_artifact_reference_dto_convertToJSON(trust_artifact_reference_dto_1);
	printf("trust_artifact_reference_dto :\n%s\n", cJSON_Print(jsontrust_artifact_reference_dto_1));
	trust_artifact_reference_dto_t* trust_artifact_reference_dto_2 = trust_artifact_reference_dto_parseFromJSON(jsontrust_artifact_reference_dto_1);
	cJSON* jsontrust_artifact_reference_dto_2 = trust_artifact_reference_dto_convertToJSON(trust_artifact_reference_dto_2);
	printf("repeating trust_artifact_reference_dto:\n%s\n", cJSON_Print(jsontrust_artifact_reference_dto_2));
}

int main() {
  test_trust_artifact_reference_dto(1);
  test_trust_artifact_reference_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_artifact_reference_dto_MAIN
#endif // trust_artifact_reference_dto_TEST
