#ifndef delivery_note_create_dto_TEST
#define delivery_note_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delivery_note_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delivery_note_create_dto.h"
delivery_note_create_dto_t* instantiate_delivery_note_create_dto(int include_optional);



delivery_note_create_dto_t* instantiate_delivery_note_create_dto(int include_optional) {
  delivery_note_create_dto_t* delivery_note_create_dto = NULL;
  if (include_optional) {
    delivery_note_create_dto = delivery_note_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    delivery_note_create_dto = delivery_note_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return delivery_note_create_dto;
}


#ifdef delivery_note_create_dto_MAIN

void test_delivery_note_create_dto(int include_optional) {
    delivery_note_create_dto_t* delivery_note_create_dto_1 = instantiate_delivery_note_create_dto(include_optional);

	cJSON* jsondelivery_note_create_dto_1 = delivery_note_create_dto_convertToJSON(delivery_note_create_dto_1);
	printf("delivery_note_create_dto :\n%s\n", cJSON_Print(jsondelivery_note_create_dto_1));
	delivery_note_create_dto_t* delivery_note_create_dto_2 = delivery_note_create_dto_parseFromJSON(jsondelivery_note_create_dto_1);
	cJSON* jsondelivery_note_create_dto_2 = delivery_note_create_dto_convertToJSON(delivery_note_create_dto_2);
	printf("repeating delivery_note_create_dto:\n%s\n", cJSON_Print(jsondelivery_note_create_dto_2));
}

int main() {
  test_delivery_note_create_dto(1);
  test_delivery_note_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // delivery_note_create_dto_MAIN
#endif // delivery_note_create_dto_TEST
