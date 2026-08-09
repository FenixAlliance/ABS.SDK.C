#ifndef knowledge_article_dto_collection_query_parameters_TEST
#define knowledge_article_dto_collection_query_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define knowledge_article_dto_collection_query_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/knowledge_article_dto_collection_query_parameters.h"
knowledge_article_dto_collection_query_parameters_t* instantiate_knowledge_article_dto_collection_query_parameters(int include_optional);



knowledge_article_dto_collection_query_parameters_t* instantiate_knowledge_article_dto_collection_query_parameters(int include_optional) {
  knowledge_article_dto_collection_query_parameters_t* knowledge_article_dto_collection_query_parameters = NULL;
  if (include_optional) {
    knowledge_article_dto_collection_query_parameters = knowledge_article_dto_collection_query_parameters_create(
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
    knowledge_article_dto_collection_query_parameters = knowledge_article_dto_collection_query_parameters_create(
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

  return knowledge_article_dto_collection_query_parameters;
}


#ifdef knowledge_article_dto_collection_query_parameters_MAIN

void test_knowledge_article_dto_collection_query_parameters(int include_optional) {
    knowledge_article_dto_collection_query_parameters_t* knowledge_article_dto_collection_query_parameters_1 = instantiate_knowledge_article_dto_collection_query_parameters(include_optional);

	cJSON* jsonknowledge_article_dto_collection_query_parameters_1 = knowledge_article_dto_collection_query_parameters_convertToJSON(knowledge_article_dto_collection_query_parameters_1);
	printf("knowledge_article_dto_collection_query_parameters :\n%s\n", cJSON_Print(jsonknowledge_article_dto_collection_query_parameters_1));
	knowledge_article_dto_collection_query_parameters_t* knowledge_article_dto_collection_query_parameters_2 = knowledge_article_dto_collection_query_parameters_parseFromJSON(jsonknowledge_article_dto_collection_query_parameters_1);
	cJSON* jsonknowledge_article_dto_collection_query_parameters_2 = knowledge_article_dto_collection_query_parameters_convertToJSON(knowledge_article_dto_collection_query_parameters_2);
	printf("repeating knowledge_article_dto_collection_query_parameters:\n%s\n", cJSON_Print(jsonknowledge_article_dto_collection_query_parameters_2));
}

int main() {
  test_knowledge_article_dto_collection_query_parameters(1);
  test_knowledge_article_dto_collection_query_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // knowledge_article_dto_collection_query_parameters_MAIN
#endif // knowledge_article_dto_collection_query_parameters_TEST
