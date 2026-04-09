#ifndef support_ticket_create_dto_TEST
#define support_ticket_create_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define support_ticket_create_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/support_ticket_create_dto.h"
support_ticket_create_dto_t* instantiate_support_ticket_create_dto(int include_optional);



support_ticket_create_dto_t* instantiate_support_ticket_create_dto(int include_optional) {
  support_ticket_create_dto_t* support_ticket_create_dto = NULL;
  if (include_optional) {
    support_ticket_create_dto = support_ticket_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435"
    );
  } else {
    support_ticket_create_dto = support_ticket_create_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435",
      "01234567891011121314151617181920212223242526272829303132333435"
    );
  }

  return support_ticket_create_dto;
}


#ifdef support_ticket_create_dto_MAIN

void test_support_ticket_create_dto(int include_optional) {
    support_ticket_create_dto_t* support_ticket_create_dto_1 = instantiate_support_ticket_create_dto(include_optional);

	cJSON* jsonsupport_ticket_create_dto_1 = support_ticket_create_dto_convertToJSON(support_ticket_create_dto_1);
	printf("support_ticket_create_dto :\n%s\n", cJSON_Print(jsonsupport_ticket_create_dto_1));
	support_ticket_create_dto_t* support_ticket_create_dto_2 = support_ticket_create_dto_parseFromJSON(jsonsupport_ticket_create_dto_1);
	cJSON* jsonsupport_ticket_create_dto_2 = support_ticket_create_dto_convertToJSON(support_ticket_create_dto_2);
	printf("repeating support_ticket_create_dto:\n%s\n", cJSON_Print(jsonsupport_ticket_create_dto_2));
}

int main() {
  test_support_ticket_create_dto(1);
  test_support_ticket_create_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // support_ticket_create_dto_MAIN
#endif // support_ticket_create_dto_TEST
