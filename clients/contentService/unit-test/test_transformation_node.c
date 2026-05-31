#ifndef transformation_node_TEST
#define transformation_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transformation_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transformation_node.h"
transformation_node_t* instantiate_transformation_node(int include_optional);



transformation_node_t* instantiate_transformation_node(int include_optional) {
  transformation_node_t* transformation_node = NULL;
  if (include_optional) {
    transformation_node = transformation_node_create(
      contentservice_transformation_node_KIND_Aggregate
    );
  } else {
    transformation_node = transformation_node_create(
      contentservice_transformation_node_KIND_Aggregate
    );
  }

  return transformation_node;
}


#ifdef transformation_node_MAIN

void test_transformation_node(int include_optional) {
    transformation_node_t* transformation_node_1 = instantiate_transformation_node(include_optional);

	cJSON* jsontransformation_node_1 = transformation_node_convertToJSON(transformation_node_1);
	printf("transformation_node :\n%s\n", cJSON_Print(jsontransformation_node_1));
	transformation_node_t* transformation_node_2 = transformation_node_parseFromJSON(jsontransformation_node_1);
	cJSON* jsontransformation_node_2 = transformation_node_convertToJSON(transformation_node_2);
	printf("repeating transformation_node:\n%s\n", cJSON_Print(jsontransformation_node_2));
}

int main() {
  test_transformation_node(1);
  test_transformation_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // transformation_node_MAIN
#endif // transformation_node_TEST
