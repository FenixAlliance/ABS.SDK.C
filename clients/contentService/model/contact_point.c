#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_point.h"



contact_point_t *contact_point_create(
    char *contact_point_type,
    char *telephone,
    char *contact_type,
    char *contact_option,
    list_t *area_served,
    char *type
    ) {
    contact_point_t *contact_point_local_var = malloc(sizeof(contact_point_t));
    if (!contact_point_local_var) {
        return NULL;
    }
    contact_point_local_var->contact_point_type = contact_point_type;
    contact_point_local_var->telephone = telephone;
    contact_point_local_var->contact_type = contact_type;
    contact_point_local_var->contact_option = contact_option;
    contact_point_local_var->area_served = area_served;
    contact_point_local_var->type = type;

    return contact_point_local_var;
}


void contact_point_free(contact_point_t *contact_point) {
    if(NULL == contact_point){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_point->contact_point_type) {
        free(contact_point->contact_point_type);
        contact_point->contact_point_type = NULL;
    }
    if (contact_point->telephone) {
        free(contact_point->telephone);
        contact_point->telephone = NULL;
    }
    if (contact_point->contact_type) {
        free(contact_point->contact_type);
        contact_point->contact_type = NULL;
    }
    if (contact_point->contact_option) {
        free(contact_point->contact_option);
        contact_point->contact_option = NULL;
    }
    if (contact_point->area_served) {
        list_ForEach(listEntry, contact_point->area_served) {
            free(listEntry->data);
        }
        list_freeList(contact_point->area_served);
        contact_point->area_served = NULL;
    }
    if (contact_point->type) {
        free(contact_point->type);
        contact_point->type = NULL;
    }
    free(contact_point);
}

cJSON *contact_point_convertToJSON(contact_point_t *contact_point) {
    cJSON *item = cJSON_CreateObject();

    // contact_point->contact_point_type
    if(contact_point->contact_point_type) {
    if(cJSON_AddStringToObject(item, "contactPointType", contact_point->contact_point_type) == NULL) {
    goto fail; //String
    }
    }


    // contact_point->telephone
    if(contact_point->telephone) {
    if(cJSON_AddStringToObject(item, "telephone", contact_point->telephone) == NULL) {
    goto fail; //String
    }
    }


    // contact_point->contact_type
    if(contact_point->contact_type) {
    if(cJSON_AddStringToObject(item, "contactType", contact_point->contact_type) == NULL) {
    goto fail; //String
    }
    }


    // contact_point->contact_option
    if(contact_point->contact_option) {
    if(cJSON_AddStringToObject(item, "contactOption", contact_point->contact_option) == NULL) {
    goto fail; //String
    }
    }


    // contact_point->area_served
    if(contact_point->area_served) {
    cJSON *area_served = cJSON_AddArrayToObject(item, "areaServed");
    if(area_served == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *area_servedListEntry;
    list_ForEach(area_servedListEntry, contact_point->area_served) {
    if(cJSON_AddStringToObject(area_served, "", (char*)area_servedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // contact_point->type
    if(contact_point->type) {
    if(cJSON_AddStringToObject(item, "type", contact_point->type) == NULL) {
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

contact_point_t *contact_point_parseFromJSON(cJSON *contact_pointJSON){

    contact_point_t *contact_point_local_var = NULL;

    // define the local list for contact_point->area_served
    list_t *area_servedList = NULL;

    // contact_point->contact_point_type
    cJSON *contact_point_type = cJSON_GetObjectItemCaseSensitive(contact_pointJSON, "contactPointType");
    if (contact_point_type) { 
    if(!cJSON_IsString(contact_point_type) && !cJSON_IsNull(contact_point_type))
    {
    goto end; //String
    }
    }

    // contact_point->telephone
    cJSON *telephone = cJSON_GetObjectItemCaseSensitive(contact_pointJSON, "telephone");
    if (telephone) { 
    if(!cJSON_IsString(telephone) && !cJSON_IsNull(telephone))
    {
    goto end; //String
    }
    }

    // contact_point->contact_type
    cJSON *contact_type = cJSON_GetObjectItemCaseSensitive(contact_pointJSON, "contactType");
    if (contact_type) { 
    if(!cJSON_IsString(contact_type) && !cJSON_IsNull(contact_type))
    {
    goto end; //String
    }
    }

    // contact_point->contact_option
    cJSON *contact_option = cJSON_GetObjectItemCaseSensitive(contact_pointJSON, "contactOption");
    if (contact_option) { 
    if(!cJSON_IsString(contact_option) && !cJSON_IsNull(contact_option))
    {
    goto end; //String
    }
    }

    // contact_point->area_served
    cJSON *area_served = cJSON_GetObjectItemCaseSensitive(contact_pointJSON, "areaServed");
    if (area_served) { 
    cJSON *area_served_local = NULL;
    if(!cJSON_IsArray(area_served)) {
        goto end;//primitive container
    }
    area_servedList = list_createList();

    cJSON_ArrayForEach(area_served_local, area_served)
    {
        if(!cJSON_IsString(area_served_local))
        {
            goto end;
        }
        list_addElement(area_servedList , strdup(area_served_local->valuestring));
    }
    }

    // contact_point->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(contact_pointJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    contact_point_local_var = contact_point_create (
        contact_point_type && !cJSON_IsNull(contact_point_type) ? strdup(contact_point_type->valuestring) : NULL,
        telephone && !cJSON_IsNull(telephone) ? strdup(telephone->valuestring) : NULL,
        contact_type && !cJSON_IsNull(contact_type) ? strdup(contact_type->valuestring) : NULL,
        contact_option && !cJSON_IsNull(contact_option) ? strdup(contact_option->valuestring) : NULL,
        area_served ? area_servedList : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return contact_point_local_var;
end:
    if (area_servedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, area_servedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(area_servedList);
        area_servedList = NULL;
    }
    return NULL;

}
