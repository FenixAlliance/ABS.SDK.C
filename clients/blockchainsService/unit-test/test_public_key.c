#ifndef public_key_TEST
#define public_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define public_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/public_key.h"
public_key_t* instantiate_public_key(int include_optional);

#include "test_asn_encoded_data.c"
#include "test_asn_encoded_data.c"
#include "test_asymmetric_algorithm.c"
#include "test_oid.c"


public_key_t* instantiate_public_key(int include_optional) {
  public_key_t* public_key = NULL;
  if (include_optional) {
    public_key = public_key_create(
       // false, not to have infinite recursion
      instantiate_asn_encoded_data(0),
       // false, not to have infinite recursion
      instantiate_asn_encoded_data(0),
       // false, not to have infinite recursion
      instantiate_asymmetric_algorithm(0),
       // false, not to have infinite recursion
      instantiate_oid(0)
    );
  } else {
    public_key = public_key_create(
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return public_key;
}


#ifdef public_key_MAIN

void test_public_key(int include_optional) {
    public_key_t* public_key_1 = instantiate_public_key(include_optional);

	cJSON* jsonpublic_key_1 = public_key_convertToJSON(public_key_1);
	printf("public_key :\n%s\n", cJSON_Print(jsonpublic_key_1));
	public_key_t* public_key_2 = public_key_parseFromJSON(jsonpublic_key_1);
	cJSON* jsonpublic_key_2 = public_key_convertToJSON(public_key_2);
	printf("repeating public_key:\n%s\n", cJSON_Print(jsonpublic_key_2));
}

int main() {
  test_public_key(1);
  test_public_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // public_key_MAIN
#endif // public_key_TEST
