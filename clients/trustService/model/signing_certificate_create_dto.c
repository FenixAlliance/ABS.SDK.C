#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_certificate_create_dto.h"


char* signing_certificate_create_dto_certificate_type_ToString(trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e certificate_type) {
    char* certificate_typeArray[] =  { "NULL", "AuthSignedCertificate", "SelfSignedCertificate", "AllianceSignedCertificate" };
    return certificate_typeArray[certificate_type];
}

trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e signing_certificate_create_dto_certificate_type_FromString(char* certificate_type){
    int stringToReturn = 0;
    char *certificate_typeArray[] =  { "NULL", "AuthSignedCertificate", "SelfSignedCertificate", "AllianceSignedCertificate" };
    size_t sizeofArray = sizeof(certificate_typeArray) / sizeof(certificate_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(certificate_type, certificate_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signing_certificate_create_dto_t *signing_certificate_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *type,
    char *url,
    char *csr,
    char *public_key,
    trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e certificate_type,
    char *contact_id,
    char *security_certificate_id
    ) {
    signing_certificate_create_dto_t *signing_certificate_create_dto_local_var = malloc(sizeof(signing_certificate_create_dto_t));
    if (!signing_certificate_create_dto_local_var) {
        return NULL;
    }
    signing_certificate_create_dto_local_var->id = id;
    signing_certificate_create_dto_local_var->timestamp = timestamp;
    signing_certificate_create_dto_local_var->title = title;
    signing_certificate_create_dto_local_var->type = type;
    signing_certificate_create_dto_local_var->url = url;
    signing_certificate_create_dto_local_var->csr = csr;
    signing_certificate_create_dto_local_var->public_key = public_key;
    signing_certificate_create_dto_local_var->certificate_type = certificate_type;
    signing_certificate_create_dto_local_var->contact_id = contact_id;
    signing_certificate_create_dto_local_var->security_certificate_id = security_certificate_id;

    return signing_certificate_create_dto_local_var;
}


void signing_certificate_create_dto_free(signing_certificate_create_dto_t *signing_certificate_create_dto) {
    if(NULL == signing_certificate_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_certificate_create_dto->id) {
        free(signing_certificate_create_dto->id);
        signing_certificate_create_dto->id = NULL;
    }
    if (signing_certificate_create_dto->timestamp) {
        free(signing_certificate_create_dto->timestamp);
        signing_certificate_create_dto->timestamp = NULL;
    }
    if (signing_certificate_create_dto->title) {
        free(signing_certificate_create_dto->title);
        signing_certificate_create_dto->title = NULL;
    }
    if (signing_certificate_create_dto->type) {
        free(signing_certificate_create_dto->type);
        signing_certificate_create_dto->type = NULL;
    }
    if (signing_certificate_create_dto->url) {
        free(signing_certificate_create_dto->url);
        signing_certificate_create_dto->url = NULL;
    }
    if (signing_certificate_create_dto->csr) {
        free(signing_certificate_create_dto->csr);
        signing_certificate_create_dto->csr = NULL;
    }
    if (signing_certificate_create_dto->public_key) {
        free(signing_certificate_create_dto->public_key);
        signing_certificate_create_dto->public_key = NULL;
    }
    if (signing_certificate_create_dto->contact_id) {
        free(signing_certificate_create_dto->contact_id);
        signing_certificate_create_dto->contact_id = NULL;
    }
    if (signing_certificate_create_dto->security_certificate_id) {
        free(signing_certificate_create_dto->security_certificate_id);
        signing_certificate_create_dto->security_certificate_id = NULL;
    }
    free(signing_certificate_create_dto);
}

cJSON *signing_certificate_create_dto_convertToJSON(signing_certificate_create_dto_t *signing_certificate_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_certificate_create_dto->id
    if(signing_certificate_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_certificate_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_create_dto->timestamp
    if(signing_certificate_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signing_certificate_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_certificate_create_dto->title
    if (!signing_certificate_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", signing_certificate_create_dto->title) == NULL) {
    goto fail; //String
    }


    // signing_certificate_create_dto->type
    if(signing_certificate_create_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signing_certificate_create_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_create_dto->url
    if(signing_certificate_create_dto->url) {
    if(cJSON_AddStringToObject(item, "url", signing_certificate_create_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_create_dto->csr
    if(signing_certificate_create_dto->csr) {
    if(cJSON_AddStringToObject(item, "csr", signing_certificate_create_dto->csr) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_create_dto->public_key
    if(signing_certificate_create_dto->public_key) {
    if(cJSON_AddStringToObject(item, "publicKey", signing_certificate_create_dto->public_key) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_create_dto->certificate_type
    if(signing_certificate_create_dto->certificate_type != trustservice_signing_certificate_create_dto_CERTIFICATETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "certificateType", certificate_typesigning_certificate_create_dto_ToString(signing_certificate_create_dto->certificate_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_certificate_create_dto->contact_id
    if (!signing_certificate_create_dto->contact_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "contactId", signing_certificate_create_dto->contact_id) == NULL) {
    goto fail; //String
    }


    // signing_certificate_create_dto->security_certificate_id
    if(signing_certificate_create_dto->security_certificate_id) {
    if(cJSON_AddStringToObject(item, "securityCertificateId", signing_certificate_create_dto->security_certificate_id) == NULL) {
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

signing_certificate_create_dto_t *signing_certificate_create_dto_parseFromJSON(cJSON *signing_certificate_create_dtoJSON){

    signing_certificate_create_dto_t *signing_certificate_create_dto_local_var = NULL;

    // signing_certificate_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_certificate_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_certificate_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // signing_certificate_create_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signing_certificate_create_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // signing_certificate_create_dto->csr
    cJSON *csr = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "csr");
    if (csr) { 
    if(!cJSON_IsString(csr) && !cJSON_IsNull(csr))
    {
    goto end; //String
    }
    }

    // signing_certificate_create_dto->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "publicKey");
    if (public_key) { 
    if(!cJSON_IsString(public_key) && !cJSON_IsNull(public_key))
    {
    goto end; //String
    }
    }

    // signing_certificate_create_dto->certificate_type
    cJSON *certificate_type = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "certificateType");
    trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e certificate_typeVariable;
    if (certificate_type) { 
    if(!cJSON_IsString(certificate_type))
    {
    goto end; //Enum
    }
    certificate_typeVariable = signing_certificate_create_dto_certificate_type_FromString(certificate_type->valuestring);
    }

    // signing_certificate_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "contactId");
    if (!contact_id) {
        goto end;
    }

    
    if(!cJSON_IsString(contact_id))
    {
    goto end; //String
    }

    // signing_certificate_create_dto->security_certificate_id
    cJSON *security_certificate_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_create_dtoJSON, "securityCertificateId");
    if (security_certificate_id) { 
    if(!cJSON_IsString(security_certificate_id) && !cJSON_IsNull(security_certificate_id))
    {
    goto end; //String
    }
    }


    signing_certificate_create_dto_local_var = signing_certificate_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        csr && !cJSON_IsNull(csr) ? strdup(csr->valuestring) : NULL,
        public_key && !cJSON_IsNull(public_key) ? strdup(public_key->valuestring) : NULL,
        certificate_type ? certificate_typeVariable : trustservice_signing_certificate_create_dto_CERTIFICATETYPE_NULL,
        strdup(contact_id->valuestring),
        security_certificate_id && !cJSON_IsNull(security_certificate_id) ? strdup(security_certificate_id->valuestring) : NULL
        );

    return signing_certificate_create_dto_local_var;
end:
    return NULL;

}
