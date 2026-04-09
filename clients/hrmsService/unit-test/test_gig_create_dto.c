#ifndef gig_create_dto_TEST
#define gig_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gig_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gig_create_dto.h"
gig_create_dto_t* instantiate_gig_create_dto(int include_optional);



gig_create_dto_t* instantiate_gig_create_dto(int include_optional) {
  gig_create_dto_t* gig_create_dto = NULL;
  if (include_optional) {
    gig_create_dto = gig_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
      "0"
    );
  } else {
    gig_create_dto = gig_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
      "0"
    );
  }

  return gig_create_dto;
}


#ifdef gig_create_dto_MAIN

void test_gig_create_dto(int include_optional) {
    gig_create_dto_t* gig_create_dto_1 = instantiate_gig_create_dto(include_optional);

	cJSON* jsongig_create_dto_1 = gig_create_dto_convertToJSON(gig_create_dto_1);
	printf("gig_create_dto :\n%s\n", cJSON_Print(jsongig_create_dto_1));
	gig_create_dto_t* gig_create_dto_2 = gig_create_dto_parseFromJSON(jsongig_create_dto_1);
	cJSON* jsongig_create_dto_2 = gig_create_dto_convertToJSON(gig_create_dto_2);
	printf("repeating gig_create_dto:\n%s\n", cJSON_Print(jsongig_create_dto_2));
}

int main() {
  test_gig_create_dto(1);
  test_gig_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // gig_create_dto_MAIN
#endif // gig_create_dto_TEST
