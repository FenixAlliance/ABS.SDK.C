#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_enumeration_range_create_dto.h"


char* invoice_enumeration_range_create_dto_document_type_ToString(accountingservice_invoice_enumeration_range_create_dto_DOCUMENTTYPE_e document_type) {
    char* document_typeArray[] =  { "NULL", "Standard", "DebitNote", "CreditNote" };
    return document_typeArray[document_type];
}

accountingservice_invoice_enumeration_range_create_dto_DOCUMENTTYPE_e invoice_enumeration_range_create_dto_document_type_FromString(char* document_type){
    int stringToReturn = 0;
    char *document_typeArray[] =  { "NULL", "Standard", "DebitNote", "CreditNote" };
    size_t sizeofArray = sizeof(document_typeArray) / sizeof(document_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(document_type, document_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto_create(
    char *id,
    char *timestamp,
    char *prefix,
    char *suffix,
    char *identifier,
    char *qualified_name,
    long current_numeration,
    long numeration_from,
    long numeration_to,
    char *valid_from,
    char *valid_to,
    char *fiscal_authority_id,
    accountingservice_invoice_enumeration_range_create_dto_DOCUMENTTYPE_e document_type
    ) {
    invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto_local_var = malloc(sizeof(invoice_enumeration_range_create_dto_t));
    if (!invoice_enumeration_range_create_dto_local_var) {
        return NULL;
    }
    invoice_enumeration_range_create_dto_local_var->id = id;
    invoice_enumeration_range_create_dto_local_var->timestamp = timestamp;
    invoice_enumeration_range_create_dto_local_var->prefix = prefix;
    invoice_enumeration_range_create_dto_local_var->suffix = suffix;
    invoice_enumeration_range_create_dto_local_var->identifier = identifier;
    invoice_enumeration_range_create_dto_local_var->qualified_name = qualified_name;
    invoice_enumeration_range_create_dto_local_var->current_numeration = current_numeration;
    invoice_enumeration_range_create_dto_local_var->numeration_from = numeration_from;
    invoice_enumeration_range_create_dto_local_var->numeration_to = numeration_to;
    invoice_enumeration_range_create_dto_local_var->valid_from = valid_from;
    invoice_enumeration_range_create_dto_local_var->valid_to = valid_to;
    invoice_enumeration_range_create_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    invoice_enumeration_range_create_dto_local_var->document_type = document_type;

    return invoice_enumeration_range_create_dto_local_var;
}


void invoice_enumeration_range_create_dto_free(invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto) {
    if(NULL == invoice_enumeration_range_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_enumeration_range_create_dto->id) {
        free(invoice_enumeration_range_create_dto->id);
        invoice_enumeration_range_create_dto->id = NULL;
    }
    if (invoice_enumeration_range_create_dto->timestamp) {
        free(invoice_enumeration_range_create_dto->timestamp);
        invoice_enumeration_range_create_dto->timestamp = NULL;
    }
    if (invoice_enumeration_range_create_dto->prefix) {
        free(invoice_enumeration_range_create_dto->prefix);
        invoice_enumeration_range_create_dto->prefix = NULL;
    }
    if (invoice_enumeration_range_create_dto->suffix) {
        free(invoice_enumeration_range_create_dto->suffix);
        invoice_enumeration_range_create_dto->suffix = NULL;
    }
    if (invoice_enumeration_range_create_dto->identifier) {
        free(invoice_enumeration_range_create_dto->identifier);
        invoice_enumeration_range_create_dto->identifier = NULL;
    }
    if (invoice_enumeration_range_create_dto->qualified_name) {
        free(invoice_enumeration_range_create_dto->qualified_name);
        invoice_enumeration_range_create_dto->qualified_name = NULL;
    }
    if (invoice_enumeration_range_create_dto->valid_from) {
        free(invoice_enumeration_range_create_dto->valid_from);
        invoice_enumeration_range_create_dto->valid_from = NULL;
    }
    if (invoice_enumeration_range_create_dto->valid_to) {
        free(invoice_enumeration_range_create_dto->valid_to);
        invoice_enumeration_range_create_dto->valid_to = NULL;
    }
    if (invoice_enumeration_range_create_dto->fiscal_authority_id) {
        free(invoice_enumeration_range_create_dto->fiscal_authority_id);
        invoice_enumeration_range_create_dto->fiscal_authority_id = NULL;
    }
    free(invoice_enumeration_range_create_dto);
}

cJSON *invoice_enumeration_range_create_dto_convertToJSON(invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_enumeration_range_create_dto->id
    if(invoice_enumeration_range_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_enumeration_range_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_create_dto->timestamp
    if(invoice_enumeration_range_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_enumeration_range_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_enumeration_range_create_dto->prefix
    if(invoice_enumeration_range_create_dto->prefix) {
    if(cJSON_AddStringToObject(item, "prefix", invoice_enumeration_range_create_dto->prefix) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_create_dto->suffix
    if(invoice_enumeration_range_create_dto->suffix) {
    if(cJSON_AddStringToObject(item, "suffix", invoice_enumeration_range_create_dto->suffix) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_create_dto->identifier
    if(invoice_enumeration_range_create_dto->identifier) {
    if(cJSON_AddStringToObject(item, "identifier", invoice_enumeration_range_create_dto->identifier) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_create_dto->qualified_name
    if(invoice_enumeration_range_create_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", invoice_enumeration_range_create_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_create_dto->current_numeration
    if(invoice_enumeration_range_create_dto->current_numeration) {
    if(cJSON_AddNumberToObject(item, "currentNumeration", invoice_enumeration_range_create_dto->current_numeration) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_enumeration_range_create_dto->numeration_from
    if(invoice_enumeration_range_create_dto->numeration_from) {
    if(cJSON_AddNumberToObject(item, "numerationFrom", invoice_enumeration_range_create_dto->numeration_from) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_enumeration_range_create_dto->numeration_to
    if(invoice_enumeration_range_create_dto->numeration_to) {
    if(cJSON_AddNumberToObject(item, "numerationTo", invoice_enumeration_range_create_dto->numeration_to) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_enumeration_range_create_dto->valid_from
    if (!invoice_enumeration_range_create_dto->valid_from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "validFrom", invoice_enumeration_range_create_dto->valid_from) == NULL) {
    goto fail; //Date-Time
    }


    // invoice_enumeration_range_create_dto->valid_to
    if (!invoice_enumeration_range_create_dto->valid_to) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "validTo", invoice_enumeration_range_create_dto->valid_to) == NULL) {
    goto fail; //Date-Time
    }


    // invoice_enumeration_range_create_dto->fiscal_authority_id
    if(invoice_enumeration_range_create_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", invoice_enumeration_range_create_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_enumeration_range_create_dto->document_type
    if(invoice_enumeration_range_create_dto->document_type != accountingservice_invoice_enumeration_range_create_dto_DOCUMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "documentType", document_typeinvoice_enumeration_range_create_dto_ToString(invoice_enumeration_range_create_dto->document_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto_parseFromJSON(cJSON *invoice_enumeration_range_create_dtoJSON){

    invoice_enumeration_range_create_dto_t *invoice_enumeration_range_create_dto_local_var = NULL;

    // invoice_enumeration_range_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_enumeration_range_create_dto->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "prefix");
    if (prefix) { 
    if(!cJSON_IsString(prefix) && !cJSON_IsNull(prefix))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_create_dto->suffix
    cJSON *suffix = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "suffix");
    if (suffix) { 
    if(!cJSON_IsString(suffix) && !cJSON_IsNull(suffix))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_create_dto->identifier
    cJSON *identifier = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "identifier");
    if (identifier) { 
    if(!cJSON_IsString(identifier) && !cJSON_IsNull(identifier))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_create_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_create_dto->current_numeration
    cJSON *current_numeration = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "currentNumeration");
    if (current_numeration) { 
    if(!cJSON_IsNumber(current_numeration))
    {
    goto end; //Numeric
    }
    }

    // invoice_enumeration_range_create_dto->numeration_from
    cJSON *numeration_from = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "numerationFrom");
    if (numeration_from) { 
    if(!cJSON_IsNumber(numeration_from))
    {
    goto end; //Numeric
    }
    }

    // invoice_enumeration_range_create_dto->numeration_to
    cJSON *numeration_to = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "numerationTo");
    if (numeration_to) { 
    if(!cJSON_IsNumber(numeration_to))
    {
    goto end; //Numeric
    }
    }

    // invoice_enumeration_range_create_dto->valid_from
    cJSON *valid_from = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "validFrom");
    if (!valid_from) {
        goto end;
    }

    
    if(!cJSON_IsString(valid_from) && !cJSON_IsNull(valid_from))
    {
    goto end; //DateTime
    }

    // invoice_enumeration_range_create_dto->valid_to
    cJSON *valid_to = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "validTo");
    if (!valid_to) {
        goto end;
    }

    
    if(!cJSON_IsString(valid_to) && !cJSON_IsNull(valid_to))
    {
    goto end; //DateTime
    }

    // invoice_enumeration_range_create_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }

    // invoice_enumeration_range_create_dto->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(invoice_enumeration_range_create_dtoJSON, "documentType");
    accountingservice_invoice_enumeration_range_create_dto_DOCUMENTTYPE_e document_typeVariable;
    if (document_type) { 
    if(!cJSON_IsString(document_type))
    {
    goto end; //Enum
    }
    document_typeVariable = invoice_enumeration_range_create_dto_document_type_FromString(document_type->valuestring);
    }


    invoice_enumeration_range_create_dto_local_var = invoice_enumeration_range_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        prefix && !cJSON_IsNull(prefix) ? strdup(prefix->valuestring) : NULL,
        suffix && !cJSON_IsNull(suffix) ? strdup(suffix->valuestring) : NULL,
        identifier && !cJSON_IsNull(identifier) ? strdup(identifier->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        current_numeration ? current_numeration->valuedouble : 0,
        numeration_from ? numeration_from->valuedouble : 0,
        numeration_to ? numeration_to->valuedouble : 0,
        strdup(valid_from->valuestring),
        strdup(valid_to->valuestring),
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL,
        document_type ? document_typeVariable : accountingservice_invoice_enumeration_range_create_dto_DOCUMENTTYPE_NULL
        );

    return invoice_enumeration_range_create_dto_local_var;
end:
    return NULL;

}
