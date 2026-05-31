#ifndef o_data_path_segment_TEST
#define o_data_path_segment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define o_data_path_segment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/o_data_path_segment.h"
o_data_path_segment_t* instantiate_o_data_path_segment(int include_optional);

#include "test_i_edm_type.c"


o_data_path_segment_t* instantiate_o_data_path_segment(int include_optional) {
  o_data_path_segment_t* o_data_path_segment = NULL;
  if (include_optional) {
    o_data_path_segment = o_data_path_segment_create(
       // false, not to have infinite recursion
      instantiate_i_edm_type(0),
      "0"
    );
  } else {
    o_data_path_segment = o_data_path_segment_create(
      NULL,
      "0"
    );
  }

  return o_data_path_segment;
}


#ifdef o_data_path_segment_MAIN

void test_o_data_path_segment(int include_optional) {
    o_data_path_segment_t* o_data_path_segment_1 = instantiate_o_data_path_segment(include_optional);

	cJSON* jsono_data_path_segment_1 = o_data_path_segment_convertToJSON(o_data_path_segment_1);
	printf("o_data_path_segment :\n%s\n", cJSON_Print(jsono_data_path_segment_1));
	o_data_path_segment_t* o_data_path_segment_2 = o_data_path_segment_parseFromJSON(jsono_data_path_segment_1);
	cJSON* jsono_data_path_segment_2 = o_data_path_segment_convertToJSON(o_data_path_segment_2);
	printf("repeating o_data_path_segment:\n%s\n", cJSON_Print(jsono_data_path_segment_2));
}

int main() {
  test_o_data_path_segment(1);
  test_o_data_path_segment(0);

  printf("Hello world \n");
  return 0;
}

#endif // o_data_path_segment_MAIN
#endif // o_data_path_segment_TEST
