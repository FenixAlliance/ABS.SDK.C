#ifndef student_profile_dto_collection_query_parameters_TEST
#define student_profile_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define student_profile_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/student_profile_dto_collection_query_parameters.h"
student_profile_dto_collection_query_parameters_t* instantiate_student_profile_dto_collection_query_parameters(int include_optional);



student_profile_dto_collection_query_parameters_t* instantiate_student_profile_dto_collection_query_parameters(int include_optional) {
  student_profile_dto_collection_query_parameters_t* student_profile_dto_collection_query_parameters = NULL;
  if (include_optional) {
    student_profile_dto_collection_query_parameters = student_profile_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    student_profile_dto_collection_query_parameters = student_profile_dto_collection_query_parameters_create(
      56,
      56,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return student_profile_dto_collection_query_parameters;
}


#ifdef student_profile_dto_collection_query_parameters_MAIN

void test_student_profile_dto_collection_query_parameters(int include_optional) {
    student_profile_dto_collection_query_parameters_t* student_profile_dto_collection_query_parameters_1 = instantiate_student_profile_dto_collection_query_parameters(include_optional);

	cJSON* jsonstudent_profile_dto_collection_query_parameters_1 = student_profile_dto_collection_query_parameters_convertToJSON(student_profile_dto_collection_query_parameters_1);
	printf("student_profile_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonstudent_profile_dto_collection_query_parameters_1));
	student_profile_dto_collection_query_parameters_t* student_profile_dto_collection_query_parameters_2 = student_profile_dto_collection_query_parameters_parseFromJSON(jsonstudent_profile_dto_collection_query_parameters_1);
	cJSON* jsonstudent_profile_dto_collection_query_parameters_2 = student_profile_dto_collection_query_parameters_convertToJSON(student_profile_dto_collection_query_parameters_2);
	printf("repeating student_profile_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonstudent_profile_dto_collection_query_parameters_2));
}

int main() {
  test_student_profile_dto_collection_query_parameters(1);
  test_student_profile_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // student_profile_dto_collection_query_parameters_MAIN
#endif // student_profile_dto_collection_query_parameters_TEST
