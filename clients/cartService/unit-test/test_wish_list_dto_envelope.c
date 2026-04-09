#ifndef wish_list_dto_envelope_TEST
#define wish_list_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wish_list_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wish_list_dto_envelope.h"
wish_list_dto_envelope_t* instantiate_wish_list_dto_envelope(int include_optional);

#include "test_wish_list_dto.c"


wish_list_dto_envelope_t* instantiate_wish_list_dto_envelope(int include_optional) {
  wish_list_dto_envelope_t* wish_list_dto_envelope = NULL;
  if (include_optional) {
    wish_list_dto_envelope = wish_list_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_wish_list_dto(0)
    );
  } else {
    wish_list_dto_envelope = wish_list_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return wish_list_dto_envelope;
}


#ifdef wish_list_dto_envelope_MAIN

void test_wish_list_dto_envelope(int include_optional) {
    wish_list_dto_envelope_t* wish_list_dto_envelope_1 = instantiate_wish_list_dto_envelope(include_optional);

	cJSON* jsonwish_list_dto_envelope_1 = wish_list_dto_envelope_convertToJSON(wish_list_dto_envelope_1);
	printf("wish_list_dto_envelope :\n%s\n", cJSON_Print(jsonwish_list_dto_envelope_1));
	wish_list_dto_envelope_t* wish_list_dto_envelope_2 = wish_list_dto_envelope_parseFromJSON(jsonwish_list_dto_envelope_1);
	cJSON* jsonwish_list_dto_envelope_2 = wish_list_dto_envelope_convertToJSON(wish_list_dto_envelope_2);
	printf("repeating wish_list_dto_envelope:\n%s\n", cJSON_Print(jsonwish_list_dto_envelope_2));
}

int main() {
  test_wish_list_dto_envelope(1);
  test_wish_list_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // wish_list_dto_envelope_MAIN
#endif // wish_list_dto_envelope_TEST
