#ifndef maintenance_visit_create_dto_TEST
#define maintenance_visit_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define maintenance_visit_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/maintenance_visit_create_dto.h"
maintenance_visit_create_dto_t* instantiate_maintenance_visit_create_dto(int include_optional);



maintenance_visit_create_dto_t* instantiate_maintenance_visit_create_dto(int include_optional) {
  maintenance_visit_create_dto_t* maintenance_visit_create_dto = NULL;
  if (include_optional) {
    maintenance_visit_create_dto = maintenance_visit_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    maintenance_visit_create_dto = maintenance_visit_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return maintenance_visit_create_dto;
}


#ifdef maintenance_visit_create_dto_MAIN

void test_maintenance_visit_create_dto(int include_optional) {
    maintenance_visit_create_dto_t* maintenance_visit_create_dto_1 = instantiate_maintenance_visit_create_dto(include_optional);

	cJSON* jsonmaintenance_visit_create_dto_1 = maintenance_visit_create_dto_convertToJSON(maintenance_visit_create_dto_1);
	printf("maintenance_visit_create_dto :\n%s\n", cJSON_Print(jsonmaintenance_visit_create_dto_1));
	maintenance_visit_create_dto_t* maintenance_visit_create_dto_2 = maintenance_visit_create_dto_parseFromJSON(jsonmaintenance_visit_create_dto_1);
	cJSON* jsonmaintenance_visit_create_dto_2 = maintenance_visit_create_dto_convertToJSON(maintenance_visit_create_dto_2);
	printf("repeating maintenance_visit_create_dto:\n%s\n", cJSON_Print(jsonmaintenance_visit_create_dto_2));
}

int main() {
  test_maintenance_visit_create_dto(1);
  test_maintenance_visit_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // maintenance_visit_create_dto_MAIN
#endif // maintenance_visit_create_dto_TEST
