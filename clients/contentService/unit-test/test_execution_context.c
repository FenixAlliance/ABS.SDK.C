#ifndef execution_context_TEST
#define execution_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execution_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execution_context.h"
execution_context_t* instantiate_execution_context(int include_optional);

#include "test_auth_result.c"
#include "test_extended_user_dto.c"
#include "test_extended_tenant_dto.c"
#include "test_tenant_enrollment_dto.c"
#include "test_crm_context.c"
#include "test_crm_context.c"
#include "test_crm_context.c"
#include "test_cart_dto.c"
#include "test_currency_dto.c"
#include "test_forex_rates_dto.c"
#include "test_money.c"
#include "test_country_dto.c"
#include "test_tenant_dto.c"
#include "test_web_portal_dto.c"


execution_context_t* instantiate_execution_context(int include_optional) {
  execution_context_t* execution_context = NULL;
  if (include_optional) {
    execution_context = execution_context_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_auth_result(0),
       // false, not to have infinite recursion
      instantiate_extended_user_dto(0),
       // false, not to have infinite recursion
      instantiate_extended_tenant_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_enrollment_dto(0),
       // false, not to have infinite recursion
      instantiate_crm_context(0),
       // false, not to have infinite recursion
      instantiate_crm_context(0),
       // false, not to have infinite recursion
      instantiate_crm_context(0),
       // false, not to have infinite recursion
      instantiate_cart_dto(0),
       // false, not to have infinite recursion
      instantiate_currency_dto(0),
       // false, not to have infinite recursion
      instantiate_forex_rates_dto(0),
       // false, not to have infinite recursion
      instantiate_money(0),
       // false, not to have infinite recursion
      instantiate_country_dto(0),
       // false, not to have infinite recursion
      instantiate_tenant_dto(0),
       // false, not to have infinite recursion
      instantiate_web_portal_dto(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0"
    );
  } else {
    execution_context = execution_context_create(
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0"
    );
  }

  return execution_context;
}


#ifdef execution_context_MAIN

void test_execution_context(int include_optional) {
    execution_context_t* execution_context_1 = instantiate_execution_context(include_optional);

	cJSON* jsonexecution_context_1 = execution_context_convertToJSON(execution_context_1);
	printf("execution_context :\n%s\n", cJSON_Print(jsonexecution_context_1));
	execution_context_t* execution_context_2 = execution_context_parseFromJSON(jsonexecution_context_1);
	cJSON* jsonexecution_context_2 = execution_context_convertToJSON(execution_context_2);
	printf("repeating execution_context:\n%s\n", cJSON_Print(jsonexecution_context_2));
}

int main() {
  test_execution_context(1);
  test_execution_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // execution_context_MAIN
#endif // execution_context_TEST
