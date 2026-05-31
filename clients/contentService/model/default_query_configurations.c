#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "default_query_configurations.h"



default_query_configurations_t *default_query_configurations_create(
    int enable_expand,
    int enable_select,
    int enable_count,
    int enable_order_by,
    int enable_filter,
    int max_top,
    int enable_skip_token
    ) {
    default_query_configurations_t *default_query_configurations_local_var = malloc(sizeof(default_query_configurations_t));
    if (!default_query_configurations_local_var) {
        return NULL;
    }
    default_query_configurations_local_var->enable_expand = enable_expand;
    default_query_configurations_local_var->enable_select = enable_select;
    default_query_configurations_local_var->enable_count = enable_count;
    default_query_configurations_local_var->enable_order_by = enable_order_by;
    default_query_configurations_local_var->enable_filter = enable_filter;
    default_query_configurations_local_var->max_top = max_top;
    default_query_configurations_local_var->enable_skip_token = enable_skip_token;

    return default_query_configurations_local_var;
}


void default_query_configurations_free(default_query_configurations_t *default_query_configurations) {
    if(NULL == default_query_configurations){
        return ;
    }
    listEntry_t *listEntry;
    free(default_query_configurations);
}

cJSON *default_query_configurations_convertToJSON(default_query_configurations_t *default_query_configurations) {
    cJSON *item = cJSON_CreateObject();

    // default_query_configurations->enable_expand
    if(default_query_configurations->enable_expand) {
    if(cJSON_AddBoolToObject(item, "enableExpand", default_query_configurations->enable_expand) == NULL) {
    goto fail; //Bool
    }
    }


    // default_query_configurations->enable_select
    if(default_query_configurations->enable_select) {
    if(cJSON_AddBoolToObject(item, "enableSelect", default_query_configurations->enable_select) == NULL) {
    goto fail; //Bool
    }
    }


    // default_query_configurations->enable_count
    if(default_query_configurations->enable_count) {
    if(cJSON_AddBoolToObject(item, "enableCount", default_query_configurations->enable_count) == NULL) {
    goto fail; //Bool
    }
    }


    // default_query_configurations->enable_order_by
    if(default_query_configurations->enable_order_by) {
    if(cJSON_AddBoolToObject(item, "enableOrderBy", default_query_configurations->enable_order_by) == NULL) {
    goto fail; //Bool
    }
    }


    // default_query_configurations->enable_filter
    if(default_query_configurations->enable_filter) {
    if(cJSON_AddBoolToObject(item, "enableFilter", default_query_configurations->enable_filter) == NULL) {
    goto fail; //Bool
    }
    }


    // default_query_configurations->max_top
    if(default_query_configurations->max_top) {
    if(cJSON_AddNumberToObject(item, "maxTop", default_query_configurations->max_top) == NULL) {
    goto fail; //Numeric
    }
    }


    // default_query_configurations->enable_skip_token
    if(default_query_configurations->enable_skip_token) {
    if(cJSON_AddBoolToObject(item, "enableSkipToken", default_query_configurations->enable_skip_token) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

default_query_configurations_t *default_query_configurations_parseFromJSON(cJSON *default_query_configurationsJSON){

    default_query_configurations_t *default_query_configurations_local_var = NULL;

    // default_query_configurations->enable_expand
    cJSON *enable_expand = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "enableExpand");
    if (enable_expand) { 
    if(!cJSON_IsBool(enable_expand))
    {
    goto end; //Bool
    }
    }

    // default_query_configurations->enable_select
    cJSON *enable_select = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "enableSelect");
    if (enable_select) { 
    if(!cJSON_IsBool(enable_select))
    {
    goto end; //Bool
    }
    }

    // default_query_configurations->enable_count
    cJSON *enable_count = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "enableCount");
    if (enable_count) { 
    if(!cJSON_IsBool(enable_count))
    {
    goto end; //Bool
    }
    }

    // default_query_configurations->enable_order_by
    cJSON *enable_order_by = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "enableOrderBy");
    if (enable_order_by) { 
    if(!cJSON_IsBool(enable_order_by))
    {
    goto end; //Bool
    }
    }

    // default_query_configurations->enable_filter
    cJSON *enable_filter = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "enableFilter");
    if (enable_filter) { 
    if(!cJSON_IsBool(enable_filter))
    {
    goto end; //Bool
    }
    }

    // default_query_configurations->max_top
    cJSON *max_top = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "maxTop");
    if (max_top) { 
    if(!cJSON_IsNumber(max_top))
    {
    goto end; //Numeric
    }
    }

    // default_query_configurations->enable_skip_token
    cJSON *enable_skip_token = cJSON_GetObjectItemCaseSensitive(default_query_configurationsJSON, "enableSkipToken");
    if (enable_skip_token) { 
    if(!cJSON_IsBool(enable_skip_token))
    {
    goto end; //Bool
    }
    }


    default_query_configurations_local_var = default_query_configurations_create (
        enable_expand ? enable_expand->valueint : 0,
        enable_select ? enable_select->valueint : 0,
        enable_count ? enable_count->valueint : 0,
        enable_order_by ? enable_order_by->valueint : 0,
        enable_filter ? enable_filter->valueint : 0,
        max_top ? max_top->valuedouble : 0,
        enable_skip_token ? enable_skip_token->valueint : 0
        );

    return default_query_configurations_local_var;
end:
    return NULL;

}
