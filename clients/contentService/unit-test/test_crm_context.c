#ifndef crm_context_TEST
#define crm_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define crm_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/crm_context.h"
crm_context_t* instantiate_crm_context(int include_optional);

#include "test_tenant_dto.c"
#include "test_contact_dto.c"
#include "test_contact_dto.c"


crm_context_t* instantiate_crm_context(int include_optional) {
  crm_context_t* crm_context = NULL;
  if (include_optional) {
    crm_context = crm_context_create(
      0,
       // false, not to have infinite recursion
      instantiate_tenant_dto(0),
      0,
      0,
       // false, not to have infinite recursion
      instantiate_contact_dto(0),
       // false, not to have infinite recursion
      instantiate_contact_dto(0)
    );
  } else {
    crm_context = crm_context_create(
      0,
      NULL,
      0,
      0,
      NULL,
      NULL
    );
  }

  return crm_context;
}


#ifdef crm_context_MAIN

void test_crm_context(int include_optional) {
    crm_context_t* crm_context_1 = instantiate_crm_context(include_optional);

	cJSON* jsoncrm_context_1 = crm_context_convertToJSON(crm_context_1);
	printf("crm_context :\n%s\n", cJSON_Print(jsoncrm_context_1));
	crm_context_t* crm_context_2 = crm_context_parseFromJSON(jsoncrm_context_1);
	cJSON* jsoncrm_context_2 = crm_context_convertToJSON(crm_context_2);
	printf("repeating crm_context:\n%s\n", cJSON_Print(jsoncrm_context_2));
}

int main() {
  test_crm_context(1);
  test_crm_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // crm_context_MAIN
#endif // crm_context_TEST
