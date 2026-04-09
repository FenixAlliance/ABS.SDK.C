#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_dto.h"



journal_dto_t *journal_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *ledger_id,
    char *enrollment_id,
    char *fiscal_year_id,
    char *journal_type_id,
    char *parent_journal_id
    ) {
    journal_dto_t *journal_dto_local_var = malloc(sizeof(journal_dto_t));
    if (!journal_dto_local_var) {
        return NULL;
    }
    journal_dto_local_var->id = id;
    journal_dto_local_var->timestamp = timestamp;
    journal_dto_local_var->name = name;
    journal_dto_local_var->description = description;
    journal_dto_local_var->tenant_id = tenant_id;
    journal_dto_local_var->ledger_id = ledger_id;
    journal_dto_local_var->enrollment_id = enrollment_id;
    journal_dto_local_var->fiscal_year_id = fiscal_year_id;
    journal_dto_local_var->journal_type_id = journal_type_id;
    journal_dto_local_var->parent_journal_id = parent_journal_id;

    return journal_dto_local_var;
}


void journal_dto_free(journal_dto_t *journal_dto) {
    if(NULL == journal_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_dto->id) {
        free(journal_dto->id);
        journal_dto->id = NULL;
    }
    if (journal_dto->timestamp) {
        free(journal_dto->timestamp);
        journal_dto->timestamp = NULL;
    }
    if (journal_dto->name) {
        free(journal_dto->name);
        journal_dto->name = NULL;
    }
    if (journal_dto->description) {
        free(journal_dto->description);
        journal_dto->description = NULL;
    }
    if (journal_dto->tenant_id) {
        free(journal_dto->tenant_id);
        journal_dto->tenant_id = NULL;
    }
    if (journal_dto->ledger_id) {
        free(journal_dto->ledger_id);
        journal_dto->ledger_id = NULL;
    }
    if (journal_dto->enrollment_id) {
        free(journal_dto->enrollment_id);
        journal_dto->enrollment_id = NULL;
    }
    if (journal_dto->fiscal_year_id) {
        free(journal_dto->fiscal_year_id);
        journal_dto->fiscal_year_id = NULL;
    }
    if (journal_dto->journal_type_id) {
        free(journal_dto->journal_type_id);
        journal_dto->journal_type_id = NULL;
    }
    if (journal_dto->parent_journal_id) {
        free(journal_dto->parent_journal_id);
        journal_dto->parent_journal_id = NULL;
    }
    free(journal_dto);
}

cJSON *journal_dto_convertToJSON(journal_dto_t *journal_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_dto->id
    if(journal_dto->id) {
    if(cJSON_AddStringToObject(item, "id", journal_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->timestamp
    if(journal_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_dto->name
    if(journal_dto->name) {
    if(cJSON_AddStringToObject(item, "name", journal_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->description
    if(journal_dto->description) {
    if(cJSON_AddStringToObject(item, "description", journal_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->tenant_id
    if(journal_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", journal_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->ledger_id
    if(journal_dto->ledger_id) {
    if(cJSON_AddStringToObject(item, "ledgerId", journal_dto->ledger_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->enrollment_id
    if(journal_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", journal_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->fiscal_year_id
    if(journal_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", journal_dto->fiscal_year_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->journal_type_id
    if(journal_dto->journal_type_id) {
    if(cJSON_AddStringToObject(item, "journalTypeId", journal_dto->journal_type_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_dto->parent_journal_id
    if(journal_dto->parent_journal_id) {
    if(cJSON_AddStringToObject(item, "parentJournalId", journal_dto->parent_journal_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

journal_dto_t *journal_dto_parseFromJSON(cJSON *journal_dtoJSON){

    journal_dto_t *journal_dto_local_var = NULL;

    // journal_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // journal_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // journal_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // journal_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // journal_dto->ledger_id
    cJSON *ledger_id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "ledgerId");
    if (ledger_id) { 
    if(!cJSON_IsString(ledger_id) && !cJSON_IsNull(ledger_id))
    {
    goto end; //String
    }
    }

    // journal_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // journal_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }

    // journal_dto->journal_type_id
    cJSON *journal_type_id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "journalTypeId");
    if (journal_type_id) { 
    if(!cJSON_IsString(journal_type_id) && !cJSON_IsNull(journal_type_id))
    {
    goto end; //String
    }
    }

    // journal_dto->parent_journal_id
    cJSON *parent_journal_id = cJSON_GetObjectItemCaseSensitive(journal_dtoJSON, "parentJournalId");
    if (parent_journal_id) { 
    if(!cJSON_IsString(parent_journal_id) && !cJSON_IsNull(parent_journal_id))
    {
    goto end; //String
    }
    }


    journal_dto_local_var = journal_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        ledger_id && !cJSON_IsNull(ledger_id) ? strdup(ledger_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL,
        journal_type_id && !cJSON_IsNull(journal_type_id) ? strdup(journal_type_id->valuestring) : NULL,
        parent_journal_id && !cJSON_IsNull(parent_journal_id) ? strdup(parent_journal_id->valuestring) : NULL
        );

    return journal_dto_local_var;
end:
    return NULL;

}
