#ifndef title_bar_options_TEST
#define title_bar_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define title_bar_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/title_bar_options.h"
title_bar_options_t* instantiate_title_bar_options(int include_optional);



title_bar_options_t* instantiate_title_bar_options(int include_optional) {
  title_bar_options_t* title_bar_options = NULL;
  if (include_optional) {
    title_bar_options = title_bar_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_title_bar_options_PAGETITLEBAR_ShowBarAndContent,
      contentservice_title_bar_options_PAGETITLEBARCONTENT_None,
      contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_Center
    );
  } else {
    title_bar_options = title_bar_options_create(
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      contentservice_title_bar_options_PAGETITLEBAR_ShowBarAndContent,
      contentservice_title_bar_options_PAGETITLEBARCONTENT_None,
      contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_Center
    );
  }

  return title_bar_options;
}


#ifdef title_bar_options_MAIN

void test_title_bar_options(int include_optional) {
    title_bar_options_t* title_bar_options_1 = instantiate_title_bar_options(include_optional);

	cJSON* jsontitle_bar_options_1 = title_bar_options_convertToJSON(title_bar_options_1);
	printf("title_bar_options :\n%s\n", cJSON_Print(jsontitle_bar_options_1));
	title_bar_options_t* title_bar_options_2 = title_bar_options_parseFromJSON(jsontitle_bar_options_1);
	cJSON* jsontitle_bar_options_2 = title_bar_options_convertToJSON(title_bar_options_2);
	printf("repeating title_bar_options:\n%s\n", cJSON_Print(jsontitle_bar_options_2));
}

int main() {
  test_title_bar_options(1);
  test_title_bar_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // title_bar_options_MAIN
#endif // title_bar_options_TEST
