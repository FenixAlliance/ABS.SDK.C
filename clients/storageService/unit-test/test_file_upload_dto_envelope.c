#ifndef file_upload_dto_envelope_TEST
#define file_upload_dto_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define file_upload_dto_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/file_upload_dto_envelope.h"
file_upload_dto_envelope_t* instantiate_file_upload_dto_envelope(int include_optional);

#include "test_file_upload_dto.c"


file_upload_dto_envelope_t* instantiate_file_upload_dto_envelope(int include_optional) {
  file_upload_dto_envelope_t* file_upload_dto_envelope = NULL;
  if (include_optional) {
    file_upload_dto_envelope = file_upload_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_file_upload_dto(0)
    );
  } else {
    file_upload_dto_envelope = file_upload_dto_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL
    );
  }

  return file_upload_dto_envelope;
}


#ifdef file_upload_dto_envelope_MAIN

void test_file_upload_dto_envelope(int include_optional) {
    file_upload_dto_envelope_t* file_upload_dto_envelope_1 = instantiate_file_upload_dto_envelope(include_optional);

	cJSON* jsonfile_upload_dto_envelope_1 = file_upload_dto_envelope_convertToJSON(file_upload_dto_envelope_1);
	printf("file_upload_dto_envelope :\n%s\n", cJSON_Print(jsonfile_upload_dto_envelope_1));
	file_upload_dto_envelope_t* file_upload_dto_envelope_2 = file_upload_dto_envelope_parseFromJSON(jsonfile_upload_dto_envelope_1);
	cJSON* jsonfile_upload_dto_envelope_2 = file_upload_dto_envelope_convertToJSON(file_upload_dto_envelope_2);
	printf("repeating file_upload_dto_envelope:\n%s\n", cJSON_Print(jsonfile_upload_dto_envelope_2));
}

int main() {
  test_file_upload_dto_envelope(1);
  test_file_upload_dto_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // file_upload_dto_envelope_MAIN
#endif // file_upload_dto_envelope_TEST
