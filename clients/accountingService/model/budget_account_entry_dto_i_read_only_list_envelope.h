/*
 * budget_account_entry_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _budget_account_entry_dto_i_read_only_list_envelope_H_
#define _budget_account_entry_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_account_entry_dto_i_read_only_list_envelope_t budget_account_entry_dto_i_read_only_list_envelope_t;

#include "budget_account_entry_dto.h"



typedef struct budget_account_entry_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} budget_account_entry_dto_i_read_only_list_envelope_t;

budget_account_entry_dto_i_read_only_list_envelope_t *budget_account_entry_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void budget_account_entry_dto_i_read_only_list_envelope_free(budget_account_entry_dto_i_read_only_list_envelope_t *budget_account_entry_dto_i_read_only_list_envelope);

budget_account_entry_dto_i_read_only_list_envelope_t *budget_account_entry_dto_i_read_only_list_envelope_parseFromJSON(cJSON *budget_account_entry_dto_i_read_only_list_envelopeJSON);

cJSON *budget_account_entry_dto_i_read_only_list_envelope_convertToJSON(budget_account_entry_dto_i_read_only_list_envelope_t *budget_account_entry_dto_i_read_only_list_envelope);

#endif /* _budget_account_entry_dto_i_read_only_list_envelope_H_ */

