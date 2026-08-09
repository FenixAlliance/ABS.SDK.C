#ifndef training_program_event_dto_collection_query_parameters_TEST
#define training_program_event_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define training_program_event_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/training_program_event_dto_collection_query_parameters.h"
training_program_event_dto_collection_query_parameters_t* instantiate_training_program_event_dto_collection_query_parameters(int include_optional);



training_program_event_dto_collection_query_parameters_t* instantiate_training_program_event_dto_collection_query_parameters(int include_optional) {
  training_program_event_dto_collection_query_parameters_t* training_program_event_dto_collection_query_parameters = NULL;
  if (include_optional) {
    training_program_event_dto_collection_query_parameters = training_program_event_dto_collection_query_parameters_create(
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
    training_program_event_dto_collection_query_parameters = training_program_event_dto_collection_query_parameters_create(
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

  return training_program_event_dto_collection_query_parameters;
}


#ifdef training_program_event_dto_collection_query_parameters_MAIN

void test_training_program_event_dto_collection_query_parameters(int include_optional) {
    training_program_event_dto_collection_query_parameters_t* training_program_event_dto_collection_query_parameters_1 = instantiate_training_program_event_dto_collection_query_parameters(include_optional);

	cJSON* jsontraining_program_event_dto_collection_query_parameters_1 = training_program_event_dto_collection_query_parameters_convertToJSON(training_program_event_dto_collection_query_parameters_1);
	printf("training_program_event_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsontraining_program_event_dto_collection_query_parameters_1));
	training_program_event_dto_collection_query_parameters_t* training_program_event_dto_collection_query_parameters_2 = training_program_event_dto_collection_query_parameters_parseFromJSON(jsontraining_program_event_dto_collection_query_parameters_1);
	cJSON* jsontraining_program_event_dto_collection_query_parameters_2 = training_program_event_dto_collection_query_parameters_convertToJSON(training_program_event_dto_collection_query_parameters_2);
	printf("repeating training_program_event_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsontraining_program_event_dto_collection_query_parameters_2));
}

int main() {
  test_training_program_event_dto_collection_query_parameters(1);
  test_training_program_event_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // training_program_event_dto_collection_query_parameters_MAIN
#endif // training_program_event_dto_collection_query_parameters_TEST
