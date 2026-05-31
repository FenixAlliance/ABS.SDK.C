#ifndef x500_distinguished_name_TEST
#define x500_distinguished_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define x500_distinguished_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/x500_distinguished_name.h"
x500_distinguished_name_t* instantiate_x500_distinguished_name(int include_optional);

#include "test_oid.c"


x500_distinguished_name_t* instantiate_x500_distinguished_name(int include_optional) {
  x500_distinguished_name_t* x500_distinguished_name = NULL;
  if (include_optional) {
    x500_distinguished_name = x500_distinguished_name_create(
       // false, not to have infinite recursion
      instantiate_oid(0),
      "YQ==",
      "0"
    );
  } else {
    x500_distinguished_name = x500_distinguished_name_create(
      NULL,
      "YQ==",
      "0"
    );
  }

  return x500_distinguished_name;
}


#ifdef x500_distinguished_name_MAIN

void test_x500_distinguished_name(int include_optional) {
    x500_distinguished_name_t* x500_distinguished_name_1 = instantiate_x500_distinguished_name(include_optional);

	cJSON* jsonx500_distinguished_name_1 = x500_distinguished_name_convertToJSON(x500_distinguished_name_1);
	printf("x500_distinguished_name :\n%s\n", cJSON_Print(jsonx500_distinguished_name_1));
	x500_distinguished_name_t* x500_distinguished_name_2 = x500_distinguished_name_parseFromJSON(jsonx500_distinguished_name_1);
	cJSON* jsonx500_distinguished_name_2 = x500_distinguished_name_convertToJSON(x500_distinguished_name_2);
	printf("repeating x500_distinguished_name:\n%s\n", cJSON_Print(jsonx500_distinguished_name_2));
}

int main() {
  test_x500_distinguished_name(1);
  test_x500_distinguished_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // x500_distinguished_name_MAIN
#endif // x500_distinguished_name_TEST
