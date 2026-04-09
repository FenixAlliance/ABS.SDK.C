/*
 * operation.h
 *
 * 
 */

#ifndef _operation_H_
#define _operation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct operation_t operation_t;

#include "any_type.h"

// Enum OPERATIONTYPE for operation

typedef enum  { tenantsservice_operation_OPERATIONTYPE_NULL = 0, tenantsservice_operation_OPERATIONTYPE_Add, tenantsservice_operation_OPERATIONTYPE__Remove, tenantsservice_operation_OPERATIONTYPE_Replace, tenantsservice_operation_OPERATIONTYPE_Move, tenantsservice_operation_OPERATIONTYPE_Copy, tenantsservice_operation_OPERATIONTYPE_Test, tenantsservice_operation_OPERATIONTYPE_Invalid } tenantsservice_operation_OPERATIONTYPE_e;

char* operation_operation_type_ToString(tenantsservice_operation_OPERATIONTYPE_e operation_type);

tenantsservice_operation_OPERATIONTYPE_e operation_operation_type_FromString(char* operation_type);



typedef struct operation_t {
    tenantsservice_operation_OPERATIONTYPE_e operation_type; //enum
    char *path; // string
    char *op; // string
    char *from; // string
    any_type_t *value; // custom

} operation_t;

operation_t *operation_create(
    tenantsservice_operation_OPERATIONTYPE_e operation_type,
    char *path,
    char *op,
    char *from,
    any_type_t *value
);

void operation_free(operation_t *operation);

operation_t *operation_parseFromJSON(cJSON *operationJSON);

cJSON *operation_convertToJSON(operation_t *operation);

#endif /* _operation_H_ */

