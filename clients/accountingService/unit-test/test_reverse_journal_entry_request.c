#ifndef reverse_journal_entry_request_TEST
#define reverse_journal_entry_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reverse_journal_entry_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reverse_journal_entry_request.h"
reverse_journal_entry_request_t* instantiate_reverse_journal_entry_request(int include_optional);



reverse_journal_entry_request_t* instantiate_reverse_journal_entry_request(int include_optional) {
  reverse_journal_entry_request_t* reverse_journal_entry_request = NULL;
  if (include_optional) {
    reverse_journal_entry_request = reverse_journal_entry_request_create(
      "0"
    );
  } else {
    reverse_journal_entry_request = reverse_journal_entry_request_create(
      "0"
    );
  }

  return reverse_journal_entry_request;
}


#ifdef reverse_journal_entry_request_MAIN

void test_reverse_journal_entry_request(int include_optional) {
    reverse_journal_entry_request_t* reverse_journal_entry_request_1 = instantiate_reverse_journal_entry_request(include_optional);

	cJSON* jsonreverse_journal_entry_request_1 = reverse_journal_entry_request_convertToJSON(reverse_journal_entry_request_1);
	printf("reverse_journal_entry_request :\n%s\n", cJSON_Print(jsonreverse_journal_entry_request_1));
	reverse_journal_entry_request_t* reverse_journal_entry_request_2 = reverse_journal_entry_request_parseFromJSON(jsonreverse_journal_entry_request_1);
	cJSON* jsonreverse_journal_entry_request_2 = reverse_journal_entry_request_convertToJSON(reverse_journal_entry_request_2);
	printf("repeating reverse_journal_entry_request:\n%s\n", cJSON_Print(jsonreverse_journal_entry_request_2));
}

int main() {
  test_reverse_journal_entry_request(1);
  test_reverse_journal_entry_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // reverse_journal_entry_request_MAIN
#endif // reverse_journal_entry_request_TEST
