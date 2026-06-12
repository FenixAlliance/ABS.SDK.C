#ifndef connection_info_TEST
#define connection_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define connection_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/connection_info.h"
connection_info_t* instantiate_connection_info(int include_optional);

#include "test_ip_address.c"
#include "test_ip_address.c"
#include "test_x509_certificate2.c"


connection_info_t* instantiate_connection_info(int include_optional) {
  connection_info_t* connection_info = NULL;
  if (include_optional) {
    connection_info = connection_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_ip_address(0),
      56,
       // false, not to have infinite recursion
      instantiate_ip_address(0),
      56,
       // false, not to have infinite recursion
      instantiate_x509_certificate2(0)
    );
  } else {
    connection_info = connection_info_create(
      "0",
      NULL,
      56,
      NULL,
      56,
      NULL
    );
  }

  return connection_info;
}


#ifdef connection_info_MAIN

void test_connection_info(int include_optional) {
    connection_info_t* connection_info_1 = instantiate_connection_info(include_optional);

	cJSON* jsonconnection_info_1 = connection_info_convertToJSON(connection_info_1);
	printf("connection_info :\n%s\n", cJSON_Print(jsonconnection_info_1));
	connection_info_t* connection_info_2 = connection_info_parseFromJSON(jsonconnection_info_1);
	cJSON* jsonconnection_info_2 = connection_info_convertToJSON(connection_info_2);
	printf("repeating connection_info:\n%s\n", cJSON_Print(jsonconnection_info_2));
}

int main() {
  test_connection_info(1);
  test_connection_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // connection_info_MAIN
#endif // connection_info_TEST
