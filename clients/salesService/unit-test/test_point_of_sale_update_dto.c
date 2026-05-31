#ifndef point_of_sale_update_dto_TEST
#define point_of_sale_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define point_of_sale_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/point_of_sale_update_dto.h"
point_of_sale_update_dto_t* instantiate_point_of_sale_update_dto(int include_optional);



point_of_sale_update_dto_t* instantiate_point_of_sale_update_dto(int include_optional) {
  point_of_sale_update_dto_t* point_of_sale_update_dto = NULL;
  if (include_optional) {
    point_of_sale_update_dto = point_of_sale_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    point_of_sale_update_dto = point_of_sale_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return point_of_sale_update_dto;
}


#ifdef point_of_sale_update_dto_MAIN

void test_point_of_sale_update_dto(int include_optional) {
    point_of_sale_update_dto_t* point_of_sale_update_dto_1 = instantiate_point_of_sale_update_dto(include_optional);

	cJSON* jsonpoint_of_sale_update_dto_1 = point_of_sale_update_dto_convertToJSON(point_of_sale_update_dto_1);
	printf("point_of_sale_update_dto :\n%s\n", cJSON_Print(jsonpoint_of_sale_update_dto_1));
	point_of_sale_update_dto_t* point_of_sale_update_dto_2 = point_of_sale_update_dto_parseFromJSON(jsonpoint_of_sale_update_dto_1);
	cJSON* jsonpoint_of_sale_update_dto_2 = point_of_sale_update_dto_convertToJSON(point_of_sale_update_dto_2);
	printf("repeating point_of_sale_update_dto:\n%s\n", cJSON_Print(jsonpoint_of_sale_update_dto_2));
}

int main() {
  test_point_of_sale_update_dto(1);
  test_point_of_sale_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // point_of_sale_update_dto_MAIN
#endif // point_of_sale_update_dto_TEST
