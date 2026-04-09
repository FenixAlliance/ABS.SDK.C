#ifndef studio_module_list_envelope_TEST
#define studio_module_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define studio_module_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/studio_module_list_envelope.h"
studio_module_list_envelope_t* instantiate_studio_module_list_envelope(int include_optional);



studio_module_list_envelope_t* instantiate_studio_module_list_envelope(int include_optional) {
  studio_module_list_envelope_t* studio_module_list_envelope = NULL;
  if (include_optional) {
    studio_module_list_envelope = studio_module_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    studio_module_list_envelope = studio_module_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return studio_module_list_envelope;
}


#ifdef studio_module_list_envelope_MAIN

void test_studio_module_list_envelope(int include_optional) {
    studio_module_list_envelope_t* studio_module_list_envelope_1 = instantiate_studio_module_list_envelope(include_optional);

	cJSON* jsonstudio_module_list_envelope_1 = studio_module_list_envelope_convertToJSON(studio_module_list_envelope_1);
	printf("studio_module_list_envelope :\n%s\n", cJSON_Print(jsonstudio_module_list_envelope_1));
	studio_module_list_envelope_t* studio_module_list_envelope_2 = studio_module_list_envelope_parseFromJSON(jsonstudio_module_list_envelope_1);
	cJSON* jsonstudio_module_list_envelope_2 = studio_module_list_envelope_convertToJSON(studio_module_list_envelope_2);
	printf("repeating studio_module_list_envelope:\n%s\n", cJSON_Print(jsonstudio_module_list_envelope_2));
}

int main() {
  test_studio_module_list_envelope(1);
  test_studio_module_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // studio_module_list_envelope_MAIN
#endif // studio_module_list_envelope_TEST
