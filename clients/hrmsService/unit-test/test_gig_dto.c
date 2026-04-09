#ifndef gig_dto_TEST
#define gig_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gig_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gig_dto.h"
gig_dto_t* instantiate_gig_dto(int include_optional);



gig_dto_t* instantiate_gig_dto(int include_optional) {
  gig_dto_t* gig_dto = NULL;
  if (include_optional) {
    gig_dto = gig_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    gig_dto = gig_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return gig_dto;
}


#ifdef gig_dto_MAIN

void test_gig_dto(int include_optional) {
    gig_dto_t* gig_dto_1 = instantiate_gig_dto(include_optional);

	cJSON* jsongig_dto_1 = gig_dto_convertToJSON(gig_dto_1);
	printf("gig_dto :\n%s\n", cJSON_Print(jsongig_dto_1));
	gig_dto_t* gig_dto_2 = gig_dto_parseFromJSON(jsongig_dto_1);
	cJSON* jsongig_dto_2 = gig_dto_convertToJSON(gig_dto_2);
	printf("repeating gig_dto:\n%s\n", cJSON_Print(jsongig_dto_2));
}

int main() {
  test_gig_dto(1);
  test_gig_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // gig_dto_MAIN
#endif // gig_dto_TEST
