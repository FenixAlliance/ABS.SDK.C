#ifndef location_dto_i_read_only_list_envelope_TEST
#define location_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_dto_i_read_only_list_envelope.h"
location_dto_i_read_only_list_envelope_t* instantiate_location_dto_i_read_only_list_envelope(int include_optional);



location_dto_i_read_only_list_envelope_t* instantiate_location_dto_i_read_only_list_envelope(int include_optional) {
  location_dto_i_read_only_list_envelope_t* location_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    location_dto_i_read_only_list_envelope = location_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    location_dto_i_read_only_list_envelope = location_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return location_dto_i_read_only_list_envelope;
}


#ifdef location_dto_i_read_only_list_envelope_MAIN

void test_location_dto_i_read_only_list_envelope(int include_optional) {
    location_dto_i_read_only_list_envelope_t* location_dto_i_read_only_list_envelope_1 = instantiate_location_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonlocation_dto_i_read_only_list_envelope_1 = location_dto_i_read_only_list_envelope_convertToJSON(location_dto_i_read_only_list_envelope_1);
	printf("location_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonlocation_dto_i_read_only_list_envelope_1));
	location_dto_i_read_only_list_envelope_t* location_dto_i_read_only_list_envelope_2 = location_dto_i_read_only_list_envelope_parseFromJSON(jsonlocation_dto_i_read_only_list_envelope_1);
	cJSON* jsonlocation_dto_i_read_only_list_envelope_2 = location_dto_i_read_only_list_envelope_convertToJSON(location_dto_i_read_only_list_envelope_2);
	printf("repeating location_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonlocation_dto_i_read_only_list_envelope_2));
}

int main() {
  test_location_dto_i_read_only_list_envelope(1);
  test_location_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_dto_i_read_only_list_envelope_MAIN
#endif // location_dto_i_read_only_list_envelope_TEST
