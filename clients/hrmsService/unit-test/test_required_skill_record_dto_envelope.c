#ifndef required_skill_record_dto_envelope_TEST
#define required_skill_record_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define required_skill_record_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/required_skill_record_dto_envelope.h"
required_skill_record_dto_envelope_t* instantiate_required_skill_record_dto_envelope(int include_optional);

#include "test_required_skill_record_dto.c"


required_skill_record_dto_envelope_t* instantiate_required_skill_record_dto_envelope(int include_optional) {
  required_skill_record_dto_envelope_t* required_skill_record_dto_envelope = NULL;
  if (include_optional) {
    required_skill_record_dto_envelope = required_skill_record_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_required_skill_record_dto(0)
    );
  } else {
    required_skill_record_dto_envelope = required_skill_record_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return required_skill_record_dto_envelope;
}


#ifdef required_skill_record_dto_envelope_MAIN

void test_required_skill_record_dto_envelope(int include_optional) {
    required_skill_record_dto_envelope_t* required_skill_record_dto_envelope_1 = instantiate_required_skill_record_dto_envelope(include_optional);

	cJSON* jsonrequired_skill_record_dto_envelope_1 = required_skill_record_dto_envelope_convertToJSON(required_skill_record_dto_envelope_1);
	printf("required_skill_record_dto_envelope :\n%s\n", cJSON_Print(jsonrequired_skill_record_dto_envelope_1));
	required_skill_record_dto_envelope_t* required_skill_record_dto_envelope_2 = required_skill_record_dto_envelope_parseFromJSON(jsonrequired_skill_record_dto_envelope_1);
	cJSON* jsonrequired_skill_record_dto_envelope_2 = required_skill_record_dto_envelope_convertToJSON(required_skill_record_dto_envelope_2);
	printf("repeating required_skill_record_dto_envelope:\n%s\n", cJSON_Print(jsonrequired_skill_record_dto_envelope_2));
}

int main() {
  test_required_skill_record_dto_envelope(1);
  test_required_skill_record_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // required_skill_record_dto_envelope_MAIN
#endif // required_skill_record_dto_envelope_TEST
