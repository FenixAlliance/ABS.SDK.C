#ifndef maintenance_visit_dto_list_envelope_TEST
#define maintenance_visit_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define maintenance_visit_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/maintenance_visit_dto_list_envelope.h"
maintenance_visit_dto_list_envelope_t* instantiate_maintenance_visit_dto_list_envelope(int include_optional);



maintenance_visit_dto_list_envelope_t* instantiate_maintenance_visit_dto_list_envelope(int include_optional) {
  maintenance_visit_dto_list_envelope_t* maintenance_visit_dto_list_envelope = NULL;
  if (include_optional) {
    maintenance_visit_dto_list_envelope = maintenance_visit_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    maintenance_visit_dto_list_envelope = maintenance_visit_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return maintenance_visit_dto_list_envelope;
}


#ifdef maintenance_visit_dto_list_envelope_MAIN

void test_maintenance_visit_dto_list_envelope(int include_optional) {
    maintenance_visit_dto_list_envelope_t* maintenance_visit_dto_list_envelope_1 = instantiate_maintenance_visit_dto_list_envelope(include_optional);

	cJSON* jsonmaintenance_visit_dto_list_envelope_1 = maintenance_visit_dto_list_envelope_convertToJSON(maintenance_visit_dto_list_envelope_1);
	printf("maintenance_visit_dto_list_envelope :\n%s\n", cJSON_Print(jsonmaintenance_visit_dto_list_envelope_1));
	maintenance_visit_dto_list_envelope_t* maintenance_visit_dto_list_envelope_2 = maintenance_visit_dto_list_envelope_parseFromJSON(jsonmaintenance_visit_dto_list_envelope_1);
	cJSON* jsonmaintenance_visit_dto_list_envelope_2 = maintenance_visit_dto_list_envelope_convertToJSON(maintenance_visit_dto_list_envelope_2);
	printf("repeating maintenance_visit_dto_list_envelope:\n%s\n", cJSON_Print(jsonmaintenance_visit_dto_list_envelope_2));
}

int main() {
  test_maintenance_visit_dto_list_envelope(1);
  test_maintenance_visit_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // maintenance_visit_dto_list_envelope_MAIN
#endif // maintenance_visit_dto_list_envelope_TEST
