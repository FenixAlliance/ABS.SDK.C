#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instructor_profile_update_dto.h"



instructor_profile_update_dto_t *instructor_profile_update_dto_create(
    char *id,
    char *timestamp,
    int authorized,
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
    char *data9_label
    ) {
    instructor_profile_update_dto_t *instructor_profile_update_dto_local_var = malloc(sizeof(instructor_profile_update_dto_t));
    if (!instructor_profile_update_dto_local_var) {
        return NULL;
    }
    instructor_profile_update_dto_local_var->id = id;
    instructor_profile_update_dto_local_var->timestamp = timestamp;
    instructor_profile_update_dto_local_var->authorized = authorized;
    instructor_profile_update_dto_local_var->about = about;
    instructor_profile_update_dto_local_var->verified = verified;
    instructor_profile_update_dto_local_var->submitted = submitted;
    instructor_profile_update_dto_local_var->avatar_url = avatar_url;
    instructor_profile_update_dto_local_var->qualified_name = qualified_name;
    instructor_profile_update_dto_local_var->verification_timestamp = verification_timestamp;
    instructor_profile_update_dto_local_var->data = data;
    instructor_profile_update_dto_local_var->data_label = data_label;
    instructor_profile_update_dto_local_var->data1 = data1;
    instructor_profile_update_dto_local_var->data1_label = data1_label;
    instructor_profile_update_dto_local_var->data2 = data2;
    instructor_profile_update_dto_local_var->data2_label = data2_label;
    instructor_profile_update_dto_local_var->data3 = data3;
    instructor_profile_update_dto_local_var->data3_label = data3_label;
    instructor_profile_update_dto_local_var->data4 = data4;
    instructor_profile_update_dto_local_var->data4_label = data4_label;
    instructor_profile_update_dto_local_var->data5 = data5;
    instructor_profile_update_dto_local_var->data5_label = data5_label;
    instructor_profile_update_dto_local_var->data6 = data6;
    instructor_profile_update_dto_local_var->data6_label = data6_label;
    instructor_profile_update_dto_local_var->data7 = data7;
    instructor_profile_update_dto_local_var->data7_label = data7_label;
    instructor_profile_update_dto_local_var->data8 = data8;
    instructor_profile_update_dto_local_var->data8_label = data8_label;
    instructor_profile_update_dto_local_var->data9 = data9;
    instructor_profile_update_dto_local_var->data9_label = data9_label;

    return instructor_profile_update_dto_local_var;
}


void instructor_profile_update_dto_free(instructor_profile_update_dto_t *instructor_profile_update_dto) {
    if(NULL == instructor_profile_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (instructor_profile_update_dto->id) {
        free(instructor_profile_update_dto->id);
        instructor_profile_update_dto->id = NULL;
    }
    if (instructor_profile_update_dto->timestamp) {
        free(instructor_profile_update_dto->timestamp);
        instructor_profile_update_dto->timestamp = NULL;
    }
    if (instructor_profile_update_dto->about) {
        free(instructor_profile_update_dto->about);
        instructor_profile_update_dto->about = NULL;
    }
    if (instructor_profile_update_dto->avatar_url) {
        free(instructor_profile_update_dto->avatar_url);
        instructor_profile_update_dto->avatar_url = NULL;
    }
    if (instructor_profile_update_dto->qualified_name) {
        free(instructor_profile_update_dto->qualified_name);
        instructor_profile_update_dto->qualified_name = NULL;
    }
    if (instructor_profile_update_dto->verification_timestamp) {
        free(instructor_profile_update_dto->verification_timestamp);
        instructor_profile_update_dto->verification_timestamp = NULL;
    }
    if (instructor_profile_update_dto->data) {
        free(instructor_profile_update_dto->data);
        instructor_profile_update_dto->data = NULL;
    }
    if (instructor_profile_update_dto->data_label) {
        free(instructor_profile_update_dto->data_label);
        instructor_profile_update_dto->data_label = NULL;
    }
    if (instructor_profile_update_dto->data1) {
        free(instructor_profile_update_dto->data1);
        instructor_profile_update_dto->data1 = NULL;
    }
    if (instructor_profile_update_dto->data1_label) {
        free(instructor_profile_update_dto->data1_label);
        instructor_profile_update_dto->data1_label = NULL;
    }
    if (instructor_profile_update_dto->data2) {
        free(instructor_profile_update_dto->data2);
        instructor_profile_update_dto->data2 = NULL;
    }
    if (instructor_profile_update_dto->data2_label) {
        free(instructor_profile_update_dto->data2_label);
        instructor_profile_update_dto->data2_label = NULL;
    }
    if (instructor_profile_update_dto->data3) {
        free(instructor_profile_update_dto->data3);
        instructor_profile_update_dto->data3 = NULL;
    }
    if (instructor_profile_update_dto->data3_label) {
        free(instructor_profile_update_dto->data3_label);
        instructor_profile_update_dto->data3_label = NULL;
    }
    if (instructor_profile_update_dto->data4) {
        free(instructor_profile_update_dto->data4);
        instructor_profile_update_dto->data4 = NULL;
    }
    if (instructor_profile_update_dto->data4_label) {
        free(instructor_profile_update_dto->data4_label);
        instructor_profile_update_dto->data4_label = NULL;
    }
    if (instructor_profile_update_dto->data5) {
        free(instructor_profile_update_dto->data5);
        instructor_profile_update_dto->data5 = NULL;
    }
    if (instructor_profile_update_dto->data5_label) {
        free(instructor_profile_update_dto->data5_label);
        instructor_profile_update_dto->data5_label = NULL;
    }
    if (instructor_profile_update_dto->data6) {
        free(instructor_profile_update_dto->data6);
        instructor_profile_update_dto->data6 = NULL;
    }
    if (instructor_profile_update_dto->data6_label) {
        free(instructor_profile_update_dto->data6_label);
        instructor_profile_update_dto->data6_label = NULL;
    }
    if (instructor_profile_update_dto->data7) {
        free(instructor_profile_update_dto->data7);
        instructor_profile_update_dto->data7 = NULL;
    }
    if (instructor_profile_update_dto->data7_label) {
        free(instructor_profile_update_dto->data7_label);
        instructor_profile_update_dto->data7_label = NULL;
    }
    if (instructor_profile_update_dto->data8) {
        free(instructor_profile_update_dto->data8);
        instructor_profile_update_dto->data8 = NULL;
    }
    if (instructor_profile_update_dto->data8_label) {
        free(instructor_profile_update_dto->data8_label);
        instructor_profile_update_dto->data8_label = NULL;
    }
    if (instructor_profile_update_dto->data9) {
        free(instructor_profile_update_dto->data9);
        instructor_profile_update_dto->data9 = NULL;
    }
    if (instructor_profile_update_dto->data9_label) {
        free(instructor_profile_update_dto->data9_label);
        instructor_profile_update_dto->data9_label = NULL;
    }
    free(instructor_profile_update_dto);
}

cJSON *instructor_profile_update_dto_convertToJSON(instructor_profile_update_dto_t *instructor_profile_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // instructor_profile_update_dto->id
    if(instructor_profile_update_dto->id) {
    if(cJSON_AddStringToObject(item, "id", instructor_profile_update_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->timestamp
    if(instructor_profile_update_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", instructor_profile_update_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // instructor_profile_update_dto->authorized
    if(instructor_profile_update_dto->authorized) {
    if(cJSON_AddBoolToObject(item, "authorized", instructor_profile_update_dto->authorized) == NULL) {
    goto fail; //Bool
    }
    }


    // instructor_profile_update_dto->about
    if(instructor_profile_update_dto->about) {
    if(cJSON_AddStringToObject(item, "about", instructor_profile_update_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->verified
    if(instructor_profile_update_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", instructor_profile_update_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // instructor_profile_update_dto->submitted
    if(instructor_profile_update_dto->submitted) {
    if(cJSON_AddBoolToObject(item, "submitted", instructor_profile_update_dto->submitted) == NULL) {
    goto fail; //Bool
    }
    }


    // instructor_profile_update_dto->avatar_url
    if(instructor_profile_update_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", instructor_profile_update_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->qualified_name
    if(instructor_profile_update_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", instructor_profile_update_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->verification_timestamp
    if(instructor_profile_update_dto->verification_timestamp) {
    if(cJSON_AddStringToObject(item, "verificationTimestamp", instructor_profile_update_dto->verification_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // instructor_profile_update_dto->data
    if(instructor_profile_update_dto->data) {
    if(cJSON_AddStringToObject(item, "data", instructor_profile_update_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data_label
    if(instructor_profile_update_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", instructor_profile_update_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data1
    if(instructor_profile_update_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", instructor_profile_update_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data1_label
    if(instructor_profile_update_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", instructor_profile_update_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data2
    if(instructor_profile_update_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", instructor_profile_update_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data2_label
    if(instructor_profile_update_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", instructor_profile_update_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data3
    if(instructor_profile_update_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", instructor_profile_update_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data3_label
    if(instructor_profile_update_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", instructor_profile_update_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data4
    if(instructor_profile_update_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", instructor_profile_update_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data4_label
    if(instructor_profile_update_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", instructor_profile_update_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data5
    if(instructor_profile_update_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", instructor_profile_update_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data5_label
    if(instructor_profile_update_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", instructor_profile_update_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data6
    if(instructor_profile_update_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", instructor_profile_update_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data6_label
    if(instructor_profile_update_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", instructor_profile_update_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data7
    if(instructor_profile_update_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", instructor_profile_update_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data7_label
    if(instructor_profile_update_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", instructor_profile_update_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data8
    if(instructor_profile_update_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", instructor_profile_update_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data8_label
    if(instructor_profile_update_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", instructor_profile_update_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data9
    if(instructor_profile_update_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", instructor_profile_update_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // instructor_profile_update_dto->data9_label
    if(instructor_profile_update_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", instructor_profile_update_dto->data9_label) == NULL) {
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

instructor_profile_update_dto_t *instructor_profile_update_dto_parseFromJSON(cJSON *instructor_profile_update_dtoJSON){

    instructor_profile_update_dto_t *instructor_profile_update_dto_local_var = NULL;

    // instructor_profile_update_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // instructor_profile_update_dto->authorized
    cJSON *authorized = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "authorized");
    if (authorized) { 
    if(!cJSON_IsBool(authorized))
    {
    goto end; //Bool
    }
    }

    // instructor_profile_update_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // instructor_profile_update_dto->submitted
    cJSON *submitted = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "submitted");
    if (submitted) { 
    if(!cJSON_IsBool(submitted))
    {
    goto end; //Bool
    }
    }

    // instructor_profile_update_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->verification_timestamp
    cJSON *verification_timestamp = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "verificationTimestamp");
    if (verification_timestamp) { 
    if(!cJSON_IsString(verification_timestamp) && !cJSON_IsNull(verification_timestamp))
    {
    goto end; //DateTime
    }
    }

    // instructor_profile_update_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // instructor_profile_update_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(instructor_profile_update_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }


    instructor_profile_update_dto_local_var = instructor_profile_update_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        authorized ? authorized->valueint : 0,
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
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL
        );

    return instructor_profile_update_dto_local_var;
end:
    return NULL;

}
