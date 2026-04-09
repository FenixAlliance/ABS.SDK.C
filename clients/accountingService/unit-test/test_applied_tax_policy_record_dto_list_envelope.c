#ifndef applied_tax_policy_record_dto_list_envelope_TEST
#define applied_tax_policy_record_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define applied_tax_policy_record_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/applied_tax_policy_record_dto_list_envelope.h"
applied_tax_policy_record_dto_list_envelope_t* instantiate_applied_tax_policy_record_dto_list_envelope(int include_optional);



applied_tax_policy_record_dto_list_envelope_t* instantiate_applied_tax_policy_record_dto_list_envelope(int include_optional) {
  applied_tax_policy_record_dto_list_envelope_t* applied_tax_policy_record_dto_list_envelope = NULL;
  if (include_optional) {
    applied_tax_policy_record_dto_list_envelope = applied_tax_policy_record_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    applied_tax_policy_record_dto_list_envelope = applied_tax_policy_record_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return applied_tax_policy_record_dto_list_envelope;
}


#ifdef applied_tax_policy_record_dto_list_envelope_MAIN

void test_applied_tax_policy_record_dto_list_envelope(int include_optional) {
    applied_tax_policy_record_dto_list_envelope_t* applied_tax_policy_record_dto_list_envelope_1 = instantiate_applied_tax_policy_record_dto_list_envelope(include_optional);

	cJSON* jsonapplied_tax_policy_record_dto_list_envelope_1 = applied_tax_policy_record_dto_list_envelope_convertToJSON(applied_tax_policy_record_dto_list_envelope_1);
	printf("applied_tax_policy_record_dto_list_envelope :\n%s\n", cJSON_Print(jsonapplied_tax_policy_record_dto_list_envelope_1));
	applied_tax_policy_record_dto_list_envelope_t* applied_tax_policy_record_dto_list_envelope_2 = applied_tax_policy_record_dto_list_envelope_parseFromJSON(jsonapplied_tax_policy_record_dto_list_envelope_1);
	cJSON* jsonapplied_tax_policy_record_dto_list_envelope_2 = applied_tax_policy_record_dto_list_envelope_convertToJSON(applied_tax_policy_record_dto_list_envelope_2);
	printf("repeating applied_tax_policy_record_dto_list_envelope:\n%s\n", cJSON_Print(jsonapplied_tax_policy_record_dto_list_envelope_2));
}

int main() {
  test_applied_tax_policy_record_dto_list_envelope(1);
  test_applied_tax_policy_record_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // applied_tax_policy_record_dto_list_envelope_MAIN
#endif // applied_tax_policy_record_dto_list_envelope_TEST
