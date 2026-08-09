#ifndef journal_type_dto_collection_query_parameters_TEST
#define journal_type_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define journal_type_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/journal_type_dto_collection_query_parameters.h"
journal_type_dto_collection_query_parameters_t* instantiate_journal_type_dto_collection_query_parameters(int include_optional);



journal_type_dto_collection_query_parameters_t* instantiate_journal_type_dto_collection_query_parameters(int include_optional) {
  journal_type_dto_collection_query_parameters_t* journal_type_dto_collection_query_parameters = NULL;
  if (include_optional) {
    journal_type_dto_collection_query_parameters = journal_type_dto_collection_query_parameters_create(
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
    journal_type_dto_collection_query_parameters = journal_type_dto_collection_query_parameters_create(
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

  return journal_type_dto_collection_query_parameters;
}


#ifdef journal_type_dto_collection_query_parameters_MAIN

void test_journal_type_dto_collection_query_parameters(int include_optional) {
    journal_type_dto_collection_query_parameters_t* journal_type_dto_collection_query_parameters_1 = instantiate_journal_type_dto_collection_query_parameters(include_optional);

	cJSON* jsonjournal_type_dto_collection_query_parameters_1 = journal_type_dto_collection_query_parameters_convertToJSON(journal_type_dto_collection_query_parameters_1);
	printf("journal_type_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonjournal_type_dto_collection_query_parameters_1));
	journal_type_dto_collection_query_parameters_t* journal_type_dto_collection_query_parameters_2 = journal_type_dto_collection_query_parameters_parseFromJSON(jsonjournal_type_dto_collection_query_parameters_1);
	cJSON* jsonjournal_type_dto_collection_query_parameters_2 = journal_type_dto_collection_query_parameters_convertToJSON(journal_type_dto_collection_query_parameters_2);
	printf("repeating journal_type_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonjournal_type_dto_collection_query_parameters_2));
}

int main() {
  test_journal_type_dto_collection_query_parameters(1);
  test_journal_type_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // journal_type_dto_collection_query_parameters_MAIN
#endif // journal_type_dto_collection_query_parameters_TEST
