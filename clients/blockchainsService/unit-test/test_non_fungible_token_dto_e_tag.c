#ifndef non_fungible_token_dto_e_tag_TEST
#define non_fungible_token_dto_e_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define non_fungible_token_dto_e_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/non_fungible_token_dto_e_tag.h"
non_fungible_token_dto_e_tag_t* instantiate_non_fungible_token_dto_e_tag(int include_optional);

#include "test_type.c"


non_fungible_token_dto_e_tag_t* instantiate_non_fungible_token_dto_e_tag(int include_optional) {
  non_fungible_token_dto_e_tag_t* non_fungible_token_dto_e_tag = NULL;
  if (include_optional) {
    non_fungible_token_dto_e_tag = non_fungible_token_dto_e_tag_create(
      1,
       // false, not to have infinite recursion
      instantiate_type(0),
      1,
      1
    );
  } else {
    non_fungible_token_dto_e_tag = non_fungible_token_dto_e_tag_create(
      1,
      NULL,
      1,
      1
    );
  }

  return non_fungible_token_dto_e_tag;
}


#ifdef non_fungible_token_dto_e_tag_MAIN

void test_non_fungible_token_dto_e_tag(int include_optional) {
    non_fungible_token_dto_e_tag_t* non_fungible_token_dto_e_tag_1 = instantiate_non_fungible_token_dto_e_tag(include_optional);

	cJSON* jsonnon_fungible_token_dto_e_tag_1 = non_fungible_token_dto_e_tag_convertToJSON(non_fungible_token_dto_e_tag_1);
	printf("non_fungible_token_dto_e_tag :\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_e_tag_1));
	non_fungible_token_dto_e_tag_t* non_fungible_token_dto_e_tag_2 = non_fungible_token_dto_e_tag_parseFromJSON(jsonnon_fungible_token_dto_e_tag_1);
	cJSON* jsonnon_fungible_token_dto_e_tag_2 = non_fungible_token_dto_e_tag_convertToJSON(non_fungible_token_dto_e_tag_2);
	printf("repeating non_fungible_token_dto_e_tag:\n%s\n", cJSON_Print(jsonnon_fungible_token_dto_e_tag_2));
}

int main() {
  test_non_fungible_token_dto_e_tag(1);
  test_non_fungible_token_dto_e_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // non_fungible_token_dto_e_tag_MAIN
#endif // non_fungible_token_dto_e_tag_TEST
