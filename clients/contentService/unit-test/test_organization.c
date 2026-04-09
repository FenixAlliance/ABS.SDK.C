#ifndef organization_TEST
#define organization_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define organization_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/organization.h"
organization_t* instantiate_organization(int include_optional);



organization_t* instantiate_organization(int include_optional) {
  organization_t* organization = NULL;
  if (include_optional) {
    organization = organization_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    organization = organization_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return organization;
}


#ifdef organization_MAIN

void test_organization(int include_optional) {
    organization_t* organization_1 = instantiate_organization(include_optional);

	cJSON* jsonorganization_1 = organization_convertToJSON(organization_1);
	printf("organization :\n%s\n", cJSON_Print(jsonorganization_1));
	organization_t* organization_2 = organization_parseFromJSON(jsonorganization_1);
	cJSON* jsonorganization_2 = organization_convertToJSON(organization_2);
	printf("repeating organization:\n%s\n", cJSON_Print(jsonorganization_2));
}

int main() {
  test_organization(1);
  test_organization(0);

  printf("Hello world \n");
  return 0;
}

#endif // organization_MAIN
#endif // organization_TEST
