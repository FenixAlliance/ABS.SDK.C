#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_attachment_update_dto.h"


char* signed_document_attachment_update_dto_attachment_role_ToString(trustservice_signed_document_attachment_update_dto_ATTACHMENTROLE_e attachment_role) {
    char* attachment_roleArray[] =  { "NULL", "Unknown", "Source", "SupportingEvidence", "AuthorityResponse", "HumanReadablePdf", "XmlPayload", "ValidationReport", "Other" };
    return attachment_roleArray[attachment_role];
}

trustservice_signed_document_attachment_update_dto_ATTACHMENTROLE_e signed_document_attachment_update_dto_attachment_role_FromString(char* attachment_role){
    int stringToReturn = 0;
    char *attachment_roleArray[] =  { "NULL", "Unknown", "Source", "SupportingEvidence", "AuthorityResponse", "HumanReadablePdf", "XmlPayload", "ValidationReport", "Other" };
    size_t sizeofArray = sizeof(attachment_roleArray) / sizeof(attachment_roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attachment_role, attachment_roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signed_document_attachment_update_dto_t *signed_document_attachment_update_dto_create(
    char *title,
    trustservice_signed_document_attachment_update_dto_ATTACHMENTROLE_e attachment_role
    ) {
    signed_document_attachment_update_dto_t *signed_document_attachment_update_dto_local_var = malloc(sizeof(signed_document_attachment_update_dto_t));
    if (!signed_document_attachment_update_dto_local_var) {
        return NULL;
    }
    signed_document_attachment_update_dto_local_var->title = title;
    signed_document_attachment_update_dto_local_var->attachment_role = attachment_role;

    return signed_document_attachment_update_dto_local_var;
}


void signed_document_attachment_update_dto_free(signed_document_attachment_update_dto_t *signed_document_attachment_update_dto) {
    if(NULL == signed_document_attachment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_attachment_update_dto->title) {
        free(signed_document_attachment_update_dto->title);
        signed_document_attachment_update_dto->title = NULL;
    }
    free(signed_document_attachment_update_dto);
}

cJSON *signed_document_attachment_update_dto_convertToJSON(signed_document_attachment_update_dto_t *signed_document_attachment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_attachment_update_dto->title
    if (!signed_document_attachment_update_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", signed_document_attachment_update_dto->title) == NULL) {
    goto fail; //String
    }


    // signed_document_attachment_update_dto->attachment_role
    if(signed_document_attachment_update_dto->attachment_role != trustservice_signed_document_attachment_update_dto_ATTACHMENTROLE_NULL) {
    if(cJSON_AddStringToObject(item, "attachmentRole", attachment_rolesigned_document_attachment_update_dto_ToString(signed_document_attachment_update_dto->attachment_role)) == NULL)
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

signed_document_attachment_update_dto_t *signed_document_attachment_update_dto_parseFromJSON(cJSON *signed_document_attachment_update_dtoJSON){

    signed_document_attachment_update_dto_t *signed_document_attachment_update_dto_local_var = NULL;

    // signed_document_attachment_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_update_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // signed_document_attachment_update_dto->attachment_role
    cJSON *attachment_role = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_update_dtoJSON, "attachmentRole");
    trustservice_signed_document_attachment_update_dto_ATTACHMENTROLE_e attachment_roleVariable;
    if (attachment_role) { 
    if(!cJSON_IsString(attachment_role))
    {
    goto end; //Enum
    }
    attachment_roleVariable = signed_document_attachment_update_dto_attachment_role_FromString(attachment_role->valuestring);
    }


    signed_document_attachment_update_dto_local_var = signed_document_attachment_update_dto_create (
        strdup(title->valuestring),
        attachment_role ? attachment_roleVariable : trustservice_signed_document_attachment_update_dto_ATTACHMENTROLE_NULL
        );

    return signed_document_attachment_update_dto_local_var;
end:
    return NULL;

}
