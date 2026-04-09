#ifndef task_category_dto_list_envelope_TEST
#define task_category_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define task_category_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/task_category_dto_list_envelope.h"
task_category_dto_list_envelope_t* instantiate_task_category_dto_list_envelope(int include_optional);



task_category_dto_list_envelope_t* instantiate_task_category_dto_list_envelope(int include_optional) {
  task_category_dto_list_envelope_t* task_category_dto_list_envelope = NULL;
  if (include_optional) {
    task_category_dto_list_envelope = task_category_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    task_category_dto_list_envelope = task_category_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return task_category_dto_list_envelope;
}


#ifdef task_category_dto_list_envelope_MAIN

void test_task_category_dto_list_envelope(int include_optional) {
    task_category_dto_list_envelope_t* task_category_dto_list_envelope_1 = instantiate_task_category_dto_list_envelope(include_optional);

	cJSON* jsontask_category_dto_list_envelope_1 = task_category_dto_list_envelope_convertToJSON(task_category_dto_list_envelope_1);
	printf("task_category_dto_list_envelope :\n%s\n", cJSON_Print(jsontask_category_dto_list_envelope_1));
	task_category_dto_list_envelope_t* task_category_dto_list_envelope_2 = task_category_dto_list_envelope_parseFromJSON(jsontask_category_dto_list_envelope_1);
	cJSON* jsontask_category_dto_list_envelope_2 = task_category_dto_list_envelope_convertToJSON(task_category_dto_list_envelope_2);
	printf("repeating task_category_dto_list_envelope:\n%s\n", cJSON_Print(jsontask_category_dto_list_envelope_2));
}

int main() {
  test_task_category_dto_list_envelope(1);
  test_task_category_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // task_category_dto_list_envelope_MAIN
#endif // task_category_dto_list_envelope_TEST
