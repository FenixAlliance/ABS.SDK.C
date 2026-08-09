#ifndef delivery_note_dto_collection_query_parameters_TEST
#define delivery_note_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delivery_note_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delivery_note_dto_collection_query_parameters.h"
delivery_note_dto_collection_query_parameters_t* instantiate_delivery_note_dto_collection_query_parameters(int include_optional);



delivery_note_dto_collection_query_parameters_t* instantiate_delivery_note_dto_collection_query_parameters(int include_optional) {
  delivery_note_dto_collection_query_parameters_t* delivery_note_dto_collection_query_parameters = NULL;
  if (include_optional) {
    delivery_note_dto_collection_query_parameters = delivery_note_dto_collection_query_parameters_create(
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
    delivery_note_dto_collection_query_parameters = delivery_note_dto_collection_query_parameters_create(
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

  return delivery_note_dto_collection_query_parameters;
}


#ifdef delivery_note_dto_collection_query_parameters_MAIN

void test_delivery_note_dto_collection_query_parameters(int include_optional) {
    delivery_note_dto_collection_query_parameters_t* delivery_note_dto_collection_query_parameters_1 = instantiate_delivery_note_dto_collection_query_parameters(include_optional);

	cJSON* jsondelivery_note_dto_collection_query_parameters_1 = delivery_note_dto_collection_query_parameters_convertToJSON(delivery_note_dto_collection_query_parameters_1);
	printf("delivery_note_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsondelivery_note_dto_collection_query_parameters_1));
	delivery_note_dto_collection_query_parameters_t* delivery_note_dto_collection_query_parameters_2 = delivery_note_dto_collection_query_parameters_parseFromJSON(jsondelivery_note_dto_collection_query_parameters_1);
	cJSON* jsondelivery_note_dto_collection_query_parameters_2 = delivery_note_dto_collection_query_parameters_convertToJSON(delivery_note_dto_collection_query_parameters_2);
	printf("repeating delivery_note_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsondelivery_note_dto_collection_query_parameters_2));
}

int main() {
  test_delivery_note_dto_collection_query_parameters(1);
  test_delivery_note_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // delivery_note_dto_collection_query_parameters_MAIN
#endif // delivery_note_dto_collection_query_parameters_TEST
