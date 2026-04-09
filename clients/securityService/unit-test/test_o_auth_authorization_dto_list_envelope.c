#ifndef o_auth_authorization_dto_list_envelope_TEST
#define o_auth_authorization_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define o_auth_authorization_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/o_auth_authorization_dto_list_envelope.h"
o_auth_authorization_dto_list_envelope_t* instantiate_o_auth_authorization_dto_list_envelope(int include_optional);



o_auth_authorization_dto_list_envelope_t* instantiate_o_auth_authorization_dto_list_envelope(int include_optional) {
  o_auth_authorization_dto_list_envelope_t* o_auth_authorization_dto_list_envelope = NULL;
  if (include_optional) {
    o_auth_authorization_dto_list_envelope = o_auth_authorization_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    o_auth_authorization_dto_list_envelope = o_auth_authorization_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return o_auth_authorization_dto_list_envelope;
}


#ifdef o_auth_authorization_dto_list_envelope_MAIN

void test_o_auth_authorization_dto_list_envelope(int include_optional) {
    o_auth_authorization_dto_list_envelope_t* o_auth_authorization_dto_list_envelope_1 = instantiate_o_auth_authorization_dto_list_envelope(include_optional);

	cJSON* jsono_auth_authorization_dto_list_envelope_1 = o_auth_authorization_dto_list_envelope_convertToJSON(o_auth_authorization_dto_list_envelope_1);
	printf("o_auth_authorization_dto_list_envelope :\n%s\n", cJSON_Print(jsono_auth_authorization_dto_list_envelope_1));
	o_auth_authorization_dto_list_envelope_t* o_auth_authorization_dto_list_envelope_2 = o_auth_authorization_dto_list_envelope_parseFromJSON(jsono_auth_authorization_dto_list_envelope_1);
	cJSON* jsono_auth_authorization_dto_list_envelope_2 = o_auth_authorization_dto_list_envelope_convertToJSON(o_auth_authorization_dto_list_envelope_2);
	printf("repeating o_auth_authorization_dto_list_envelope:\n%s\n", cJSON_Print(jsono_auth_authorization_dto_list_envelope_2));
}

int main() {
  test_o_auth_authorization_dto_list_envelope(1);
  test_o_auth_authorization_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // o_auth_authorization_dto_list_envelope_MAIN
#endif // o_auth_authorization_dto_list_envelope_TEST
