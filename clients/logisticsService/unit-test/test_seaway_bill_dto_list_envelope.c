#ifndef seaway_bill_dto_list_envelope_TEST
#define seaway_bill_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define seaway_bill_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/seaway_bill_dto_list_envelope.h"
seaway_bill_dto_list_envelope_t* instantiate_seaway_bill_dto_list_envelope(int include_optional);



seaway_bill_dto_list_envelope_t* instantiate_seaway_bill_dto_list_envelope(int include_optional) {
  seaway_bill_dto_list_envelope_t* seaway_bill_dto_list_envelope = NULL;
  if (include_optional) {
    seaway_bill_dto_list_envelope = seaway_bill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    seaway_bill_dto_list_envelope = seaway_bill_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return seaway_bill_dto_list_envelope;
}


#ifdef seaway_bill_dto_list_envelope_MAIN

void test_seaway_bill_dto_list_envelope(int include_optional) {
    seaway_bill_dto_list_envelope_t* seaway_bill_dto_list_envelope_1 = instantiate_seaway_bill_dto_list_envelope(include_optional);

	cJSON* jsonseaway_bill_dto_list_envelope_1 = seaway_bill_dto_list_envelope_convertToJSON(seaway_bill_dto_list_envelope_1);
	printf("seaway_bill_dto_list_envelope :\n%s\n", cJSON_Print(jsonseaway_bill_dto_list_envelope_1));
	seaway_bill_dto_list_envelope_t* seaway_bill_dto_list_envelope_2 = seaway_bill_dto_list_envelope_parseFromJSON(jsonseaway_bill_dto_list_envelope_1);
	cJSON* jsonseaway_bill_dto_list_envelope_2 = seaway_bill_dto_list_envelope_convertToJSON(seaway_bill_dto_list_envelope_2);
	printf("repeating seaway_bill_dto_list_envelope:\n%s\n", cJSON_Print(jsonseaway_bill_dto_list_envelope_2));
}

int main() {
  test_seaway_bill_dto_list_envelope(1);
  test_seaway_bill_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // seaway_bill_dto_list_envelope_MAIN
#endif // seaway_bill_dto_list_envelope_TEST
