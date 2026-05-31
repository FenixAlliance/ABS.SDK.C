#ifndef appraisal_workflow_dto_list_envelope_TEST
#define appraisal_workflow_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define appraisal_workflow_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/appraisal_workflow_dto_list_envelope.h"
appraisal_workflow_dto_list_envelope_t* instantiate_appraisal_workflow_dto_list_envelope(int include_optional);



appraisal_workflow_dto_list_envelope_t* instantiate_appraisal_workflow_dto_list_envelope(int include_optional) {
  appraisal_workflow_dto_list_envelope_t* appraisal_workflow_dto_list_envelope = NULL;
  if (include_optional) {
    appraisal_workflow_dto_list_envelope = appraisal_workflow_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    appraisal_workflow_dto_list_envelope = appraisal_workflow_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return appraisal_workflow_dto_list_envelope;
}


#ifdef appraisal_workflow_dto_list_envelope_MAIN

void test_appraisal_workflow_dto_list_envelope(int include_optional) {
    appraisal_workflow_dto_list_envelope_t* appraisal_workflow_dto_list_envelope_1 = instantiate_appraisal_workflow_dto_list_envelope(include_optional);

	cJSON* jsonappraisal_workflow_dto_list_envelope_1 = appraisal_workflow_dto_list_envelope_convertToJSON(appraisal_workflow_dto_list_envelope_1);
	printf("appraisal_workflow_dto_list_envelope :\n%s\n", cJSON_Print(jsonappraisal_workflow_dto_list_envelope_1));
	appraisal_workflow_dto_list_envelope_t* appraisal_workflow_dto_list_envelope_2 = appraisal_workflow_dto_list_envelope_parseFromJSON(jsonappraisal_workflow_dto_list_envelope_1);
	cJSON* jsonappraisal_workflow_dto_list_envelope_2 = appraisal_workflow_dto_list_envelope_convertToJSON(appraisal_workflow_dto_list_envelope_2);
	printf("repeating appraisal_workflow_dto_list_envelope:\n%s\n", cJSON_Print(jsonappraisal_workflow_dto_list_envelope_2));
}

int main() {
  test_appraisal_workflow_dto_list_envelope(1);
  test_appraisal_workflow_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // appraisal_workflow_dto_list_envelope_MAIN
#endif // appraisal_workflow_dto_list_envelope_TEST
