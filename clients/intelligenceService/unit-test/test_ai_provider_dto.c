#ifndef ai_provider_dto_TEST
#define ai_provider_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ai_provider_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ai_provider_dto.h"
ai_provider_dto_t* instantiate_ai_provider_dto(int include_optional);



ai_provider_dto_t* instantiate_ai_provider_dto(int include_optional) {
  ai_provider_dto_t* ai_provider_dto = NULL;
  if (include_optional) {
    ai_provider_dto = ai_provider_dto_create(
      "0"
    );
  } else {
    ai_provider_dto = ai_provider_dto_create(
      "0"
    );
  }

  return ai_provider_dto;
}


#ifdef ai_provider_dto_MAIN

void test_ai_provider_dto(int include_optional) {
    ai_provider_dto_t* ai_provider_dto_1 = instantiate_ai_provider_dto(include_optional);

	cJSON* jsonai_provider_dto_1 = ai_provider_dto_convertToJSON(ai_provider_dto_1);
	printf("ai_provider_dto :\n%s\n", cJSON_Print(jsonai_provider_dto_1));
	ai_provider_dto_t* ai_provider_dto_2 = ai_provider_dto_parseFromJSON(jsonai_provider_dto_1);
	cJSON* jsonai_provider_dto_2 = ai_provider_dto_convertToJSON(ai_provider_dto_2);
	printf("repeating ai_provider_dto:\n%s\n", cJSON_Print(jsonai_provider_dto_2));
}

int main() {
  test_ai_provider_dto(1);
  test_ai_provider_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // ai_provider_dto_MAIN
#endif // ai_provider_dto_TEST
