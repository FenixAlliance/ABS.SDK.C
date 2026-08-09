/*
 * crm_context.h
 *
 * 
 */

#ifndef _crm_context_H_
#define _crm_context_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct crm_context_t crm_context_t;

#include "contact_dto.h"
#include "object.h"
#include "tenant_dto.h"



typedef struct crm_context_t {
    object_t *owner_tenant_id; //object
    struct tenant_dto_t *owner_tenant; //model
    object_t *user_contact_id; //object
    object_t *tenant_contact_id; //object
    struct contact_dto_t *user_contact; //model
    struct contact_dto_t *tenant_contact; //model

} crm_context_t;

crm_context_t *crm_context_create(
    object_t *owner_tenant_id,
    tenant_dto_t *owner_tenant,
    object_t *user_contact_id,
    object_t *tenant_contact_id,
    contact_dto_t *user_contact,
    contact_dto_t *tenant_contact
);

void crm_context_free(crm_context_t *crm_context);

crm_context_t *crm_context_parseFromJSON(cJSON *crm_contextJSON);

cJSON *crm_context_convertToJSON(crm_context_t *crm_context);

#endif /* _crm_context_H_ */

