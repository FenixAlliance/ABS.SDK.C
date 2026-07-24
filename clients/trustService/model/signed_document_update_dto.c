#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_update_dto.h"


char* signed_document_update_dto_document_standard_ToString(trustservice_signed_document_update_dto_DOCUMENTSTANDARD_e document_standard) {
    char* document_standardArray[] =  { "NULL", "None", "Ubl", "Pdf", "Xml", "Email", "Json", "Other" };
    return document_standardArray[document_standard];
}

trustservice_signed_document_update_dto_DOCUMENTSTANDARD_e signed_document_update_dto_document_standard_FromString(char* document_standard){
    int stringToReturn = 0;
    char *document_standardArray[] =  { "NULL", "None", "Ubl", "Pdf", "Xml", "Email", "Json", "Other" };
    size_t sizeofArray = sizeof(document_standardArray) / sizeof(document_standardArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(document_standard, document_standardArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_update_dto_trust_document_type_ToString(trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_e trust_document_type) {
    char* trust_document_typeArray[] =  { "NULL", "Unknown", "Invoice", "CreditNote", "DebitNote", "Contract", "Certificate", "Email", "AuthorityResponse", "Other" };
    return trust_document_typeArray[trust_document_type];
}

trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_e signed_document_update_dto_trust_document_type_FromString(char* trust_document_type){
    int stringToReturn = 0;
    char *trust_document_typeArray[] =  { "NULL", "Unknown", "Invoice", "CreditNote", "DebitNote", "Contract", "Certificate", "Email", "AuthorityResponse", "Other" };
    size_t sizeofArray = sizeof(trust_document_typeArray) / sizeof(trust_document_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(trust_document_type, trust_document_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signed_document_update_dto_t *signed_document_update_dto_create(
    char *url,
    char *type,
    char *title,
    char *content_type,
    char *contact_id,
    trustservice_signed_document_update_dto_DOCUMENTSTANDARD_e document_standard,
    trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_e trust_document_type,
    char *correlation_id,
    char *external_reference
    ) {
    signed_document_update_dto_t *signed_document_update_dto_local_var = malloc(sizeof(signed_document_update_dto_t));
    if (!signed_document_update_dto_local_var) {
        return NULL;
    }
    signed_document_update_dto_local_var->url = url;
    signed_document_update_dto_local_var->type = type;
    signed_document_update_dto_local_var->title = title;
    signed_document_update_dto_local_var->content_type = content_type;
    signed_document_update_dto_local_var->contact_id = contact_id;
    signed_document_update_dto_local_var->document_standard = document_standard;
    signed_document_update_dto_local_var->trust_document_type = trust_document_type;
    signed_document_update_dto_local_var->correlation_id = correlation_id;
    signed_document_update_dto_local_var->external_reference = external_reference;

    return signed_document_update_dto_local_var;
}


void signed_document_update_dto_free(signed_document_update_dto_t *signed_document_update_dto) {
    if(NULL == signed_document_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_update_dto->url) {
        free(signed_document_update_dto->url);
        signed_document_update_dto->url = NULL;
    }
    if (signed_document_update_dto->type) {
        free(signed_document_update_dto->type);
        signed_document_update_dto->type = NULL;
    }
    if (signed_document_update_dto->title) {
        free(signed_document_update_dto->title);
        signed_document_update_dto->title = NULL;
    }
    if (signed_document_update_dto->content_type) {
        free(signed_document_update_dto->content_type);
        signed_document_update_dto->content_type = NULL;
    }
    if (signed_document_update_dto->contact_id) {
        free(signed_document_update_dto->contact_id);
        signed_document_update_dto->contact_id = NULL;
    }
    if (signed_document_update_dto->correlation_id) {
        free(signed_document_update_dto->correlation_id);
        signed_document_update_dto->correlation_id = NULL;
    }
    if (signed_document_update_dto->external_reference) {
        free(signed_document_update_dto->external_reference);
        signed_document_update_dto->external_reference = NULL;
    }
    free(signed_document_update_dto);
}

cJSON *signed_document_update_dto_convertToJSON(signed_document_update_dto_t *signed_document_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_update_dto->url
    if(signed_document_update_dto->url) {
    if(cJSON_AddStringToObject(item, "url", signed_document_update_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_update_dto->type
    if(signed_document_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signed_document_update_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_update_dto->title
    if (!signed_document_update_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", signed_document_update_dto->title) == NULL) {
    goto fail; //String
    }


    // signed_document_update_dto->content_type
    if(signed_document_update_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", signed_document_update_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_update_dto->contact_id
    if (!signed_document_update_dto->contact_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "contactId", signed_document_update_dto->contact_id) == NULL) {
    goto fail; //String
    }


    // signed_document_update_dto->document_standard
    if(signed_document_update_dto->document_standard != trustservice_signed_document_update_dto_DOCUMENTSTANDARD_NULL) {
    if(cJSON_AddStringToObject(item, "documentStandard", document_standardsigned_document_update_dto_ToString(signed_document_update_dto->document_standard)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_update_dto->trust_document_type
    if(signed_document_update_dto->trust_document_type != trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "trustDocumentType", trust_document_typesigned_document_update_dto_ToString(signed_document_update_dto->trust_document_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_update_dto->correlation_id
    if(signed_document_update_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signed_document_update_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_update_dto->external_reference
    if(signed_document_update_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", signed_document_update_dto->external_reference) == NULL) {
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

signed_document_update_dto_t *signed_document_update_dto_parseFromJSON(cJSON *signed_document_update_dtoJSON){

    signed_document_update_dto_t *signed_document_update_dto_local_var = NULL;

    // signed_document_update_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // signed_document_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signed_document_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // signed_document_update_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // signed_document_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "contactId");
    if (!contact_id) {
        goto end;
    }

    
    if(!cJSON_IsString(contact_id))
    {
    goto end; //String
    }

    // signed_document_update_dto->document_standard
    cJSON *document_standard = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "documentStandard");
    trustservice_signed_document_update_dto_DOCUMENTSTANDARD_e document_standardVariable;
    if (document_standard) { 
    if(!cJSON_IsString(document_standard))
    {
    goto end; //Enum
    }
    document_standardVariable = signed_document_update_dto_document_standard_FromString(document_standard->valuestring);
    }

    // signed_document_update_dto->trust_document_type
    cJSON *trust_document_type = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "trustDocumentType");
    trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_e trust_document_typeVariable;
    if (trust_document_type) { 
    if(!cJSON_IsString(trust_document_type))
    {
    goto end; //Enum
    }
    trust_document_typeVariable = signed_document_update_dto_trust_document_type_FromString(trust_document_type->valuestring);
    }

    // signed_document_update_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signed_document_update_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(signed_document_update_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }


    signed_document_update_dto_local_var = signed_document_update_dto_create (
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        strdup(title->valuestring),
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        strdup(contact_id->valuestring),
        document_standard ? document_standardVariable : trustservice_signed_document_update_dto_DOCUMENTSTANDARD_NULL,
        trust_document_type ? trust_document_typeVariable : trustservice_signed_document_update_dto_TRUSTDOCUMENTTYPE_NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL
        );

    return signed_document_update_dto_local_var;
end:
    return NULL;

}
