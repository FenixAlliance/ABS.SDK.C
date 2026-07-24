/*
 * reverse_journal_entry_request.h
 *
 * 
 */

#ifndef _reverse_journal_entry_request_H_
#define _reverse_journal_entry_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reverse_journal_entry_request_t reverse_journal_entry_request_t;




typedef struct reverse_journal_entry_request_t {
    char *reversal_period_id; // string

} reverse_journal_entry_request_t;

reverse_journal_entry_request_t *reverse_journal_entry_request_create(
    char *reversal_period_id
);

void reverse_journal_entry_request_free(reverse_journal_entry_request_t *reverse_journal_entry_request);

reverse_journal_entry_request_t *reverse_journal_entry_request_parseFromJSON(cJSON *reverse_journal_entry_requestJSON);

cJSON *reverse_journal_entry_request_convertToJSON(reverse_journal_entry_request_t *reverse_journal_entry_request);

#endif /* _reverse_journal_entry_request_H_ */

