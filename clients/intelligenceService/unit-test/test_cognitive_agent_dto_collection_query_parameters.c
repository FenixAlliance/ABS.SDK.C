#ifndef cognitive_agent_dto_collection_query_parameters_TEST
#define cognitive_agent_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cognitive_agent_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cognitive_agent_dto_collection_query_parameters.h"
cognitive_agent_dto_collection_query_parameters_t* instantiate_cognitive_agent_dto_collection_query_parameters(int include_optional);



cognitive_agent_dto_collection_query_parameters_t* instantiate_cognitive_agent_dto_collection_query_parameters(int include_optional) {
  cognitive_agent_dto_collection_query_parameters_t* cognitive_agent_dto_collection_query_parameters = NULL;
  if (include_optional) {
    cognitive_agent_dto_collection_query_parameters = cognitive_agent_dto_collection_query_parameters_create(
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
    cognitive_agent_dto_collection_query_parameters = cognitive_agent_dto_collection_query_parameters_create(
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

  return cognitive_agent_dto_collection_query_parameters;
}


#ifdef cognitive_agent_dto_collection_query_parameters_MAIN

void test_cognitive_agent_dto_collection_query_parameters(int include_optional) {
    cognitive_agent_dto_collection_query_parameters_t* cognitive_agent_dto_collection_query_parameters_1 = instantiate_cognitive_agent_dto_collection_query_parameters(include_optional);

	cJSON* jsoncognitive_agent_dto_collection_query_parameters_1 = cognitive_agent_dto_collection_query_parameters_convertToJSON(cognitive_agent_dto_collection_query_parameters_1);
	printf("cognitive_agent_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncognitive_agent_dto_collection_query_parameters_1));
	cognitive_agent_dto_collection_query_parameters_t* cognitive_agent_dto_collection_query_parameters_2 = cognitive_agent_dto_collection_query_parameters_parseFromJSON(jsoncognitive_agent_dto_collection_query_parameters_1);
	cJSON* jsoncognitive_agent_dto_collection_query_parameters_2 = cognitive_agent_dto_collection_query_parameters_convertToJSON(cognitive_agent_dto_collection_query_parameters_2);
	printf("repeating cognitive_agent_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncognitive_agent_dto_collection_query_parameters_2));
}

int main() {
  test_cognitive_agent_dto_collection_query_parameters(1);
  test_cognitive_agent_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // cognitive_agent_dto_collection_query_parameters_MAIN
#endif // cognitive_agent_dto_collection_query_parameters_TEST
