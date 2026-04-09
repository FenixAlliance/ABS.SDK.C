#ifndef extended_invoice_dto_TEST
#define extended_invoice_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_invoice_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_invoice_dto.h"
extended_invoice_dto_t* instantiate_extended_invoice_dto(int include_optional);

#include "test_tenant_dto.c"
#include "test_simple_user_dto.c"
#include "test_tenant_dto.c"
#include "test_simple_contact_dto.c"
#include "test_simple_contact_dto.c"
#include "test_simple_tenant_enrollment_dto.c"


extended_invoice_dto_t* instantiate_extended_invoice_dto(int include_optional) {
  extended_invoice_dto_t* extended_invoice_dto = NULL;
  if (include_optional) {
    extended_invoice_dto = extended_invoice_dto_create(
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
      invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_Included,
      invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_Automatic,
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
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      invoicingservice_extended_invoice_dto_INVOICETYPE_PurchaseInvoice,
      invoicingservice_extended_invoice_dto_DOCUMENTTYPE_Standard,
      invoicingservice_extended_invoice_dto_INVOICESTATUS_Draft,
       // false, not to have infinite recursion
      instantiate_tenant_dto(0),
       // false, not to have infinite recursion
      instantiate_simple_user_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_dto(0),
       // false, not to have infinite recursion
      instantiate_simple_contact_dto(0),
       // false, not to have infinite recursion
      instantiate_simple_contact_dto(0),
       // false, not to have infinite recursion
      instantiate_simple_tenant_enrollment_dto(0),
      list_createList()
    );
  } else {
    extended_invoice_dto = extended_invoice_dto_create(
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
      invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_Included,
      invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_Automatic,
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
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      invoicingservice_extended_invoice_dto_INVOICETYPE_PurchaseInvoice,
      invoicingservice_extended_invoice_dto_DOCUMENTTYPE_Standard,
      invoicingservice_extended_invoice_dto_INVOICESTATUS_Draft,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return extended_invoice_dto;
}


#ifdef extended_invoice_dto_MAIN

void test_extended_invoice_dto(int include_optional) {
    extended_invoice_dto_t* extended_invoice_dto_1 = instantiate_extended_invoice_dto(include_optional);

	cJSON* jsonextended_invoice_dto_1 = extended_invoice_dto_convertToJSON(extended_invoice_dto_1);
	printf("extended_invoice_dto :\n%s\n", cJSON_Print(jsonextended_invoice_dto_1));
	extended_invoice_dto_t* extended_invoice_dto_2 = extended_invoice_dto_parseFromJSON(jsonextended_invoice_dto_1);
	cJSON* jsonextended_invoice_dto_2 = extended_invoice_dto_convertToJSON(extended_invoice_dto_2);
	printf("repeating extended_invoice_dto:\n%s\n", cJSON_Print(jsonextended_invoice_dto_2));
}

int main() {
  test_extended_invoice_dto(1);
  test_extended_invoice_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_invoice_dto_MAIN
#endif // extended_invoice_dto_TEST
