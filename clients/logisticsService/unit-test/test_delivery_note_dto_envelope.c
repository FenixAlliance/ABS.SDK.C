#ifndef delivery_note_dto_envelope_TEST
#define delivery_note_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delivery_note_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delivery_note_dto_envelope.h"
delivery_note_dto_envelope_t* instantiate_delivery_note_dto_envelope(int include_optional);

#include "test_delivery_note_dto.c"


delivery_note_dto_envelope_t* instantiate_delivery_note_dto_envelope(int include_optional) {
  delivery_note_dto_envelope_t* delivery_note_dto_envelope = NULL;
  if (include_optional) {
    delivery_note_dto_envelope = delivery_note_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_delivery_note_dto(0)
    );
  } else {
    delivery_note_dto_envelope = delivery_note_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return delivery_note_dto_envelope;
}


#ifdef delivery_note_dto_envelope_MAIN

void test_delivery_note_dto_envelope(int include_optional) {
    delivery_note_dto_envelope_t* delivery_note_dto_envelope_1 = instantiate_delivery_note_dto_envelope(include_optional);

	cJSON* jsondelivery_note_dto_envelope_1 = delivery_note_dto_envelope_convertToJSON(delivery_note_dto_envelope_1);
	printf("delivery_note_dto_envelope :\n%s\n", cJSON_Print(jsondelivery_note_dto_envelope_1));
	delivery_note_dto_envelope_t* delivery_note_dto_envelope_2 = delivery_note_dto_envelope_parseFromJSON(jsondelivery_note_dto_envelope_1);
	cJSON* jsondelivery_note_dto_envelope_2 = delivery_note_dto_envelope_convertToJSON(delivery_note_dto_envelope_2);
	printf("repeating delivery_note_dto_envelope:\n%s\n", cJSON_Print(jsondelivery_note_dto_envelope_2));
}

int main() {
  test_delivery_note_dto_envelope(1);
  test_delivery_note_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // delivery_note_dto_envelope_MAIN
#endif // delivery_note_dto_envelope_TEST
