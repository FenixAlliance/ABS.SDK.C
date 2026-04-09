#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "json_web_token_payload.h"



json_web_token_payload_t *json_web_token_payload_create(
    char *aud,
    char *cid,
    char *iss,
    char *aid,
    char *sub,
    char *act,
    long iat,
    long nbf,
    long exp,
    list_t *scopes
    ) {
    json_web_token_payload_t *json_web_token_payload_local_var = malloc(sizeof(json_web_token_payload_t));
    if (!json_web_token_payload_local_var) {
        return NULL;
    }
    json_web_token_payload_local_var->aud = aud;
    json_web_token_payload_local_var->cid = cid;
    json_web_token_payload_local_var->iss = iss;
    json_web_token_payload_local_var->aid = aid;
    json_web_token_payload_local_var->sub = sub;
    json_web_token_payload_local_var->act = act;
    json_web_token_payload_local_var->iat = iat;
    json_web_token_payload_local_var->nbf = nbf;
    json_web_token_payload_local_var->exp = exp;
    json_web_token_payload_local_var->scopes = scopes;

    return json_web_token_payload_local_var;
}


void json_web_token_payload_free(json_web_token_payload_t *json_web_token_payload) {
    if(NULL == json_web_token_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (json_web_token_payload->aud) {
        free(json_web_token_payload->aud);
        json_web_token_payload->aud = NULL;
    }
    if (json_web_token_payload->cid) {
        free(json_web_token_payload->cid);
        json_web_token_payload->cid = NULL;
    }
    if (json_web_token_payload->iss) {
        free(json_web_token_payload->iss);
        json_web_token_payload->iss = NULL;
    }
    if (json_web_token_payload->aid) {
        free(json_web_token_payload->aid);
        json_web_token_payload->aid = NULL;
    }
    if (json_web_token_payload->sub) {
        free(json_web_token_payload->sub);
        json_web_token_payload->sub = NULL;
    }
    if (json_web_token_payload->act) {
        free(json_web_token_payload->act);
        json_web_token_payload->act = NULL;
    }
    if (json_web_token_payload->scopes) {
        list_ForEach(listEntry, json_web_token_payload->scopes) {
            free(listEntry->data);
        }
        list_freeList(json_web_token_payload->scopes);
        json_web_token_payload->scopes = NULL;
    }
    free(json_web_token_payload);
}

cJSON *json_web_token_payload_convertToJSON(json_web_token_payload_t *json_web_token_payload) {
    cJSON *item = cJSON_CreateObject();

    // json_web_token_payload->aud
    if(json_web_token_payload->aud) {
    if(cJSON_AddStringToObject(item, "aud", json_web_token_payload->aud) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_payload->cid
    if(json_web_token_payload->cid) {
    if(cJSON_AddStringToObject(item, "cid", json_web_token_payload->cid) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_payload->iss
    if(json_web_token_payload->iss) {
    if(cJSON_AddStringToObject(item, "iss", json_web_token_payload->iss) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_payload->aid
    if(json_web_token_payload->aid) {
    if(cJSON_AddStringToObject(item, "aid", json_web_token_payload->aid) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_payload->sub
    if(json_web_token_payload->sub) {
    if(cJSON_AddStringToObject(item, "sub", json_web_token_payload->sub) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_payload->act
    if(json_web_token_payload->act) {
    if(cJSON_AddStringToObject(item, "act", json_web_token_payload->act) == NULL) {
    goto fail; //String
    }
    }


    // json_web_token_payload->iat
    if(json_web_token_payload->iat) {
    if(cJSON_AddNumberToObject(item, "iat", json_web_token_payload->iat) == NULL) {
    goto fail; //Numeric
    }
    }


    // json_web_token_payload->nbf
    if(json_web_token_payload->nbf) {
    if(cJSON_AddNumberToObject(item, "nbf", json_web_token_payload->nbf) == NULL) {
    goto fail; //Numeric
    }
    }


    // json_web_token_payload->exp
    if(json_web_token_payload->exp) {
    if(cJSON_AddNumberToObject(item, "exp", json_web_token_payload->exp) == NULL) {
    goto fail; //Numeric
    }
    }


    // json_web_token_payload->scopes
    if(json_web_token_payload->scopes) {
    cJSON *scopes = cJSON_AddArrayToObject(item, "scopes");
    if(scopes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *scopesListEntry;
    list_ForEach(scopesListEntry, json_web_token_payload->scopes) {
    if(cJSON_AddStringToObject(scopes, "", (char*)scopesListEntry->data) == NULL)
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

json_web_token_payload_t *json_web_token_payload_parseFromJSON(cJSON *json_web_token_payloadJSON){

    json_web_token_payload_t *json_web_token_payload_local_var = NULL;

    // define the local list for json_web_token_payload->scopes
    list_t *scopesList = NULL;

    // json_web_token_payload->aud
    cJSON *aud = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "aud");
    if (aud) { 
    if(!cJSON_IsString(aud) && !cJSON_IsNull(aud))
    {
    goto end; //String
    }
    }

    // json_web_token_payload->cid
    cJSON *cid = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "cid");
    if (cid) { 
    if(!cJSON_IsString(cid) && !cJSON_IsNull(cid))
    {
    goto end; //String
    }
    }

    // json_web_token_payload->iss
    cJSON *iss = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "iss");
    if (iss) { 
    if(!cJSON_IsString(iss) && !cJSON_IsNull(iss))
    {
    goto end; //String
    }
    }

    // json_web_token_payload->aid
    cJSON *aid = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "aid");
    if (aid) { 
    if(!cJSON_IsString(aid) && !cJSON_IsNull(aid))
    {
    goto end; //String
    }
    }

    // json_web_token_payload->sub
    cJSON *sub = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "sub");
    if (sub) { 
    if(!cJSON_IsString(sub) && !cJSON_IsNull(sub))
    {
    goto end; //String
    }
    }

    // json_web_token_payload->act
    cJSON *act = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "act");
    if (act) { 
    if(!cJSON_IsString(act) && !cJSON_IsNull(act))
    {
    goto end; //String
    }
    }

    // json_web_token_payload->iat
    cJSON *iat = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "iat");
    if (iat) { 
    if(!cJSON_IsNumber(iat))
    {
    goto end; //Numeric
    }
    }

    // json_web_token_payload->nbf
    cJSON *nbf = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "nbf");
    if (nbf) { 
    if(!cJSON_IsNumber(nbf))
    {
    goto end; //Numeric
    }
    }

    // json_web_token_payload->exp
    cJSON *exp = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "exp");
    if (exp) { 
    if(!cJSON_IsNumber(exp))
    {
    goto end; //Numeric
    }
    }

    // json_web_token_payload->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(json_web_token_payloadJSON, "scopes");
    if (scopes) { 
    cJSON *scopes_local = NULL;
    if(!cJSON_IsArray(scopes)) {
        goto end;//primitive container
    }
    scopesList = list_createList();

    cJSON_ArrayForEach(scopes_local, scopes)
    {
        if(!cJSON_IsString(scopes_local))
        {
            goto end;
        }
        list_addElement(scopesList , strdup(scopes_local->valuestring));
    }
    }


    json_web_token_payload_local_var = json_web_token_payload_create (
        aud && !cJSON_IsNull(aud) ? strdup(aud->valuestring) : NULL,
        cid && !cJSON_IsNull(cid) ? strdup(cid->valuestring) : NULL,
        iss && !cJSON_IsNull(iss) ? strdup(iss->valuestring) : NULL,
        aid && !cJSON_IsNull(aid) ? strdup(aid->valuestring) : NULL,
        sub && !cJSON_IsNull(sub) ? strdup(sub->valuestring) : NULL,
        act && !cJSON_IsNull(act) ? strdup(act->valuestring) : NULL,
        iat ? iat->valuedouble : 0,
        nbf ? nbf->valuedouble : 0,
        exp ? exp->valuedouble : 0,
        scopes ? scopesList : NULL
        );

    return json_web_token_payload_local_var;
end:
    if (scopesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, scopesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(scopesList);
        scopesList = NULL;
    }
    return NULL;

}
