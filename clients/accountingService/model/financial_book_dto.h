/*
 * financial_book_dto.h
 *
 * 
 */

#ifndef _financial_book_dto_H_
#define _financial_book_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct financial_book_dto_t financial_book_dto_t;




typedef struct financial_book_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *business_id; // string

} financial_book_dto_t;

financial_book_dto_t *financial_book_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *business_id
);

void financial_book_dto_free(financial_book_dto_t *financial_book_dto);

financial_book_dto_t *financial_book_dto_parseFromJSON(cJSON *financial_book_dtoJSON);

cJSON *financial_book_dto_convertToJSON(financial_book_dto_t *financial_book_dto);

#endif /* _financial_book_dto_H_ */

