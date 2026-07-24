#ifndef import_signing_certificate_async_request_TEST
#define import_signing_certificate_async_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define import_signing_certificate_async_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/import_signing_certificate_async_request.h"
import_signing_certificate_async_request_t* instantiate_import_signing_certificate_async_request(int include_optional);



import_signing_certificate_async_request_t* instantiate_import_signing_certificate_async_request(int include_optional) {
  import_signing_certificate_async_request_t* import_signing_certificate_async_request = NULL;
  if (include_optional) {
    import_signing_certificate_async_request = import_signing_certificate_async_request_create(
      "0",
      instantiate_binary_t("blah", 5),
      "0",
      "0",
      "0"
    );
  } else {
    import_signing_certificate_async_request = import_signing_certificate_async_request_create(
      "0",
      instantiate_binary_t("blah", 5),
      "0",
      "0",
      "0"
    );
  }

  return import_signing_certificate_async_request;
}


#ifdef import_signing_certificate_async_request_MAIN

void test_import_signing_certificate_async_request(int include_optional) {
    import_signing_certificate_async_request_t* import_signing_certificate_async_request_1 = instantiate_import_signing_certificate_async_request(include_optional);

	cJSON* jsonimport_signing_certificate_async_request_1 = import_signing_certificate_async_request_convertToJSON(import_signing_certificate_async_request_1);
	printf("import_signing_certificate_async_request :\n%s\n", cJSON_Print(jsonimport_signing_certificate_async_request_1));
	import_signing_certificate_async_request_t* import_signing_certificate_async_request_2 = import_signing_certificate_async_request_parseFromJSON(jsonimport_signing_certificate_async_request_1);
	cJSON* jsonimport_signing_certificate_async_request_2 = import_signing_certificate_async_request_convertToJSON(import_signing_certificate_async_request_2);
	printf("repeating import_signing_certificate_async_request:\n%s\n", cJSON_Print(jsonimport_signing_certificate_async_request_2));
}

int main() {
  test_import_signing_certificate_async_request(1);
  test_import_signing_certificate_async_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // import_signing_certificate_async_request_MAIN
#endif // import_signing_certificate_async_request_TEST
