/*
 * financial_book_update_dto.h
 *
 * 
 */

#ifndef _financial_book_update_dto_H_
#define _financial_book_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct financial_book_update_dto_t financial_book_update_dto_t;




typedef struct financial_book_update_dto_t {
    char *name; // string
    char *description; // string

} financial_book_update_dto_t;

financial_book_update_dto_t *financial_book_update_dto_create(
    char *name,
    char *description
);

void financial_book_update_dto_free(financial_book_update_dto_t *financial_book_update_dto);

financial_book_update_dto_t *financial_book_update_dto_parseFromJSON(cJSON *financial_book_update_dtoJSON);

cJSON *financial_book_update_dto_convertToJSON(financial_book_update_dto_t *financial_book_update_dto);

#endif /* _financial_book_update_dto_H_ */

