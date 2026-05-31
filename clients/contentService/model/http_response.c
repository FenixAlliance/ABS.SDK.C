#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "http_response.h"



http_response_t *http_response_create(
    http_context_t *http_context,
    int status_code,
    list_t* headers,
    binary_t* body,
    pipe_writer_t *body_writer,
    long content_length,
    char *content_type,
    object_t *cookies,
    int has_started
    ) {
    http_response_t *http_response_local_var = malloc(sizeof(http_response_t));
    if (!http_response_local_var) {
        return NULL;
    }
    http_response_local_var->http_context = http_context;
    http_response_local_var->status_code = status_code;
    http_response_local_var->headers = headers;
    http_response_local_var->body = body;
    http_response_local_var->body_writer = body_writer;
    http_response_local_var->content_length = content_length;
    http_response_local_var->content_type = content_type;
    http_response_local_var->cookies = cookies;
    http_response_local_var->has_started = has_started;

    return http_response_local_var;
}


void http_response_free(http_response_t *http_response) {
    if(NULL == http_response){
        return ;
    }
    listEntry_t *listEntry;
    if (http_response->http_context) {
        http_context_free(http_response->http_context);
        http_response->http_context = NULL;
    }
    if (http_response->headers) {
        list_ForEach(listEntry, http_response->headers) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(http_response->headers);
        http_response->headers = NULL;
    }
    if (http_response->body) {
        free(http_response->body->data);
        http_response->body = NULL;
    }
    if (http_response->body_writer) {
        pipe_writer_free(http_response->body_writer);
        http_response->body_writer = NULL;
    }
    if (http_response->content_type) {
        free(http_response->content_type);
        http_response->content_type = NULL;
    }
    if (http_response->cookies) {
        object_free(http_response->cookies);
        http_response->cookies = NULL;
    }
    free(http_response);
}

cJSON *http_response_convertToJSON(http_response_t *http_response) {
    cJSON *item = cJSON_CreateObject();

    // http_response->http_context
    if(http_response->http_context) {
    cJSON *http_context_local_JSON = http_context_convertToJSON(http_response->http_context);
    if(http_context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "httpContext", http_context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_response->status_code
    if(http_response->status_code) {
    if(cJSON_AddNumberToObject(item, "statusCode", http_response->status_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // http_response->headers
    if(http_response->headers) {
    cJSON *headers = cJSON_AddObjectToObject(item, "headers");
    if(headers == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = headers;
    listEntry_t *headersListEntry;
    if (http_response->headers) {
    list_ForEach(headersListEntry, http_response->headers) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)headersListEntry->data;
    }
    }
    }


    // http_response->body
    if(http_response->body) {
    char* encoded_str_body = base64encode(http_response->body->data,http_response->body->len);
    if(cJSON_AddStringToObject(item, "body", encoded_str_body) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_body);
    }


    // http_response->body_writer
    if(http_response->body_writer) {
    cJSON *body_writer_local_JSON = pipe_writer_convertToJSON(http_response->body_writer);
    if(body_writer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bodyWriter", body_writer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_response->content_length
    if(http_response->content_length) {
    if(cJSON_AddNumberToObject(item, "contentLength", http_response->content_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // http_response->content_type
    if(http_response->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", http_response->content_type) == NULL) {
    goto fail; //String
    }
    }


    // http_response->cookies
    if(http_response->cookies) {
    cJSON *cookies_object = object_convertToJSON(http_response->cookies);
    if(cookies_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cookies", cookies_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_response->has_started
    if(http_response->has_started) {
    if(cJSON_AddBoolToObject(item, "hasStarted", http_response->has_started) == NULL) {
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

http_response_t *http_response_parseFromJSON(cJSON *http_responseJSON){

    http_response_t *http_response_local_var = NULL;

    // define the local variable for http_response->http_context
    http_context_t *http_context_local_nonprim = NULL;

    // define the local map for http_response->headers
    list_t *headersList = NULL;

    // define the local variable for http_response->body_writer
    pipe_writer_t *body_writer_local_nonprim = NULL;

    // http_response->http_context
    cJSON *http_context = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "httpContext");
    if (http_context) { 
    http_context_local_nonprim = http_context_parseFromJSON(http_context); //nonprimitive
    }

    // http_response->status_code
    cJSON *status_code = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "statusCode");
    if (status_code) { 
    if(!cJSON_IsNumber(status_code))
    {
    goto end; //Numeric
    }
    }

    // http_response->headers
    cJSON *headers = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "headers");
    if (headers) { 
    cJSON *headers_local_map = NULL;
    if(!cJSON_IsObject(headers) && !cJSON_IsNull(headers))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(headers))
    {
        headersList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(headers_local_map, headers)
        {
            cJSON *localMapObject = headers_local_map;
            list_addElement(headersList , localMapKeyPair);
        }
    }
    }

    // http_response->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "body");
    binary_t* decoded_str_body = malloc(sizeof(struct binary_t));
    if (body) { 
    if(!cJSON_IsString(body))
    {
    goto end; //Binary
    }
    decoded_str_body->data = base64decode(body->valuestring, strlen(body->valuestring), &decoded_str_body->len);
    if (!decoded_str_body->data) {
        goto end;
    }
    }

    // http_response->body_writer
    cJSON *body_writer = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "bodyWriter");
    if (body_writer) { 
    body_writer_local_nonprim = pipe_writer_parseFromJSON(body_writer); //nonprimitive
    }

    // http_response->content_length
    cJSON *content_length = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "contentLength");
    if (content_length) { 
    if(!cJSON_IsNumber(content_length))
    {
    goto end; //Numeric
    }
    }

    // http_response->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // http_response->cookies
    cJSON *cookies = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "cookies");
    object_t *cookies_local_object = NULL;
    if (cookies) { 
    cookies_local_object = object_parseFromJSON(cookies); //object
    }

    // http_response->has_started
    cJSON *has_started = cJSON_GetObjectItemCaseSensitive(http_responseJSON, "hasStarted");
    if (has_started) { 
    if(!cJSON_IsBool(has_started))
    {
    goto end; //Bool
    }
    }


    http_response_local_var = http_response_create (
        http_context ? http_context_local_nonprim : NULL,
        status_code ? status_code->valuedouble : 0,
        headers ? headersList : NULL,
        body ? decoded_str_body : NULL,
        body_writer ? body_writer_local_nonprim : NULL,
        content_length ? content_length->valuedouble : 0,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        cookies ? cookies_local_object : NULL,
        has_started ? has_started->valueint : 0
        );

    return http_response_local_var;
end:
    if (http_context_local_nonprim) {
        http_context_free(http_context_local_nonprim);
        http_context_local_nonprim = NULL;
    }
    if (headersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, headersList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(headersList);
        headersList = NULL;
    }
    if (body_writer_local_nonprim) {
        pipe_writer_free(body_writer_local_nonprim);
        body_writer_local_nonprim = NULL;
    }
    return NULL;

}
