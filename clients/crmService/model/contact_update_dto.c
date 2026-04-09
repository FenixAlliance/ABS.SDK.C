#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_update_dto.h"


char* contact_update_dto_type_ToString(crmservice_contact_update_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Individual", "Organization" };
    return typeArray[type];
}

crmservice_contact_update_dto_TYPE_e contact_update_dto_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Individual", "Organization" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

contact_update_dto_t *contact_update_dto_create(
    crmservice_contact_update_dto_TYPE_e type,
    char *birthday,
    char *duns,
    char *tax_id,
    char *email,
    char *first_name,
    char *last_name,
    char *primary_contact_id,
    char *qualified_name,
    char *about,
    char *mobile_phone,
    char *business_phone,
    char *job_title,
    char *country_id,
    char *parent_contact_id,
    char *address_line1,
    char *address_line2,
    char *postal_code,
    char *state_id,
    char *city_id,
    char *street_line1,
    char *street_line2,
    char *currency_id,
    char *language_id,
    char *timezone_id,
    char *cover_url,
    char *github_username,
    char *instagram_username,
    char *web_url,
    char *twitch_url,
    char *reddit_url,
    char *git_hub_url,
    char *tik_tok_url,
    char *twitter_url,
    char *you_tube_url,
    char *facebook_url,
    char *linked_in_url,
    char *instagram_url,
    char *tik_tok_username,
    char *stack_exchange_url,
    char *stack_overflow_url,
    char *fax_number
    ) {
    contact_update_dto_t *contact_update_dto_local_var = malloc(sizeof(contact_update_dto_t));
    if (!contact_update_dto_local_var) {
        return NULL;
    }
    contact_update_dto_local_var->type = type;
    contact_update_dto_local_var->birthday = birthday;
    contact_update_dto_local_var->duns = duns;
    contact_update_dto_local_var->tax_id = tax_id;
    contact_update_dto_local_var->email = email;
    contact_update_dto_local_var->first_name = first_name;
    contact_update_dto_local_var->last_name = last_name;
    contact_update_dto_local_var->primary_contact_id = primary_contact_id;
    contact_update_dto_local_var->qualified_name = qualified_name;
    contact_update_dto_local_var->about = about;
    contact_update_dto_local_var->mobile_phone = mobile_phone;
    contact_update_dto_local_var->business_phone = business_phone;
    contact_update_dto_local_var->job_title = job_title;
    contact_update_dto_local_var->country_id = country_id;
    contact_update_dto_local_var->parent_contact_id = parent_contact_id;
    contact_update_dto_local_var->address_line1 = address_line1;
    contact_update_dto_local_var->address_line2 = address_line2;
    contact_update_dto_local_var->postal_code = postal_code;
    contact_update_dto_local_var->state_id = state_id;
    contact_update_dto_local_var->city_id = city_id;
    contact_update_dto_local_var->street_line1 = street_line1;
    contact_update_dto_local_var->street_line2 = street_line2;
    contact_update_dto_local_var->currency_id = currency_id;
    contact_update_dto_local_var->language_id = language_id;
    contact_update_dto_local_var->timezone_id = timezone_id;
    contact_update_dto_local_var->cover_url = cover_url;
    contact_update_dto_local_var->github_username = github_username;
    contact_update_dto_local_var->instagram_username = instagram_username;
    contact_update_dto_local_var->web_url = web_url;
    contact_update_dto_local_var->twitch_url = twitch_url;
    contact_update_dto_local_var->reddit_url = reddit_url;
    contact_update_dto_local_var->git_hub_url = git_hub_url;
    contact_update_dto_local_var->tik_tok_url = tik_tok_url;
    contact_update_dto_local_var->twitter_url = twitter_url;
    contact_update_dto_local_var->you_tube_url = you_tube_url;
    contact_update_dto_local_var->facebook_url = facebook_url;
    contact_update_dto_local_var->linked_in_url = linked_in_url;
    contact_update_dto_local_var->instagram_url = instagram_url;
    contact_update_dto_local_var->tik_tok_username = tik_tok_username;
    contact_update_dto_local_var->stack_exchange_url = stack_exchange_url;
    contact_update_dto_local_var->stack_overflow_url = stack_overflow_url;
    contact_update_dto_local_var->fax_number = fax_number;

    return contact_update_dto_local_var;
}


void contact_update_dto_free(contact_update_dto_t *contact_update_dto) {
    if(NULL == contact_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_update_dto->birthday) {
        free(contact_update_dto->birthday);
        contact_update_dto->birthday = NULL;
    }
    if (contact_update_dto->duns) {
        free(contact_update_dto->duns);
        contact_update_dto->duns = NULL;
    }
    if (contact_update_dto->tax_id) {
        free(contact_update_dto->tax_id);
        contact_update_dto->tax_id = NULL;
    }
    if (contact_update_dto->email) {
        free(contact_update_dto->email);
        contact_update_dto->email = NULL;
    }
    if (contact_update_dto->first_name) {
        free(contact_update_dto->first_name);
        contact_update_dto->first_name = NULL;
    }
    if (contact_update_dto->last_name) {
        free(contact_update_dto->last_name);
        contact_update_dto->last_name = NULL;
    }
    if (contact_update_dto->primary_contact_id) {
        free(contact_update_dto->primary_contact_id);
        contact_update_dto->primary_contact_id = NULL;
    }
    if (contact_update_dto->qualified_name) {
        free(contact_update_dto->qualified_name);
        contact_update_dto->qualified_name = NULL;
    }
    if (contact_update_dto->about) {
        free(contact_update_dto->about);
        contact_update_dto->about = NULL;
    }
    if (contact_update_dto->mobile_phone) {
        free(contact_update_dto->mobile_phone);
        contact_update_dto->mobile_phone = NULL;
    }
    if (contact_update_dto->business_phone) {
        free(contact_update_dto->business_phone);
        contact_update_dto->business_phone = NULL;
    }
    if (contact_update_dto->job_title) {
        free(contact_update_dto->job_title);
        contact_update_dto->job_title = NULL;
    }
    if (contact_update_dto->country_id) {
        free(contact_update_dto->country_id);
        contact_update_dto->country_id = NULL;
    }
    if (contact_update_dto->parent_contact_id) {
        free(contact_update_dto->parent_contact_id);
        contact_update_dto->parent_contact_id = NULL;
    }
    if (contact_update_dto->address_line1) {
        free(contact_update_dto->address_line1);
        contact_update_dto->address_line1 = NULL;
    }
    if (contact_update_dto->address_line2) {
        free(contact_update_dto->address_line2);
        contact_update_dto->address_line2 = NULL;
    }
    if (contact_update_dto->postal_code) {
        free(contact_update_dto->postal_code);
        contact_update_dto->postal_code = NULL;
    }
    if (contact_update_dto->state_id) {
        free(contact_update_dto->state_id);
        contact_update_dto->state_id = NULL;
    }
    if (contact_update_dto->city_id) {
        free(contact_update_dto->city_id);
        contact_update_dto->city_id = NULL;
    }
    if (contact_update_dto->street_line1) {
        free(contact_update_dto->street_line1);
        contact_update_dto->street_line1 = NULL;
    }
    if (contact_update_dto->street_line2) {
        free(contact_update_dto->street_line2);
        contact_update_dto->street_line2 = NULL;
    }
    if (contact_update_dto->currency_id) {
        free(contact_update_dto->currency_id);
        contact_update_dto->currency_id = NULL;
    }
    if (contact_update_dto->language_id) {
        free(contact_update_dto->language_id);
        contact_update_dto->language_id = NULL;
    }
    if (contact_update_dto->timezone_id) {
        free(contact_update_dto->timezone_id);
        contact_update_dto->timezone_id = NULL;
    }
    if (contact_update_dto->cover_url) {
        free(contact_update_dto->cover_url);
        contact_update_dto->cover_url = NULL;
    }
    if (contact_update_dto->github_username) {
        free(contact_update_dto->github_username);
        contact_update_dto->github_username = NULL;
    }
    if (contact_update_dto->instagram_username) {
        free(contact_update_dto->instagram_username);
        contact_update_dto->instagram_username = NULL;
    }
    if (contact_update_dto->web_url) {
        free(contact_update_dto->web_url);
        contact_update_dto->web_url = NULL;
    }
    if (contact_update_dto->twitch_url) {
        free(contact_update_dto->twitch_url);
        contact_update_dto->twitch_url = NULL;
    }
    if (contact_update_dto->reddit_url) {
        free(contact_update_dto->reddit_url);
        contact_update_dto->reddit_url = NULL;
    }
    if (contact_update_dto->git_hub_url) {
        free(contact_update_dto->git_hub_url);
        contact_update_dto->git_hub_url = NULL;
    }
    if (contact_update_dto->tik_tok_url) {
        free(contact_update_dto->tik_tok_url);
        contact_update_dto->tik_tok_url = NULL;
    }
    if (contact_update_dto->twitter_url) {
        free(contact_update_dto->twitter_url);
        contact_update_dto->twitter_url = NULL;
    }
    if (contact_update_dto->you_tube_url) {
        free(contact_update_dto->you_tube_url);
        contact_update_dto->you_tube_url = NULL;
    }
    if (contact_update_dto->facebook_url) {
        free(contact_update_dto->facebook_url);
        contact_update_dto->facebook_url = NULL;
    }
    if (contact_update_dto->linked_in_url) {
        free(contact_update_dto->linked_in_url);
        contact_update_dto->linked_in_url = NULL;
    }
    if (contact_update_dto->instagram_url) {
        free(contact_update_dto->instagram_url);
        contact_update_dto->instagram_url = NULL;
    }
    if (contact_update_dto->tik_tok_username) {
        free(contact_update_dto->tik_tok_username);
        contact_update_dto->tik_tok_username = NULL;
    }
    if (contact_update_dto->stack_exchange_url) {
        free(contact_update_dto->stack_exchange_url);
        contact_update_dto->stack_exchange_url = NULL;
    }
    if (contact_update_dto->stack_overflow_url) {
        free(contact_update_dto->stack_overflow_url);
        contact_update_dto->stack_overflow_url = NULL;
    }
    if (contact_update_dto->fax_number) {
        free(contact_update_dto->fax_number);
        contact_update_dto->fax_number = NULL;
    }
    free(contact_update_dto);
}

cJSON *contact_update_dto_convertToJSON(contact_update_dto_t *contact_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // contact_update_dto->type
    if (crmservice_contact_update_dto_TYPE_NULL == contact_update_dto->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", typecontact_update_dto_ToString(contact_update_dto->type)) == NULL)
    {
    goto fail; //Enum
    }


    // contact_update_dto->birthday
    if(contact_update_dto->birthday) {
    if(cJSON_AddStringToObject(item, "birthday", contact_update_dto->birthday) == NULL) {
    goto fail; //Date-Time
    }
    }


    // contact_update_dto->duns
    if(contact_update_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", contact_update_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->tax_id
    if(contact_update_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", contact_update_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->email
    if (!contact_update_dto->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", contact_update_dto->email) == NULL) {
    goto fail; //String
    }


    // contact_update_dto->first_name
    if (!contact_update_dto->first_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "firstName", contact_update_dto->first_name) == NULL) {
    goto fail; //String
    }


    // contact_update_dto->last_name
    if(contact_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", contact_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->primary_contact_id
    if(contact_update_dto->primary_contact_id) {
    if(cJSON_AddStringToObject(item, "primaryContactId", contact_update_dto->primary_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->qualified_name
    if(contact_update_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", contact_update_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->about
    if(contact_update_dto->about) {
    if(cJSON_AddStringToObject(item, "about", contact_update_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->mobile_phone
    if(contact_update_dto->mobile_phone) {
    if(cJSON_AddStringToObject(item, "mobilePhone", contact_update_dto->mobile_phone) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->business_phone
    if(contact_update_dto->business_phone) {
    if(cJSON_AddStringToObject(item, "businessPhone", contact_update_dto->business_phone) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->job_title
    if(contact_update_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", contact_update_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->country_id
    if(contact_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", contact_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->parent_contact_id
    if(contact_update_dto->parent_contact_id) {
    if(cJSON_AddStringToObject(item, "parentContactId", contact_update_dto->parent_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->address_line1
    if(contact_update_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", contact_update_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->address_line2
    if(contact_update_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", contact_update_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->postal_code
    if(contact_update_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", contact_update_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->state_id
    if(contact_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", contact_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->city_id
    if(contact_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", contact_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->street_line1
    if(contact_update_dto->street_line1) {
    if(cJSON_AddStringToObject(item, "streetLine1", contact_update_dto->street_line1) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->street_line2
    if(contact_update_dto->street_line2) {
    if(cJSON_AddStringToObject(item, "streetLine2", contact_update_dto->street_line2) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->currency_id
    if(contact_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", contact_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->language_id
    if(contact_update_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", contact_update_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->timezone_id
    if(contact_update_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", contact_update_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->cover_url
    if(contact_update_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", contact_update_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->github_username
    if(contact_update_dto->github_username) {
    if(cJSON_AddStringToObject(item, "githubUsername", contact_update_dto->github_username) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->instagram_username
    if(contact_update_dto->instagram_username) {
    if(cJSON_AddStringToObject(item, "instagramUsername", contact_update_dto->instagram_username) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->web_url
    if(contact_update_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", contact_update_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->twitch_url
    if(contact_update_dto->twitch_url) {
    if(cJSON_AddStringToObject(item, "twitchUrl", contact_update_dto->twitch_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->reddit_url
    if(contact_update_dto->reddit_url) {
    if(cJSON_AddStringToObject(item, "redditUrl", contact_update_dto->reddit_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->git_hub_url
    if(contact_update_dto->git_hub_url) {
    if(cJSON_AddStringToObject(item, "gitHubUrl", contact_update_dto->git_hub_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->tik_tok_url
    if(contact_update_dto->tik_tok_url) {
    if(cJSON_AddStringToObject(item, "tikTokUrl", contact_update_dto->tik_tok_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->twitter_url
    if(contact_update_dto->twitter_url) {
    if(cJSON_AddStringToObject(item, "twitterUrl", contact_update_dto->twitter_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->you_tube_url
    if(contact_update_dto->you_tube_url) {
    if(cJSON_AddStringToObject(item, "youTubeUrl", contact_update_dto->you_tube_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->facebook_url
    if(contact_update_dto->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebookUrl", contact_update_dto->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->linked_in_url
    if(contact_update_dto->linked_in_url) {
    if(cJSON_AddStringToObject(item, "linkedInUrl", contact_update_dto->linked_in_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->instagram_url
    if(contact_update_dto->instagram_url) {
    if(cJSON_AddStringToObject(item, "instagramUrl", contact_update_dto->instagram_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->tik_tok_username
    if(contact_update_dto->tik_tok_username) {
    if(cJSON_AddStringToObject(item, "tikTokUsername", contact_update_dto->tik_tok_username) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->stack_exchange_url
    if(contact_update_dto->stack_exchange_url) {
    if(cJSON_AddStringToObject(item, "stackExchangeUrl", contact_update_dto->stack_exchange_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->stack_overflow_url
    if(contact_update_dto->stack_overflow_url) {
    if(cJSON_AddStringToObject(item, "stackOverflowUrl", contact_update_dto->stack_overflow_url) == NULL) {
    goto fail; //String
    }
    }


    // contact_update_dto->fax_number
    if(contact_update_dto->fax_number) {
    if(cJSON_AddStringToObject(item, "faxNumber", contact_update_dto->fax_number) == NULL) {
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

contact_update_dto_t *contact_update_dto_parseFromJSON(cJSON *contact_update_dtoJSON){

    contact_update_dto_t *contact_update_dto_local_var = NULL;

    // contact_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "type");
    if (!type) {
        goto end;
    }

    crmservice_contact_update_dto_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = contact_update_dto_type_FromString(type->valuestring);

    // contact_update_dto->birthday
    cJSON *birthday = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "birthday");
    if (birthday) { 
    if(!cJSON_IsString(birthday) && !cJSON_IsNull(birthday))
    {
    goto end; //DateTime
    }
    }

    // contact_update_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // contact_update_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // contact_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "firstName");
    if (!first_name) {
        goto end;
    }

    
    if(!cJSON_IsString(first_name))
    {
    goto end; //String
    }

    // contact_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // contact_update_dto->primary_contact_id
    cJSON *primary_contact_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "primaryContactId");
    if (primary_contact_id) { 
    if(!cJSON_IsString(primary_contact_id) && !cJSON_IsNull(primary_contact_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // contact_update_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // contact_update_dto->mobile_phone
    cJSON *mobile_phone = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "mobilePhone");
    if (mobile_phone) { 
    if(!cJSON_IsString(mobile_phone) && !cJSON_IsNull(mobile_phone))
    {
    goto end; //String
    }
    }

    // contact_update_dto->business_phone
    cJSON *business_phone = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "businessPhone");
    if (business_phone) { 
    if(!cJSON_IsString(business_phone) && !cJSON_IsNull(business_phone))
    {
    goto end; //String
    }
    }

    // contact_update_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // contact_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->parent_contact_id
    cJSON *parent_contact_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "parentContactId");
    if (parent_contact_id) { 
    if(!cJSON_IsString(parent_contact_id) && !cJSON_IsNull(parent_contact_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // contact_update_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // contact_update_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // contact_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->street_line1
    cJSON *street_line1 = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "streetLine1");
    if (street_line1) { 
    if(!cJSON_IsString(street_line1) && !cJSON_IsNull(street_line1))
    {
    goto end; //String
    }
    }

    // contact_update_dto->street_line2
    cJSON *street_line2 = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "streetLine2");
    if (street_line2) { 
    if(!cJSON_IsString(street_line2) && !cJSON_IsNull(street_line2))
    {
    goto end; //String
    }
    }

    // contact_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // contact_update_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->github_username
    cJSON *github_username = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "githubUsername");
    if (github_username) { 
    if(!cJSON_IsString(github_username) && !cJSON_IsNull(github_username))
    {
    goto end; //String
    }
    }

    // contact_update_dto->instagram_username
    cJSON *instagram_username = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "instagramUsername");
    if (instagram_username) { 
    if(!cJSON_IsString(instagram_username) && !cJSON_IsNull(instagram_username))
    {
    goto end; //String
    }
    }

    // contact_update_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->twitch_url
    cJSON *twitch_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "twitchUrl");
    if (twitch_url) { 
    if(!cJSON_IsString(twitch_url) && !cJSON_IsNull(twitch_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->reddit_url
    cJSON *reddit_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "redditUrl");
    if (reddit_url) { 
    if(!cJSON_IsString(reddit_url) && !cJSON_IsNull(reddit_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->git_hub_url
    cJSON *git_hub_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "gitHubUrl");
    if (git_hub_url) { 
    if(!cJSON_IsString(git_hub_url) && !cJSON_IsNull(git_hub_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->tik_tok_url
    cJSON *tik_tok_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "tikTokUrl");
    if (tik_tok_url) { 
    if(!cJSON_IsString(tik_tok_url) && !cJSON_IsNull(tik_tok_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->twitter_url
    cJSON *twitter_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "twitterUrl");
    if (twitter_url) { 
    if(!cJSON_IsString(twitter_url) && !cJSON_IsNull(twitter_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->you_tube_url
    cJSON *you_tube_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "youTubeUrl");
    if (you_tube_url) { 
    if(!cJSON_IsString(you_tube_url) && !cJSON_IsNull(you_tube_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "facebookUrl");
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->linked_in_url
    cJSON *linked_in_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "linkedInUrl");
    if (linked_in_url) { 
    if(!cJSON_IsString(linked_in_url) && !cJSON_IsNull(linked_in_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->instagram_url
    cJSON *instagram_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "instagramUrl");
    if (instagram_url) { 
    if(!cJSON_IsString(instagram_url) && !cJSON_IsNull(instagram_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->tik_tok_username
    cJSON *tik_tok_username = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "tikTokUsername");
    if (tik_tok_username) { 
    if(!cJSON_IsString(tik_tok_username) && !cJSON_IsNull(tik_tok_username))
    {
    goto end; //String
    }
    }

    // contact_update_dto->stack_exchange_url
    cJSON *stack_exchange_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "stackExchangeUrl");
    if (stack_exchange_url) { 
    if(!cJSON_IsString(stack_exchange_url) && !cJSON_IsNull(stack_exchange_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->stack_overflow_url
    cJSON *stack_overflow_url = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "stackOverflowUrl");
    if (stack_overflow_url) { 
    if(!cJSON_IsString(stack_overflow_url) && !cJSON_IsNull(stack_overflow_url))
    {
    goto end; //String
    }
    }

    // contact_update_dto->fax_number
    cJSON *fax_number = cJSON_GetObjectItemCaseSensitive(contact_update_dtoJSON, "faxNumber");
    if (fax_number) { 
    if(!cJSON_IsString(fax_number) && !cJSON_IsNull(fax_number))
    {
    goto end; //String
    }
    }


    contact_update_dto_local_var = contact_update_dto_create (
        typeVariable,
        birthday && !cJSON_IsNull(birthday) ? strdup(birthday->valuestring) : NULL,
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        strdup(email->valuestring),
        strdup(first_name->valuestring),
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        primary_contact_id && !cJSON_IsNull(primary_contact_id) ? strdup(primary_contact_id->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        mobile_phone && !cJSON_IsNull(mobile_phone) ? strdup(mobile_phone->valuestring) : NULL,
        business_phone && !cJSON_IsNull(business_phone) ? strdup(business_phone->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        parent_contact_id && !cJSON_IsNull(parent_contact_id) ? strdup(parent_contact_id->valuestring) : NULL,
        address_line1 && !cJSON_IsNull(address_line1) ? strdup(address_line1->valuestring) : NULL,
        address_line2 && !cJSON_IsNull(address_line2) ? strdup(address_line2->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        street_line1 && !cJSON_IsNull(street_line1) ? strdup(street_line1->valuestring) : NULL,
        street_line2 && !cJSON_IsNull(street_line2) ? strdup(street_line2->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        github_username && !cJSON_IsNull(github_username) ? strdup(github_username->valuestring) : NULL,
        instagram_username && !cJSON_IsNull(instagram_username) ? strdup(instagram_username->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        twitch_url && !cJSON_IsNull(twitch_url) ? strdup(twitch_url->valuestring) : NULL,
        reddit_url && !cJSON_IsNull(reddit_url) ? strdup(reddit_url->valuestring) : NULL,
        git_hub_url && !cJSON_IsNull(git_hub_url) ? strdup(git_hub_url->valuestring) : NULL,
        tik_tok_url && !cJSON_IsNull(tik_tok_url) ? strdup(tik_tok_url->valuestring) : NULL,
        twitter_url && !cJSON_IsNull(twitter_url) ? strdup(twitter_url->valuestring) : NULL,
        you_tube_url && !cJSON_IsNull(you_tube_url) ? strdup(you_tube_url->valuestring) : NULL,
        facebook_url && !cJSON_IsNull(facebook_url) ? strdup(facebook_url->valuestring) : NULL,
        linked_in_url && !cJSON_IsNull(linked_in_url) ? strdup(linked_in_url->valuestring) : NULL,
        instagram_url && !cJSON_IsNull(instagram_url) ? strdup(instagram_url->valuestring) : NULL,
        tik_tok_username && !cJSON_IsNull(tik_tok_username) ? strdup(tik_tok_username->valuestring) : NULL,
        stack_exchange_url && !cJSON_IsNull(stack_exchange_url) ? strdup(stack_exchange_url->valuestring) : NULL,
        stack_overflow_url && !cJSON_IsNull(stack_overflow_url) ? strdup(stack_overflow_url->valuestring) : NULL,
        fax_number && !cJSON_IsNull(fax_number) ? strdup(fax_number->valuestring) : NULL
        );

    return contact_update_dto_local_var;
end:
    return NULL;

}
