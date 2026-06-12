#ifndef e_tag_TEST
#define e_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define e_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/e_tag.h"
e_tag_t* instantiate_e_tag(int include_optional);

#include "test_type.c"


e_tag_t* instantiate_e_tag(int include_optional) {
  e_tag_t* e_tag = NULL;
  if (include_optional) {
    e_tag = e_tag_create(
      1,
       // false, not to have infinite recursion
      instantiate_type(0),
      1,
      1
    );
  } else {
    e_tag = e_tag_create(
      1,
      NULL,
      1,
      1
    );
  }

  return e_tag;
}


#ifdef e_tag_MAIN

void test_e_tag(int include_optional) {
    e_tag_t* e_tag_1 = instantiate_e_tag(include_optional);

	cJSON* jsone_tag_1 = e_tag_convertToJSON(e_tag_1);
	printf("e_tag :\n%s\n", cJSON_Print(jsone_tag_1));
	e_tag_t* e_tag_2 = e_tag_parseFromJSON(jsone_tag_1);
	cJSON* jsone_tag_2 = e_tag_convertToJSON(e_tag_2);
	printf("repeating e_tag:\n%s\n", cJSON_Print(jsone_tag_2));
}

int main() {
  test_e_tag(1);
  test_e_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // e_tag_MAIN
#endif // e_tag_TEST
