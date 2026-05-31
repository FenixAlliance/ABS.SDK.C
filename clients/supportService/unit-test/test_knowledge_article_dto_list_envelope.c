#ifndef knowledge_article_dto_list_envelope_TEST
#define knowledge_article_dto_list_envelope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define knowledge_article_dto_list_envelope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/knowledge_article_dto_list_envelope.h"
knowledge_article_dto_list_envelope_t* instantiate_knowledge_article_dto_list_envelope(int include_optional);



knowledge_article_dto_list_envelope_t* instantiate_knowledge_article_dto_list_envelope(int include_optional) {
  knowledge_article_dto_list_envelope_t* knowledge_article_dto_list_envelope = NULL;
  if (include_optional) {
    knowledge_article_dto_list_envelope = knowledge_article_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  } else {
    knowledge_article_dto_list_envelope = knowledge_article_dto_list_envelope_create(
      1,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      list_createList()
    );
  }

  return knowledge_article_dto_list_envelope;
}


#ifdef knowledge_article_dto_list_envelope_MAIN

void test_knowledge_article_dto_list_envelope(int include_optional) {
    knowledge_article_dto_list_envelope_t* knowledge_article_dto_list_envelope_1 = instantiate_knowledge_article_dto_list_envelope(include_optional);

	cJSON* jsonknowledge_article_dto_list_envelope_1 = knowledge_article_dto_list_envelope_convertToJSON(knowledge_article_dto_list_envelope_1);
	printf("knowledge_article_dto_list_envelope :\n%s\n", cJSON_Print(jsonknowledge_article_dto_list_envelope_1));
	knowledge_article_dto_list_envelope_t* knowledge_article_dto_list_envelope_2 = knowledge_article_dto_list_envelope_parseFromJSON(jsonknowledge_article_dto_list_envelope_1);
	cJSON* jsonknowledge_article_dto_list_envelope_2 = knowledge_article_dto_list_envelope_convertToJSON(knowledge_article_dto_list_envelope_2);
	printf("repeating knowledge_article_dto_list_envelope:\n%s\n", cJSON_Print(jsonknowledge_article_dto_list_envelope_2));
}

int main() {
  test_knowledge_article_dto_list_envelope(1);
  test_knowledge_article_dto_list_envelope(0);

  printf("Hello world \n");
  return 0;
}

#endif // knowledge_article_dto_list_envelope_MAIN
#endif // knowledge_article_dto_list_envelope_TEST
