#ifndef count_dto_TEST
#define count_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define count_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/count_dto.h"
count_dto_t* instantiate_count_dto(int include_optional);



count_dto_t* instantiate_count_dto(int include_optional) {
  count_dto_t* count_dto = NULL;
  if (include_optional) {
    count_dto = count_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      56
    );
  } else {
    count_dto = count_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      56
    );
  }

  return count_dto;
}


#ifdef count_dto_MAIN

void test_count_dto(int include_optional) {
    count_dto_t* count_dto_1 = instantiate_count_dto(include_optional);

	cJSON* jsoncount_dto_1 = count_dto_convertToJSON(count_dto_1);
	printf("count_dto :\n%s\n", cJSON_Print(jsoncount_dto_1));
	count_dto_t* count_dto_2 = count_dto_parseFromJSON(jsoncount_dto_1);
	cJSON* jsoncount_dto_2 = count_dto_convertToJSON(count_dto_2);
	printf("repeating count_dto:\n%s\n", cJSON_Print(jsoncount_dto_2));
}

int main() {
  test_count_dto(1);
  test_count_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // count_dto_MAIN
#endif // count_dto_TEST
