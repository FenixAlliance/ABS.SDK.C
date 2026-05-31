#ifndef ip_lookup_dto_TEST
#define ip_lookup_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_lookup_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_lookup_dto.h"
ip_lookup_dto_t* instantiate_ip_lookup_dto(int include_optional);



ip_lookup_dto_t* instantiate_ip_lookup_dto(int include_optional) {
  ip_lookup_dto_t* ip_lookup_dto = NULL;
  if (include_optional) {
    ip_lookup_dto = ip_lookup_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  } else {
    ip_lookup_dto = ip_lookup_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0"
    );
  }

  return ip_lookup_dto;
}


#ifdef ip_lookup_dto_MAIN

void test_ip_lookup_dto(int include_optional) {
    ip_lookup_dto_t* ip_lookup_dto_1 = instantiate_ip_lookup_dto(include_optional);

	cJSON* jsonip_lookup_dto_1 = ip_lookup_dto_convertToJSON(ip_lookup_dto_1);
	printf("ip_lookup_dto :\n%s\n", cJSON_Print(jsonip_lookup_dto_1));
	ip_lookup_dto_t* ip_lookup_dto_2 = ip_lookup_dto_parseFromJSON(jsonip_lookup_dto_1);
	cJSON* jsonip_lookup_dto_2 = ip_lookup_dto_convertToJSON(ip_lookup_dto_2);
	printf("repeating ip_lookup_dto:\n%s\n", cJSON_Print(jsonip_lookup_dto_2));
}

int main() {
  test_ip_lookup_dto(1);
  test_ip_lookup_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_lookup_dto_MAIN
#endif // ip_lookup_dto_TEST
