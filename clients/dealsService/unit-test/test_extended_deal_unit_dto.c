#ifndef extended_deal_unit_dto_TEST
#define extended_deal_unit_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_deal_unit_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_deal_unit_dto.h"
extended_deal_unit_dto_t* instantiate_extended_deal_unit_dto(int include_optional);

#include "test_user_dto.c"
#include "test_tenant_dto.c"
#include "test_contact_dto.c"
#include "test_contact_dto.c"
#include "test_tenant_dto.c"
#include "test_tenant_enrollment_dto.c"


extended_deal_unit_dto_t* instantiate_extended_deal_unit_dto(int include_optional) {
  extended_deal_unit_dto_t* extended_deal_unit_dto = NULL;
  if (include_optional) {
    extended_deal_unit_dto = extended_deal_unit_dto_create(
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
      dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_Included,
      dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_Open,
      dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_None,
      dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_None,
      dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_UserProvided,
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
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
    extended_deal_unit_dto = extended_deal_unit_dto_create(
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
      dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_Included,
      dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_Automatic,
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
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_Open,
      dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_None,
      dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_None,
      dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_UserProvided,
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return extended_deal_unit_dto;
}


#ifdef extended_deal_unit_dto_MAIN

void test_extended_deal_unit_dto(int include_optional) {
    extended_deal_unit_dto_t* extended_deal_unit_dto_1 = instantiate_extended_deal_unit_dto(include_optional);

	cJSON* jsonextended_deal_unit_dto_1 = extended_deal_unit_dto_convertToJSON(extended_deal_unit_dto_1);
	printf("extended_deal_unit_dto :\n%s\n", cJSON_Print(jsonextended_deal_unit_dto_1));
	extended_deal_unit_dto_t* extended_deal_unit_dto_2 = extended_deal_unit_dto_parseFromJSON(jsonextended_deal_unit_dto_1);
	cJSON* jsonextended_deal_unit_dto_2 = extended_deal_unit_dto_convertToJSON(extended_deal_unit_dto_2);
	printf("repeating extended_deal_unit_dto:\n%s\n", cJSON_Print(jsonextended_deal_unit_dto_2));
}

int main() {
  test_extended_deal_unit_dto(1);
  test_extended_deal_unit_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_deal_unit_dto_MAIN
#endif // extended_deal_unit_dto_TEST
