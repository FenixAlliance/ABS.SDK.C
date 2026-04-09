/*
 * financial_book_create_dto.h
 *
 * 
 */

#ifndef _financial_book_create_dto_H_
#define _financial_book_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct financial_book_create_dto_t financial_book_create_dto_t;




typedef struct financial_book_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string

} financial_book_create_dto_t;

financial_book_create_dto_t *financial_book_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id
);

void financial_book_create_dto_free(financial_book_create_dto_t *financial_book_create_dto);

financial_book_create_dto_t *financial_book_create_dto_parseFromJSON(cJSON *financial_book_create_dtoJSON);

cJSON *financial_book_create_dto_convertToJSON(financial_book_create_dto_t *financial_book_create_dto);

#endif /* _financial_book_create_dto_H_ */

