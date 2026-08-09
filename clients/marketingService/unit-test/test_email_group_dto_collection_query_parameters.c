#ifndef email_group_dto_collection_query_parameters_TEST
#define email_group_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_group_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_group_dto_collection_query_parameters.h"
email_group_dto_collection_query_parameters_t* instantiate_email_group_dto_collection_query_parameters(int include_optional);



email_group_dto_collection_query_parameters_t* instantiate_email_group_dto_collection_query_parameters(int include_optional) {
  email_group_dto_collection_query_parameters_t* email_group_dto_collection_query_parameters = NULL;
  if (include_optional) {
    email_group_dto_collection_query_parameters = email_group_dto_collection_query_parameters_create(
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
    email_group_dto_collection_query_parameters = email_group_dto_collection_query_parameters_create(
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

  return email_group_dto_collection_query_parameters;
}


#ifdef email_group_dto_collection_query_parameters_MAIN

void test_email_group_dto_collection_query_parameters(int include_optional) {
    email_group_dto_collection_query_parameters_t* email_group_dto_collection_query_parameters_1 = instantiate_email_group_dto_collection_query_parameters(include_optional);

	cJSON* jsonemail_group_dto_collection_query_parameters_1 = email_group_dto_collection_query_parameters_convertToJSON(email_group_dto_collection_query_parameters_1);
	printf("email_group_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonemail_group_dto_collection_query_parameters_1));
	email_group_dto_collection_query_parameters_t* email_group_dto_collection_query_parameters_2 = email_group_dto_collection_query_parameters_parseFromJSON(jsonemail_group_dto_collection_query_parameters_1);
	cJSON* jsonemail_group_dto_collection_query_parameters_2 = email_group_dto_collection_query_parameters_convertToJSON(email_group_dto_collection_query_parameters_2);
	printf("repeating email_group_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonemail_group_dto_collection_query_parameters_2));
}

int main() {
  test_email_group_dto_collection_query_parameters(1);
  test_email_group_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_group_dto_collection_query_parameters_MAIN
#endif // email_group_dto_collection_query_parameters_TEST
