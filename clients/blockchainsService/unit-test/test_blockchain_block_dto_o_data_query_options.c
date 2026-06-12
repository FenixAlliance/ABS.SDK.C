#ifndef blockchain_block_dto_o_data_query_options_TEST
#define blockchain_block_dto_o_data_query_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define blockchain_block_dto_o_data_query_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/blockchain_block_dto_o_data_query_options.h"
blockchain_block_dto_o_data_query_options_t* instantiate_blockchain_block_dto_o_data_query_options(int include_optional);

#include "test_http_request.c"
#include "test_o_data_query_context.c"
#include "test_o_data_raw_query_options.c"
#include "test_select_expand_query_option.c"
#include "test_apply_query_option.c"
#include "test_compute_query_option.c"
#include "test_filter_query_option.c"
#include "test_search_query_option.c"
#include "test_order_by_query_option.c"
#include "test_skip_query_option.c"
#include "test_skip_token_query_option.c"
#include "test_top_query_option.c"
#include "test_count_query_option.c"
#include "test_blockchain_block_dto_e_tag.c"
#include "test_blockchain_block_dto_e_tag.c"


blockchain_block_dto_o_data_query_options_t* instantiate_blockchain_block_dto_o_data_query_options(int include_optional) {
  blockchain_block_dto_o_data_query_options_t* blockchain_block_dto_o_data_query_options = NULL;
  if (include_optional) {
    blockchain_block_dto_o_data_query_options = blockchain_block_dto_o_data_query_options_create(
       // false, not to have infinite recursion
      instantiate_http_request(0),
       // false, not to have infinite recursion
      instantiate_o_data_query_context(0),
       // false, not to have infinite recursion
      instantiate_o_data_raw_query_options(0),
       // false, not to have infinite recursion
      instantiate_select_expand_query_option(0),
       // false, not to have infinite recursion
      instantiate_apply_query_option(0),
       // false, not to have infinite recursion
      instantiate_compute_query_option(0),
       // false, not to have infinite recursion
      instantiate_filter_query_option(0),
       // false, not to have infinite recursion
      instantiate_search_query_option(0),
       // false, not to have infinite recursion
      instantiate_order_by_query_option(0),
       // false, not to have infinite recursion
      instantiate_skip_query_option(0),
       // false, not to have infinite recursion
      instantiate_skip_token_query_option(0),
       // false, not to have infinite recursion
      instantiate_top_query_option(0),
       // false, not to have infinite recursion
      instantiate_count_query_option(0),
      0,
       // false, not to have infinite recursion
      instantiate_blockchain_block_dto_e_tag(0),
       // false, not to have infinite recursion
      instantiate_blockchain_block_dto_e_tag(0)
    );
  } else {
    blockchain_block_dto_o_data_query_options = blockchain_block_dto_o_data_query_options_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      0,
      NULL,
      NULL
    );
  }

  return blockchain_block_dto_o_data_query_options;
}


#ifdef blockchain_block_dto_o_data_query_options_MAIN

void test_blockchain_block_dto_o_data_query_options(int include_optional) {
    blockchain_block_dto_o_data_query_options_t* blockchain_block_dto_o_data_query_options_1 = instantiate_blockchain_block_dto_o_data_query_options(include_optional);

	cJSON* jsonblockchain_block_dto_o_data_query_options_1 = blockchain_block_dto_o_data_query_options_convertToJSON(blockchain_block_dto_o_data_query_options_1);
	printf("blockchain_block_dto_o_data_query_options :\n%s\n", cJSON_Print(jsonblockchain_block_dto_o_data_query_options_1));
	blockchain_block_dto_o_data_query_options_t* blockchain_block_dto_o_data_query_options_2 = blockchain_block_dto_o_data_query_options_parseFromJSON(jsonblockchain_block_dto_o_data_query_options_1);
	cJSON* jsonblockchain_block_dto_o_data_query_options_2 = blockchain_block_dto_o_data_query_options_convertToJSON(blockchain_block_dto_o_data_query_options_2);
	printf("repeating blockchain_block_dto_o_data_query_options:\n%s\n", cJSON_Print(jsonblockchain_block_dto_o_data_query_options_2));
}

int main() {
  test_blockchain_block_dto_o_data_query_options(1);
  test_blockchain_block_dto_o_data_query_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // blockchain_block_dto_o_data_query_options_MAIN
#endif // blockchain_block_dto_o_data_query_options_TEST
