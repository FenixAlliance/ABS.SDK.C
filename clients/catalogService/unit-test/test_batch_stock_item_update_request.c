#ifndef batch_stock_item_update_request_TEST
#define batch_stock_item_update_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define batch_stock_item_update_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/batch_stock_item_update_request.h"
batch_stock_item_update_request_t* instantiate_batch_stock_item_update_request(int include_optional);



batch_stock_item_update_request_t* instantiate_batch_stock_item_update_request(int include_optional) {
  batch_stock_item_update_request_t* batch_stock_item_update_request = NULL;
  if (include_optional) {
    batch_stock_item_update_request = batch_stock_item_update_request_create(
      list_createList(),
      1,
      1,
      list_createList(),
      list_createList()
    );
  } else {
    batch_stock_item_update_request = batch_stock_item_update_request_create(
      list_createList(),
      1,
      1,
      list_createList(),
      list_createList()
    );
  }

  return batch_stock_item_update_request;
}


#ifdef batch_stock_item_update_request_MAIN

void test_batch_stock_item_update_request(int include_optional) {
    batch_stock_item_update_request_t* batch_stock_item_update_request_1 = instantiate_batch_stock_item_update_request(include_optional);

	cJSON* jsonbatch_stock_item_update_request_1 = batch_stock_item_update_request_convertToJSON(batch_stock_item_update_request_1);
	printf("batch_stock_item_update_request :\n%s\n", cJSON_Print(jsonbatch_stock_item_update_request_1));
	batch_stock_item_update_request_t* batch_stock_item_update_request_2 = batch_stock_item_update_request_parseFromJSON(jsonbatch_stock_item_update_request_1);
	cJSON* jsonbatch_stock_item_update_request_2 = batch_stock_item_update_request_convertToJSON(batch_stock_item_update_request_2);
	printf("repeating batch_stock_item_update_request:\n%s\n", cJSON_Print(jsonbatch_stock_item_update_request_2));
}

int main() {
  test_batch_stock_item_update_request(1);
  test_batch_stock_item_update_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // batch_stock_item_update_request_MAIN
#endif // batch_stock_item_update_request_TEST
