#ifndef extended_quote_dto_TEST
#define extended_quote_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_quote_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_quote_dto.h"
extended_quote_dto_t* instantiate_extended_quote_dto(int include_optional);

#include "test_user_dto.c"
#include "test_tenant_dto.c"
#include "test_contact_dto.c"
#include "test_contact_dto.c"
#include "test_tenant_dto.c"
#include "test_tenant_enrollment_dto.c"


extended_quote_dto_t* instantiate_extended_quote_dto(int include_optional) {
  extended_quote_dto_t* extended_quote_dto = NULL;
  if (include_optional) {
    extended_quote_dto = extended_quote_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_Included,
      quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_Automatic,
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      quotesservice_extended_quote_dto_QUOTESTATUS_Draft,
      quotesservice_extended_quote_dto_FREIGHTTERMS_FOB,
      1.337,
       // false, not to have infinite recursion
      instantiate_user_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_dto(0),
       // false, not to have infinite recursion
      instantiate_contact_dto(0),
       // false, not to have infinite recursion
      instantiate_contact_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_enrollment_dto(0)
    );
  } else {
    extended_quote_dto = extended_quote_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_Included,
      quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_Automatic,
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      quotesservice_extended_quote_dto_QUOTESTATUS_Draft,
      quotesservice_extended_quote_dto_FREIGHTTERMS_FOB,
      1.337,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return extended_quote_dto;
}


#ifdef extended_quote_dto_MAIN

void test_extended_quote_dto(int include_optional) {
    extended_quote_dto_t* extended_quote_dto_1 = instantiate_extended_quote_dto(include_optional);

	cJSON* jsonextended_quote_dto_1 = extended_quote_dto_convertToJSON(extended_quote_dto_1);
	printf("extended_quote_dto :\n%s\n", cJSON_Print(jsonextended_quote_dto_1));
	extended_quote_dto_t* extended_quote_dto_2 = extended_quote_dto_parseFromJSON(jsonextended_quote_dto_1);
	cJSON* jsonextended_quote_dto_2 = extended_quote_dto_convertToJSON(extended_quote_dto_2);
	printf("repeating extended_quote_dto:\n%s\n", cJSON_Print(jsonextended_quote_dto_2));
}

int main() {
  test_extended_quote_dto(1);
  test_extended_quote_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_quote_dto_MAIN
#endif // extended_quote_dto_TEST
