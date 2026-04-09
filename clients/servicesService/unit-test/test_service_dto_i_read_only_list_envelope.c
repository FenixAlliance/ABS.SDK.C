#ifndef service_dto_i_read_only_list_envelope_TEST
#define service_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_dto_i_read_only_list_envelope.h"
service_dto_i_read_only_list_envelope_t* instantiate_service_dto_i_read_only_list_envelope(int include_optional);



service_dto_i_read_only_list_envelope_t* instantiate_service_dto_i_read_only_list_envelope(int include_optional) {
  service_dto_i_read_only_list_envelope_t* service_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    service_dto_i_read_only_list_envelope = service_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    service_dto_i_read_only_list_envelope = service_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return service_dto_i_read_only_list_envelope;
}


#ifdef service_dto_i_read_only_list_envelope_MAIN

void test_service_dto_i_read_only_list_envelope(int include_optional) {
    service_dto_i_read_only_list_envelope_t* service_dto_i_read_only_list_envelope_1 = instantiate_service_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonservice_dto_i_read_only_list_envelope_1 = service_dto_i_read_only_list_envelope_convertToJSON(service_dto_i_read_only_list_envelope_1);
	printf("service_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonservice_dto_i_read_only_list_envelope_1));
	service_dto_i_read_only_list_envelope_t* service_dto_i_read_only_list_envelope_2 = service_dto_i_read_only_list_envelope_parseFromJSON(jsonservice_dto_i_read_only_list_envelope_1);
	cJSON* jsonservice_dto_i_read_only_list_envelope_2 = service_dto_i_read_only_list_envelope_convertToJSON(service_dto_i_read_only_list_envelope_2);
	printf("repeating service_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonservice_dto_i_read_only_list_envelope_2));
}

int main() {
  test_service_dto_i_read_only_list_envelope(1);
  test_service_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_dto_i_read_only_list_envelope_MAIN
#endif // service_dto_i_read_only_list_envelope_TEST
