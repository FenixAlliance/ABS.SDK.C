#ifndef seaway_bill_dto_collection_query_parameters_TEST
#define seaway_bill_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define seaway_bill_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/seaway_bill_dto_collection_query_parameters.h"
seaway_bill_dto_collection_query_parameters_t* instantiate_seaway_bill_dto_collection_query_parameters(int include_optional);



seaway_bill_dto_collection_query_parameters_t* instantiate_seaway_bill_dto_collection_query_parameters(int include_optional) {
  seaway_bill_dto_collection_query_parameters_t* seaway_bill_dto_collection_query_parameters = NULL;
  if (include_optional) {
    seaway_bill_dto_collection_query_parameters = seaway_bill_dto_collection_query_parameters_create(
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
    seaway_bill_dto_collection_query_parameters = seaway_bill_dto_collection_query_parameters_create(
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

  return seaway_bill_dto_collection_query_parameters;
}


#ifdef seaway_bill_dto_collection_query_parameters_MAIN

void test_seaway_bill_dto_collection_query_parameters(int include_optional) {
    seaway_bill_dto_collection_query_parameters_t* seaway_bill_dto_collection_query_parameters_1 = instantiate_seaway_bill_dto_collection_query_parameters(include_optional);

	cJSON* jsonseaway_bill_dto_collection_query_parameters_1 = seaway_bill_dto_collection_query_parameters_convertToJSON(seaway_bill_dto_collection_query_parameters_1);
	printf("seaway_bill_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonseaway_bill_dto_collection_query_parameters_1));
	seaway_bill_dto_collection_query_parameters_t* seaway_bill_dto_collection_query_parameters_2 = seaway_bill_dto_collection_query_parameters_parseFromJSON(jsonseaway_bill_dto_collection_query_parameters_1);
	cJSON* jsonseaway_bill_dto_collection_query_parameters_2 = seaway_bill_dto_collection_query_parameters_convertToJSON(seaway_bill_dto_collection_query_parameters_2);
	printf("repeating seaway_bill_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonseaway_bill_dto_collection_query_parameters_2));
}

int main() {
  test_seaway_bill_dto_collection_query_parameters(1);
  test_seaway_bill_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // seaway_bill_dto_collection_query_parameters_MAIN
#endif // seaway_bill_dto_collection_query_parameters_TEST
