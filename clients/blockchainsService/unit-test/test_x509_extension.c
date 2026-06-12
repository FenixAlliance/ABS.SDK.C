#ifndef x509_extension_TEST
#define x509_extension_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define x509_extension_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/x509_extension.h"
x509_extension_t* instantiate_x509_extension(int include_optional);

#include "test_oid.c"


x509_extension_t* instantiate_x509_extension(int include_optional) {
  x509_extension_t* x509_extension = NULL;
  if (include_optional) {
    x509_extension = x509_extension_create(
       // false, not to have infinite recursion
      instantiate_oid(0),
      "YQ==",
      1
    );
  } else {
    x509_extension = x509_extension_create(
      NULL,
      "YQ==",
      1
    );
  }

  return x509_extension;
}


#ifdef x509_extension_MAIN

void test_x509_extension(int include_optional) {
    x509_extension_t* x509_extension_1 = instantiate_x509_extension(include_optional);

	cJSON* jsonx509_extension_1 = x509_extension_convertToJSON(x509_extension_1);
	printf("x509_extension :\n%s\n", cJSON_Print(jsonx509_extension_1));
	x509_extension_t* x509_extension_2 = x509_extension_parseFromJSON(jsonx509_extension_1);
	cJSON* jsonx509_extension_2 = x509_extension_convertToJSON(x509_extension_2);
	printf("repeating x509_extension:\n%s\n", cJSON_Print(jsonx509_extension_2));
}

int main() {
  test_x509_extension(1);
  test_x509_extension(0);

  printf("Hello world \n");
  return 0;
}

#endif // x509_extension_MAIN
#endif // x509_extension_TEST
