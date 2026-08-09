#ifndef contacts_group_dto_collection_query_parameters_TEST
#define contacts_group_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacts_group_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacts_group_dto_collection_query_parameters.h"
contacts_group_dto_collection_query_parameters_t* instantiate_contacts_group_dto_collection_query_parameters(int include_optional);



contacts_group_dto_collection_query_parameters_t* instantiate_contacts_group_dto_collection_query_parameters(int include_optional) {
  contacts_group_dto_collection_query_parameters_t* contacts_group_dto_collection_query_parameters = NULL;
  if (include_optional) {
    contacts_group_dto_collection_query_parameters = contacts_group_dto_collection_query_parameters_create(
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
    contacts_group_dto_collection_query_parameters = contacts_group_dto_collection_query_parameters_create(
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

  return contacts_group_dto_collection_query_parameters;
}


#ifdef contacts_group_dto_collection_query_parameters_MAIN

void test_contacts_group_dto_collection_query_parameters(int include_optional) {
    contacts_group_dto_collection_query_parameters_t* contacts_group_dto_collection_query_parameters_1 = instantiate_contacts_group_dto_collection_query_parameters(include_optional);

	cJSON* jsoncontacts_group_dto_collection_query_parameters_1 = contacts_group_dto_collection_query_parameters_convertToJSON(contacts_group_dto_collection_query_parameters_1);
	printf("contacts_group_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsoncontacts_group_dto_collection_query_parameters_1));
	contacts_group_dto_collection_query_parameters_t* contacts_group_dto_collection_query_parameters_2 = contacts_group_dto_collection_query_parameters_parseFromJSON(jsoncontacts_group_dto_collection_query_parameters_1);
	cJSON* jsoncontacts_group_dto_collection_query_parameters_2 = contacts_group_dto_collection_query_parameters_convertToJSON(contacts_group_dto_collection_query_parameters_2);
	printf("repeating contacts_group_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsoncontacts_group_dto_collection_query_parameters_2));
}

int main() {
  test_contacts_group_dto_collection_query_parameters(1);
  test_contacts_group_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacts_group_dto_collection_query_parameters_MAIN
#endif // contacts_group_dto_collection_query_parameters_TEST
