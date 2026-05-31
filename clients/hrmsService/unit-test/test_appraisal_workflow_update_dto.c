#ifndef appraisal_workflow_update_dto_TEST
#define appraisal_workflow_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define appraisal_workflow_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/appraisal_workflow_update_dto.h"
appraisal_workflow_update_dto_t* instantiate_appraisal_workflow_update_dto(int include_optional);



appraisal_workflow_update_dto_t* instantiate_appraisal_workflow_update_dto(int include_optional) {
  appraisal_workflow_update_dto_t* appraisal_workflow_update_dto = NULL;
  if (include_optional) {
    appraisal_workflow_update_dto = appraisal_workflow_update_dto_create(
      "0",
      "0"
    );
  } else {
    appraisal_workflow_update_dto = appraisal_workflow_update_dto_create(
      "0",
      "0"
    );
  }

  return appraisal_workflow_update_dto;
}


#ifdef appraisal_workflow_update_dto_MAIN

void test_appraisal_workflow_update_dto(int include_optional) {
    appraisal_workflow_update_dto_t* appraisal_workflow_update_dto_1 = instantiate_appraisal_workflow_update_dto(include_optional);

	cJSON* jsonappraisal_workflow_update_dto_1 = appraisal_workflow_update_dto_convertToJSON(appraisal_workflow_update_dto_1);
	printf("appraisal_workflow_update_dto :\n%s\n", cJSON_Print(jsonappraisal_workflow_update_dto_1));
	appraisal_workflow_update_dto_t* appraisal_workflow_update_dto_2 = appraisal_workflow_update_dto_parseFromJSON(jsonappraisal_workflow_update_dto_1);
	cJSON* jsonappraisal_workflow_update_dto_2 = appraisal_workflow_update_dto_convertToJSON(appraisal_workflow_update_dto_2);
	printf("repeating appraisal_workflow_update_dto:\n%s\n", cJSON_Print(jsonappraisal_workflow_update_dto_2));
}

int main() {
  test_appraisal_workflow_update_dto(1);
  test_appraisal_workflow_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // appraisal_workflow_update_dto_MAIN
#endif // appraisal_workflow_update_dto_TEST
