#ifndef execution_context_envelope_TEST
#define execution_context_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define execution_context_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/execution_context_envelope.h"
execution_context_envelope_t* instantiate_execution_context_envelope(int include_optional);

#include "test_execution_context.c"


execution_context_envelope_t* instantiate_execution_context_envelope(int include_optional) {
  execution_context_envelope_t* execution_context_envelope = NULL;
  if (include_optional) {
    execution_context_envelope = execution_context_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_execution_context(0)
    );
  } else {
    execution_context_envelope = execution_context_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      NULL
    );
  }

  return execution_context_envelope;
}


#ifdef execution_context_envelope_MAIN

void test_execution_context_envelope(int include_optional) {
    execution_context_envelope_t* execution_context_envelope_1 = instantiate_execution_context_envelope(include_optional);

	cJSON* jsonexecution_context_envelope_1 = execution_context_envelope_convertToJSON(execution_context_envelope_1);
	printf("execution_context_envelope :\n%s\n", cJSON_Print(jsonexecution_context_envelope_1));
	execution_context_envelope_t* execution_context_envelope_2 = execution_context_envelope_parseFromJSON(jsonexecution_context_envelope_1);
	cJSON* jsonexecution_context_envelope_2 = execution_context_envelope_convertToJSON(execution_context_envelope_2);
	printf("repeating execution_context_envelope:\n%s\n", cJSON_Print(jsonexecution_context_envelope_2));
}

int main() {
  test_execution_context_envelope(1);
  test_execution_context_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // execution_context_envelope_MAIN
#endif // execution_context_envelope_TEST
