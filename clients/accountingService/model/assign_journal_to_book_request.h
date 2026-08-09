/*
 * assign_journal_to_book_request.h
 *
 * 
 */

#ifndef _assign_journal_to_book_request_H_
#define _assign_journal_to_book_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct assign_journal_to_book_request_t assign_journal_to_book_request_t;




typedef struct assign_journal_to_book_request_t {
    char *financial_book_id; // string
    char *code; // string

} assign_journal_to_book_request_t;

assign_journal_to_book_request_t *assign_journal_to_book_request_create(
    char *financial_book_id,
    char *code
);

void assign_journal_to_book_request_free(assign_journal_to_book_request_t *assign_journal_to_book_request);

assign_journal_to_book_request_t *assign_journal_to_book_request_parseFromJSON(cJSON *assign_journal_to_book_requestJSON);

cJSON *assign_journal_to_book_request_convertToJSON(assign_journal_to_book_request_t *assign_journal_to_book_request);

#endif /* _assign_journal_to_book_request_H_ */

