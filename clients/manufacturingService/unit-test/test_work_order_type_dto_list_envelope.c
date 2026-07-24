#ifndef work_order_type_dto_list_envelope_TEST
#define work_order_type_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define work_order_type_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/work_order_type_dto_list_envelope.h"
work_order_type_dto_list_envelope_t* instantiate_work_order_type_dto_list_envelope(int include_optional);



work_order_type_dto_list_envelope_t* instantiate_work_order_type_dto_list_envelope(int include_optional) {
  work_order_type_dto_list_envelope_t* work_order_type_dto_list_envelope = NULL;
  if (include_optional) {
    work_order_type_dto_list_envelope = work_order_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    work_order_type_dto_list_envelope = work_order_type_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return work_order_type_dto_list_envelope;
}


#ifdef work_order_type_dto_list_envelope_MAIN

void test_work_order_type_dto_list_envelope(int include_optional) {
    work_order_type_dto_list_envelope_t* work_order_type_dto_list_envelope_1 = instantiate_work_order_type_dto_list_envelope(include_optional);

	cJSON* jsonwork_order_type_dto_list_envelope_1 = work_order_type_dto_list_envelope_convertToJSON(work_order_type_dto_list_envelope_1);
	printf("work_order_type_dto_list_envelope :\n%s\n", cJSON_Print(jsonwork_order_type_dto_list_envelope_1));
	work_order_type_dto_list_envelope_t* work_order_type_dto_list_envelope_2 = work_order_type_dto_list_envelope_parseFromJSON(jsonwork_order_type_dto_list_envelope_1);
	cJSON* jsonwork_order_type_dto_list_envelope_2 = work_order_type_dto_list_envelope_convertToJSON(work_order_type_dto_list_envelope_2);
	printf("repeating work_order_type_dto_list_envelope:\n%s\n", cJSON_Print(jsonwork_order_type_dto_list_envelope_2));
}

int main() {
  test_work_order_type_dto_list_envelope(1);
  test_work_order_type_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // work_order_type_dto_list_envelope_MAIN
#endif // work_order_type_dto_list_envelope_TEST
