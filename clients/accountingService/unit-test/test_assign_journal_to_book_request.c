#ifndef assign_journal_to_book_request_TEST
#define assign_journal_to_book_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define assign_journal_to_book_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/assign_journal_to_book_request.h"
assign_journal_to_book_request_t* instantiate_assign_journal_to_book_request(int include_optional);



assign_journal_to_book_request_t* instantiate_assign_journal_to_book_request(int include_optional) {
  assign_journal_to_book_request_t* assign_journal_to_book_request = NULL;
  if (include_optional) {
    assign_journal_to_book_request = assign_journal_to_book_request_create(
      "0",
      "0"
    );
  } else {
    assign_journal_to_book_request = assign_journal_to_book_request_create(
      "0",
      "0"
    );
  }

  return assign_journal_to_book_request;
}


#ifdef assign_journal_to_book_request_MAIN

void test_assign_journal_to_book_request(int include_optional) {
    assign_journal_to_book_request_t* assign_journal_to_book_request_1 = instantiate_assign_journal_to_book_request(include_optional);

	cJSON* jsonassign_journal_to_book_request_1 = assign_journal_to_book_request_convertToJSON(assign_journal_to_book_request_1);
	printf("assign_journal_to_book_request :\n%s\n", cJSON_Print(jsonassign_journal_to_book_request_1));
	assign_journal_to_book_request_t* assign_journal_to_book_request_2 = assign_journal_to_book_request_parseFromJSON(jsonassign_journal_to_book_request_1);
	cJSON* jsonassign_journal_to_book_request_2 = assign_journal_to_book_request_convertToJSON(assign_journal_to_book_request_2);
	printf("repeating assign_journal_to_book_request:\n%s\n", cJSON_Print(jsonassign_journal_to_book_request_2));
}

int main() {
  test_assign_journal_to_book_request(1);
  test_assign_journal_to_book_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // assign_journal_to_book_request_MAIN
#endif // assign_journal_to_book_request_TEST
