#ifndef loan_type_dto_i_read_only_list_envelope_TEST
#define loan_type_dto_i_read_only_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loan_type_dto_i_read_only_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loan_type_dto_i_read_only_list_envelope.h"
loan_type_dto_i_read_only_list_envelope_t* instantiate_loan_type_dto_i_read_only_list_envelope(int include_optional);



loan_type_dto_i_read_only_list_envelope_t* instantiate_loan_type_dto_i_read_only_list_envelope(int include_optional) {
  loan_type_dto_i_read_only_list_envelope_t* loan_type_dto_i_read_only_list_envelope = NULL;
  if (include_optional) {
    loan_type_dto_i_read_only_list_envelope = loan_type_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    loan_type_dto_i_read_only_list_envelope = loan_type_dto_i_read_only_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return loan_type_dto_i_read_only_list_envelope;
}


#ifdef loan_type_dto_i_read_only_list_envelope_MAIN

void test_loan_type_dto_i_read_only_list_envelope(int include_optional) {
    loan_type_dto_i_read_only_list_envelope_t* loan_type_dto_i_read_only_list_envelope_1 = instantiate_loan_type_dto_i_read_only_list_envelope(include_optional);

	cJSON* jsonloan_type_dto_i_read_only_list_envelope_1 = loan_type_dto_i_read_only_list_envelope_convertToJSON(loan_type_dto_i_read_only_list_envelope_1);
	printf("loan_type_dto_i_read_only_list_envelope :\n%s\n", cJSON_Print(jsonloan_type_dto_i_read_only_list_envelope_1));
	loan_type_dto_i_read_only_list_envelope_t* loan_type_dto_i_read_only_list_envelope_2 = loan_type_dto_i_read_only_list_envelope_parseFromJSON(jsonloan_type_dto_i_read_only_list_envelope_1);
	cJSON* jsonloan_type_dto_i_read_only_list_envelope_2 = loan_type_dto_i_read_only_list_envelope_convertToJSON(loan_type_dto_i_read_only_list_envelope_2);
	printf("repeating loan_type_dto_i_read_only_list_envelope:\n%s\n", cJSON_Print(jsonloan_type_dto_i_read_only_list_envelope_2));
}

int main() {
  test_loan_type_dto_i_read_only_list_envelope(1);
  test_loan_type_dto_i_read_only_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // loan_type_dto_i_read_only_list_envelope_MAIN
#endif // loan_type_dto_i_read_only_list_envelope_TEST
