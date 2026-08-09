#ifndef contact_relation_dto_collection_query_parameters_TEST
#define contact_relation_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_relation_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_relation_dto_collection_query_parameters.h"
contact_relation_dto_collection_query_parameters_t* instantiate_contact_relation_dto_collection_query_parameters(int include_optional);



contact_relation_dto_collection_query_parameters_t* instantiate_contact_relation_dto_collection_query_parameters(int include_optional) {
  contact_relation_dto_collection_query_parameters_t* contact_relation_dto_collection_query_parameters = NULL;
  if (include_optional) {
    contact_relation_dto_collection_query_parameters = contact_relation_dto_collection_query_parameters_create(
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
    contact_relation_dto_collection_query_parameters = contact_relation_dto_collection_query_parameters_create(
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

  return contact_relation_dto_collection_query_parameters;
}


#ifdef contact_relation_dto_collection_query_parameters_MAIN

void test_contact_relation_dto_collection_query_parameters(int include_optional) {
    contact_relation_dto_collection_query_parameters_t* contact_relation_dto_collection_query_parameters_1 = instantiate_contact_relation_dto_collection_query_parameters(include_optional);

	cJSON* jsoncontact_relation_dto_collection_query_parameters_1 = contact_relation_dto_collection_query_parameters_convertToJSON(contact_relation_dto_collection_query_parameters_1);
	printf("contact_relation_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncontact_relation_dto_collection_query_parameters_1));
	contact_relation_dto_collection_query_parameters_t* contact_relation_dto_collection_query_parameters_2 = contact_relation_dto_collection_query_parameters_parseFromJSON(jsoncontact_relation_dto_collection_query_parameters_1);
	cJSON* jsoncontact_relation_dto_collection_query_parameters_2 = contact_relation_dto_collection_query_parameters_convertToJSON(contact_relation_dto_collection_query_parameters_2);
	printf("repeating contact_relation_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncontact_relation_dto_collection_query_parameters_2));
}

int main() {
  test_contact_relation_dto_collection_query_parameters(1);
  test_contact_relation_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_relation_dto_collection_query_parameters_MAIN
#endif // contact_relation_dto_collection_query_parameters_TEST
