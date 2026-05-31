/*
 * account.h
 *
 * 
 */

#ifndef _account_H_
#define _account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_t account_t;




typedef struct account_t {
    char *name; // string
    char *code; // string
    list_t *childs; //nonprimitive container
    char *type; // string

} account_t;

account_t *account_create(
    char *name,
    char *code,
    list_t *childs,
    char *type
);

void account_free(account_t *account);

account_t *account_parseFromJSON(cJSON *accountJSON);

cJSON *account_convertToJSON(account_t *account);

#endif /* _account_H_ */

