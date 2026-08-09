#ifndef outbox_health_dto_TEST
#define outbox_health_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define outbox_health_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/outbox_health_dto.h"
outbox_health_dto_t* instantiate_outbox_health_dto(int include_optional);



outbox_health_dto_t* instantiate_outbox_health_dto(int include_optional) {
  outbox_health_dto_t* outbox_health_dto = NULL;
  if (include_optional) {
    outbox_health_dto = outbox_health_dto_create(
      1,
      56,
      56,
      56,
      56,
      1.337,
      "2013-10-20T19:20:30+01:00",
      1
    );
  } else {
    outbox_health_dto = outbox_health_dto_create(
      1,
      56,
      56,
      56,
      56,
      1.337,
      "2013-10-20T19:20:30+01:00",
      1
    );
  }

  return outbox_health_dto;
}


#ifdef outbox_health_dto_MAIN

void test_outbox_health_dto(int include_optional) {
    outbox_health_dto_t* outbox_health_dto_1 = instantiate_outbox_health_dto(include_optional);

	cJSON* jsonoutbox_health_dto_1 = outbox_health_dto_convertToJSON(outbox_health_dto_1);
	printf("outbox_health_dto :\n%s\n", cJSON_Print(jsonoutbox_health_dto_1));
	outbox_health_dto_t* outbox_health_dto_2 = outbox_health_dto_parseFromJSON(jsonoutbox_health_dto_1);
	cJSON* jsonoutbox_health_dto_2 = outbox_health_dto_convertToJSON(outbox_health_dto_2);
	printf("repeating outbox_health_dto:\n%s\n", cJSON_Print(jsonoutbox_health_dto_2));
}

int main() {
  test_outbox_health_dto(1);
  test_outbox_health_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // outbox_health_dto_MAIN
#endif // outbox_health_dto_TEST
