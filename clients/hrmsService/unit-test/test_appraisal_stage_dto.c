#ifndef appraisal_stage_dto_TEST
#define appraisal_stage_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define appraisal_stage_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/appraisal_stage_dto.h"
appraisal_stage_dto_t* instantiate_appraisal_stage_dto(int include_optional);



appraisal_stage_dto_t* instantiate_appraisal_stage_dto(int include_optional) {
  appraisal_stage_dto_t* appraisal_stage_dto = NULL;
  if (include_optional) {
    appraisal_stage_dto = appraisal_stage_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    appraisal_stage_dto = appraisal_stage_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return appraisal_stage_dto;
}


#ifdef appraisal_stage_dto_MAIN

void test_appraisal_stage_dto(int include_optional) {
    appraisal_stage_dto_t* appraisal_stage_dto_1 = instantiate_appraisal_stage_dto(include_optional);

	cJSON* jsonappraisal_stage_dto_1 = appraisal_stage_dto_convertToJSON(appraisal_stage_dto_1);
	printf("appraisal_stage_dto :\n%s\n", cJSON_Print(jsonappraisal_stage_dto_1));
	appraisal_stage_dto_t* appraisal_stage_dto_2 = appraisal_stage_dto_parseFromJSON(jsonappraisal_stage_dto_1);
	cJSON* jsonappraisal_stage_dto_2 = appraisal_stage_dto_convertToJSON(appraisal_stage_dto_2);
	printf("repeating appraisal_stage_dto:\n%s\n", cJSON_Print(jsonappraisal_stage_dto_2));
}

int main() {
  test_appraisal_stage_dto(1);
  test_appraisal_stage_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // appraisal_stage_dto_MAIN
#endif // appraisal_stage_dto_TEST
