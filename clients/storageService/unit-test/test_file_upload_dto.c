#ifndef file_upload_dto_TEST
#define file_upload_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define file_upload_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/file_upload_dto.h"
file_upload_dto_t* instantiate_file_upload_dto(int include_optional);



file_upload_dto_t* instantiate_file_upload_dto(int include_optional) {
  file_upload_dto_t* file_upload_dto = NULL;
  if (include_optional) {
    file_upload_dto = file_upload_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    file_upload_dto = file_upload_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return file_upload_dto;
}


#ifdef file_upload_dto_MAIN

void test_file_upload_dto(int include_optional) {
    file_upload_dto_t* file_upload_dto_1 = instantiate_file_upload_dto(include_optional);

	cJSON* jsonfile_upload_dto_1 = file_upload_dto_convertToJSON(file_upload_dto_1);
	printf("file_upload_dto :\n%s\n", cJSON_Print(jsonfile_upload_dto_1));
	file_upload_dto_t* file_upload_dto_2 = file_upload_dto_parseFromJSON(jsonfile_upload_dto_1);
	cJSON* jsonfile_upload_dto_2 = file_upload_dto_convertToJSON(file_upload_dto_2);
	printf("repeating file_upload_dto:\n%s\n", cJSON_Print(jsonfile_upload_dto_2));
}

int main() {
  test_file_upload_dto(1);
  test_file_upload_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // file_upload_dto_MAIN
#endif // file_upload_dto_TEST
