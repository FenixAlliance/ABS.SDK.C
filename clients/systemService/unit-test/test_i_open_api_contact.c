#ifndef i_open_api_contact_TEST
#define i_open_api_contact_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define i_open_api_contact_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/i_open_api_contact.h"
i_open_api_contact_t* instantiate_i_open_api_contact(int include_optional);



i_open_api_contact_t* instantiate_i_open_api_contact(int include_optional) {
  i_open_api_contact_t* i_open_api_contact = NULL;
  if (include_optional) {
    i_open_api_contact = i_open_api_contact_create(
      "0",
      "0",
      "0"
    );
  } else {
    i_open_api_contact = i_open_api_contact_create(
      "0",
      "0",
      "0"
    );
  }

  return i_open_api_contact;
}


#ifdef i_open_api_contact_MAIN

void test_i_open_api_contact(int include_optional) {
    i_open_api_contact_t* i_open_api_contact_1 = instantiate_i_open_api_contact(include_optional);

	cJSON* jsoni_open_api_contact_1 = i_open_api_contact_convertToJSON(i_open_api_contact_1);
	printf("i_open_api_contact :\n%s\n", cJSON_Print(jsoni_open_api_contact_1));
	i_open_api_contact_t* i_open_api_contact_2 = i_open_api_contact_parseFromJSON(jsoni_open_api_contact_1);
	cJSON* jsoni_open_api_contact_2 = i_open_api_contact_convertToJSON(i_open_api_contact_2);
	printf("repeating i_open_api_contact:\n%s\n", cJSON_Print(jsoni_open_api_contact_2));
}

int main() {
  test_i_open_api_contact(1);
  test_i_open_api_contact(0);

  printf("Hello world \n");
  return 0;
}

#endif // i_open_api_contact_MAIN
#endif // i_open_api_contact_TEST
