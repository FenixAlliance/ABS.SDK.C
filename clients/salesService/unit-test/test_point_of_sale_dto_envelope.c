#ifndef point_of_sale_dto_envelope_TEST
#define point_of_sale_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define point_of_sale_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/point_of_sale_dto_envelope.h"
point_of_sale_dto_envelope_t* instantiate_point_of_sale_dto_envelope(int include_optional);

#include "test_point_of_sale_dto.c"


point_of_sale_dto_envelope_t* instantiate_point_of_sale_dto_envelope(int include_optional) {
  point_of_sale_dto_envelope_t* point_of_sale_dto_envelope = NULL;
  if (include_optional) {
    point_of_sale_dto_envelope = point_of_sale_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_point_of_sale_dto(0)
    );
  } else {
    point_of_sale_dto_envelope = point_of_sale_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return point_of_sale_dto_envelope;
}


#ifdef point_of_sale_dto_envelope_MAIN

void test_point_of_sale_dto_envelope(int include_optional) {
    point_of_sale_dto_envelope_t* point_of_sale_dto_envelope_1 = instantiate_point_of_sale_dto_envelope(include_optional);

	cJSON* jsonpoint_of_sale_dto_envelope_1 = point_of_sale_dto_envelope_convertToJSON(point_of_sale_dto_envelope_1);
	printf("point_of_sale_dto_envelope :\n%s\n", cJSON_Print(jsonpoint_of_sale_dto_envelope_1));
	point_of_sale_dto_envelope_t* point_of_sale_dto_envelope_2 = point_of_sale_dto_envelope_parseFromJSON(jsonpoint_of_sale_dto_envelope_1);
	cJSON* jsonpoint_of_sale_dto_envelope_2 = point_of_sale_dto_envelope_convertToJSON(point_of_sale_dto_envelope_2);
	printf("repeating point_of_sale_dto_envelope:\n%s\n", cJSON_Print(jsonpoint_of_sale_dto_envelope_2));
}

int main() {
  test_point_of_sale_dto_envelope(1);
  test_point_of_sale_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // point_of_sale_dto_envelope_MAIN
#endif // point_of_sale_dto_envelope_TEST
