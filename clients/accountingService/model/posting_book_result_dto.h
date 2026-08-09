/*
 * posting_book_result_dto.h
 *
 * 
 */

#ifndef _posting_book_result_dto_H_
#define _posting_book_result_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct posting_book_result_dto_t posting_book_result_dto_t;


// Enum STATUS for posting_book_result_dto

typedef enum  { accountingservice_posting_book_result_dto_STATUS_NULL = 0, accountingservice_posting_book_result_dto_STATUS_Posted, accountingservice_posting_book_result_dto_STATUS_Duplicate, accountingservice_posting_book_result_dto_STATUS_Rejected } accountingservice_posting_book_result_dto_STATUS_e;

char* posting_book_result_dto_status_ToString(accountingservice_posting_book_result_dto_STATUS_e status);

accountingservice_posting_book_result_dto_STATUS_e posting_book_result_dto_status_FromString(char* status);



typedef struct posting_book_result_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *financial_book_id; // string
    accountingservice_posting_book_result_dto_STATUS_e status; //enum
    char *journal_entry_id; // string
    char *failure_code; // string

} posting_book_result_dto_t;

posting_book_result_dto_t *posting_book_result_dto_create(
    char *id,
    char *timestamp,
    char *financial_book_id,
    accountingservice_posting_book_result_dto_STATUS_e status,
    char *journal_entry_id,
    char *failure_code
);

void posting_book_result_dto_free(posting_book_result_dto_t *posting_book_result_dto);

posting_book_result_dto_t *posting_book_result_dto_parseFromJSON(cJSON *posting_book_result_dtoJSON);

cJSON *posting_book_result_dto_convertToJSON(posting_book_result_dto_t *posting_book_result_dto);

#endif /* _posting_book_result_dto_H_ */

