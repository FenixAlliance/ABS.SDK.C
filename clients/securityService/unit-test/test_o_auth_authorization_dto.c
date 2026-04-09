#ifndef o_auth_authorization_dto_TEST
#define o_auth_authorization_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define o_auth_authorization_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/o_auth_authorization_dto.h"
o_auth_authorization_dto_t* instantiate_o_auth_authorization_dto(int include_optional);



o_auth_authorization_dto_t* instantiate_o_auth_authorization_dto(int include_optional) {
  o_auth_authorization_dto_t* o_auth_authorization_dto = NULL;
  if (include_optional) {
    o_auth_authorization_dto = o_auth_authorization_dto_create(
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    o_auth_authorization_dto = o_auth_authorization_dto_create(
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return o_auth_authorization_dto;
}


#ifdef o_auth_authorization_dto_MAIN

void test_o_auth_authorization_dto(int include_optional) {
    o_auth_authorization_dto_t* o_auth_authorization_dto_1 = instantiate_o_auth_authorization_dto(include_optional);

	cJSON* jsono_auth_authorization_dto_1 = o_auth_authorization_dto_convertToJSON(o_auth_authorization_dto_1);
	printf("o_auth_authorization_dto :\n%s\n", cJSON_Print(jsono_auth_authorization_dto_1));
	o_auth_authorization_dto_t* o_auth_authorization_dto_2 = o_auth_authorization_dto_parseFromJSON(jsono_auth_authorization_dto_1);
	cJSON* jsono_auth_authorization_dto_2 = o_auth_authorization_dto_convertToJSON(o_auth_authorization_dto_2);
	printf("repeating o_auth_authorization_dto:\n%s\n", cJSON_Print(jsono_auth_authorization_dto_2));
}

int main() {
  test_o_auth_authorization_dto(1);
  test_o_auth_authorization_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // o_auth_authorization_dto_MAIN
#endif // o_auth_authorization_dto_TEST
