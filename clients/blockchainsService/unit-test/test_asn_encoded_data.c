#ifndef asn_encoded_data_TEST
#define asn_encoded_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asn_encoded_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asn_encoded_data.h"
asn_encoded_data_t* instantiate_asn_encoded_data(int include_optional);

#include "test_oid.c"


asn_encoded_data_t* instantiate_asn_encoded_data(int include_optional) {
  asn_encoded_data_t* asn_encoded_data = NULL;
  if (include_optional) {
    asn_encoded_data = asn_encoded_data_create(
       // false, not to have infinite recursion
      instantiate_oid(0),
      "YQ=="
    );
  } else {
    asn_encoded_data = asn_encoded_data_create(
      NULL,
      "YQ=="
    );
  }

  return asn_encoded_data;
}


#ifdef asn_encoded_data_MAIN

void test_asn_encoded_data(int include_optional) {
    asn_encoded_data_t* asn_encoded_data_1 = instantiate_asn_encoded_data(include_optional);

	cJSON* jsonasn_encoded_data_1 = asn_encoded_data_convertToJSON(asn_encoded_data_1);
	printf("asn_encoded_data :\n%s\n", cJSON_Print(jsonasn_encoded_data_1));
	asn_encoded_data_t* asn_encoded_data_2 = asn_encoded_data_parseFromJSON(jsonasn_encoded_data_1);
	cJSON* jsonasn_encoded_data_2 = asn_encoded_data_convertToJSON(asn_encoded_data_2);
	printf("repeating asn_encoded_data:\n%s\n", cJSON_Print(jsonasn_encoded_data_2));
}

int main() {
  test_asn_encoded_data(1);
  test_asn_encoded_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // asn_encoded_data_MAIN
#endif // asn_encoded_data_TEST
