#ifndef application_principal_dto_list_envelope_TEST
#define application_principal_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define application_principal_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/application_principal_dto_list_envelope.h"
application_principal_dto_list_envelope_t* instantiate_application_principal_dto_list_envelope(int include_optional);



application_principal_dto_list_envelope_t* instantiate_application_principal_dto_list_envelope(int include_optional) {
  application_principal_dto_list_envelope_t* application_principal_dto_list_envelope = NULL;
  if (include_optional) {
    application_principal_dto_list_envelope = application_principal_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  } else {
    application_principal_dto_list_envelope = application_principal_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      list_createList(),
      "0",
      list_createList()
    );
  }

  return application_principal_dto_list_envelope;
}


#ifdef application_principal_dto_list_envelope_MAIN

void test_application_principal_dto_list_envelope(int include_optional) {
    application_principal_dto_list_envelope_t* application_principal_dto_list_envelope_1 = instantiate_application_principal_dto_list_envelope(include_optional);

	cJSON* jsonapplication_principal_dto_list_envelope_1 = application_principal_dto_list_envelope_convertToJSON(application_principal_dto_list_envelope_1);
	printf("application_principal_dto_list_envelope :\n%s\n", cJSON_Print(jsonapplication_principal_dto_list_envelope_1));
	application_principal_dto_list_envelope_t* application_principal_dto_list_envelope_2 = application_principal_dto_list_envelope_parseFromJSON(jsonapplication_principal_dto_list_envelope_1);
	cJSON* jsonapplication_principal_dto_list_envelope_2 = application_principal_dto_list_envelope_convertToJSON(application_principal_dto_list_envelope_2);
	printf("repeating application_principal_dto_list_envelope:\n%s\n", cJSON_Print(jsonapplication_principal_dto_list_envelope_2));
}

int main() {
  test_application_principal_dto_list_envelope(1);
  test_application_principal_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // application_principal_dto_list_envelope_MAIN
#endif // application_principal_dto_list_envelope_TEST
