#ifndef ip_lookup_dto_collection_query_parameters_TEST
#define ip_lookup_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_lookup_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_lookup_dto_collection_query_parameters.h"
ip_lookup_dto_collection_query_parameters_t* instantiate_ip_lookup_dto_collection_query_parameters(int include_optional);



ip_lookup_dto_collection_query_parameters_t* instantiate_ip_lookup_dto_collection_query_parameters(int include_optional) {
  ip_lookup_dto_collection_query_parameters_t* ip_lookup_dto_collection_query_parameters = NULL;
  if (include_optional) {
    ip_lookup_dto_collection_query_parameters = ip_lookup_dto_collection_query_parameters_create(
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
    ip_lookup_dto_collection_query_parameters = ip_lookup_dto_collection_query_parameters_create(
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

  return ip_lookup_dto_collection_query_parameters;
}


#ifdef ip_lookup_dto_collection_query_parameters_MAIN

void test_ip_lookup_dto_collection_query_parameters(int include_optional) {
    ip_lookup_dto_collection_query_parameters_t* ip_lookup_dto_collection_query_parameters_1 = instantiate_ip_lookup_dto_collection_query_parameters(include_optional);

	cJSON* jsonip_lookup_dto_collection_query_parameters_1 = ip_lookup_dto_collection_query_parameters_convertToJSON(ip_lookup_dto_collection_query_parameters_1);
	printf("ip_lookup_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonip_lookup_dto_collection_query_parameters_1));
	ip_lookup_dto_collection_query_parameters_t* ip_lookup_dto_collection_query_parameters_2 = ip_lookup_dto_collection_query_parameters_parseFromJSON(jsonip_lookup_dto_collection_query_parameters_1);
	cJSON* jsonip_lookup_dto_collection_query_parameters_2 = ip_lookup_dto_collection_query_parameters_convertToJSON(ip_lookup_dto_collection_query_parameters_2);
	printf("repeating ip_lookup_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonip_lookup_dto_collection_query_parameters_2));
}

int main() {
  test_ip_lookup_dto_collection_query_parameters(1);
  test_ip_lookup_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_lookup_dto_collection_query_parameters_MAIN
#endif // ip_lookup_dto_collection_query_parameters_TEST
