#ifndef member_info_TEST
#define member_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define member_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/member_info.h"
member_info_t* instantiate_member_info(int include_optional);

#include "test_type.c"
#include "test_type.c"
#include "test_module.c"


member_info_t* instantiate_member_info(int include_optional) {
  member_info_t* member_info = NULL;
  if (include_optional) {
    member_info = member_info_create(
      contentservice_member_info_MEMBERTYPE_Constructor,
      "0",
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_type(0),
       // false, not to have infinite recursion
      instantiate_module(0),
      list_createList(),
      1,
      56
    );
  } else {
    member_info = member_info_create(
      contentservice_member_info_MEMBERTYPE_Constructor,
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      1,
      56
    );
  }

  return member_info;
}


#ifdef member_info_MAIN

void test_member_info(int include_optional) {
    member_info_t* member_info_1 = instantiate_member_info(include_optional);

	cJSON* jsonmember_info_1 = member_info_convertToJSON(member_info_1);
	printf("member_info :\n%s\n", cJSON_Print(jsonmember_info_1));
	member_info_t* member_info_2 = member_info_parseFromJSON(jsonmember_info_1);
	cJSON* jsonmember_info_2 = member_info_convertToJSON(member_info_2);
	printf("repeating member_info:\n%s\n", cJSON_Print(jsonmember_info_2));
}

int main() {
  test_member_info(1);
  test_member_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // member_info_MAIN
#endif // member_info_TEST
