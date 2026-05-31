#ifndef tax_class_create_dto_TEST
#define tax_class_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tax_class_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tax_class_create_dto.h"
tax_class_create_dto_t* instantiate_tax_class_create_dto(int include_optional);



tax_class_create_dto_t* instantiate_tax_class_create_dto(int include_optional) {
  tax_class_create_dto_t* tax_class_create_dto = NULL;
  if (include_optional) {
    tax_class_create_dto = tax_class_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      accountingservice_tax_class_create_dto_TYPE_Tax,
      "0"
    );
  } else {
    tax_class_create_dto = tax_class_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      accountingservice_tax_class_create_dto_TYPE_Tax,
      "0"
    );
  }

  return tax_class_create_dto;
}


#ifdef tax_class_create_dto_MAIN

void test_tax_class_create_dto(int include_optional) {
    tax_class_create_dto_t* tax_class_create_dto_1 = instantiate_tax_class_create_dto(include_optional);

	cJSON* jsontax_class_create_dto_1 = tax_class_create_dto_convertToJSON(tax_class_create_dto_1);
	printf("tax_class_create_dto :\n%s\n", cJSON_Print(jsontax_class_create_dto_1));
	tax_class_create_dto_t* tax_class_create_dto_2 = tax_class_create_dto_parseFromJSON(jsontax_class_create_dto_1);
	cJSON* jsontax_class_create_dto_2 = tax_class_create_dto_convertToJSON(tax_class_create_dto_2);
	printf("repeating tax_class_create_dto:\n%s\n", cJSON_Print(jsontax_class_create_dto_2));
}

int main() {
  test_tax_class_create_dto(1);
  test_tax_class_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // tax_class_create_dto_MAIN
#endif // tax_class_create_dto_TEST
