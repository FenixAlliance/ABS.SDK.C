#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_swagger_contact.h"



i_swagger_contact_t *i_swagger_contact_create(
    char *name,
    char *email,
    char *url
    ) {
    i_swagger_contact_t *i_swagger_contact_local_var = malloc(sizeof(i_swagger_contact_t));
    if (!i_swagger_contact_local_var) {
        return NULL;
    }
    i_swagger_contact_local_var->name = name;
    i_swagger_contact_local_var->email = email;
    i_swagger_contact_local_var->url = url;

    return i_swagger_contact_local_var;
}


void i_swagger_contact_free(i_swagger_contact_t *i_swagger_contact) {
    if(NULL == i_swagger_contact){
        return ;
    }
    listEntry_t *listEntry;
    if (i_swagger_contact->name) {
        free(i_swagger_contact->name);
        i_swagger_contact->name = NULL;
    }
    if (i_swagger_contact->email) {
        free(i_swagger_contact->email);
        i_swagger_contact->email = NULL;
    }
    if (i_swagger_contact->url) {
        free(i_swagger_contact->url);
        i_swagger_contact->url = NULL;
    }
    free(i_swagger_contact);
}

cJSON *i_swagger_contact_convertToJSON(i_swagger_contact_t *i_swagger_contact) {
    cJSON *item = cJSON_CreateObject();

    // i_swagger_contact->name
    if(i_swagger_contact->name) {
    if(cJSON_AddStringToObject(item, "name", i_swagger_contact->name) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_contact->email
    if(i_swagger_contact->email) {
    if(cJSON_AddStringToObject(item, "email", i_swagger_contact->email) == NULL) {
    goto fail; //String
    }
    }


    // i_swagger_contact->url
    if(i_swagger_contact->url) {
    if(cJSON_AddStringToObject(item, "url", i_swagger_contact->url) == NULL) {
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

i_swagger_contact_t *i_swagger_contact_parseFromJSON(cJSON *i_swagger_contactJSON){

    i_swagger_contact_t *i_swagger_contact_local_var = NULL;

    // i_swagger_contact->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_swagger_contactJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_swagger_contact->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(i_swagger_contactJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // i_swagger_contact->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(i_swagger_contactJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    i_swagger_contact_local_var = i_swagger_contact_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL
        );

    return i_swagger_contact_local_var;
end:
    return NULL;

}
