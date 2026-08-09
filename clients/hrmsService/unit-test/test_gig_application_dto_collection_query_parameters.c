#ifndef gig_application_dto_collection_query_parameters_TEST
#define gig_application_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gig_application_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gig_application_dto_collection_query_parameters.h"
gig_application_dto_collection_query_parameters_t* instantiate_gig_application_dto_collection_query_parameters(int include_optional);



gig_application_dto_collection_query_parameters_t* instantiate_gig_application_dto_collection_query_parameters(int include_optional) {
  gig_application_dto_collection_query_parameters_t* gig_application_dto_collection_query_parameters = NULL;
  if (include_optional) {
    gig_application_dto_collection_query_parameters = gig_application_dto_collection_query_parameters_create(
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
    gig_application_dto_collection_query_parameters = gig_application_dto_collection_query_parameters_create(
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

  return gig_application_dto_collection_query_parameters;
}


#ifdef gig_application_dto_collection_query_parameters_MAIN

void test_gig_application_dto_collection_query_parameters(int include_optional) {
    gig_application_dto_collection_query_parameters_t* gig_application_dto_collection_query_parameters_1 = instantiate_gig_application_dto_collection_query_parameters(include_optional);

	cJSON* jsongig_application_dto_collection_query_parameters_1 = gig_application_dto_collection_query_parameters_convertToJSON(gig_application_dto_collection_query_parameters_1);
	printf("gig_application_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsongig_application_dto_collection_query_parameters_1));
	gig_application_dto_collection_query_parameters_t* gig_application_dto_collection_query_parameters_2 = gig_application_dto_collection_query_parameters_parseFromJSON(jsongig_application_dto_collection_query_parameters_1);
	cJSON* jsongig_application_dto_collection_query_parameters_2 = gig_application_dto_collection_query_parameters_convertToJSON(gig_application_dto_collection_query_parameters_2);
	printf("repeating gig_application_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsongig_application_dto_collection_query_parameters_2));
}

int main() {
  test_gig_application_dto_collection_query_parameters(1);
  test_gig_application_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // gig_application_dto_collection_query_parameters_MAIN
#endif // gig_application_dto_collection_query_parameters_TEST
