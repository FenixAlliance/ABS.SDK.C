/*
 * chart_of_accounts.h
 *
 * 
 */

#ifndef _chart_of_accounts_H_
#define _chart_of_accounts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct chart_of_accounts_t chart_of_accounts_t;

#include "account.h"



typedef struct chart_of_accounts_t {
    char *name; // string
    int verified; //boolean
    char *file_url; // string
    list_t *childs; //nonprimitive container

} chart_of_accounts_t;

chart_of_accounts_t *chart_of_accounts_create(
    char *name,
    int verified,
    char *file_url,
    list_t *childs
);

void chart_of_accounts_free(chart_of_accounts_t *chart_of_accounts);

chart_of_accounts_t *chart_of_accounts_parseFromJSON(cJSON *chart_of_accountsJSON);

cJSON *chart_of_accounts_convertToJSON(chart_of_accounts_t *chart_of_accounts);

#endif /* _chart_of_accounts_H_ */

