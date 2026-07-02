#ifndef required_skill_record_dto_TEST
#define required_skill_record_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define required_skill_record_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/required_skill_record_dto.h"
required_skill_record_dto_t* instantiate_required_skill_record_dto(int include_optional);



required_skill_record_dto_t* instantiate_required_skill_record_dto(int include_optional) {
  required_skill_record_dto_t* required_skill_record_dto = NULL;
  if (include_optional) {
    required_skill_record_dto = required_skill_record_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      1.337,
      hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_MustHave,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    required_skill_record_dto = required_skill_record_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      1.337,
      hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_MustHave,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return required_skill_record_dto;
}


#ifdef required_skill_record_dto_MAIN

void test_required_skill_record_dto(int include_optional) {
    required_skill_record_dto_t* required_skill_record_dto_1 = instantiate_required_skill_record_dto(include_optional);

	cJSON* jsonrequired_skill_record_dto_1 = required_skill_record_dto_convertToJSON(required_skill_record_dto_1);
	printf("required_skill_record_dto :\n%s\n", cJSON_Print(jsonrequired_skill_record_dto_1));
	required_skill_record_dto_t* required_skill_record_dto_2 = required_skill_record_dto_parseFromJSON(jsonrequired_skill_record_dto_1);
	cJSON* jsonrequired_skill_record_dto_2 = required_skill_record_dto_convertToJSON(required_skill_record_dto_2);
	printf("repeating required_skill_record_dto:\n%s\n", cJSON_Print(jsonrequired_skill_record_dto_2));
}

int main() {
  test_required_skill_record_dto(1);
  test_required_skill_record_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // required_skill_record_dto_MAIN
#endif // required_skill_record_dto_TEST
