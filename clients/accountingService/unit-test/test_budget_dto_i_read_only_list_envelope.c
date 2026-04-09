#ifndef budget_dto_i_read_only_list_envelope_TEST
#define budget_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define budget_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/budget_dto_i_read_only_list_envelope.h"
budget_dto_i_read_only_list_envelope_t* instantiate_budget_dto_i_read_only_list_envelope(int include_optional);



budget_dto_i_read_only_list_envelope_t* instantiate_budget_dto_i_read_only_list_envelope(int include_optional) {
  budget_dto_i_read_only_list_envelope_t* budget_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    budget_dto_i_read_only_list_envelope = budget_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    budget_dto_i_read_only_list_envelope = budget_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return budget_dto_i_read_only_list_envelope;
}


#ifdef budget_dto_i_read_only_list_envelope_MAIN

void test_budget_dto_i_read_only_list_envelope(int include_optional) {
    budget_dto_i_read_only_list_envelope_t* budget_dto_i_read_only_list_envelope_1 = instantiate_budget_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonbudget_dto_i_read_only_list_envelope_1 = budget_dto_i_read_only_list_envelope_convertToJSON(budget_dto_i_read_only_list_envelope_1);
	printf("budget_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonbudget_dto_i_read_only_list_envelope_1));
	budget_dto_i_read_only_list_envelope_t* budget_dto_i_read_only_list_envelope_2 = budget_dto_i_read_only_list_envelope_parseFromJSON(jsonbudget_dto_i_read_only_list_envelope_1);
	cJSON* jsonbudget_dto_i_read_only_list_envelope_2 = budget_dto_i_read_only_list_envelope_convertToJSON(budget_dto_i_read_only_list_envelope_2);
	printf("repeating budget_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonbudget_dto_i_read_only_list_envelope_2));
}

int main() {
  test_budget_dto_i_read_only_list_envelope(1);
  test_budget_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // budget_dto_i_read_only_list_envelope_MAIN
#endif // budget_dto_i_read_only_list_envelope_TEST
