#ifndef execution_provenance_TEST
#define execution_provenance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execution_provenance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execution_provenance.h"
execution_provenance_t* instantiate_execution_provenance(int include_optional);



execution_provenance_t* instantiate_execution_provenance(int include_optional) {
  execution_provenance_t* execution_provenance = NULL;
  if (include_optional) {
    execution_provenance = execution_provenance_create(
      contentservice_execution_provenance_INITIATION_Unknown,
      0,
      contentservice_execution_provenance_ONBEHALFOFACTORKIND_Human,
      "0",
      "0",
      56
    );
  } else {
    execution_provenance = execution_provenance_create(
      contentservice_execution_provenance_INITIATION_Unknown,
      0,
      contentservice_execution_provenance_ONBEHALFOFACTORKIND_Human,
      "0",
      "0",
      56
    );
  }

  return execution_provenance;
}


#ifdef execution_provenance_MAIN

void test_execution_provenance(int include_optional) {
    execution_provenance_t* execution_provenance_1 = instantiate_execution_provenance(include_optional);

	cJSON* jsonexecution_provenance_1 = execution_provenance_convertToJSON(execution_provenance_1);
	printf("execution_provenance :\n%s\n", cJSON_Print(jsonexecution_provenance_1));
	execution_provenance_t* execution_provenance_2 = execution_provenance_parseFromJSON(jsonexecution_provenance_1);
	cJSON* jsonexecution_provenance_2 = execution_provenance_convertToJSON(execution_provenance_2);
	printf("repeating execution_provenance:\n%s\n", cJSON_Print(jsonexecution_provenance_2));
}

int main() {
  test_execution_provenance(1);
  test_execution_provenance(0);

  printf("Hello world \n");
  return 0;
}

#endif // execution_provenance_MAIN
#endif // execution_provenance_TEST
