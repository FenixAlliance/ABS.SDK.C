#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_profile_dto.h"



bank_profile_dto_t *bank_profile_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *tenant_id,
    char *type,
    char *enrollment_id,
    char *about,
    int verified,
    int submitted,
    char *avatar_url,
    contact_dto_t *contact,
    char *qualified_name,
    char *verification_timestamp,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label,
    char *bank_id,
    char *bank_name
    ) {
    bank_profile_dto_t *bank_profile_dto_local_var = malloc(sizeof(bank_profile_dto_t));
    if (!bank_profile_dto_local_var) {
        return NULL;
    }
    bank_profile_dto_local_var->id = id;
    bank_profile_dto_local_var->timestamp = timestamp;
    bank_profile_dto_local_var->contact_id = contact_id;
    bank_profile_dto_local_var->tenant_id = tenant_id;
    bank_profile_dto_local_var->type = type;
    bank_profile_dto_local_var->enrollment_id = enrollment_id;
    bank_profile_dto_local_var->about = about;
    bank_profile_dto_local_var->verified = verified;
    bank_profile_dto_local_var->submitted = submitted;
    bank_profile_dto_local_var->avatar_url = avatar_url;
    bank_profile_dto_local_var->contact = contact;
    bank_profile_dto_local_var->qualified_name = qualified_name;
    bank_profile_dto_local_var->verification_timestamp = verification_timestamp;
    bank_profile_dto_local_var->data = data;
    bank_profile_dto_local_var->data_label = data_label;
    bank_profile_dto_local_var->data1 = data1;
    bank_profile_dto_local_var->data1_label = data1_label;
    bank_profile_dto_local_var->data2 = data2;
    bank_profile_dto_local_var->data2_label = data2_label;
    bank_profile_dto_local_var->data3 = data3;
    bank_profile_dto_local_var->data3_label = data3_label;
    bank_profile_dto_local_var->data4 = data4;
    bank_profile_dto_local_var->data4_label = data4_label;
    bank_profile_dto_local_var->data5 = data5;
    bank_profile_dto_local_var->data5_label = data5_label;
    bank_profile_dto_local_var->data6 = data6;
    bank_profile_dto_local_var->data6_label = data6_label;
    bank_profile_dto_local_var->data7 = data7;
    bank_profile_dto_local_var->data7_label = data7_label;
    bank_profile_dto_local_var->data8 = data8;
    bank_profile_dto_local_var->data8_label = data8_label;
    bank_profile_dto_local_var->data9 = data9;
    bank_profile_dto_local_var->data9_label = data9_label;
    bank_profile_dto_local_var->bank_id = bank_id;
    bank_profile_dto_local_var->bank_name = bank_name;

    return bank_profile_dto_local_var;
}


void bank_profile_dto_free(bank_profile_dto_t *bank_profile_dto) {
    if(NULL == bank_profile_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_profile_dto->id) {
        free(bank_profile_dto->id);
        bank_profile_dto->id = NULL;
    }
    if (bank_profile_dto->timestamp) {
        free(bank_profile_dto->timestamp);
        bank_profile_dto->timestamp = NULL;
    }
    if (bank_profile_dto->contact_id) {
        free(bank_profile_dto->contact_id);
        bank_profile_dto->contact_id = NULL;
    }
    if (bank_profile_dto->tenant_id) {
        free(bank_profile_dto->tenant_id);
        bank_profile_dto->tenant_id = NULL;
    }
    if (bank_profile_dto->type) {
        free(bank_profile_dto->type);
        bank_profile_dto->type = NULL;
    }
    if (bank_profile_dto->enrollment_id) {
        free(bank_profile_dto->enrollment_id);
        bank_profile_dto->enrollment_id = NULL;
    }
    if (bank_profile_dto->about) {
        free(bank_profile_dto->about);
        bank_profile_dto->about = NULL;
    }
    if (bank_profile_dto->avatar_url) {
        free(bank_profile_dto->avatar_url);
        bank_profile_dto->avatar_url = NULL;
    }
    if (bank_profile_dto->contact) {
        contact_dto_free(bank_profile_dto->contact);
        bank_profile_dto->contact = NULL;
    }
    if (bank_profile_dto->qualified_name) {
        free(bank_profile_dto->qualified_name);
        bank_profile_dto->qualified_name = NULL;
    }
    if (bank_profile_dto->verification_timestamp) {
        free(bank_profile_dto->verification_timestamp);
        bank_profile_dto->verification_timestamp = NULL;
    }
    if (bank_profile_dto->data) {
        free(bank_profile_dto->data);
        bank_profile_dto->data = NULL;
    }
    if (bank_profile_dto->data_label) {
        free(bank_profile_dto->data_label);
        bank_profile_dto->data_label = NULL;
    }
    if (bank_profile_dto->data1) {
        free(bank_profile_dto->data1);
        bank_profile_dto->data1 = NULL;
    }
    if (bank_profile_dto->data1_label) {
        free(bank_profile_dto->data1_label);
        bank_profile_dto->data1_label = NULL;
    }
    if (bank_profile_dto->data2) {
        free(bank_profile_dto->data2);
        bank_profile_dto->data2 = NULL;
    }
    if (bank_profile_dto->data2_label) {
        free(bank_profile_dto->data2_label);
        bank_profile_dto->data2_label = NULL;
    }
    if (bank_profile_dto->data3) {
        free(bank_profile_dto->data3);
        bank_profile_dto->data3 = NULL;
    }
    if (bank_profile_dto->data3_label) {
        free(bank_profile_dto->data3_label);
        bank_profile_dto->data3_label = NULL;
    }
    if (bank_profile_dto->data4) {
        free(bank_profile_dto->data4);
        bank_profile_dto->data4 = NULL;
    }
    if (bank_profile_dto->data4_label) {
        free(bank_profile_dto->data4_label);
        bank_profile_dto->data4_label = NULL;
    }
    if (bank_profile_dto->data5) {
        free(bank_profile_dto->data5);
        bank_profile_dto->data5 = NULL;
    }
    if (bank_profile_dto->data5_label) {
        free(bank_profile_dto->data5_label);
        bank_profile_dto->data5_label = NULL;
    }
    if (bank_profile_dto->data6) {
        free(bank_profile_dto->data6);
        bank_profile_dto->data6 = NULL;
    }
    if (bank_profile_dto->data6_label) {
        free(bank_profile_dto->data6_label);
        bank_profile_dto->data6_label = NULL;
    }
    if (bank_profile_dto->data7) {
        free(bank_profile_dto->data7);
        bank_profile_dto->data7 = NULL;
    }
    if (bank_profile_dto->data7_label) {
        free(bank_profile_dto->data7_label);
        bank_profile_dto->data7_label = NULL;
    }
    if (bank_profile_dto->data8) {
        free(bank_profile_dto->data8);
        bank_profile_dto->data8 = NULL;
    }
    if (bank_profile_dto->data8_label) {
        free(bank_profile_dto->data8_label);
        bank_profile_dto->data8_label = NULL;
    }
    if (bank_profile_dto->data9) {
        free(bank_profile_dto->data9);
        bank_profile_dto->data9 = NULL;
    }
    if (bank_profile_dto->data9_label) {
        free(bank_profile_dto->data9_label);
        bank_profile_dto->data9_label = NULL;
    }
    if (bank_profile_dto->bank_id) {
        free(bank_profile_dto->bank_id);
        bank_profile_dto->bank_id = NULL;
    }
    if (bank_profile_dto->bank_name) {
        free(bank_profile_dto->bank_name);
        bank_profile_dto->bank_name = NULL;
    }
    free(bank_profile_dto);
}

cJSON *bank_profile_dto_convertToJSON(bank_profile_dto_t *bank_profile_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_profile_dto->id
    if(bank_profile_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_profile_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->timestamp
    if(bank_profile_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_profile_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_profile_dto->contact_id
    if(bank_profile_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", bank_profile_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->tenant_id
    if(bank_profile_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", bank_profile_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->type
    if(bank_profile_dto->type) {
    if(cJSON_AddStringToObject(item, "type", bank_profile_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->enrollment_id
    if(bank_profile_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", bank_profile_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->about
    if(bank_profile_dto->about) {
    if(cJSON_AddStringToObject(item, "about", bank_profile_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->verified
    if(bank_profile_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", bank_profile_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // bank_profile_dto->submitted
    if(bank_profile_dto->submitted) {
    if(cJSON_AddBoolToObject(item, "submitted", bank_profile_dto->submitted) == NULL) {
    goto fail; //Bool
    }
    }


    // bank_profile_dto->avatar_url
    if(bank_profile_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", bank_profile_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->contact
    if(bank_profile_dto->contact) {
    cJSON *contact_local_JSON = contact_dto_convertToJSON(bank_profile_dto->contact);
    if(contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contact", contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // bank_profile_dto->qualified_name
    if(bank_profile_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", bank_profile_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->verification_timestamp
    if(bank_profile_dto->verification_timestamp) {
    if(cJSON_AddStringToObject(item, "verificationTimestamp", bank_profile_dto->verification_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_profile_dto->data
    if(bank_profile_dto->data) {
    if(cJSON_AddStringToObject(item, "data", bank_profile_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data_label
    if(bank_profile_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", bank_profile_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data1
    if(bank_profile_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", bank_profile_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data1_label
    if(bank_profile_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", bank_profile_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data2
    if(bank_profile_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", bank_profile_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data2_label
    if(bank_profile_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", bank_profile_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data3
    if(bank_profile_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", bank_profile_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data3_label
    if(bank_profile_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", bank_profile_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data4
    if(bank_profile_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", bank_profile_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data4_label
    if(bank_profile_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", bank_profile_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data5
    if(bank_profile_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", bank_profile_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data5_label
    if(bank_profile_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", bank_profile_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data6
    if(bank_profile_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", bank_profile_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data6_label
    if(bank_profile_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", bank_profile_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data7
    if(bank_profile_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", bank_profile_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data7_label
    if(bank_profile_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", bank_profile_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data8
    if(bank_profile_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", bank_profile_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data8_label
    if(bank_profile_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", bank_profile_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data9
    if(bank_profile_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", bank_profile_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->data9_label
    if(bank_profile_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", bank_profile_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->bank_id
    if(bank_profile_dto->bank_id) {
    if(cJSON_AddStringToObject(item, "bankId", bank_profile_dto->bank_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_profile_dto->bank_name
    if(bank_profile_dto->bank_name) {
    if(cJSON_AddStringToObject(item, "bankName", bank_profile_dto->bank_name) == NULL) {
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

bank_profile_dto_t *bank_profile_dto_parseFromJSON(cJSON *bank_profile_dtoJSON){

    bank_profile_dto_t *bank_profile_dto_local_var = NULL;

    // define the local variable for bank_profile_dto->contact
    contact_dto_t *contact_local_nonprim = NULL;

    // bank_profile_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_profile_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // bank_profile_dto->submitted
    cJSON *submitted = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "submitted");
    if (submitted) { 
    if(!cJSON_IsBool(submitted))
    {
    goto end; //Bool
    }
    }

    // bank_profile_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->contact
    cJSON *contact = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "contact");
    if (contact) { 
    contact_local_nonprim = contact_dto_parseFromJSON(contact); //nonprimitive
    }

    // bank_profile_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->verification_timestamp
    cJSON *verification_timestamp = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "verificationTimestamp");
    if (verification_timestamp) { 
    if(!cJSON_IsString(verification_timestamp) && !cJSON_IsNull(verification_timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_profile_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->bank_id
    cJSON *bank_id = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "bankId");
    if (bank_id) { 
    if(!cJSON_IsString(bank_id) && !cJSON_IsNull(bank_id))
    {
    goto end; //String
    }
    }

    // bank_profile_dto->bank_name
    cJSON *bank_name = cJSON_GetObjectItemCaseSensitive(bank_profile_dtoJSON, "bankName");
    if (bank_name) { 
    if(!cJSON_IsString(bank_name) && !cJSON_IsNull(bank_name))
    {
    goto end; //String
    }
    }


    bank_profile_dto_local_var = bank_profile_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        verified ? verified->valueint : 0,
        submitted ? submitted->valueint : 0,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        contact ? contact_local_nonprim : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        verification_timestamp && !cJSON_IsNull(verification_timestamp) ? strdup(verification_timestamp->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        data2 && !cJSON_IsNull(data2) ? strdup(data2->valuestring) : NULL,
        data2_label && !cJSON_IsNull(data2_label) ? strdup(data2_label->valuestring) : NULL,
        data3 && !cJSON_IsNull(data3) ? strdup(data3->valuestring) : NULL,
        data3_label && !cJSON_IsNull(data3_label) ? strdup(data3_label->valuestring) : NULL,
        data4 && !cJSON_IsNull(data4) ? strdup(data4->valuestring) : NULL,
        data4_label && !cJSON_IsNull(data4_label) ? strdup(data4_label->valuestring) : NULL,
        data5 && !cJSON_IsNull(data5) ? strdup(data5->valuestring) : NULL,
        data5_label && !cJSON_IsNull(data5_label) ? strdup(data5_label->valuestring) : NULL,
        data6 && !cJSON_IsNull(data6) ? strdup(data6->valuestring) : NULL,
        data6_label && !cJSON_IsNull(data6_label) ? strdup(data6_label->valuestring) : NULL,
        data7 && !cJSON_IsNull(data7) ? strdup(data7->valuestring) : NULL,
        data7_label && !cJSON_IsNull(data7_label) ? strdup(data7_label->valuestring) : NULL,
        data8 && !cJSON_IsNull(data8) ? strdup(data8->valuestring) : NULL,
        data8_label && !cJSON_IsNull(data8_label) ? strdup(data8_label->valuestring) : NULL,
        data9 && !cJSON_IsNull(data9) ? strdup(data9->valuestring) : NULL,
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL,
        bank_id && !cJSON_IsNull(bank_id) ? strdup(bank_id->valuestring) : NULL,
        bank_name && !cJSON_IsNull(bank_name) ? strdup(bank_name->valuestring) : NULL
        );

    return bank_profile_dto_local_var;
end:
    if (contact_local_nonprim) {
        contact_dto_free(contact_local_nonprim);
        contact_local_nonprim = NULL;
    }
    return NULL;

}
