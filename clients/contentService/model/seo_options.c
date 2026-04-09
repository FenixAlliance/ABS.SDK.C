#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "seo_options.h"



seo_options_t *seo_options_create(
    char *keywords,
    char *description,
    char *logo,
    char *social_image,
    char *title_suffix,
    char *bing_verification_code,
    char *google_verification_code,
    char *pinterest_verification_code,
    creator_t *creator,
    organization_t *organization,
    list_t *same_as
    ) {
    seo_options_t *seo_options_local_var = malloc(sizeof(seo_options_t));
    if (!seo_options_local_var) {
        return NULL;
    }
    seo_options_local_var->keywords = keywords;
    seo_options_local_var->description = description;
    seo_options_local_var->logo = logo;
    seo_options_local_var->social_image = social_image;
    seo_options_local_var->title_suffix = title_suffix;
    seo_options_local_var->bing_verification_code = bing_verification_code;
    seo_options_local_var->google_verification_code = google_verification_code;
    seo_options_local_var->pinterest_verification_code = pinterest_verification_code;
    seo_options_local_var->creator = creator;
    seo_options_local_var->organization = organization;
    seo_options_local_var->same_as = same_as;

    return seo_options_local_var;
}


void seo_options_free(seo_options_t *seo_options) {
    if(NULL == seo_options){
        return ;
    }
    listEntry_t *listEntry;
    if (seo_options->keywords) {
        free(seo_options->keywords);
        seo_options->keywords = NULL;
    }
    if (seo_options->description) {
        free(seo_options->description);
        seo_options->description = NULL;
    }
    if (seo_options->logo) {
        free(seo_options->logo);
        seo_options->logo = NULL;
    }
    if (seo_options->social_image) {
        free(seo_options->social_image);
        seo_options->social_image = NULL;
    }
    if (seo_options->title_suffix) {
        free(seo_options->title_suffix);
        seo_options->title_suffix = NULL;
    }
    if (seo_options->bing_verification_code) {
        free(seo_options->bing_verification_code);
        seo_options->bing_verification_code = NULL;
    }
    if (seo_options->google_verification_code) {
        free(seo_options->google_verification_code);
        seo_options->google_verification_code = NULL;
    }
    if (seo_options->pinterest_verification_code) {
        free(seo_options->pinterest_verification_code);
        seo_options->pinterest_verification_code = NULL;
    }
    if (seo_options->creator) {
        creator_free(seo_options->creator);
        seo_options->creator = NULL;
    }
    if (seo_options->organization) {
        organization_free(seo_options->organization);
        seo_options->organization = NULL;
    }
    if (seo_options->same_as) {
        list_ForEach(listEntry, seo_options->same_as) {
            free(listEntry->data);
        }
        list_freeList(seo_options->same_as);
        seo_options->same_as = NULL;
    }
    free(seo_options);
}

cJSON *seo_options_convertToJSON(seo_options_t *seo_options) {
    cJSON *item = cJSON_CreateObject();

    // seo_options->keywords
    if(seo_options->keywords) {
    if(cJSON_AddStringToObject(item, "keywords", seo_options->keywords) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->description
    if(seo_options->description) {
    if(cJSON_AddStringToObject(item, "description", seo_options->description) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->logo
    if(seo_options->logo) {
    if(cJSON_AddStringToObject(item, "logo", seo_options->logo) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->social_image
    if(seo_options->social_image) {
    if(cJSON_AddStringToObject(item, "socialImage", seo_options->social_image) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->title_suffix
    if(seo_options->title_suffix) {
    if(cJSON_AddStringToObject(item, "titleSuffix", seo_options->title_suffix) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->bing_verification_code
    if(seo_options->bing_verification_code) {
    if(cJSON_AddStringToObject(item, "bingVerificationCode", seo_options->bing_verification_code) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->google_verification_code
    if(seo_options->google_verification_code) {
    if(cJSON_AddStringToObject(item, "googleVerificationCode", seo_options->google_verification_code) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->pinterest_verification_code
    if(seo_options->pinterest_verification_code) {
    if(cJSON_AddStringToObject(item, "pinterestVerificationCode", seo_options->pinterest_verification_code) == NULL) {
    goto fail; //String
    }
    }


    // seo_options->creator
    if(seo_options->creator) {
    cJSON *creator_local_JSON = creator_convertToJSON(seo_options->creator);
    if(creator_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "creator", creator_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // seo_options->organization
    if(seo_options->organization) {
    cJSON *organization_local_JSON = organization_convertToJSON(seo_options->organization);
    if(organization_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "organization", organization_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // seo_options->same_as
    if(seo_options->same_as) {
    cJSON *same_as = cJSON_AddArrayToObject(item, "sameAs");
    if(same_as == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *same_asListEntry;
    list_ForEach(same_asListEntry, seo_options->same_as) {
    if(cJSON_AddStringToObject(same_as, "", (char*)same_asListEntry->data) == NULL)
    {
        goto fail;
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

seo_options_t *seo_options_parseFromJSON(cJSON *seo_optionsJSON){

    seo_options_t *seo_options_local_var = NULL;

    // define the local variable for seo_options->creator
    creator_t *creator_local_nonprim = NULL;

    // define the local variable for seo_options->organization
    organization_t *organization_local_nonprim = NULL;

    // define the local list for seo_options->same_as
    list_t *same_asList = NULL;

    // seo_options->keywords
    cJSON *keywords = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "keywords");
    if (keywords) { 
    if(!cJSON_IsString(keywords) && !cJSON_IsNull(keywords))
    {
    goto end; //String
    }
    }

    // seo_options->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // seo_options->logo
    cJSON *logo = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "logo");
    if (logo) { 
    if(!cJSON_IsString(logo) && !cJSON_IsNull(logo))
    {
    goto end; //String
    }
    }

    // seo_options->social_image
    cJSON *social_image = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "socialImage");
    if (social_image) { 
    if(!cJSON_IsString(social_image) && !cJSON_IsNull(social_image))
    {
    goto end; //String
    }
    }

    // seo_options->title_suffix
    cJSON *title_suffix = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "titleSuffix");
    if (title_suffix) { 
    if(!cJSON_IsString(title_suffix) && !cJSON_IsNull(title_suffix))
    {
    goto end; //String
    }
    }

    // seo_options->bing_verification_code
    cJSON *bing_verification_code = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "bingVerificationCode");
    if (bing_verification_code) { 
    if(!cJSON_IsString(bing_verification_code) && !cJSON_IsNull(bing_verification_code))
    {
    goto end; //String
    }
    }

    // seo_options->google_verification_code
    cJSON *google_verification_code = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "googleVerificationCode");
    if (google_verification_code) { 
    if(!cJSON_IsString(google_verification_code) && !cJSON_IsNull(google_verification_code))
    {
    goto end; //String
    }
    }

    // seo_options->pinterest_verification_code
    cJSON *pinterest_verification_code = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "pinterestVerificationCode");
    if (pinterest_verification_code) { 
    if(!cJSON_IsString(pinterest_verification_code) && !cJSON_IsNull(pinterest_verification_code))
    {
    goto end; //String
    }
    }

    // seo_options->creator
    cJSON *creator = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "creator");
    if (creator) { 
    creator_local_nonprim = creator_parseFromJSON(creator); //nonprimitive
    }

    // seo_options->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "organization");
    if (organization) { 
    organization_local_nonprim = organization_parseFromJSON(organization); //nonprimitive
    }

    // seo_options->same_as
    cJSON *same_as = cJSON_GetObjectItemCaseSensitive(seo_optionsJSON, "sameAs");
    if (same_as) { 
    cJSON *same_as_local = NULL;
    if(!cJSON_IsArray(same_as)) {
        goto end;//primitive container
    }
    same_asList = list_createList();

    cJSON_ArrayForEach(same_as_local, same_as)
    {
        if(!cJSON_IsString(same_as_local))
        {
            goto end;
        }
        list_addElement(same_asList , strdup(same_as_local->valuestring));
    }
    }


    seo_options_local_var = seo_options_create (
        keywords && !cJSON_IsNull(keywords) ? strdup(keywords->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        logo && !cJSON_IsNull(logo) ? strdup(logo->valuestring) : NULL,
        social_image && !cJSON_IsNull(social_image) ? strdup(social_image->valuestring) : NULL,
        title_suffix && !cJSON_IsNull(title_suffix) ? strdup(title_suffix->valuestring) : NULL,
        bing_verification_code && !cJSON_IsNull(bing_verification_code) ? strdup(bing_verification_code->valuestring) : NULL,
        google_verification_code && !cJSON_IsNull(google_verification_code) ? strdup(google_verification_code->valuestring) : NULL,
        pinterest_verification_code && !cJSON_IsNull(pinterest_verification_code) ? strdup(pinterest_verification_code->valuestring) : NULL,
        creator ? creator_local_nonprim : NULL,
        organization ? organization_local_nonprim : NULL,
        same_as ? same_asList : NULL
        );

    return seo_options_local_var;
end:
    if (creator_local_nonprim) {
        creator_free(creator_local_nonprim);
        creator_local_nonprim = NULL;
    }
    if (organization_local_nonprim) {
        organization_free(organization_local_nonprim);
        organization_local_nonprim = NULL;
    }
    if (same_asList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, same_asList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(same_asList);
        same_asList = NULL;
    }
    return NULL;

}
