#ifndef maintenance_visit_dto_collection_query_parameters_TEST
#define maintenance_visit_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define maintenance_visit_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/maintenance_visit_dto_collection_query_parameters.h"
maintenance_visit_dto_collection_query_parameters_t* instantiate_maintenance_visit_dto_collection_query_parameters(int include_optional);



maintenance_visit_dto_collection_query_parameters_t* instantiate_maintenance_visit_dto_collection_query_parameters(int include_optional) {
  maintenance_visit_dto_collection_query_parameters_t* maintenance_visit_dto_collection_query_parameters = NULL;
  if (include_optional) {
    maintenance_visit_dto_collection_query_parameters = maintenance_visit_dto_collection_query_parameters_create(
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
    maintenance_visit_dto_collection_query_parameters = maintenance_visit_dto_collection_query_parameters_create(
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

  return maintenance_visit_dto_collection_query_parameters;
}


#ifdef maintenance_visit_dto_collection_query_parameters_MAIN

void test_maintenance_visit_dto_collection_query_parameters(int include_optional) {
    maintenance_visit_dto_collection_query_parameters_t* maintenance_visit_dto_collection_query_parameters_1 = instantiate_maintenance_visit_dto_collection_query_parameters(include_optional);

	cJSON* jsonmaintenance_visit_dto_collection_query_parameters_1 = maintenance_visit_dto_collection_query_parameters_convertToJSON(maintenance_visit_dto_collection_query_parameters_1);
	printf("maintenance_visit_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonmaintenance_visit_dto_collection_query_parameters_1));
	maintenance_visit_dto_collection_query_parameters_t* maintenance_visit_dto_collection_query_parameters_2 = maintenance_visit_dto_collection_query_parameters_parseFromJSON(jsonmaintenance_visit_dto_collection_query_parameters_1);
	cJSON* jsonmaintenance_visit_dto_collection_query_parameters_2 = maintenance_visit_dto_collection_query_parameters_convertToJSON(maintenance_visit_dto_collection_query_parameters_2);
	printf("repeating maintenance_visit_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonmaintenance_visit_dto_collection_query_parameters_2));
}

int main() {
  test_maintenance_visit_dto_collection_query_parameters(1);
  test_maintenance_visit_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // maintenance_visit_dto_collection_query_parameters_MAIN
#endif // maintenance_visit_dto_collection_query_parameters_TEST
