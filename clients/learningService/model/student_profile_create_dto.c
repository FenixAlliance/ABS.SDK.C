#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "student_profile_create_dto.h"



student_profile_create_dto_t *student_profile_create_dto_create(
    char *id,
    char *timestamp,
    char *about,
    int verified,
    int submitted,
    char *avatar_url,
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
    char *contact_id
    ) {
    student_profile_create_dto_t *student_profile_create_dto_local_var = malloc(sizeof(student_profile_create_dto_t));
    if (!student_profile_create_dto_local_var) {
        return NULL;
    }
    student_profile_create_dto_local_var->id = id;
    student_profile_create_dto_local_var->timestamp = timestamp;
    student_profile_create_dto_local_var->about = about;
    student_profile_create_dto_local_var->verified = verified;
    student_profile_create_dto_local_var->submitted = submitted;
    student_profile_create_dto_local_var->avatar_url = avatar_url;
    student_profile_create_dto_local_var->qualified_name = qualified_name;
    student_profile_create_dto_local_var->verification_timestamp = verification_timestamp;
    student_profile_create_dto_local_var->data = data;
    student_profile_create_dto_local_var->data_label = data_label;
    student_profile_create_dto_local_var->data1 = data1;
    student_profile_create_dto_local_var->data1_label = data1_label;
    student_profile_create_dto_local_var->data2 = data2;
    student_profile_create_dto_local_var->data2_label = data2_label;
    student_profile_create_dto_local_var->data3 = data3;
    student_profile_create_dto_local_var->data3_label = data3_label;
    student_profile_create_dto_local_var->data4 = data4;
    student_profile_create_dto_local_var->data4_label = data4_label;
    student_profile_create_dto_local_var->data5 = data5;
    student_profile_create_dto_local_var->data5_label = data5_label;
    student_profile_create_dto_local_var->data6 = data6;
    student_profile_create_dto_local_var->data6_label = data6_label;
    student_profile_create_dto_local_var->data7 = data7;
    student_profile_create_dto_local_var->data7_label = data7_label;
    student_profile_create_dto_local_var->data8 = data8;
    student_profile_create_dto_local_var->data8_label = data8_label;
    student_profile_create_dto_local_var->data9 = data9;
    student_profile_create_dto_local_var->data9_label = data9_label;
    student_profile_create_dto_local_var->contact_id = contact_id;

    return student_profile_create_dto_local_var;
}


void student_profile_create_dto_free(student_profile_create_dto_t *student_profile_create_dto) {
    if(NULL == student_profile_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (student_profile_create_dto->id) {
        free(student_profile_create_dto->id);
        student_profile_create_dto->id = NULL;
    }
    if (student_profile_create_dto->timestamp) {
        free(student_profile_create_dto->timestamp);
        student_profile_create_dto->timestamp = NULL;
    }
    if (student_profile_create_dto->about) {
        free(student_profile_create_dto->about);
        student_profile_create_dto->about = NULL;
    }
    if (student_profile_create_dto->avatar_url) {
        free(student_profile_create_dto->avatar_url);
        student_profile_create_dto->avatar_url = NULL;
    }
    if (student_profile_create_dto->qualified_name) {
        free(student_profile_create_dto->qualified_name);
        student_profile_create_dto->qualified_name = NULL;
    }
    if (student_profile_create_dto->verification_timestamp) {
        free(student_profile_create_dto->verification_timestamp);
        student_profile_create_dto->verification_timestamp = NULL;
    }
    if (student_profile_create_dto->data) {
        free(student_profile_create_dto->data);
        student_profile_create_dto->data = NULL;
    }
    if (student_profile_create_dto->data_label) {
        free(student_profile_create_dto->data_label);
        student_profile_create_dto->data_label = NULL;
    }
    if (student_profile_create_dto->data1) {
        free(student_profile_create_dto->data1);
        student_profile_create_dto->data1 = NULL;
    }
    if (student_profile_create_dto->data1_label) {
        free(student_profile_create_dto->data1_label);
        student_profile_create_dto->data1_label = NULL;
    }
    if (student_profile_create_dto->data2) {
        free(student_profile_create_dto->data2);
        student_profile_create_dto->data2 = NULL;
    }
    if (student_profile_create_dto->data2_label) {
        free(student_profile_create_dto->data2_label);
        student_profile_create_dto->data2_label = NULL;
    }
    if (student_profile_create_dto->data3) {
        free(student_profile_create_dto->data3);
        student_profile_create_dto->data3 = NULL;
    }
    if (student_profile_create_dto->data3_label) {
        free(student_profile_create_dto->data3_label);
        student_profile_create_dto->data3_label = NULL;
    }
    if (student_profile_create_dto->data4) {
        free(student_profile_create_dto->data4);
        student_profile_create_dto->data4 = NULL;
    }
    if (student_profile_create_dto->data4_label) {
        free(student_profile_create_dto->data4_label);
        student_profile_create_dto->data4_label = NULL;
    }
    if (student_profile_create_dto->data5) {
        free(student_profile_create_dto->data5);
        student_profile_create_dto->data5 = NULL;
    }
    if (student_profile_create_dto->data5_label) {
        free(student_profile_create_dto->data5_label);
        student_profile_create_dto->data5_label = NULL;
    }
    if (student_profile_create_dto->data6) {
        free(student_profile_create_dto->data6);
        student_profile_create_dto->data6 = NULL;
    }
    if (student_profile_create_dto->data6_label) {
        free(student_profile_create_dto->data6_label);
        student_profile_create_dto->data6_label = NULL;
    }
    if (student_profile_create_dto->data7) {
        free(student_profile_create_dto->data7);
        student_profile_create_dto->data7 = NULL;
    }
    if (student_profile_create_dto->data7_label) {
        free(student_profile_create_dto->data7_label);
        student_profile_create_dto->data7_label = NULL;
    }
    if (student_profile_create_dto->data8) {
        free(student_profile_create_dto->data8);
        student_profile_create_dto->data8 = NULL;
    }
    if (student_profile_create_dto->data8_label) {
        free(student_profile_create_dto->data8_label);
        student_profile_create_dto->data8_label = NULL;
    }
    if (student_profile_create_dto->data9) {
        free(student_profile_create_dto->data9);
        student_profile_create_dto->data9 = NULL;
    }
    if (student_profile_create_dto->data9_label) {
        free(student_profile_create_dto->data9_label);
        student_profile_create_dto->data9_label = NULL;
    }
    if (student_profile_create_dto->contact_id) {
        free(student_profile_create_dto->contact_id);
        student_profile_create_dto->contact_id = NULL;
    }
    free(student_profile_create_dto);
}

cJSON *student_profile_create_dto_convertToJSON(student_profile_create_dto_t *student_profile_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // student_profile_create_dto->id
    if(student_profile_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", student_profile_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->timestamp
    if(student_profile_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", student_profile_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // student_profile_create_dto->about
    if(student_profile_create_dto->about) {
    if(cJSON_AddStringToObject(item, "about", student_profile_create_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->verified
    if(student_profile_create_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", student_profile_create_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // student_profile_create_dto->submitted
    if(student_profile_create_dto->submitted) {
    if(cJSON_AddBoolToObject(item, "submitted", student_profile_create_dto->submitted) == NULL) {
    goto fail; //Bool
    }
    }


    // student_profile_create_dto->avatar_url
    if(student_profile_create_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", student_profile_create_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->qualified_name
    if(student_profile_create_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", student_profile_create_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->verification_timestamp
    if(student_profile_create_dto->verification_timestamp) {
    if(cJSON_AddStringToObject(item, "verificationTimestamp", student_profile_create_dto->verification_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // student_profile_create_dto->data
    if(student_profile_create_dto->data) {
    if(cJSON_AddStringToObject(item, "data", student_profile_create_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data_label
    if(student_profile_create_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", student_profile_create_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data1
    if(student_profile_create_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", student_profile_create_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data1_label
    if(student_profile_create_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", student_profile_create_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data2
    if(student_profile_create_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", student_profile_create_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data2_label
    if(student_profile_create_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", student_profile_create_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data3
    if(student_profile_create_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", student_profile_create_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data3_label
    if(student_profile_create_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", student_profile_create_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data4
    if(student_profile_create_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", student_profile_create_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data4_label
    if(student_profile_create_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", student_profile_create_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data5
    if(student_profile_create_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", student_profile_create_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data5_label
    if(student_profile_create_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", student_profile_create_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data6
    if(student_profile_create_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", student_profile_create_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data6_label
    if(student_profile_create_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", student_profile_create_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data7
    if(student_profile_create_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", student_profile_create_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data7_label
    if(student_profile_create_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", student_profile_create_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data8
    if(student_profile_create_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", student_profile_create_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data8_label
    if(student_profile_create_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", student_profile_create_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data9
    if(student_profile_create_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", student_profile_create_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->data9_label
    if(student_profile_create_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", student_profile_create_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // student_profile_create_dto->contact_id
    if(student_profile_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactID", student_profile_create_dto->contact_id) == NULL) {
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

student_profile_create_dto_t *student_profile_create_dto_parseFromJSON(cJSON *student_profile_create_dtoJSON){

    student_profile_create_dto_t *student_profile_create_dto_local_var = NULL;

    // student_profile_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // student_profile_create_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // student_profile_create_dto->submitted
    cJSON *submitted = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "submitted");
    if (submitted) { 
    if(!cJSON_IsBool(submitted))
    {
    goto end; //Bool
    }
    }

    // student_profile_create_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->verification_timestamp
    cJSON *verification_timestamp = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "verificationTimestamp");
    if (verification_timestamp) { 
    if(!cJSON_IsString(verification_timestamp) && !cJSON_IsNull(verification_timestamp))
    {
    goto end; //DateTime
    }
    }

    // student_profile_create_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // student_profile_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(student_profile_create_dtoJSON, "contactID");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    student_profile_create_dto_local_var = student_profile_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        verified ? verified->valueint : 0,
        submitted ? submitted->valueint : 0,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
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
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return student_profile_create_dto_local_var;
end:
    return NULL;

}
