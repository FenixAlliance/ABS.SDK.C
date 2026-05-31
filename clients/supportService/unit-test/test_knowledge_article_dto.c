#ifndef knowledge_article_dto_TEST
#define knowledge_article_dto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define knowledge_article_dto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/knowledge_article_dto.h"
knowledge_article_dto_t* instantiate_knowledge_article_dto(int include_optional);



knowledge_article_dto_t* instantiate_knowledge_article_dto(int include_optional) {
  knowledge_article_dto_t* knowledge_article_dto = NULL;
  if (include_optional) {
    knowledge_article_dto = knowledge_article_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  } else {
    knowledge_article_dto = knowledge_article_dto_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0"
    );
  }

  return knowledge_article_dto;
}


#ifdef knowledge_article_dto_MAIN

void test_knowledge_article_dto(int include_optional) {
    knowledge_article_dto_t* knowledge_article_dto_1 = instantiate_knowledge_article_dto(include_optional);

	cJSON* jsonknowledge_article_dto_1 = knowledge_article_dto_convertToJSON(knowledge_article_dto_1);
	printf("knowledge_article_dto :\n%s\n", cJSON_Print(jsonknowledge_article_dto_1));
	knowledge_article_dto_t* knowledge_article_dto_2 = knowledge_article_dto_parseFromJSON(jsonknowledge_article_dto_1);
	cJSON* jsonknowledge_article_dto_2 = knowledge_article_dto_convertToJSON(knowledge_article_dto_2);
	printf("repeating knowledge_article_dto:\n%s\n", cJSON_Print(jsonknowledge_article_dto_2));
}

int main() {
  test_knowledge_article_dto(1);
  test_knowledge_article_dto(0);

  printf("Hello world \n");
  return 0;
}

#endif // knowledge_article_dto_MAIN
#endif // knowledge_article_dto_TEST
