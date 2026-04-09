#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_template_dto.h"



web_template_dto_t *web_template_dto_create(
    char *id,
    char *timestamp,
    char *slug,
    char *name,
    char *title,
    char *description,
    char *content,
    char *html_content,
    char *css_content,
    char *js_content,
    char *razor_content,
    char *highlight_image,
    int order
    ) {
    web_template_dto_t *web_template_dto_local_var = malloc(sizeof(web_template_dto_t));
    if (!web_template_dto_local_var) {
        return NULL;
    }
    web_template_dto_local_var->id = id;
    web_template_dto_local_var->timestamp = timestamp;
    web_template_dto_local_var->slug = slug;
    web_template_dto_local_var->name = name;
    web_template_dto_local_var->title = title;
    web_template_dto_local_var->description = description;
    web_template_dto_local_var->content = content;
    web_template_dto_local_var->html_content = html_content;
    web_template_dto_local_var->css_content = css_content;
    web_template_dto_local_var->js_content = js_content;
    web_template_dto_local_var->razor_content = razor_content;
    web_template_dto_local_var->highlight_image = highlight_image;
    web_template_dto_local_var->order = order;

    return web_template_dto_local_var;
}


void web_template_dto_free(web_template_dto_t *web_template_dto) {
    if(NULL == web_template_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (web_template_dto->id) {
        free(web_template_dto->id);
        web_template_dto->id = NULL;
    }
    if (web_template_dto->timestamp) {
        free(web_template_dto->timestamp);
        web_template_dto->timestamp = NULL;
    }
    if (web_template_dto->slug) {
        free(web_template_dto->slug);
        web_template_dto->slug = NULL;
    }
    if (web_template_dto->name) {
        free(web_template_dto->name);
        web_template_dto->name = NULL;
    }
    if (web_template_dto->title) {
        free(web_template_dto->title);
        web_template_dto->title = NULL;
    }
    if (web_template_dto->description) {
        free(web_template_dto->description);
        web_template_dto->description = NULL;
    }
    if (web_template_dto->content) {
        free(web_template_dto->content);
        web_template_dto->content = NULL;
    }
    if (web_template_dto->html_content) {
        free(web_template_dto->html_content);
        web_template_dto->html_content = NULL;
    }
    if (web_template_dto->css_content) {
        free(web_template_dto->css_content);
        web_template_dto->css_content = NULL;
    }
    if (web_template_dto->js_content) {
        free(web_template_dto->js_content);
        web_template_dto->js_content = NULL;
    }
    if (web_template_dto->razor_content) {
        free(web_template_dto->razor_content);
        web_template_dto->razor_content = NULL;
    }
    if (web_template_dto->highlight_image) {
        free(web_template_dto->highlight_image);
        web_template_dto->highlight_image = NULL;
    }
    free(web_template_dto);
}

cJSON *web_template_dto_convertToJSON(web_template_dto_t *web_template_dto) {
    cJSON *item = cJSON_CreateObject();

    // web_template_dto->id
    if(web_template_dto->id) {
    if(cJSON_AddStringToObject(item, "id", web_template_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->timestamp
    if(web_template_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", web_template_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // web_template_dto->slug
    if(web_template_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", web_template_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->name
    if(web_template_dto->name) {
    if(cJSON_AddStringToObject(item, "name", web_template_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->title
    if(web_template_dto->title) {
    if(cJSON_AddStringToObject(item, "title", web_template_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->description
    if(web_template_dto->description) {
    if(cJSON_AddStringToObject(item, "description", web_template_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->content
    if(web_template_dto->content) {
    if(cJSON_AddStringToObject(item, "content", web_template_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->html_content
    if(web_template_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", web_template_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->css_content
    if(web_template_dto->css_content) {
    if(cJSON_AddStringToObject(item, "cssContent", web_template_dto->css_content) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->js_content
    if(web_template_dto->js_content) {
    if(cJSON_AddStringToObject(item, "jsContent", web_template_dto->js_content) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->razor_content
    if(web_template_dto->razor_content) {
    if(cJSON_AddStringToObject(item, "razorContent", web_template_dto->razor_content) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->highlight_image
    if(web_template_dto->highlight_image) {
    if(cJSON_AddStringToObject(item, "highlightImage", web_template_dto->highlight_image) == NULL) {
    goto fail; //String
    }
    }


    // web_template_dto->order
    if(web_template_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", web_template_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

web_template_dto_t *web_template_dto_parseFromJSON(cJSON *web_template_dtoJSON){

    web_template_dto_t *web_template_dto_local_var = NULL;

    // web_template_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // web_template_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // web_template_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // web_template_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // web_template_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // web_template_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // web_template_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // web_template_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // web_template_dto->css_content
    cJSON *css_content = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "cssContent");
    if (css_content) { 
    if(!cJSON_IsString(css_content) && !cJSON_IsNull(css_content))
    {
    goto end; //String
    }
    }

    // web_template_dto->js_content
    cJSON *js_content = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "jsContent");
    if (js_content) { 
    if(!cJSON_IsString(js_content) && !cJSON_IsNull(js_content))
    {
    goto end; //String
    }
    }

    // web_template_dto->razor_content
    cJSON *razor_content = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "razorContent");
    if (razor_content) { 
    if(!cJSON_IsString(razor_content) && !cJSON_IsNull(razor_content))
    {
    goto end; //String
    }
    }

    // web_template_dto->highlight_image
    cJSON *highlight_image = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "highlightImage");
    if (highlight_image) { 
    if(!cJSON_IsString(highlight_image) && !cJSON_IsNull(highlight_image))
    {
    goto end; //String
    }
    }

    // web_template_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(web_template_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }


    web_template_dto_local_var = web_template_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        html_content && !cJSON_IsNull(html_content) ? strdup(html_content->valuestring) : NULL,
        css_content && !cJSON_IsNull(css_content) ? strdup(css_content->valuestring) : NULL,
        js_content && !cJSON_IsNull(js_content) ? strdup(js_content->valuestring) : NULL,
        razor_content && !cJSON_IsNull(razor_content) ? strdup(razor_content->valuestring) : NULL,
        highlight_image && !cJSON_IsNull(highlight_image) ? strdup(highlight_image->valuestring) : NULL,
        order ? order->valuedouble : 0
        );

    return web_template_dto_local_var;
end:
    return NULL;

}
