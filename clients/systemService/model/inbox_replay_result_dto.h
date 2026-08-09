/*
 * inbox_replay_result_dto.h
 *
 * 
 */

#ifndef _inbox_replay_result_dto_H_
#define _inbox_replay_result_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inbox_replay_result_dto_t inbox_replay_result_dto_t;




typedef struct inbox_replay_result_dto_t {
    char *new_inbox_message_id; // string
    char *root_inbox_message_id; // string
    int generation; //numeric

} inbox_replay_result_dto_t;

inbox_replay_result_dto_t *inbox_replay_result_dto_create(
    char *new_inbox_message_id,
    char *root_inbox_message_id,
    int generation
);

void inbox_replay_result_dto_free(inbox_replay_result_dto_t *inbox_replay_result_dto);

inbox_replay_result_dto_t *inbox_replay_result_dto_parseFromJSON(cJSON *inbox_replay_result_dtoJSON);

cJSON *inbox_replay_result_dto_convertToJSON(inbox_replay_result_dto_t *inbox_replay_result_dto);

#endif /* _inbox_replay_result_dto_H_ */

