#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "http_request.h"



http_request_t *http_request_create(
    http_context_t *http_context,
    char *method,
    char *scheme,
    int is_https,
    host_string_t *host,
    path_string_t *path_base,
    path_string_t *path,
    query_string_t *query_string,
    list_t *query,
    char *protocol,
    list_t* headers,
    list_t *cookies,
    long content_length,
    char *content_type,
    binary_t* body,
    binary_t* body_reader,
    int has_form_content_type,
    list_t *form,
    list_t* route_values
    ) {
    http_request_t *http_request_local_var = malloc(sizeof(http_request_t));
    if (!http_request_local_var) {
        return NULL;
    }
    http_request_local_var->http_context = http_context;
    http_request_local_var->method = method;
    http_request_local_var->scheme = scheme;
    http_request_local_var->is_https = is_https;
    http_request_local_var->host = host;
    http_request_local_var->path_base = path_base;
    http_request_local_var->path = path;
    http_request_local_var->query_string = query_string;
    http_request_local_var->query = query;
    http_request_local_var->protocol = protocol;
    http_request_local_var->headers = headers;
    http_request_local_var->cookies = cookies;
    http_request_local_var->content_length = content_length;
    http_request_local_var->content_type = content_type;
    http_request_local_var->body = body;
    http_request_local_var->body_reader = body_reader;
    http_request_local_var->has_form_content_type = has_form_content_type;
    http_request_local_var->form = form;
    http_request_local_var->route_values = route_values;

    return http_request_local_var;
}


void http_request_free(http_request_t *http_request) {
    if(NULL == http_request){
        return ;
    }
    listEntry_t *listEntry;
    if (http_request->http_context) {
        http_context_free(http_request->http_context);
        http_request->http_context = NULL;
    }
    if (http_request->method) {
        free(http_request->method);
        http_request->method = NULL;
    }
    if (http_request->scheme) {
        free(http_request->scheme);
        http_request->scheme = NULL;
    }
    if (http_request->host) {
        host_string_free(http_request->host);
        http_request->host = NULL;
    }
    if (http_request->path_base) {
        path_string_free(http_request->path_base);
        http_request->path_base = NULL;
    }
    if (http_request->path) {
        path_string_free(http_request->path);
        http_request->path = NULL;
    }
    if (http_request->query_string) {
        query_string_free(http_request->query_string);
        http_request->query_string = NULL;
    }
    if (http_request->query) {
        list_ForEach(listEntry, http_request->query) {
            string_string_values_key_value_pair_free(listEntry->data);
        }
        list_freeList(http_request->query);
        http_request->query = NULL;
    }
    if (http_request->protocol) {
        free(http_request->protocol);
        http_request->protocol = NULL;
    }
    if (http_request->headers) {
        list_ForEach(listEntry, http_request->headers) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(http_request->headers);
        http_request->headers = NULL;
    }
    if (http_request->cookies) {
        list_ForEach(listEntry, http_request->cookies) {
            string_string_key_value_pair_free(listEntry->data);
        }
        list_freeList(http_request->cookies);
        http_request->cookies = NULL;
    }
    if (http_request->content_type) {
        free(http_request->content_type);
        http_request->content_type = NULL;
    }
    if (http_request->body) {
        free(http_request->body->data);
        http_request->body = NULL;
    }
    if (http_request->body_reader) {
        free(http_request->body_reader->data);
        http_request->body_reader = NULL;
    }
    if (http_request->form) {
        list_ForEach(listEntry, http_request->form) {
            string_string_values_key_value_pair_free(listEntry->data);
        }
        list_freeList(http_request->form);
        http_request->form = NULL;
    }
    if (http_request->route_values) {
        list_ForEach(listEntry, http_request->route_values) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(http_request->route_values);
        http_request->route_values = NULL;
    }
    free(http_request);
}

cJSON *http_request_convertToJSON(http_request_t *http_request) {
    cJSON *item = cJSON_CreateObject();

    // http_request->http_context
    if(http_request->http_context) {
    cJSON *http_context_local_JSON = http_context_convertToJSON(http_request->http_context);
    if(http_context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "httpContext", http_context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_request->method
    if(http_request->method) {
    if(cJSON_AddStringToObject(item, "method", http_request->method) == NULL) {
    goto fail; //String
    }
    }


    // http_request->scheme
    if(http_request->scheme) {
    if(cJSON_AddStringToObject(item, "scheme", http_request->scheme) == NULL) {
    goto fail; //String
    }
    }


    // http_request->is_https
    if(http_request->is_https) {
    if(cJSON_AddBoolToObject(item, "isHttps", http_request->is_https) == NULL) {
    goto fail; //Bool
    }
    }


    // http_request->host
    if(http_request->host) {
    cJSON *host_local_JSON = host_string_convertToJSON(http_request->host);
    if(host_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "host", host_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_request->path_base
    if(http_request->path_base) {
    cJSON *path_base_local_JSON = path_string_convertToJSON(http_request->path_base);
    if(path_base_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pathBase", path_base_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_request->path
    if(http_request->path) {
    cJSON *path_local_JSON = path_string_convertToJSON(http_request->path);
    if(path_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "path", path_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_request->query_string
    if(http_request->query_string) {
    cJSON *query_string_local_JSON = query_string_convertToJSON(http_request->query_string);
    if(query_string_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "queryString", query_string_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // http_request->query
    if(http_request->query) {
    cJSON *query = cJSON_AddArrayToObject(item, "query");
    if(query == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *queryListEntry;
    if (http_request->query) {
    list_ForEach(queryListEntry, http_request->query) {
    cJSON *itemLocal = string_string_values_key_value_pair_convertToJSON(queryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(query, itemLocal);
    }
    }
    }


    // http_request->protocol
    if(http_request->protocol) {
    if(cJSON_AddStringToObject(item, "protocol", http_request->protocol) == NULL) {
    goto fail; //String
    }
    }


    // http_request->headers
    if(http_request->headers) {
    cJSON *headers = cJSON_AddObjectToObject(item, "headers");
    if(headers == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = headers;
    listEntry_t *headersListEntry;
    if (http_request->headers) {
    list_ForEach(headersListEntry, http_request->headers) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)headersListEntry->data;
    }
    }
    }


    // http_request->cookies
    if(http_request->cookies) {
    cJSON *cookies = cJSON_AddArrayToObject(item, "cookies");
    if(cookies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cookiesListEntry;
    if (http_request->cookies) {
    list_ForEach(cookiesListEntry, http_request->cookies) {
    cJSON *itemLocal = string_string_key_value_pair_convertToJSON(cookiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(cookies, itemLocal);
    }
    }
    }


    // http_request->content_length
    if(http_request->content_length) {
    if(cJSON_AddNumberToObject(item, "contentLength", http_request->content_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // http_request->content_type
    if(http_request->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", http_request->content_type) == NULL) {
    goto fail; //String
    }
    }


    // http_request->body
    if(http_request->body) {
    char* encoded_str_body = base64encode(http_request->body->data,http_request->body->len);
    if(cJSON_AddStringToObject(item, "body", encoded_str_body) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_body);
    }


    // http_request->body_reader
    if(http_request->body_reader) {
    char* encoded_str_body_reader = base64encode(http_request->body_reader->data,http_request->body_reader->len);
    if(cJSON_AddStringToObject(item, "bodyReader", encoded_str_body_reader) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_body_reader);
    }


    // http_request->has_form_content_type
    if(http_request->has_form_content_type) {
    if(cJSON_AddBoolToObject(item, "hasFormContentType", http_request->has_form_content_type) == NULL) {
    goto fail; //Bool
    }
    }


    // http_request->form
    if(http_request->form) {
    cJSON *form = cJSON_AddArrayToObject(item, "form");
    if(form == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *formListEntry;
    if (http_request->form) {
    list_ForEach(formListEntry, http_request->form) {
    cJSON *itemLocal = string_string_values_key_value_pair_convertToJSON(formListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(form, itemLocal);
    }
    }
    }


    // http_request->route_values
    if(http_request->route_values) {
    cJSON *route_values = cJSON_AddObjectToObject(item, "routeValues");
    if(route_values == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = route_values;
    listEntry_t *route_valuesListEntry;
    if (http_request->route_values) {
    list_ForEach(route_valuesListEntry, http_request->route_values) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)route_valuesListEntry->data;
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

http_request_t *http_request_parseFromJSON(cJSON *http_requestJSON){

    http_request_t *http_request_local_var = NULL;

    // define the local variable for http_request->http_context
    http_context_t *http_context_local_nonprim = NULL;

    // define the local variable for http_request->host
    host_string_t *host_local_nonprim = NULL;

    // define the local variable for http_request->path_base
    path_string_t *path_base_local_nonprim = NULL;

    // define the local variable for http_request->path
    path_string_t *path_local_nonprim = NULL;

    // define the local variable for http_request->query_string
    query_string_t *query_string_local_nonprim = NULL;

    // define the local list for http_request->query
    list_t *queryList = NULL;

    // define the local map for http_request->headers
    list_t *headersList = NULL;

    // define the local list for http_request->cookies
    list_t *cookiesList = NULL;

    // define the local list for http_request->form
    list_t *formList = NULL;

    // define the local map for http_request->route_values
    list_t *route_valuesList = NULL;

    // http_request->http_context
    cJSON *http_context = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "httpContext");
    if (http_context) { 
    http_context_local_nonprim = http_context_parseFromJSON(http_context); //nonprimitive
    }

    // http_request->method
    cJSON *method = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "method");
    if (method) { 
    if(!cJSON_IsString(method) && !cJSON_IsNull(method))
    {
    goto end; //String
    }
    }

    // http_request->scheme
    cJSON *scheme = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "scheme");
    if (scheme) { 
    if(!cJSON_IsString(scheme) && !cJSON_IsNull(scheme))
    {
    goto end; //String
    }
    }

    // http_request->is_https
    cJSON *is_https = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "isHttps");
    if (is_https) { 
    if(!cJSON_IsBool(is_https))
    {
    goto end; //Bool
    }
    }

    // http_request->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "host");
    if (host) { 
    host_local_nonprim = host_string_parseFromJSON(host); //nonprimitive
    }

    // http_request->path_base
    cJSON *path_base = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "pathBase");
    if (path_base) { 
    path_base_local_nonprim = path_string_parseFromJSON(path_base); //nonprimitive
    }

    // http_request->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "path");
    if (path) { 
    path_local_nonprim = path_string_parseFromJSON(path); //nonprimitive
    }

    // http_request->query_string
    cJSON *query_string = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "queryString");
    if (query_string) { 
    query_string_local_nonprim = query_string_parseFromJSON(query_string); //nonprimitive
    }

    // http_request->query
    cJSON *query = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "query");
    if (query) { 
    cJSON *query_local_nonprimitive = NULL;
    if(!cJSON_IsArray(query)){
        goto end; //nonprimitive container
    }

    queryList = list_createList();

    cJSON_ArrayForEach(query_local_nonprimitive,query )
    {
        if(!cJSON_IsObject(query_local_nonprimitive)){
            goto end;
        }
        string_string_values_key_value_pair_t *queryItem = string_string_values_key_value_pair_parseFromJSON(query_local_nonprimitive);

        list_addElement(queryList, queryItem);
    }
    }

    // http_request->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "protocol");
    if (protocol) { 
    if(!cJSON_IsString(protocol) && !cJSON_IsNull(protocol))
    {
    goto end; //String
    }
    }

    // http_request->headers
    cJSON *headers = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "headers");
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

    // http_request->cookies
    cJSON *cookies = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "cookies");
    if (cookies) { 
    cJSON *cookies_local_nonprimitive = NULL;
    if(!cJSON_IsArray(cookies)){
        goto end; //nonprimitive container
    }

    cookiesList = list_createList();

    cJSON_ArrayForEach(cookies_local_nonprimitive,cookies )
    {
        if(!cJSON_IsObject(cookies_local_nonprimitive)){
            goto end;
        }
        string_string_key_value_pair_t *cookiesItem = string_string_key_value_pair_parseFromJSON(cookies_local_nonprimitive);

        list_addElement(cookiesList, cookiesItem);
    }
    }

    // http_request->content_length
    cJSON *content_length = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "contentLength");
    if (content_length) { 
    if(!cJSON_IsNumber(content_length))
    {
    goto end; //Numeric
    }
    }

    // http_request->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // http_request->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "body");
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

    // http_request->body_reader
    cJSON *body_reader = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "bodyReader");
    binary_t* decoded_str_body_reader = malloc(sizeof(struct binary_t));
    if (body_reader) { 
    if(!cJSON_IsString(body_reader))
    {
    goto end; //Binary
    }
    decoded_str_body_reader->data = base64decode(body_reader->valuestring, strlen(body_reader->valuestring), &decoded_str_body_reader->len);
    if (!decoded_str_body_reader->data) {
        goto end;
    }
    }

    // http_request->has_form_content_type
    cJSON *has_form_content_type = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "hasFormContentType");
    if (has_form_content_type) { 
    if(!cJSON_IsBool(has_form_content_type))
    {
    goto end; //Bool
    }
    }

    // http_request->form
    cJSON *form = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "form");
    if (form) { 
    cJSON *form_local_nonprimitive = NULL;
    if(!cJSON_IsArray(form)){
        goto end; //nonprimitive container
    }

    formList = list_createList();

    cJSON_ArrayForEach(form_local_nonprimitive,form )
    {
        if(!cJSON_IsObject(form_local_nonprimitive)){
            goto end;
        }
        string_string_values_key_value_pair_t *formItem = string_string_values_key_value_pair_parseFromJSON(form_local_nonprimitive);

        list_addElement(formList, formItem);
    }
    }

    // http_request->route_values
    cJSON *route_values = cJSON_GetObjectItemCaseSensitive(http_requestJSON, "routeValues");
    if (route_values) { 
    cJSON *route_values_local_map = NULL;
    if(!cJSON_IsObject(route_values) && !cJSON_IsNull(route_values))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(route_values))
    {
        route_valuesList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(route_values_local_map, route_values)
        {
            cJSON *localMapObject = route_values_local_map;
            list_addElement(route_valuesList , localMapKeyPair);
        }
    }
    }


    http_request_local_var = http_request_create (
        http_context ? http_context_local_nonprim : NULL,
        method && !cJSON_IsNull(method) ? strdup(method->valuestring) : NULL,
        scheme && !cJSON_IsNull(scheme) ? strdup(scheme->valuestring) : NULL,
        is_https ? is_https->valueint : 0,
        host ? host_local_nonprim : NULL,
        path_base ? path_base_local_nonprim : NULL,
        path ? path_local_nonprim : NULL,
        query_string ? query_string_local_nonprim : NULL,
        query ? queryList : NULL,
        protocol && !cJSON_IsNull(protocol) ? strdup(protocol->valuestring) : NULL,
        headers ? headersList : NULL,
        cookies ? cookiesList : NULL,
        content_length ? content_length->valuedouble : 0,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        body ? decoded_str_body : NULL,
        body_reader ? decoded_str_body_reader : NULL,
        has_form_content_type ? has_form_content_type->valueint : 0,
        form ? formList : NULL,
        route_values ? route_valuesList : NULL
        );

    return http_request_local_var;
end:
    if (http_context_local_nonprim) {
        http_context_free(http_context_local_nonprim);
        http_context_local_nonprim = NULL;
    }
    if (host_local_nonprim) {
        host_string_free(host_local_nonprim);
        host_local_nonprim = NULL;
    }
    if (path_base_local_nonprim) {
        path_string_free(path_base_local_nonprim);
        path_base_local_nonprim = NULL;
    }
    if (path_local_nonprim) {
        path_string_free(path_local_nonprim);
        path_local_nonprim = NULL;
    }
    if (query_string_local_nonprim) {
        query_string_free(query_string_local_nonprim);
        query_string_local_nonprim = NULL;
    }
    if (queryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, queryList) {
            string_string_values_key_value_pair_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(queryList);
        queryList = NULL;
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
    if (cookiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cookiesList) {
            string_string_key_value_pair_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cookiesList);
        cookiesList = NULL;
    }
    if (formList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, formList) {
            string_string_values_key_value_pair_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(formList);
        formList = NULL;
    }
    if (route_valuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, route_valuesList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(route_valuesList);
        route_valuesList = NULL;
    }
    return NULL;

}
