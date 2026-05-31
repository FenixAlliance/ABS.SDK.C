#ifndef x509_certificate2_TEST
#define x509_certificate2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define x509_certificate2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/x509_certificate2.h"
x509_certificate2_t* instantiate_x509_certificate2(int include_optional);

#include "test_byte_read_only_memory.c"
#include "test_asymmetric_algorithm.c"
#include "test_x500_distinguished_name.c"
#include "test_public_key.c"
#include "test_byte_read_only_memory.c"
#include "test_oid.c"
#include "test_x500_distinguished_name.c"


x509_certificate2_t* instantiate_x509_certificate2(int include_optional) {
  x509_certificate2_t* x509_certificate2 = NULL;
  if (include_optional) {
    x509_certificate2 = x509_certificate2_create(
      0,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_byte_read_only_memory(0),
      1,
      list_createList(),
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_asymmetric_algorithm(0),
       // false, not to have infinite recursion
      instantiate_x500_distinguished_name(0),
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_public_key(0),
      "YQ==",
       // false, not to have infinite recursion
      instantiate_byte_read_only_memory(0),
      "0",
       // false, not to have infinite recursion
      instantiate_oid(0),
       // false, not to have infinite recursion
      instantiate_x500_distinguished_name(0),
      "0",
      56
    );
  } else {
    x509_certificate2 = x509_certificate2_create(
      0,
      "0",
      "0",
      NULL,
      1,
      list_createList(),
      "0",
      1,
      NULL,
      NULL,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      "YQ==",
      NULL,
      "0",
      NULL,
      NULL,
      "0",
      56
    );
  }

  return x509_certificate2;
}


#ifdef x509_certificate2_MAIN

void test_x509_certificate2(int include_optional) {
    x509_certificate2_t* x509_certificate2_1 = instantiate_x509_certificate2(include_optional);

	cJSON* jsonx509_certificate2_1 = x509_certificate2_convertToJSON(x509_certificate2_1);
	printf("x509_certificate2 :\n%s\n", cJSON_Print(jsonx509_certificate2_1));
	x509_certificate2_t* x509_certificate2_2 = x509_certificate2_parseFromJSON(jsonx509_certificate2_1);
	cJSON* jsonx509_certificate2_2 = x509_certificate2_convertToJSON(x509_certificate2_2);
	printf("repeating x509_certificate2:\n%s\n", cJSON_Print(jsonx509_certificate2_2));
}

int main() {
  test_x509_certificate2(1);
  test_x509_certificate2(0);

  printf("Hello world \n");
  return 0;
}

#endif // x509_certificate2_MAIN
#endif // x509_certificate2_TEST
