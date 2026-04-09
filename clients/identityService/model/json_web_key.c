#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "json_web_key.h"



json_web_key_t *json_web_key_create(
    char *kid,
    long nbf,
    char *use,
    char *kty,
    char *e,
    char *n
    ) {
    json_web_key_t *json_web_key_local_var = malloc(sizeof(json_web_key_t));
    if (!json_web_key_local_var) {
        return NULL;
    }
    json_web_key_local_var->kid = kid;
    json_web_key_local_var->nbf = nbf;
    json_web_key_local_var->use = use;
    json_web_key_local_var->kty = kty;
    json_web_key_local_var->e = e;
    json_web_key_local_var->n = n;

    return json_web_key_local_var;
}


void json_web_key_free(json_web_key_t *json_web_key) {
    if(NULL == json_web_key){
        return ;
    }
    listEntry_t *listEntry;
    if (json_web_key->kid) {
        free(json_web_key->kid);
        json_web_key->kid = NULL;
    }
    if (json_web_key->use) {
        free(json_web_key->use);
        json_web_key->use = NULL;
    }
    if (json_web_key->kty) {
        free(json_web_key->kty);
        json_web_key->kty = NULL;
    }
    if (json_web_key->e) {
        free(json_web_key->e);
        json_web_key->e = NULL;
    }
    if (json_web_key->n) {
        free(json_web_key->n);
        json_web_key->n = NULL;
    }
    free(json_web_key);
}

cJSON *json_web_key_convertToJSON(json_web_key_t *json_web_key) {
    cJSON *item = cJSON_CreateObject();

    // json_web_key->kid
    if(json_web_key->kid) {
    if(cJSON_AddStringToObject(item, "kid", json_web_key->kid) == NULL) {
    goto fail; //String
    }
    }


    // json_web_key->nbf
    if(json_web_key->nbf) {
    if(cJSON_AddNumberToObject(item, "nbf", json_web_key->nbf) == NULL) {
    goto fail; //Numeric
    }
    }


    // json_web_key->use
    if(json_web_key->use) {
    if(cJSON_AddStringToObject(item, "use", json_web_key->use) == NULL) {
    goto fail; //String
    }
    }


    // json_web_key->kty
    if(json_web_key->kty) {
    if(cJSON_AddStringToObject(item, "kty", json_web_key->kty) == NULL) {
    goto fail; //String
    }
    }


    // json_web_key->e
    if(json_web_key->e) {
    if(cJSON_AddStringToObject(item, "e", json_web_key->e) == NULL) {
    goto fail; //String
    }
    }


    // json_web_key->n
    if(json_web_key->n) {
    if(cJSON_AddStringToObject(item, "n", json_web_key->n) == NULL) {
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

json_web_key_t *json_web_key_parseFromJSON(cJSON *json_web_keyJSON){

    json_web_key_t *json_web_key_local_var = NULL;

    // json_web_key->kid
    cJSON *kid = cJSON_GetObjectItemCaseSensitive(json_web_keyJSON, "kid");
    if (kid) { 
    if(!cJSON_IsString(kid) && !cJSON_IsNull(kid))
    {
    goto end; //String
    }
    }

    // json_web_key->nbf
    cJSON *nbf = cJSON_GetObjectItemCaseSensitive(json_web_keyJSON, "nbf");
    if (nbf) { 
    if(!cJSON_IsNumber(nbf))
    {
    goto end; //Numeric
    }
    }

    // json_web_key->use
    cJSON *use = cJSON_GetObjectItemCaseSensitive(json_web_keyJSON, "use");
    if (use) { 
    if(!cJSON_IsString(use) && !cJSON_IsNull(use))
    {
    goto end; //String
    }
    }

    // json_web_key->kty
    cJSON *kty = cJSON_GetObjectItemCaseSensitive(json_web_keyJSON, "kty");
    if (kty) { 
    if(!cJSON_IsString(kty) && !cJSON_IsNull(kty))
    {
    goto end; //String
    }
    }

    // json_web_key->e
    cJSON *e = cJSON_GetObjectItemCaseSensitive(json_web_keyJSON, "e");
    if (e) { 
    if(!cJSON_IsString(e) && !cJSON_IsNull(e))
    {
    goto end; //String
    }
    }

    // json_web_key->n
    cJSON *n = cJSON_GetObjectItemCaseSensitive(json_web_keyJSON, "n");
    if (n) { 
    if(!cJSON_IsString(n) && !cJSON_IsNull(n))
    {
    goto end; //String
    }
    }


    json_web_key_local_var = json_web_key_create (
        kid && !cJSON_IsNull(kid) ? strdup(kid->valuestring) : NULL,
        nbf ? nbf->valuedouble : 0,
        use && !cJSON_IsNull(use) ? strdup(use->valuestring) : NULL,
        kty && !cJSON_IsNull(kty) ? strdup(kty->valuestring) : NULL,
        e && !cJSON_IsNull(e) ? strdup(e->valuestring) : NULL,
        n && !cJSON_IsNull(n) ? strdup(n->valuestring) : NULL
        );

    return json_web_key_local_var;
end:
    return NULL;

}
