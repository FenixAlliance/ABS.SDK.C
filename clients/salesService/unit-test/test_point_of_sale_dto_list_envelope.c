#ifndef point_of_sale_dto_list_envelope_TEST
#define point_of_sale_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define point_of_sale_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/point_of_sale_dto_list_envelope.h"
point_of_sale_dto_list_envelope_t* instantiate_point_of_sale_dto_list_envelope(int include_optional);



point_of_sale_dto_list_envelope_t* instantiate_point_of_sale_dto_list_envelope(int include_optional) {
  point_of_sale_dto_list_envelope_t* point_of_sale_dto_list_envelope = NULL;
  if (include_optional) {
    point_of_sale_dto_list_envelope = point_of_sale_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    point_of_sale_dto_list_envelope = point_of_sale_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return point_of_sale_dto_list_envelope;
}


#ifdef point_of_sale_dto_list_envelope_MAIN

void test_point_of_sale_dto_list_envelope(int include_optional) {
    point_of_sale_dto_list_envelope_t* point_of_sale_dto_list_envelope_1 = instantiate_point_of_sale_dto_list_envelope(include_optional);

	cJSON* jsonpoint_of_sale_dto_list_envelope_1 = point_of_sale_dto_list_envelope_convertToJSON(point_of_sale_dto_list_envelope_1);
	printf("point_of_sale_dto_list_envelope :\n%s\n", cJSON_Print(jsonpoint_of_sale_dto_list_envelope_1));
	point_of_sale_dto_list_envelope_t* point_of_sale_dto_list_envelope_2 = point_of_sale_dto_list_envelope_parseFromJSON(jsonpoint_of_sale_dto_list_envelope_1);
	cJSON* jsonpoint_of_sale_dto_list_envelope_2 = point_of_sale_dto_list_envelope_convertToJSON(point_of_sale_dto_list_envelope_2);
	printf("repeating point_of_sale_dto_list_envelope:\n%s\n", cJSON_Print(jsonpoint_of_sale_dto_list_envelope_2));
}

int main() {
  test_point_of_sale_dto_list_envelope(1);
  test_point_of_sale_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // point_of_sale_dto_list_envelope_MAIN
#endif // point_of_sale_dto_list_envelope_TEST
