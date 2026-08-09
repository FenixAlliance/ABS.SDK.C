#ifndef module_grant_dto_TEST
#define module_grant_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_grant_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_grant_dto.h"
module_grant_dto_t* instantiate_module_grant_dto(int include_optional);



module_grant_dto_t* instantiate_module_grant_dto(int include_optional) {
  module_grant_dto_t* module_grant_dto = NULL;
  if (include_optional) {
    module_grant_dto = module_grant_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    module_grant_dto = module_grant_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return module_grant_dto;
}


#ifdef module_grant_dto_MAIN

void test_module_grant_dto(int include_optional) {
    module_grant_dto_t* module_grant_dto_1 = instantiate_module_grant_dto(include_optional);

	cJSON* jsonmodule_grant_dto_1 = module_grant_dto_convertToJSON(module_grant_dto_1);
	printf("module_grant_dto :\n%s\n", cJSON_Print(jsonmodule_grant_dto_1));
	module_grant_dto_t* module_grant_dto_2 = module_grant_dto_parseFromJSON(jsonmodule_grant_dto_1);
	cJSON* jsonmodule_grant_dto_2 = module_grant_dto_convertToJSON(module_grant_dto_2);
	printf("repeating module_grant_dto:\n%s\n", cJSON_Print(jsonmodule_grant_dto_2));
}

int main() {
  test_module_grant_dto(1);
  test_module_grant_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_grant_dto_MAIN
#endif // module_grant_dto_TEST
