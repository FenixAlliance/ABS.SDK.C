#ifndef item_question_dto_collection_query_parameters_TEST
#define item_question_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define item_question_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/item_question_dto_collection_query_parameters.h"
item_question_dto_collection_query_parameters_t* instantiate_item_question_dto_collection_query_parameters(int include_optional);



item_question_dto_collection_query_parameters_t* instantiate_item_question_dto_collection_query_parameters(int include_optional) {
  item_question_dto_collection_query_parameters_t* item_question_dto_collection_query_parameters = NULL;
  if (include_optional) {
    item_question_dto_collection_query_parameters = item_question_dto_collection_query_parameters_create(
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
    item_question_dto_collection_query_parameters = item_question_dto_collection_query_parameters_create(
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

  return item_question_dto_collection_query_parameters;
}


#ifdef item_question_dto_collection_query_parameters_MAIN

void test_item_question_dto_collection_query_parameters(int include_optional) {
    item_question_dto_collection_query_parameters_t* item_question_dto_collection_query_parameters_1 = instantiate_item_question_dto_collection_query_parameters(include_optional);

	cJSON* jsonitem_question_dto_collection_query_parameters_1 = item_question_dto_collection_query_parameters_convertToJSON(item_question_dto_collection_query_parameters_1);
	printf("item_question_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonitem_question_dto_collection_query_parameters_1));
	item_question_dto_collection_query_parameters_t* item_question_dto_collection_query_parameters_2 = item_question_dto_collection_query_parameters_parseFromJSON(jsonitem_question_dto_collection_query_parameters_1);
	cJSON* jsonitem_question_dto_collection_query_parameters_2 = item_question_dto_collection_query_parameters_convertToJSON(item_question_dto_collection_query_parameters_2);
	printf("repeating item_question_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonitem_question_dto_collection_query_parameters_2));
}

int main() {
  test_item_question_dto_collection_query_parameters(1);
  test_item_question_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // item_question_dto_collection_query_parameters_MAIN
#endif // item_question_dto_collection_query_parameters_TEST
