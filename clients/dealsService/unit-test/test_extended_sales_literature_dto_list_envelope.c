#ifndef extended_sales_literature_dto_list_envelope_TEST
#define extended_sales_literature_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_sales_literature_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_sales_literature_dto_list_envelope.h"
extended_sales_literature_dto_list_envelope_t* instantiate_extended_sales_literature_dto_list_envelope(int include_optional);



extended_sales_literature_dto_list_envelope_t* instantiate_extended_sales_literature_dto_list_envelope(int include_optional) {
  extended_sales_literature_dto_list_envelope_t* extended_sales_literature_dto_list_envelope = NULL;
  if (include_optional) {
    extended_sales_literature_dto_list_envelope = extended_sales_literature_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    extended_sales_literature_dto_list_envelope = extended_sales_literature_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return extended_sales_literature_dto_list_envelope;
}


#ifdef extended_sales_literature_dto_list_envelope_MAIN

void test_extended_sales_literature_dto_list_envelope(int include_optional) {
    extended_sales_literature_dto_list_envelope_t* extended_sales_literature_dto_list_envelope_1 = instantiate_extended_sales_literature_dto_list_envelope(include_optional);

	cJSON* jsonextended_sales_literature_dto_list_envelope_1 = extended_sales_literature_dto_list_envelope_convertToJSON(extended_sales_literature_dto_list_envelope_1);
	printf("extended_sales_literature_dto_list_envelope :\n%s\n", cJSON_Print(jsonextended_sales_literature_dto_list_envelope_1));
	extended_sales_literature_dto_list_envelope_t* extended_sales_literature_dto_list_envelope_2 = extended_sales_literature_dto_list_envelope_parseFromJSON(jsonextended_sales_literature_dto_list_envelope_1);
	cJSON* jsonextended_sales_literature_dto_list_envelope_2 = extended_sales_literature_dto_list_envelope_convertToJSON(extended_sales_literature_dto_list_envelope_2);
	printf("repeating extended_sales_literature_dto_list_envelope:\n%s\n", cJSON_Print(jsonextended_sales_literature_dto_list_envelope_2));
}

int main() {
  test_extended_sales_literature_dto_list_envelope(1);
  test_extended_sales_literature_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_sales_literature_dto_list_envelope_MAIN
#endif // extended_sales_literature_dto_list_envelope_TEST
