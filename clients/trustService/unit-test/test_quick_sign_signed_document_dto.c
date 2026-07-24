#ifndef quick_sign_signed_document_dto_TEST
#define quick_sign_signed_document_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quick_sign_signed_document_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quick_sign_signed_document_dto.h"
quick_sign_signed_document_dto_t* instantiate_quick_sign_signed_document_dto(int include_optional);



quick_sign_signed_document_dto_t* instantiate_quick_sign_signed_document_dto(int include_optional) {
  quick_sign_signed_document_dto_t* quick_sign_signed_document_dto = NULL;
  if (include_optional) {
    quick_sign_signed_document_dto = quick_sign_signed_document_dto_create(
      "0",
      "0",
      "0"
    );
  } else {
    quick_sign_signed_document_dto = quick_sign_signed_document_dto_create(
      "0",
      "0",
      "0"
    );
  }

  return quick_sign_signed_document_dto;
}


#ifdef quick_sign_signed_document_dto_MAIN

void test_quick_sign_signed_document_dto(int include_optional) {
    quick_sign_signed_document_dto_t* quick_sign_signed_document_dto_1 = instantiate_quick_sign_signed_document_dto(include_optional);

	cJSON* jsonquick_sign_signed_document_dto_1 = quick_sign_signed_document_dto_convertToJSON(quick_sign_signed_document_dto_1);
	printf("quick_sign_signed_document_dto :\n%s\n", cJSON_Print(jsonquick_sign_signed_document_dto_1));
	quick_sign_signed_document_dto_t* quick_sign_signed_document_dto_2 = quick_sign_signed_document_dto_parseFromJSON(jsonquick_sign_signed_document_dto_1);
	cJSON* jsonquick_sign_signed_document_dto_2 = quick_sign_signed_document_dto_convertToJSON(quick_sign_signed_document_dto_2);
	printf("repeating quick_sign_signed_document_dto:\n%s\n", cJSON_Print(jsonquick_sign_signed_document_dto_2));
}

int main() {
  test_quick_sign_signed_document_dto(1);
  test_quick_sign_signed_document_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // quick_sign_signed_document_dto_MAIN
#endif // quick_sign_signed_document_dto_TEST
