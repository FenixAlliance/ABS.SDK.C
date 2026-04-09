#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "organization.h"



organization_t *organization_create(
    char *legal_name,
    char *business_name,
    char *slogan,
    char *homepage,
    char *facebook_page_username,
    char *instagram_username,
    char *linked_in_username,
    char *twitter_handler,
    char *git_hub_username,
    list_t *contact_points
    ) {
    organization_t *organization_local_var = malloc(sizeof(organization_t));
    if (!organization_local_var) {
        return NULL;
    }
    organization_local_var->legal_name = legal_name;
    organization_local_var->business_name = business_name;
    organization_local_var->slogan = slogan;
    organization_local_var->homepage = homepage;
    organization_local_var->facebook_page_username = facebook_page_username;
    organization_local_var->instagram_username = instagram_username;
    organization_local_var->linked_in_username = linked_in_username;
    organization_local_var->twitter_handler = twitter_handler;
    organization_local_var->git_hub_username = git_hub_username;
    organization_local_var->contact_points = contact_points;

    return organization_local_var;
}


void organization_free(organization_t *organization) {
    if(NULL == organization){
        return ;
    }
    listEntry_t *listEntry;
    if (organization->legal_name) {
        free(organization->legal_name);
        organization->legal_name = NULL;
    }
    if (organization->business_name) {
        free(organization->business_name);
        organization->business_name = NULL;
    }
    if (organization->slogan) {
        free(organization->slogan);
        organization->slogan = NULL;
    }
    if (organization->homepage) {
        free(organization->homepage);
        organization->homepage = NULL;
    }
    if (organization->facebook_page_username) {
        free(organization->facebook_page_username);
        organization->facebook_page_username = NULL;
    }
    if (organization->instagram_username) {
        free(organization->instagram_username);
        organization->instagram_username = NULL;
    }
    if (organization->linked_in_username) {
        free(organization->linked_in_username);
        organization->linked_in_username = NULL;
    }
    if (organization->twitter_handler) {
        free(organization->twitter_handler);
        organization->twitter_handler = NULL;
    }
    if (organization->git_hub_username) {
        free(organization->git_hub_username);
        organization->git_hub_username = NULL;
    }
    if (organization->contact_points) {
        list_ForEach(listEntry, organization->contact_points) {
            contact_point_free(listEntry->data);
        }
        list_freeList(organization->contact_points);
        organization->contact_points = NULL;
    }
    free(organization);
}

cJSON *organization_convertToJSON(organization_t *organization) {
    cJSON *item = cJSON_CreateObject();

    // organization->legal_name
    if(organization->legal_name) {
    if(cJSON_AddStringToObject(item, "legalName", organization->legal_name) == NULL) {
    goto fail; //String
    }
    }


    // organization->business_name
    if(organization->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", organization->business_name) == NULL) {
    goto fail; //String
    }
    }


    // organization->slogan
    if(organization->slogan) {
    if(cJSON_AddStringToObject(item, "slogan", organization->slogan) == NULL) {
    goto fail; //String
    }
    }


    // organization->homepage
    if(organization->homepage) {
    if(cJSON_AddStringToObject(item, "homepage", organization->homepage) == NULL) {
    goto fail; //String
    }
    }


    // organization->facebook_page_username
    if(organization->facebook_page_username) {
    if(cJSON_AddStringToObject(item, "facebookPageUsername", organization->facebook_page_username) == NULL) {
    goto fail; //String
    }
    }


    // organization->instagram_username
    if(organization->instagram_username) {
    if(cJSON_AddStringToObject(item, "instagramUsername", organization->instagram_username) == NULL) {
    goto fail; //String
    }
    }


    // organization->linked_in_username
    if(organization->linked_in_username) {
    if(cJSON_AddStringToObject(item, "linkedInUsername", organization->linked_in_username) == NULL) {
    goto fail; //String
    }
    }


    // organization->twitter_handler
    if(organization->twitter_handler) {
    if(cJSON_AddStringToObject(item, "twitterHandler", organization->twitter_handler) == NULL) {
    goto fail; //String
    }
    }


    // organization->git_hub_username
    if(organization->git_hub_username) {
    if(cJSON_AddStringToObject(item, "gitHubUsername", organization->git_hub_username) == NULL) {
    goto fail; //String
    }
    }


    // organization->contact_points
    if(organization->contact_points) {
    cJSON *contact_points = cJSON_AddArrayToObject(item, "contactPoints");
    if(contact_points == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *contact_pointsListEntry;
    if (organization->contact_points) {
    list_ForEach(contact_pointsListEntry, organization->contact_points) {
    cJSON *itemLocal = contact_point_convertToJSON(contact_pointsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(contact_points, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

organization_t *organization_parseFromJSON(cJSON *organizationJSON){

    organization_t *organization_local_var = NULL;

    // define the local list for organization->contact_points
    list_t *contact_pointsList = NULL;

    // organization->legal_name
    cJSON *legal_name = cJSON_GetObjectItemCaseSensitive(organizationJSON, "legalName");
    if (legal_name) { 
    if(!cJSON_IsString(legal_name) && !cJSON_IsNull(legal_name))
    {
    goto end; //String
    }
    }

    // organization->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(organizationJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // organization->slogan
    cJSON *slogan = cJSON_GetObjectItemCaseSensitive(organizationJSON, "slogan");
    if (slogan) { 
    if(!cJSON_IsString(slogan) && !cJSON_IsNull(slogan))
    {
    goto end; //String
    }
    }

    // organization->homepage
    cJSON *homepage = cJSON_GetObjectItemCaseSensitive(organizationJSON, "homepage");
    if (homepage) { 
    if(!cJSON_IsString(homepage) && !cJSON_IsNull(homepage))
    {
    goto end; //String
    }
    }

    // organization->facebook_page_username
    cJSON *facebook_page_username = cJSON_GetObjectItemCaseSensitive(organizationJSON, "facebookPageUsername");
    if (facebook_page_username) { 
    if(!cJSON_IsString(facebook_page_username) && !cJSON_IsNull(facebook_page_username))
    {
    goto end; //String
    }
    }

    // organization->instagram_username
    cJSON *instagram_username = cJSON_GetObjectItemCaseSensitive(organizationJSON, "instagramUsername");
    if (instagram_username) { 
    if(!cJSON_IsString(instagram_username) && !cJSON_IsNull(instagram_username))
    {
    goto end; //String
    }
    }

    // organization->linked_in_username
    cJSON *linked_in_username = cJSON_GetObjectItemCaseSensitive(organizationJSON, "linkedInUsername");
    if (linked_in_username) { 
    if(!cJSON_IsString(linked_in_username) && !cJSON_IsNull(linked_in_username))
    {
    goto end; //String
    }
    }

    // organization->twitter_handler
    cJSON *twitter_handler = cJSON_GetObjectItemCaseSensitive(organizationJSON, "twitterHandler");
    if (twitter_handler) { 
    if(!cJSON_IsString(twitter_handler) && !cJSON_IsNull(twitter_handler))
    {
    goto end; //String
    }
    }

    // organization->git_hub_username
    cJSON *git_hub_username = cJSON_GetObjectItemCaseSensitive(organizationJSON, "gitHubUsername");
    if (git_hub_username) { 
    if(!cJSON_IsString(git_hub_username) && !cJSON_IsNull(git_hub_username))
    {
    goto end; //String
    }
    }

    // organization->contact_points
    cJSON *contact_points = cJSON_GetObjectItemCaseSensitive(organizationJSON, "contactPoints");
    if (contact_points) { 
    cJSON *contact_points_local_nonprimitive = NULL;
    if(!cJSON_IsArray(contact_points)){
        goto end; //nonprimitive container
    }

    contact_pointsList = list_createList();

    cJSON_ArrayForEach(contact_points_local_nonprimitive,contact_points )
    {
        if(!cJSON_IsObject(contact_points_local_nonprimitive)){
            goto end;
        }
        contact_point_t *contact_pointsItem = contact_point_parseFromJSON(contact_points_local_nonprimitive);

        list_addElement(contact_pointsList, contact_pointsItem);
    }
    }


    organization_local_var = organization_create (
        legal_name && !cJSON_IsNull(legal_name) ? strdup(legal_name->valuestring) : NULL,
        business_name && !cJSON_IsNull(business_name) ? strdup(business_name->valuestring) : NULL,
        slogan && !cJSON_IsNull(slogan) ? strdup(slogan->valuestring) : NULL,
        homepage && !cJSON_IsNull(homepage) ? strdup(homepage->valuestring) : NULL,
        facebook_page_username && !cJSON_IsNull(facebook_page_username) ? strdup(facebook_page_username->valuestring) : NULL,
        instagram_username && !cJSON_IsNull(instagram_username) ? strdup(instagram_username->valuestring) : NULL,
        linked_in_username && !cJSON_IsNull(linked_in_username) ? strdup(linked_in_username->valuestring) : NULL,
        twitter_handler && !cJSON_IsNull(twitter_handler) ? strdup(twitter_handler->valuestring) : NULL,
        git_hub_username && !cJSON_IsNull(git_hub_username) ? strdup(git_hub_username->valuestring) : NULL,
        contact_points ? contact_pointsList : NULL
        );

    return organization_local_var;
end:
    if (contact_pointsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, contact_pointsList) {
            contact_point_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(contact_pointsList);
        contact_pointsList = NULL;
    }
    return NULL;

}
