#ifndef required_skill_record_update_dto_TEST
#define required_skill_record_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define required_skill_record_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/required_skill_record_update_dto.h"
required_skill_record_update_dto_t* instantiate_required_skill_record_update_dto(int include_optional);



required_skill_record_update_dto_t* instantiate_required_skill_record_update_dto(int include_optional) {
  required_skill_record_update_dto_t* required_skill_record_update_dto = NULL;
  if (include_optional) {
    required_skill_record_update_dto = required_skill_record_update_dto_create(
      "0",
      "0",
      "0",
      56,
      1.337,
      hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_MustHave
    );
  } else {
    required_skill_record_update_dto = required_skill_record_update_dto_create(
      "0",
      "0",
      "0",
      56,
      1.337,
      hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_MustHave
    );
  }

  return required_skill_record_update_dto;
}


#ifdef required_skill_record_update_dto_MAIN

void test_required_skill_record_update_dto(int include_optional) {
    required_skill_record_update_dto_t* required_skill_record_update_dto_1 = instantiate_required_skill_record_update_dto(include_optional);

	cJSON* jsonrequired_skill_record_update_dto_1 = required_skill_record_update_dto_convertToJSON(required_skill_record_update_dto_1);
	printf("required_skill_record_update_dto :\n%s\n", cJSON_Print(jsonrequired_skill_record_update_dto_1));
	required_skill_record_update_dto_t* required_skill_record_update_dto_2 = required_skill_record_update_dto_parseFromJSON(jsonrequired_skill_record_update_dto_1);
	cJSON* jsonrequired_skill_record_update_dto_2 = required_skill_record_update_dto_convertToJSON(required_skill_record_update_dto_2);
	printf("repeating required_skill_record_update_dto:\n%s\n", cJSON_Print(jsonrequired_skill_record_update_dto_2));
}

int main() {
  test_required_skill_record_update_dto(1);
  test_required_skill_record_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // required_skill_record_update_dto_MAIN
#endif // required_skill_record_update_dto_TEST
