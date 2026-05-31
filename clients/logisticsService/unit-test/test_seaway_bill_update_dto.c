#ifndef seaway_bill_update_dto_TEST
#define seaway_bill_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define seaway_bill_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/seaway_bill_update_dto.h"
seaway_bill_update_dto_t* instantiate_seaway_bill_update_dto(int include_optional);



seaway_bill_update_dto_t* instantiate_seaway_bill_update_dto(int include_optional) {
  seaway_bill_update_dto_t* seaway_bill_update_dto = NULL;
  if (include_optional) {
    seaway_bill_update_dto = seaway_bill_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      56,
      "0",
      "0",
      "0"
    );
  } else {
    seaway_bill_update_dto = seaway_bill_update_dto_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      1.337,
      "0",
      1.337,
      56,
      "0",
      "0",
      "0"
    );
  }

  return seaway_bill_update_dto;
}


#ifdef seaway_bill_update_dto_MAIN

void test_seaway_bill_update_dto(int include_optional) {
    seaway_bill_update_dto_t* seaway_bill_update_dto_1 = instantiate_seaway_bill_update_dto(include_optional);

	cJSON* jsonseaway_bill_update_dto_1 = seaway_bill_update_dto_convertToJSON(seaway_bill_update_dto_1);
	printf("seaway_bill_update_dto :\n%s\n", cJSON_Print(jsonseaway_bill_update_dto_1));
	seaway_bill_update_dto_t* seaway_bill_update_dto_2 = seaway_bill_update_dto_parseFromJSON(jsonseaway_bill_update_dto_1);
	cJSON* jsonseaway_bill_update_dto_2 = seaway_bill_update_dto_convertToJSON(seaway_bill_update_dto_2);
	printf("repeating seaway_bill_update_dto:\n%s\n", cJSON_Print(jsonseaway_bill_update_dto_2));
}

int main() {
  test_seaway_bill_update_dto(1);
  test_seaway_bill_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // seaway_bill_update_dto_MAIN
#endif // seaway_bill_update_dto_TEST
