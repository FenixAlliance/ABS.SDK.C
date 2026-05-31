#ifndef instructor_profile_dto_i_read_only_list_envelope_TEST
#define instructor_profile_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define instructor_profile_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/instructor_profile_dto_i_read_only_list_envelope.h"
instructor_profile_dto_i_read_only_list_envelope_t* instantiate_instructor_profile_dto_i_read_only_list_envelope(int include_optional);



instructor_profile_dto_i_read_only_list_envelope_t* instantiate_instructor_profile_dto_i_read_only_list_envelope(int include_optional) {
  instructor_profile_dto_i_read_only_list_envelope_t* instructor_profile_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    instructor_profile_dto_i_read_only_list_envelope = instructor_profile_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    instructor_profile_dto_i_read_only_list_envelope = instructor_profile_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return instructor_profile_dto_i_read_only_list_envelope;
}


#ifdef instructor_profile_dto_i_read_only_list_envelope_MAIN

void test_instructor_profile_dto_i_read_only_list_envelope(int include_optional) {
    instructor_profile_dto_i_read_only_list_envelope_t* instructor_profile_dto_i_read_only_list_envelope_1 = instantiate_instructor_profile_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsoninstructor_profile_dto_i_read_only_list_envelope_1 = instructor_profile_dto_i_read_only_list_envelope_convertToJSON(instructor_profile_dto_i_read_only_list_envelope_1);
	printf("instructor_profile_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsoninstructor_profile_dto_i_read_only_list_envelope_1));
	instructor_profile_dto_i_read_only_list_envelope_t* instructor_profile_dto_i_read_only_list_envelope_2 = instructor_profile_dto_i_read_only_list_envelope_parseFromJSON(jsoninstructor_profile_dto_i_read_only_list_envelope_1);
	cJSON* jsoninstructor_profile_dto_i_read_only_list_envelope_2 = instructor_profile_dto_i_read_only_list_envelope_convertToJSON(instructor_profile_dto_i_read_only_list_envelope_2);
	printf("repeating instructor_profile_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsoninstructor_profile_dto_i_read_only_list_envelope_2));
}

int main() {
  test_instructor_profile_dto_i_read_only_list_envelope(1);
  test_instructor_profile_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // instructor_profile_dto_i_read_only_list_envelope_MAIN
#endif // instructor_profile_dto_i_read_only_list_envelope_TEST
