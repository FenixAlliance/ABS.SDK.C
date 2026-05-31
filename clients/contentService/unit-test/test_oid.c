#ifndef oid_TEST
#define oid_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define oid_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/oid.h"
oid_t* instantiate_oid(int include_optional);



oid_t* instantiate_oid(int include_optional) {
  oid_t* oid = NULL;
  if (include_optional) {
    oid = oid_create(
      "0",
      "0"
    );
  } else {
    oid = oid_create(
      "0",
      "0"
    );
  }

  return oid;
}


#ifdef oid_MAIN

void test_oid(int include_optional) {
    oid_t* oid_1 = instantiate_oid(include_optional);

	cJSON* jsonoid_1 = oid_convertToJSON(oid_1);
	printf("oid :\n%s\n", cJSON_Print(jsonoid_1));
	oid_t* oid_2 = oid_parseFromJSON(jsonoid_1);
	cJSON* jsonoid_2 = oid_convertToJSON(oid_2);
	printf("repeating oid:\n%s\n", cJSON_Print(jsonoid_2));
}

int main() {
  test_oid(1);
  test_oid(0);

  printf("Hello world \n");
  return 0;
}

#endif // oid_MAIN
#endif // oid_TEST
