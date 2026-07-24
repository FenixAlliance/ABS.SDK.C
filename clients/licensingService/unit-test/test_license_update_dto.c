#ifndef license_update_dto_TEST
#define license_update_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_update_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_update_dto.h"
license_update_dto_t* instantiate_license_update_dto(int include_optional);



license_update_dto_t* instantiate_license_update_dto(int include_optional) {
  license_update_dto_t* license_update_dto = NULL;
  if (include_optional) {
    license_update_dto = license_update_dto_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    license_update_dto = license_update_dto_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return license_update_dto;
}


#ifdef license_update_dto_MAIN

void test_license_update_dto(int include_optional) {
    license_update_dto_t* license_update_dto_1 = instantiate_license_update_dto(include_optional);

	cJSON* jsonlicense_update_dto_1 = license_update_dto_convertToJSON(license_update_dto_1);
	printf("license_update_dto :\n%s\n", cJSON_Print(jsonlicense_update_dto_1));
	license_update_dto_t* license_update_dto_2 = license_update_dto_parseFromJSON(jsonlicense_update_dto_1);
	cJSON* jsonlicense_update_dto_2 = license_update_dto_convertToJSON(license_update_dto_2);
	printf("repeating license_update_dto:\n%s\n", cJSON_Print(jsonlicense_update_dto_2));
}

int main() {
  test_license_update_dto(1);
  test_license_update_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_update_dto_MAIN
#endif // license_update_dto_TEST
