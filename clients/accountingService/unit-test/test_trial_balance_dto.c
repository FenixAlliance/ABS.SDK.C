#ifndef trial_balance_dto_TEST
#define trial_balance_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trial_balance_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trial_balance_dto.h"
trial_balance_dto_t* instantiate_trial_balance_dto(int include_optional);



trial_balance_dto_t* instantiate_trial_balance_dto(int include_optional) {
  trial_balance_dto_t* trial_balance_dto = NULL;
  if (include_optional) {
    trial_balance_dto = trial_balance_dto_create(
      "0",
      "0",
      "0",
      list_createList(),
      1.337,
      1.337,
      1
    );
  } else {
    trial_balance_dto = trial_balance_dto_create(
      "0",
      "0",
      "0",
      list_createList(),
      1.337,
      1.337,
      1
    );
  }

  return trial_balance_dto;
}


#ifdef trial_balance_dto_MAIN

void test_trial_balance_dto(int include_optional) {
    trial_balance_dto_t* trial_balance_dto_1 = instantiate_trial_balance_dto(include_optional);

	cJSON* jsontrial_balance_dto_1 = trial_balance_dto_convertToJSON(trial_balance_dto_1);
	printf("trial_balance_dto :\n%s\n", cJSON_Print(jsontrial_balance_dto_1));
	trial_balance_dto_t* trial_balance_dto_2 = trial_balance_dto_parseFromJSON(jsontrial_balance_dto_1);
	cJSON* jsontrial_balance_dto_2 = trial_balance_dto_convertToJSON(trial_balance_dto_2);
	printf("repeating trial_balance_dto:\n%s\n", cJSON_Print(jsontrial_balance_dto_2));
}

int main() {
  test_trial_balance_dto(1);
  test_trial_balance_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // trial_balance_dto_MAIN
#endif // trial_balance_dto_TEST
