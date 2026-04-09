#ifndef blob_envelope_TEST
#define blob_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blob_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blob_envelope.h"
blob_envelope_t* instantiate_blob_envelope(int include_optional);

#include "test_blob.c"


blob_envelope_t* instantiate_blob_envelope(int include_optional) {
  blob_envelope_t* blob_envelope = NULL;
  if (include_optional) {
    blob_envelope = blob_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_blob(0)
    );
  } else {
    blob_envelope = blob_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return blob_envelope;
}


#ifdef blob_envelope_MAIN

void test_blob_envelope(int include_optional) {
    blob_envelope_t* blob_envelope_1 = instantiate_blob_envelope(include_optional);

	cJSON* jsonblob_envelope_1 = blob_envelope_convertToJSON(blob_envelope_1);
	printf("blob_envelope :\n%s\n", cJSON_Print(jsonblob_envelope_1));
	blob_envelope_t* blob_envelope_2 = blob_envelope_parseFromJSON(jsonblob_envelope_1);
	cJSON* jsonblob_envelope_2 = blob_envelope_convertToJSON(blob_envelope_2);
	printf("repeating blob_envelope:\n%s\n", cJSON_Print(jsonblob_envelope_2));
}

int main() {
  test_blob_envelope(1);
  test_blob_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // blob_envelope_MAIN
#endif // blob_envelope_TEST
