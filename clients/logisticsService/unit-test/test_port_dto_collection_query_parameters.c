#ifndef port_dto_collection_query_parameters_TEST
#define port_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define port_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/port_dto_collection_query_parameters.h"
port_dto_collection_query_parameters_t* instantiate_port_dto_collection_query_parameters(int include_optional);



port_dto_collection_query_parameters_t* instantiate_port_dto_collection_query_parameters(int include_optional) {
  port_dto_collection_query_parameters_t* port_dto_collection_query_parameters = NULL;
  if (include_optional) {
    port_dto_collection_query_parameters = port_dto_collection_query_parameters_create(
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
    port_dto_collection_query_parameters = port_dto_collection_query_parameters_create(
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

  return port_dto_collection_query_parameters;
}


#ifdef port_dto_collection_query_parameters_MAIN

void test_port_dto_collection_query_parameters(int include_optional) {
    port_dto_collection_query_parameters_t* port_dto_collection_query_parameters_1 = instantiate_port_dto_collection_query_parameters(include_optional);

	cJSON* jsonport_dto_collection_query_parameters_1 = port_dto_collection_query_parameters_convertToJSON(port_dto_collection_query_parameters_1);
	printf("port_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonport_dto_collection_query_parameters_1));
	port_dto_collection_query_parameters_t* port_dto_collection_query_parameters_2 = port_dto_collection_query_parameters_parseFromJSON(jsonport_dto_collection_query_parameters_1);
	cJSON* jsonport_dto_collection_query_parameters_2 = port_dto_collection_query_parameters_convertToJSON(port_dto_collection_query_parameters_2);
	printf("repeating port_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonport_dto_collection_query_parameters_2));
}

int main() {
  test_port_dto_collection_query_parameters(1);
  test_port_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // port_dto_collection_query_parameters_MAIN
#endif // port_dto_collection_query_parameters_TEST
