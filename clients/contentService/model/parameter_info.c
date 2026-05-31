#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "parameter_info.h"


char* parameter_info_attributes_ToString(contentservice_parameter_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "None", "In", "Out", "Lcid", "Retval", "Optional", "HasDefault", "HasFieldMarshal", "Reserved3", "Reserved4", "ReservedMask" };
    return attributesArray[attributes];
}

contentservice_parameter_info_ATTRIBUTES_e parameter_info_attributes_FromString(char* attributes){
    int stringToReturn = 0;
    char *attributesArray[] =  { "NULL", "None", "In", "Out", "Lcid", "Retval", "Optional", "HasDefault", "HasFieldMarshal", "Reserved3", "Reserved4", "ReservedMask" };
    size_t sizeofArray = sizeof(attributesArray) / sizeof(attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attributes, attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

parameter_info_t *parameter_info_create(
    contentservice_parameter_info_ATTRIBUTES_e attributes,
    member_info_t *member,
    char *name,
    type_t *parameter_type,
    int position,
    int is_in,
    int is_lcid,
    int is_optional,
    int is_out,
    int is_retval,
    any_type_t *default_value,
    any_type_t *raw_default_value,
    int has_default_value,
    list_t *custom_attributes,
    int metadata_token
    ) {
    parameter_info_t *parameter_info_local_var = malloc(sizeof(parameter_info_t));
    if (!parameter_info_local_var) {
        return NULL;
    }
    parameter_info_local_var->attributes = attributes;
    parameter_info_local_var->member = member;
    parameter_info_local_var->name = name;
    parameter_info_local_var->parameter_type = parameter_type;
    parameter_info_local_var->position = position;
    parameter_info_local_var->is_in = is_in;
    parameter_info_local_var->is_lcid = is_lcid;
    parameter_info_local_var->is_optional = is_optional;
    parameter_info_local_var->is_out = is_out;
    parameter_info_local_var->is_retval = is_retval;
    parameter_info_local_var->default_value = default_value;
    parameter_info_local_var->raw_default_value = raw_default_value;
    parameter_info_local_var->has_default_value = has_default_value;
    parameter_info_local_var->custom_attributes = custom_attributes;
    parameter_info_local_var->metadata_token = metadata_token;

    return parameter_info_local_var;
}


void parameter_info_free(parameter_info_t *parameter_info) {
    if(NULL == parameter_info){
        return ;
    }
    listEntry_t *listEntry;
    if (parameter_info->member) {
        member_info_free(parameter_info->member);
        parameter_info->member = NULL;
    }
    if (parameter_info->name) {
        free(parameter_info->name);
        parameter_info->name = NULL;
    }
    if (parameter_info->parameter_type) {
        type_free(parameter_info->parameter_type);
        parameter_info->parameter_type = NULL;
    }
    if (parameter_info->default_value) {
        _free(parameter_info->default_value);
        parameter_info->default_value = NULL;
    }
    if (parameter_info->raw_default_value) {
        _free(parameter_info->raw_default_value);
        parameter_info->raw_default_value = NULL;
    }
    if (parameter_info->custom_attributes) {
        list_ForEach(listEntry, parameter_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(parameter_info->custom_attributes);
        parameter_info->custom_attributes = NULL;
    }
    free(parameter_info);
}

cJSON *parameter_info_convertToJSON(parameter_info_t *parameter_info) {
    cJSON *item = cJSON_CreateObject();

    // parameter_info->attributes
    if(parameter_info->attributes != contentservice_parameter_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesparameter_info_ToString(parameter_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // parameter_info->member
    if(parameter_info->member) {
    cJSON *member_local_JSON = member_info_convertToJSON(parameter_info->member);
    if(member_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "member", member_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // parameter_info->name
    if(parameter_info->name) {
    if(cJSON_AddStringToObject(item, "name", parameter_info->name) == NULL) {
    goto fail; //String
    }
    }


    // parameter_info->parameter_type
    if(parameter_info->parameter_type) {
    cJSON *parameter_type_local_JSON = type_convertToJSON(parameter_info->parameter_type);
    if(parameter_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "parameterType", parameter_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // parameter_info->position
    if(parameter_info->position) {
    if(cJSON_AddNumberToObject(item, "position", parameter_info->position) == NULL) {
    goto fail; //Numeric
    }
    }


    // parameter_info->is_in
    if(parameter_info->is_in) {
    if(cJSON_AddBoolToObject(item, "isIn", parameter_info->is_in) == NULL) {
    goto fail; //Bool
    }
    }


    // parameter_info->is_lcid
    if(parameter_info->is_lcid) {
    if(cJSON_AddBoolToObject(item, "isLcid", parameter_info->is_lcid) == NULL) {
    goto fail; //Bool
    }
    }


    // parameter_info->is_optional
    if(parameter_info->is_optional) {
    if(cJSON_AddBoolToObject(item, "isOptional", parameter_info->is_optional) == NULL) {
    goto fail; //Bool
    }
    }


    // parameter_info->is_out
    if(parameter_info->is_out) {
    if(cJSON_AddBoolToObject(item, "isOut", parameter_info->is_out) == NULL) {
    goto fail; //Bool
    }
    }


    // parameter_info->is_retval
    if(parameter_info->is_retval) {
    if(cJSON_AddBoolToObject(item, "isRetval", parameter_info->is_retval) == NULL) {
    goto fail; //Bool
    }
    }


    // parameter_info->default_value
    if(parameter_info->default_value) {
    cJSON *default_value_local_JSON = _convertToJSON(parameter_info->default_value);
    if(default_value_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "defaultValue", default_value_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // parameter_info->raw_default_value
    if(parameter_info->raw_default_value) {
    cJSON *raw_default_value_local_JSON = _convertToJSON(parameter_info->raw_default_value);
    if(raw_default_value_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "rawDefaultValue", raw_default_value_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // parameter_info->has_default_value
    if(parameter_info->has_default_value) {
    if(cJSON_AddBoolToObject(item, "hasDefaultValue", parameter_info->has_default_value) == NULL) {
    goto fail; //Bool
    }
    }


    // parameter_info->custom_attributes
    if(parameter_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (parameter_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, parameter_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // parameter_info->metadata_token
    if(parameter_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", parameter_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

parameter_info_t *parameter_info_parseFromJSON(cJSON *parameter_infoJSON){

    parameter_info_t *parameter_info_local_var = NULL;

    // define the local variable for parameter_info->member
    member_info_t *member_local_nonprim = NULL;

    // define the local variable for parameter_info->parameter_type
    type_t *parameter_type_local_nonprim = NULL;

    // define the local variable for parameter_info->default_value
    _t *default_value_local_nonprim = NULL;

    // define the local variable for parameter_info->raw_default_value
    _t *raw_default_value_local_nonprim = NULL;

    // define the local list for parameter_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // parameter_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "attributes");
    contentservice_parameter_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = parameter_info_attributes_FromString(attributes->valuestring);
    }

    // parameter_info->member
    cJSON *member = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "member");
    if (member) { 
    member_local_nonprim = member_info_parseFromJSON(member); //nonprimitive
    }

    // parameter_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // parameter_info->parameter_type
    cJSON *parameter_type = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "parameterType");
    if (parameter_type) { 
    parameter_type_local_nonprim = type_parseFromJSON(parameter_type); //nonprimitive
    }

    // parameter_info->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "position");
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }

    // parameter_info->is_in
    cJSON *is_in = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "isIn");
    if (is_in) { 
    if(!cJSON_IsBool(is_in))
    {
    goto end; //Bool
    }
    }

    // parameter_info->is_lcid
    cJSON *is_lcid = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "isLcid");
    if (is_lcid) { 
    if(!cJSON_IsBool(is_lcid))
    {
    goto end; //Bool
    }
    }

    // parameter_info->is_optional
    cJSON *is_optional = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "isOptional");
    if (is_optional) { 
    if(!cJSON_IsBool(is_optional))
    {
    goto end; //Bool
    }
    }

    // parameter_info->is_out
    cJSON *is_out = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "isOut");
    if (is_out) { 
    if(!cJSON_IsBool(is_out))
    {
    goto end; //Bool
    }
    }

    // parameter_info->is_retval
    cJSON *is_retval = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "isRetval");
    if (is_retval) { 
    if(!cJSON_IsBool(is_retval))
    {
    goto end; //Bool
    }
    }

    // parameter_info->default_value
    cJSON *default_value = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "defaultValue");
    if (default_value) { 
    default_value_local_nonprim = _parseFromJSON(default_value); //custom
    }

    // parameter_info->raw_default_value
    cJSON *raw_default_value = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "rawDefaultValue");
    if (raw_default_value) { 
    raw_default_value_local_nonprim = _parseFromJSON(raw_default_value); //custom
    }

    // parameter_info->has_default_value
    cJSON *has_default_value = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "hasDefaultValue");
    if (has_default_value) { 
    if(!cJSON_IsBool(has_default_value))
    {
    goto end; //Bool
    }
    }

    // parameter_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "customAttributes");
    if (custom_attributes) { 
    cJSON *custom_attributes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(custom_attributes)){
        goto end; //nonprimitive container
    }

    custom_attributesList = list_createList();

    cJSON_ArrayForEach(custom_attributes_local_nonprimitive,custom_attributes )
    {
        if(!cJSON_IsObject(custom_attributes_local_nonprimitive)){
            goto end;
        }
        custom_attribute_data_t *custom_attributesItem = custom_attribute_data_parseFromJSON(custom_attributes_local_nonprimitive);

        list_addElement(custom_attributesList, custom_attributesItem);
    }
    }

    // parameter_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(parameter_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }


    parameter_info_local_var = parameter_info_create (
        attributes ? attributesVariable : contentservice_parameter_info_ATTRIBUTES_NULL,
        member ? member_local_nonprim : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        parameter_type ? parameter_type_local_nonprim : NULL,
        position ? position->valuedouble : 0,
        is_in ? is_in->valueint : 0,
        is_lcid ? is_lcid->valueint : 0,
        is_optional ? is_optional->valueint : 0,
        is_out ? is_out->valueint : 0,
        is_retval ? is_retval->valueint : 0,
        default_value ? default_value_local_nonprim : NULL,
        raw_default_value ? raw_default_value_local_nonprim : NULL,
        has_default_value ? has_default_value->valueint : 0,
        custom_attributes ? custom_attributesList : NULL,
        metadata_token ? metadata_token->valuedouble : 0
        );

    return parameter_info_local_var;
end:
    if (member_local_nonprim) {
        member_info_free(member_local_nonprim);
        member_local_nonprim = NULL;
    }
    if (parameter_type_local_nonprim) {
        type_free(parameter_type_local_nonprim);
        parameter_type_local_nonprim = NULL;
    }
    if (default_value_local_nonprim) {
        _free(default_value_local_nonprim);
        default_value_local_nonprim = NULL;
    }
    if (raw_default_value_local_nonprim) {
        _free(raw_default_value_local_nonprim);
        raw_default_value_local_nonprim = NULL;
    }
    if (custom_attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, custom_attributesList) {
            custom_attribute_data_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(custom_attributesList);
        custom_attributesList = NULL;
    }
    return NULL;

}
