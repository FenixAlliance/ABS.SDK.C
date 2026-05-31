#ifndef pipe_writer_TEST
#define pipe_writer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pipe_writer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pipe_writer.h"
pipe_writer_t* instantiate_pipe_writer(int include_optional);



pipe_writer_t* instantiate_pipe_writer(int include_optional) {
  pipe_writer_t* pipe_writer = NULL;
  if (include_optional) {
    pipe_writer = pipe_writer_create(
      1,
      56
    );
  } else {
    pipe_writer = pipe_writer_create(
      1,
      56
    );
  }

  return pipe_writer;
}


#ifdef pipe_writer_MAIN

void test_pipe_writer(int include_optional) {
    pipe_writer_t* pipe_writer_1 = instantiate_pipe_writer(include_optional);

	cJSON* jsonpipe_writer_1 = pipe_writer_convertToJSON(pipe_writer_1);
	printf("pipe_writer :\n%s\n", cJSON_Print(jsonpipe_writer_1));
	pipe_writer_t* pipe_writer_2 = pipe_writer_parseFromJSON(jsonpipe_writer_1);
	cJSON* jsonpipe_writer_2 = pipe_writer_convertToJSON(pipe_writer_2);
	printf("repeating pipe_writer:\n%s\n", cJSON_Print(jsonpipe_writer_2));
}

int main() {
  test_pipe_writer(1);
  test_pipe_writer(0);

  printf("Hello world \n");
  return 0;
}

#endif // pipe_writer_MAIN
#endif // pipe_writer_TEST
