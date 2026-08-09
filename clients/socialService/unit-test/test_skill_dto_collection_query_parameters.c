#ifndef skill_dto_collection_query_parameters_TEST
#define skill_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define skill_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/skill_dto_collection_query_parameters.h"
skill_dto_collection_query_parameters_t* instantiate_skill_dto_collection_query_parameters(int include_optional);



skill_dto_collection_query_parameters_t* instantiate_skill_dto_collection_query_parameters(int include_optional) {
  skill_dto_collection_query_parameters_t* skill_dto_collection_query_parameters = NULL;
  if (include_optional) {
    skill_dto_collection_query_parameters = skill_dto_collection_query_parameters_create(
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
    skill_dto_collection_query_parameters = skill_dto_collection_query_parameters_create(
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

  return skill_dto_collection_query_parameters;
}


#ifdef skill_dto_collection_query_parameters_MAIN

void test_skill_dto_collection_query_parameters(int include_optional) {
    skill_dto_collection_query_parameters_t* skill_dto_collection_query_parameters_1 = instantiate_skill_dto_collection_query_parameters(include_optional);

	cJSON* jsonskill_dto_collection_query_parameters_1 = skill_dto_collection_query_parameters_convertToJSON(skill_dto_collection_query_parameters_1);
	printf("skill_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonskill_dto_collection_query_parameters_1));
	skill_dto_collection_query_parameters_t* skill_dto_collection_query_parameters_2 = skill_dto_collection_query_parameters_parseFromJSON(jsonskill_dto_collection_query_parameters_1);
	cJSON* jsonskill_dto_collection_query_parameters_2 = skill_dto_collection_query_parameters_convertToJSON(skill_dto_collection_query_parameters_2);
	printf("repeating skill_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonskill_dto_collection_query_parameters_2));
}

int main() {
  test_skill_dto_collection_query_parameters(1);
  test_skill_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // skill_dto_collection_query_parameters_MAIN
#endif // skill_dto_collection_query_parameters_TEST
