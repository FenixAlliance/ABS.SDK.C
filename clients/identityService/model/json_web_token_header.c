#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "json_web_token_header.h"



json_web_token_header_t *json_web_token_header_create(
    char *alg,
    char *jku,
    char *kid,
    char *typ
    ) {
    json_web_token_header_t *json_web_token_header_local_var = malloc(sizeof(json_web_token_header_t));
    if (!json_web_token_header_local_var) {
        return NULL;
    }
    json_web_token_header_local_var->alg = alg;
    json_web_token_header_local_var->jku = jku;
    json_web_token_header_local_var->kid = kid;
    json_web_token_header_local_var->typ = typ;

    return json_web_token_header_local_var;
}


void json_web_token_header_free(json_web_token_header_t *json_web_token_header) {
    if(NULL == json_web_token_header){
        return ;
    }
    listEntry_t *listEntry;
    if (json_web_token_header->alg) {
        free(json_web_token_header->alg);
        json_web_token_header->alg = NULL;
    }
    if (json_web_token_header->jku) {
        free(json_web_token_header->jku);
        json_web_token_header->jku = NULL;
    }
    if (json_web_token_header->kid) {
        free(json_web_token_header->kid);
        json_web_token_header->kid = NULL;
    }
    if (json_web_token_header->typ) {
        free(json_web_token_header->typ);
        json_web_token_header->typ = NULL;
    }
    free(json_web_token_header);
}

cJSON *json_web_token_header_convertToJSON(json_web_token_header_t *json_web_token_header) {
    cJSON *item = cJSON_CreateObject();

    // json_web_token_header->alg
    if(json_web_token_header->alg) {
    if(cJSON_AddStringToObject(item, "alg", json_web_token_header->alg) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_header->jku
    if(json_web_token_header->jku) {
    if(cJSON_AddStringToObject(item, "jku", json_web_token_header->jku) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_header->kid
    if(json_web_token_header->kid) {
    if(cJSON_AddStringToObject(item, "kid", json_web_token_header->kid) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_header->typ
    if(json_web_token_header->typ) {
    if(cJSON_AddStringToObject(item, "typ", json_web_token_header->typ) == NULL) {
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

json_web_token_header_t *json_web_token_header_parseFromJSON(cJSON *json_web_token_headerJSON){

    json_web_token_header_t *json_web_token_header_local_var = NULL;

    // json_web_token_header->alg
    cJSON *alg = cJSON_GetObjectItemCaseSensitive(json_web_token_headerJSON, "alg");
    if (alg) { 
    if(!cJSON_IsString(alg) && !cJSON_IsNull(alg))
    {
    goto end; //String
    }
    }

    // json_web_token_header->jku
    cJSON *jku = cJSON_GetObjectItemCaseSensitive(json_web_token_headerJSON, "jku");
    if (jku) { 
    if(!cJSON_IsString(jku) && !cJSON_IsNull(jku))
    {
    goto end; //String
    }
    }

    // json_web_token_header->kid
    cJSON *kid = cJSON_GetObjectItemCaseSensitive(json_web_token_headerJSON, "kid");
    if (kid) { 
    if(!cJSON_IsString(kid) && !cJSON_IsNull(kid))
    {
    goto end; //String
    }
    }

    // json_web_token_header->typ
    cJSON *typ = cJSON_GetObjectItemCaseSensitive(json_web_token_headerJSON, "typ");
    if (typ) { 
    if(!cJSON_IsString(typ) && !cJSON_IsNull(typ))
    {
    goto end; //String
    }
    }


    json_web_token_header_local_var = json_web_token_header_create (
        alg && !cJSON_IsNull(alg) ? strdup(alg->valuestring) : NULL,
        jku && !cJSON_IsNull(jku) ? strdup(jku->valuestring) : NULL,
        kid && !cJSON_IsNull(kid) ? strdup(kid->valuestring) : NULL,
        typ && !cJSON_IsNull(typ) ? strdup(typ->valuestring) : NULL
        );

    return json_web_token_header_local_var;
end:
    return NULL;

}
