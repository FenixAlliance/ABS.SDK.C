#ifndef o_data_raw_query_options_TEST
#define o_data_raw_query_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define o_data_raw_query_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/o_data_raw_query_options.h"
o_data_raw_query_options_t* instantiate_o_data_raw_query_options(int include_optional);



o_data_raw_query_options_t* instantiate_o_data_raw_query_options(int include_optional) {
  o_data_raw_query_options_t* o_data_raw_query_options = NULL;
  if (include_optional) {
    o_data_raw_query_options = o_data_raw_query_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    o_data_raw_query_options = o_data_raw_query_options_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return o_data_raw_query_options;
}


#ifdef o_data_raw_query_options_MAIN

void test_o_data_raw_query_options(int include_optional) {
    o_data_raw_query_options_t* o_data_raw_query_options_1 = instantiate_o_data_raw_query_options(include_optional);

	cJSON* jsono_data_raw_query_options_1 = o_data_raw_query_options_convertToJSON(o_data_raw_query_options_1);
	printf("o_data_raw_query_options :\n%s\n", cJSON_Print(jsono_data_raw_query_options_1));
	o_data_raw_query_options_t* o_data_raw_query_options_2 = o_data_raw_query_options_parseFromJSON(jsono_data_raw_query_options_1);
	cJSON* jsono_data_raw_query_options_2 = o_data_raw_query_options_convertToJSON(o_data_raw_query_options_2);
	printf("repeating o_data_raw_query_options:\n%s\n", cJSON_Print(jsono_data_raw_query_options_2));
}

int main() {
  test_o_data_raw_query_options(1);
  test_o_data_raw_query_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // o_data_raw_query_options_MAIN
#endif // o_data_raw_query_options_TEST
