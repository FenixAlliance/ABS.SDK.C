#ifndef required_skill_record_dto_collection_query_parameters_TEST
#define required_skill_record_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define required_skill_record_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/required_skill_record_dto_collection_query_parameters.h"
required_skill_record_dto_collection_query_parameters_t* instantiate_required_skill_record_dto_collection_query_parameters(int include_optional);



required_skill_record_dto_collection_query_parameters_t* instantiate_required_skill_record_dto_collection_query_parameters(int include_optional) {
  required_skill_record_dto_collection_query_parameters_t* required_skill_record_dto_collection_query_parameters = NULL;
  if (include_optional) {
    required_skill_record_dto_collection_query_parameters = required_skill_record_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    required_skill_record_dto_collection_query_parameters = required_skill_record_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return required_skill_record_dto_collection_query_parameters;
}


#ifdef required_skill_record_dto_collection_query_parameters_MAIN

void test_required_skill_record_dto_collection_query_parameters(int include_optional) {
    required_skill_record_dto_collection_query_parameters_t* required_skill_record_dto_collection_query_parameters_1 = instantiate_required_skill_record_dto_collection_query_parameters(include_optional);

	cJSON* jsonrequired_skill_record_dto_collection_query_parameters_1 = required_skill_record_dto_collection_query_parameters_convertToJSON(required_skill_record_dto_collection_query_parameters_1);
	printf("required_skill_record_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonrequired_skill_record_dto_collection_query_parameters_1));
	required_skill_record_dto_collection_query_parameters_t* required_skill_record_dto_collection_query_parameters_2 = required_skill_record_dto_collection_query_parameters_parseFromJSON(jsonrequired_skill_record_dto_collection_query_parameters_1);
	cJSON* jsonrequired_skill_record_dto_collection_query_parameters_2 = required_skill_record_dto_collection_query_parameters_convertToJSON(required_skill_record_dto_collection_query_parameters_2);
	printf("repeating required_skill_record_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonrequired_skill_record_dto_collection_query_parameters_2));
}

int main() {
  test_required_skill_record_dto_collection_query_parameters(1);
  test_required_skill_record_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // required_skill_record_dto_collection_query_parameters_MAIN
#endif // required_skill_record_dto_collection_query_parameters_TEST
