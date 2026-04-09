#ifndef downloadables_options_TEST
#define downloadables_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define downloadables_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/downloadables_options.h"
downloadables_options_t* instantiate_downloadables_options(int include_optional);



downloadables_options_t* instantiate_downloadables_options(int include_optional) {
  downloadables_options_t* downloadables_options = NULL;
  if (include_optional) {
    downloadables_options = downloadables_options_create(
      1,
      1,
      1
    );
  } else {
    downloadables_options = downloadables_options_create(
      1,
      1,
      1
    );
  }

  return downloadables_options;
}


#ifdef downloadables_options_MAIN

void test_downloadables_options(int include_optional) {
    downloadables_options_t* downloadables_options_1 = instantiate_downloadables_options(include_optional);

	cJSON* jsondownloadables_options_1 = downloadables_options_convertToJSON(downloadables_options_1);
	printf("downloadables_options :\n%s\n", cJSON_Print(jsondownloadables_options_1));
	downloadables_options_t* downloadables_options_2 = downloadables_options_parseFromJSON(jsondownloadables_options_1);
	cJSON* jsondownloadables_options_2 = downloadables_options_convertToJSON(downloadables_options_2);
	printf("repeating downloadables_options:\n%s\n", cJSON_Print(jsondownloadables_options_2));
}

int main() {
  test_downloadables_options(1);
  test_downloadables_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // downloadables_options_MAIN
#endif // downloadables_options_TEST
