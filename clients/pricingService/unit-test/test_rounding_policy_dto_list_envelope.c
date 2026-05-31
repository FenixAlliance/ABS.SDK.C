#ifndef rounding_policy_dto_list_envelope_TEST
#define rounding_policy_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rounding_policy_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rounding_policy_dto_list_envelope.h"
rounding_policy_dto_list_envelope_t* instantiate_rounding_policy_dto_list_envelope(int include_optional);



rounding_policy_dto_list_envelope_t* instantiate_rounding_policy_dto_list_envelope(int include_optional) {
  rounding_policy_dto_list_envelope_t* rounding_policy_dto_list_envelope = NULL;
  if (include_optional) {
    rounding_policy_dto_list_envelope = rounding_policy_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    rounding_policy_dto_list_envelope = rounding_policy_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return rounding_policy_dto_list_envelope;
}


#ifdef rounding_policy_dto_list_envelope_MAIN

void test_rounding_policy_dto_list_envelope(int include_optional) {
    rounding_policy_dto_list_envelope_t* rounding_policy_dto_list_envelope_1 = instantiate_rounding_policy_dto_list_envelope(include_optional);

	cJSON* jsonrounding_policy_dto_list_envelope_1 = rounding_policy_dto_list_envelope_convertToJSON(rounding_policy_dto_list_envelope_1);
	printf("rounding_policy_dto_list_envelope :\n%s\n", cJSON_Print(jsonrounding_policy_dto_list_envelope_1));
	rounding_policy_dto_list_envelope_t* rounding_policy_dto_list_envelope_2 = rounding_policy_dto_list_envelope_parseFromJSON(jsonrounding_policy_dto_list_envelope_1);
	cJSON* jsonrounding_policy_dto_list_envelope_2 = rounding_policy_dto_list_envelope_convertToJSON(rounding_policy_dto_list_envelope_2);
	printf("repeating rounding_policy_dto_list_envelope:\n%s\n", cJSON_Print(jsonrounding_policy_dto_list_envelope_2));
}

int main() {
  test_rounding_policy_dto_list_envelope(1);
  test_rounding_policy_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // rounding_policy_dto_list_envelope_MAIN
#endif // rounding_policy_dto_list_envelope_TEST
