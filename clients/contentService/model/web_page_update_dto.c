#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_page_update_dto.h"


char* web_page_update_dto_code_type_ToString(contentservice_web_page_update_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    return code_typeArray[code_type];
}

contentservice_web_page_update_dto_CODETYPE_e web_page_update_dto_code_type_FromString(char* code_type){
    int stringToReturn = 0;
    char *code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    size_t sizeofArray = sizeof(code_typeArray) / sizeof(code_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(code_type, code_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

web_page_update_dto_t *web_page_update_dto_create(
    int order,
    char *slug,
    char *name,
    char *title,
    char *excerpt,
    char *password,
    char *description,
    char *highlight_image,
    char *canonical_url,
    char *seo_title,
    char *seo_key_words,
    char *seo_key_phrases,
    char *meta_description,
    char *twitter_image,
    char *twitter_title,
    char *twitter_description,
    char *facebook_image,
    char *facebook_title,
    char *facebook_description,
    char *featured_image_url,
    char *content,
    char *code,
    char *_namespace,
    char *type_name,
    char *generated_code,
    char *compilation_path,
    char *html_content,
    contentservice_web_page_update_dto_CODETYPE_e code_type,
    char *c_sharp_content,
    char *razor_content,
    char *css_content,
    char *js_content,
    char *css_files,
    char *js_files,
    char *razor_generated_code,
    char *c_sharp_generated_code,
    int precompiled_logic_size,
    long precompiled_logic_size_long,
    int precompiled_view_size,
    long precompiled_view_size_long,
    int precompiled_logic_view_size,
    int _template,
    int _default,
    int enable,
    int enable_comments,
    int display_social_box,
    int published,
    int in_trash_can,
    int system_locked,
    int allow_pingbacks,
    int allow_trackbacks,
    int cornerstone_content,
    int is_essential_content,
    int allow_search_engine_indexing,
    int is_home_page,
    int is_store_page,
    int is_cart_page,
    int is_blog_page,
    int is_account_page,
    int is_checkout_page,
    int is_wish_lists_page,
    int is_contact_page,
    int is_privacy_policy_page,
    int is_terms_of_service_page
    ) {
    web_page_update_dto_t *web_page_update_dto_local_var = malloc(sizeof(web_page_update_dto_t));
    if (!web_page_update_dto_local_var) {
        return NULL;
    }
    web_page_update_dto_local_var->order = order;
    web_page_update_dto_local_var->slug = slug;
    web_page_update_dto_local_var->name = name;
    web_page_update_dto_local_var->title = title;
    web_page_update_dto_local_var->excerpt = excerpt;
    web_page_update_dto_local_var->password = password;
    web_page_update_dto_local_var->description = description;
    web_page_update_dto_local_var->highlight_image = highlight_image;
    web_page_update_dto_local_var->canonical_url = canonical_url;
    web_page_update_dto_local_var->seo_title = seo_title;
    web_page_update_dto_local_var->seo_key_words = seo_key_words;
    web_page_update_dto_local_var->seo_key_phrases = seo_key_phrases;
    web_page_update_dto_local_var->meta_description = meta_description;
    web_page_update_dto_local_var->twitter_image = twitter_image;
    web_page_update_dto_local_var->twitter_title = twitter_title;
    web_page_update_dto_local_var->twitter_description = twitter_description;
    web_page_update_dto_local_var->facebook_image = facebook_image;
    web_page_update_dto_local_var->facebook_title = facebook_title;
    web_page_update_dto_local_var->facebook_description = facebook_description;
    web_page_update_dto_local_var->featured_image_url = featured_image_url;
    web_page_update_dto_local_var->content = content;
    web_page_update_dto_local_var->code = code;
    web_page_update_dto_local_var->_namespace = _namespace;
    web_page_update_dto_local_var->type_name = type_name;
    web_page_update_dto_local_var->generated_code = generated_code;
    web_page_update_dto_local_var->compilation_path = compilation_path;
    web_page_update_dto_local_var->html_content = html_content;
    web_page_update_dto_local_var->code_type = code_type;
    web_page_update_dto_local_var->c_sharp_content = c_sharp_content;
    web_page_update_dto_local_var->razor_content = razor_content;
    web_page_update_dto_local_var->css_content = css_content;
    web_page_update_dto_local_var->js_content = js_content;
    web_page_update_dto_local_var->css_files = css_files;
    web_page_update_dto_local_var->js_files = js_files;
    web_page_update_dto_local_var->razor_generated_code = razor_generated_code;
    web_page_update_dto_local_var->c_sharp_generated_code = c_sharp_generated_code;
    web_page_update_dto_local_var->precompiled_logic_size = precompiled_logic_size;
    web_page_update_dto_local_var->precompiled_logic_size_long = precompiled_logic_size_long;
    web_page_update_dto_local_var->precompiled_view_size = precompiled_view_size;
    web_page_update_dto_local_var->precompiled_view_size_long = precompiled_view_size_long;
    web_page_update_dto_local_var->precompiled_logic_view_size = precompiled_logic_view_size;
    web_page_update_dto_local_var->_template = _template;
    web_page_update_dto_local_var->_default = _default;
    web_page_update_dto_local_var->enable = enable;
    web_page_update_dto_local_var->enable_comments = enable_comments;
    web_page_update_dto_local_var->display_social_box = display_social_box;
    web_page_update_dto_local_var->published = published;
    web_page_update_dto_local_var->in_trash_can = in_trash_can;
    web_page_update_dto_local_var->system_locked = system_locked;
    web_page_update_dto_local_var->allow_pingbacks = allow_pingbacks;
    web_page_update_dto_local_var->allow_trackbacks = allow_trackbacks;
    web_page_update_dto_local_var->cornerstone_content = cornerstone_content;
    web_page_update_dto_local_var->is_essential_content = is_essential_content;
    web_page_update_dto_local_var->allow_search_engine_indexing = allow_search_engine_indexing;
    web_page_update_dto_local_var->is_home_page = is_home_page;
    web_page_update_dto_local_var->is_store_page = is_store_page;
    web_page_update_dto_local_var->is_cart_page = is_cart_page;
    web_page_update_dto_local_var->is_blog_page = is_blog_page;
    web_page_update_dto_local_var->is_account_page = is_account_page;
    web_page_update_dto_local_var->is_checkout_page = is_checkout_page;
    web_page_update_dto_local_var->is_wish_lists_page = is_wish_lists_page;
    web_page_update_dto_local_var->is_contact_page = is_contact_page;
    web_page_update_dto_local_var->is_privacy_policy_page = is_privacy_policy_page;
    web_page_update_dto_local_var->is_terms_of_service_page = is_terms_of_service_page;

    return web_page_update_dto_local_var;
}


void web_page_update_dto_free(web_page_update_dto_t *web_page_update_dto) {
    if(NULL == web_page_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (web_page_update_dto->slug) {
        free(web_page_update_dto->slug);
        web_page_update_dto->slug = NULL;
    }
    if (web_page_update_dto->name) {
        free(web_page_update_dto->name);
        web_page_update_dto->name = NULL;
    }
    if (web_page_update_dto->title) {
        free(web_page_update_dto->title);
        web_page_update_dto->title = NULL;
    }
    if (web_page_update_dto->excerpt) {
        free(web_page_update_dto->excerpt);
        web_page_update_dto->excerpt = NULL;
    }
    if (web_page_update_dto->password) {
        free(web_page_update_dto->password);
        web_page_update_dto->password = NULL;
    }
    if (web_page_update_dto->description) {
        free(web_page_update_dto->description);
        web_page_update_dto->description = NULL;
    }
    if (web_page_update_dto->highlight_image) {
        free(web_page_update_dto->highlight_image);
        web_page_update_dto->highlight_image = NULL;
    }
    if (web_page_update_dto->canonical_url) {
        free(web_page_update_dto->canonical_url);
        web_page_update_dto->canonical_url = NULL;
    }
    if (web_page_update_dto->seo_title) {
        free(web_page_update_dto->seo_title);
        web_page_update_dto->seo_title = NULL;
    }
    if (web_page_update_dto->seo_key_words) {
        free(web_page_update_dto->seo_key_words);
        web_page_update_dto->seo_key_words = NULL;
    }
    if (web_page_update_dto->seo_key_phrases) {
        free(web_page_update_dto->seo_key_phrases);
        web_page_update_dto->seo_key_phrases = NULL;
    }
    if (web_page_update_dto->meta_description) {
        free(web_page_update_dto->meta_description);
        web_page_update_dto->meta_description = NULL;
    }
    if (web_page_update_dto->twitter_image) {
        free(web_page_update_dto->twitter_image);
        web_page_update_dto->twitter_image = NULL;
    }
    if (web_page_update_dto->twitter_title) {
        free(web_page_update_dto->twitter_title);
        web_page_update_dto->twitter_title = NULL;
    }
    if (web_page_update_dto->twitter_description) {
        free(web_page_update_dto->twitter_description);
        web_page_update_dto->twitter_description = NULL;
    }
    if (web_page_update_dto->facebook_image) {
        free(web_page_update_dto->facebook_image);
        web_page_update_dto->facebook_image = NULL;
    }
    if (web_page_update_dto->facebook_title) {
        free(web_page_update_dto->facebook_title);
        web_page_update_dto->facebook_title = NULL;
    }
    if (web_page_update_dto->facebook_description) {
        free(web_page_update_dto->facebook_description);
        web_page_update_dto->facebook_description = NULL;
    }
    if (web_page_update_dto->featured_image_url) {
        free(web_page_update_dto->featured_image_url);
        web_page_update_dto->featured_image_url = NULL;
    }
    if (web_page_update_dto->content) {
        free(web_page_update_dto->content);
        web_page_update_dto->content = NULL;
    }
    if (web_page_update_dto->code) {
        free(web_page_update_dto->code);
        web_page_update_dto->code = NULL;
    }
    if (web_page_update_dto->_namespace) {
        free(web_page_update_dto->_namespace);
        web_page_update_dto->_namespace = NULL;
    }
    if (web_page_update_dto->type_name) {
        free(web_page_update_dto->type_name);
        web_page_update_dto->type_name = NULL;
    }
    if (web_page_update_dto->generated_code) {
        free(web_page_update_dto->generated_code);
        web_page_update_dto->generated_code = NULL;
    }
    if (web_page_update_dto->compilation_path) {
        free(web_page_update_dto->compilation_path);
        web_page_update_dto->compilation_path = NULL;
    }
    if (web_page_update_dto->html_content) {
        free(web_page_update_dto->html_content);
        web_page_update_dto->html_content = NULL;
    }
    if (web_page_update_dto->c_sharp_content) {
        free(web_page_update_dto->c_sharp_content);
        web_page_update_dto->c_sharp_content = NULL;
    }
    if (web_page_update_dto->razor_content) {
        free(web_page_update_dto->razor_content);
        web_page_update_dto->razor_content = NULL;
    }
    if (web_page_update_dto->css_content) {
        free(web_page_update_dto->css_content);
        web_page_update_dto->css_content = NULL;
    }
    if (web_page_update_dto->js_content) {
        free(web_page_update_dto->js_content);
        web_page_update_dto->js_content = NULL;
    }
    if (web_page_update_dto->css_files) {
        free(web_page_update_dto->css_files);
        web_page_update_dto->css_files = NULL;
    }
    if (web_page_update_dto->js_files) {
        free(web_page_update_dto->js_files);
        web_page_update_dto->js_files = NULL;
    }
    if (web_page_update_dto->razor_generated_code) {
        free(web_page_update_dto->razor_generated_code);
        web_page_update_dto->razor_generated_code = NULL;
    }
    if (web_page_update_dto->c_sharp_generated_code) {
        free(web_page_update_dto->c_sharp_generated_code);
        web_page_update_dto->c_sharp_generated_code = NULL;
    }
    free(web_page_update_dto);
}

cJSON *web_page_update_dto_convertToJSON(web_page_update_dto_t *web_page_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // web_page_update_dto->order
    if(web_page_update_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", web_page_update_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_page_update_dto->slug
    if(web_page_update_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", web_page_update_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->name
    if(web_page_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", web_page_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->title
    if(web_page_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", web_page_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->excerpt
    if(web_page_update_dto->excerpt) {
    if(cJSON_AddStringToObject(item, "excerpt", web_page_update_dto->excerpt) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->password
    if(web_page_update_dto->password) {
    if(cJSON_AddStringToObject(item, "password", web_page_update_dto->password) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->description
    if(web_page_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", web_page_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->highlight_image
    if(web_page_update_dto->highlight_image) {
    if(cJSON_AddStringToObject(item, "highlightImage", web_page_update_dto->highlight_image) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->canonical_url
    if(web_page_update_dto->canonical_url) {
    if(cJSON_AddStringToObject(item, "canonicalUrl", web_page_update_dto->canonical_url) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->seo_title
    if(web_page_update_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", web_page_update_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->seo_key_words
    if(web_page_update_dto->seo_key_words) {
    if(cJSON_AddStringToObject(item, "seoKeyWords", web_page_update_dto->seo_key_words) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->seo_key_phrases
    if(web_page_update_dto->seo_key_phrases) {
    if(cJSON_AddStringToObject(item, "seoKeyPhrases", web_page_update_dto->seo_key_phrases) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->meta_description
    if(web_page_update_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", web_page_update_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->twitter_image
    if(web_page_update_dto->twitter_image) {
    if(cJSON_AddStringToObject(item, "twitterImage", web_page_update_dto->twitter_image) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->twitter_title
    if(web_page_update_dto->twitter_title) {
    if(cJSON_AddStringToObject(item, "twitterTitle", web_page_update_dto->twitter_title) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->twitter_description
    if(web_page_update_dto->twitter_description) {
    if(cJSON_AddStringToObject(item, "twitterDescription", web_page_update_dto->twitter_description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->facebook_image
    if(web_page_update_dto->facebook_image) {
    if(cJSON_AddStringToObject(item, "facebookImage", web_page_update_dto->facebook_image) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->facebook_title
    if(web_page_update_dto->facebook_title) {
    if(cJSON_AddStringToObject(item, "facebookTitle", web_page_update_dto->facebook_title) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->facebook_description
    if(web_page_update_dto->facebook_description) {
    if(cJSON_AddStringToObject(item, "facebookDescription", web_page_update_dto->facebook_description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->featured_image_url
    if(web_page_update_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", web_page_update_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->content
    if(web_page_update_dto->content) {
    if(cJSON_AddStringToObject(item, "content", web_page_update_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->code
    if(web_page_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", web_page_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->_namespace
    if(web_page_update_dto->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", web_page_update_dto->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->type_name
    if(web_page_update_dto->type_name) {
    if(cJSON_AddStringToObject(item, "typeName", web_page_update_dto->type_name) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->generated_code
    if(web_page_update_dto->generated_code) {
    if(cJSON_AddStringToObject(item, "generatedCode", web_page_update_dto->generated_code) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->compilation_path
    if(web_page_update_dto->compilation_path) {
    if(cJSON_AddStringToObject(item, "compilationPath", web_page_update_dto->compilation_path) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->html_content
    if(web_page_update_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", web_page_update_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->code_type
    if(web_page_update_dto->code_type != contentservice_web_page_update_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeweb_page_update_dto_ToString(web_page_update_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // web_page_update_dto->c_sharp_content
    if(web_page_update_dto->c_sharp_content) {
    if(cJSON_AddStringToObject(item, "cSharpContent", web_page_update_dto->c_sharp_content) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->razor_content
    if(web_page_update_dto->razor_content) {
    if(cJSON_AddStringToObject(item, "razorContent", web_page_update_dto->razor_content) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->css_content
    if(web_page_update_dto->css_content) {
    if(cJSON_AddStringToObject(item, "cssContent", web_page_update_dto->css_content) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->js_content
    if(web_page_update_dto->js_content) {
    if(cJSON_AddStringToObject(item, "jsContent", web_page_update_dto->js_content) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->css_files
    if(web_page_update_dto->css_files) {
    if(cJSON_AddStringToObject(item, "cssFiles", web_page_update_dto->css_files) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->js_files
    if(web_page_update_dto->js_files) {
    if(cJSON_AddStringToObject(item, "jsFiles", web_page_update_dto->js_files) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->razor_generated_code
    if(web_page_update_dto->razor_generated_code) {
    if(cJSON_AddStringToObject(item, "razorGeneratedCode", web_page_update_dto->razor_generated_code) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->c_sharp_generated_code
    if(web_page_update_dto->c_sharp_generated_code) {
    if(cJSON_AddStringToObject(item, "cSharpGeneratedCode", web_page_update_dto->c_sharp_generated_code) == NULL) {
    goto fail; //String
    }
    }


    // web_page_update_dto->precompiled_logic_size
    if(web_page_update_dto->precompiled_logic_size) {
    if(cJSON_AddNumberToObject(item, "precompiledLogicSize", web_page_update_dto->precompiled_logic_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_page_update_dto->precompiled_logic_size_long
    if(web_page_update_dto->precompiled_logic_size_long) {
    if(cJSON_AddNumberToObject(item, "precompiledLogicSizeLong", web_page_update_dto->precompiled_logic_size_long) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_page_update_dto->precompiled_view_size
    if(web_page_update_dto->precompiled_view_size) {
    if(cJSON_AddNumberToObject(item, "precompiledViewSize", web_page_update_dto->precompiled_view_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_page_update_dto->precompiled_view_size_long
    if(web_page_update_dto->precompiled_view_size_long) {
    if(cJSON_AddNumberToObject(item, "precompiledViewSizeLong", web_page_update_dto->precompiled_view_size_long) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_page_update_dto->precompiled_logic_view_size
    if(web_page_update_dto->precompiled_logic_view_size) {
    if(cJSON_AddNumberToObject(item, "precompiledLogicViewSize", web_page_update_dto->precompiled_logic_view_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // web_page_update_dto->_template
    if(web_page_update_dto->_template) {
    if(cJSON_AddBoolToObject(item, "template", web_page_update_dto->_template) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->_default
    if(web_page_update_dto->_default) {
    if(cJSON_AddBoolToObject(item, "default", web_page_update_dto->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->enable
    if(web_page_update_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", web_page_update_dto->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->enable_comments
    if(web_page_update_dto->enable_comments) {
    if(cJSON_AddBoolToObject(item, "enableComments", web_page_update_dto->enable_comments) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->display_social_box
    if(web_page_update_dto->display_social_box) {
    if(cJSON_AddBoolToObject(item, "displaySocialBox", web_page_update_dto->display_social_box) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->published
    if(web_page_update_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", web_page_update_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->in_trash_can
    if(web_page_update_dto->in_trash_can) {
    if(cJSON_AddBoolToObject(item, "inTrashCan", web_page_update_dto->in_trash_can) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->system_locked
    if(web_page_update_dto->system_locked) {
    if(cJSON_AddBoolToObject(item, "systemLocked", web_page_update_dto->system_locked) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->allow_pingbacks
    if(web_page_update_dto->allow_pingbacks) {
    if(cJSON_AddBoolToObject(item, "allowPingbacks", web_page_update_dto->allow_pingbacks) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->allow_trackbacks
    if(web_page_update_dto->allow_trackbacks) {
    if(cJSON_AddBoolToObject(item, "allowTrackbacks", web_page_update_dto->allow_trackbacks) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->cornerstone_content
    if(web_page_update_dto->cornerstone_content) {
    if(cJSON_AddBoolToObject(item, "cornerstoneContent", web_page_update_dto->cornerstone_content) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_essential_content
    if(web_page_update_dto->is_essential_content) {
    if(cJSON_AddBoolToObject(item, "isEssentialContent", web_page_update_dto->is_essential_content) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->allow_search_engine_indexing
    if(web_page_update_dto->allow_search_engine_indexing) {
    if(cJSON_AddBoolToObject(item, "allowSearchEngineIndexing", web_page_update_dto->allow_search_engine_indexing) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_home_page
    if(web_page_update_dto->is_home_page) {
    if(cJSON_AddBoolToObject(item, "isHomePage", web_page_update_dto->is_home_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_store_page
    if(web_page_update_dto->is_store_page) {
    if(cJSON_AddBoolToObject(item, "isStorePage", web_page_update_dto->is_store_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_cart_page
    if(web_page_update_dto->is_cart_page) {
    if(cJSON_AddBoolToObject(item, "isCartPage", web_page_update_dto->is_cart_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_blog_page
    if(web_page_update_dto->is_blog_page) {
    if(cJSON_AddBoolToObject(item, "isBlogPage", web_page_update_dto->is_blog_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_account_page
    if(web_page_update_dto->is_account_page) {
    if(cJSON_AddBoolToObject(item, "isAccountPage", web_page_update_dto->is_account_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_checkout_page
    if(web_page_update_dto->is_checkout_page) {
    if(cJSON_AddBoolToObject(item, "isCheckoutPage", web_page_update_dto->is_checkout_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_wish_lists_page
    if(web_page_update_dto->is_wish_lists_page) {
    if(cJSON_AddBoolToObject(item, "isWishListsPage", web_page_update_dto->is_wish_lists_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_contact_page
    if(web_page_update_dto->is_contact_page) {
    if(cJSON_AddBoolToObject(item, "isContactPage", web_page_update_dto->is_contact_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_privacy_policy_page
    if(web_page_update_dto->is_privacy_policy_page) {
    if(cJSON_AddBoolToObject(item, "isPrivacyPolicyPage", web_page_update_dto->is_privacy_policy_page) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_update_dto->is_terms_of_service_page
    if(web_page_update_dto->is_terms_of_service_page) {
    if(cJSON_AddBoolToObject(item, "isTermsOfServicePage", web_page_update_dto->is_terms_of_service_page) == NULL) {
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

web_page_update_dto_t *web_page_update_dto_parseFromJSON(cJSON *web_page_update_dtoJSON){

    web_page_update_dto_t *web_page_update_dto_local_var = NULL;

    // web_page_update_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // web_page_update_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->excerpt
    cJSON *excerpt = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "excerpt");
    if (excerpt) { 
    if(!cJSON_IsString(excerpt) && !cJSON_IsNull(excerpt))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "password");
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->highlight_image
    cJSON *highlight_image = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "highlightImage");
    if (highlight_image) { 
    if(!cJSON_IsString(highlight_image) && !cJSON_IsNull(highlight_image))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->canonical_url
    cJSON *canonical_url = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "canonicalUrl");
    if (canonical_url) { 
    if(!cJSON_IsString(canonical_url) && !cJSON_IsNull(canonical_url))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->seo_key_words
    cJSON *seo_key_words = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "seoKeyWords");
    if (seo_key_words) { 
    if(!cJSON_IsString(seo_key_words) && !cJSON_IsNull(seo_key_words))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->seo_key_phrases
    cJSON *seo_key_phrases = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "seoKeyPhrases");
    if (seo_key_phrases) { 
    if(!cJSON_IsString(seo_key_phrases) && !cJSON_IsNull(seo_key_phrases))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->twitter_image
    cJSON *twitter_image = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "twitterImage");
    if (twitter_image) { 
    if(!cJSON_IsString(twitter_image) && !cJSON_IsNull(twitter_image))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->twitter_title
    cJSON *twitter_title = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "twitterTitle");
    if (twitter_title) { 
    if(!cJSON_IsString(twitter_title) && !cJSON_IsNull(twitter_title))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->twitter_description
    cJSON *twitter_description = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "twitterDescription");
    if (twitter_description) { 
    if(!cJSON_IsString(twitter_description) && !cJSON_IsNull(twitter_description))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->facebook_image
    cJSON *facebook_image = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "facebookImage");
    if (facebook_image) { 
    if(!cJSON_IsString(facebook_image) && !cJSON_IsNull(facebook_image))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->facebook_title
    cJSON *facebook_title = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "facebookTitle");
    if (facebook_title) { 
    if(!cJSON_IsString(facebook_title) && !cJSON_IsNull(facebook_title))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->facebook_description
    cJSON *facebook_description = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "facebookDescription");
    if (facebook_description) { 
    if(!cJSON_IsString(facebook_description) && !cJSON_IsNull(facebook_description))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->type_name
    cJSON *type_name = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "typeName");
    if (type_name) { 
    if(!cJSON_IsString(type_name) && !cJSON_IsNull(type_name))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->generated_code
    cJSON *generated_code = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "generatedCode");
    if (generated_code) { 
    if(!cJSON_IsString(generated_code) && !cJSON_IsNull(generated_code))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->compilation_path
    cJSON *compilation_path = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "compilationPath");
    if (compilation_path) { 
    if(!cJSON_IsString(compilation_path) && !cJSON_IsNull(compilation_path))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "codeType");
    contentservice_web_page_update_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = web_page_update_dto_code_type_FromString(code_type->valuestring);
    }

    // web_page_update_dto->c_sharp_content
    cJSON *c_sharp_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "cSharpContent");
    if (c_sharp_content) { 
    if(!cJSON_IsString(c_sharp_content) && !cJSON_IsNull(c_sharp_content))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->razor_content
    cJSON *razor_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "razorContent");
    if (razor_content) { 
    if(!cJSON_IsString(razor_content) && !cJSON_IsNull(razor_content))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->css_content
    cJSON *css_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "cssContent");
    if (css_content) { 
    if(!cJSON_IsString(css_content) && !cJSON_IsNull(css_content))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->js_content
    cJSON *js_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "jsContent");
    if (js_content) { 
    if(!cJSON_IsString(js_content) && !cJSON_IsNull(js_content))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->css_files
    cJSON *css_files = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "cssFiles");
    if (css_files) { 
    if(!cJSON_IsString(css_files) && !cJSON_IsNull(css_files))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->js_files
    cJSON *js_files = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "jsFiles");
    if (js_files) { 
    if(!cJSON_IsString(js_files) && !cJSON_IsNull(js_files))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->razor_generated_code
    cJSON *razor_generated_code = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "razorGeneratedCode");
    if (razor_generated_code) { 
    if(!cJSON_IsString(razor_generated_code) && !cJSON_IsNull(razor_generated_code))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->c_sharp_generated_code
    cJSON *c_sharp_generated_code = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "cSharpGeneratedCode");
    if (c_sharp_generated_code) { 
    if(!cJSON_IsString(c_sharp_generated_code) && !cJSON_IsNull(c_sharp_generated_code))
    {
    goto end; //String
    }
    }

    // web_page_update_dto->precompiled_logic_size
    cJSON *precompiled_logic_size = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "precompiledLogicSize");
    if (precompiled_logic_size) { 
    if(!cJSON_IsNumber(precompiled_logic_size))
    {
    goto end; //Numeric
    }
    }

    // web_page_update_dto->precompiled_logic_size_long
    cJSON *precompiled_logic_size_long = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "precompiledLogicSizeLong");
    if (precompiled_logic_size_long) { 
    if(!cJSON_IsNumber(precompiled_logic_size_long))
    {
    goto end; //Numeric
    }
    }

    // web_page_update_dto->precompiled_view_size
    cJSON *precompiled_view_size = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "precompiledViewSize");
    if (precompiled_view_size) { 
    if(!cJSON_IsNumber(precompiled_view_size))
    {
    goto end; //Numeric
    }
    }

    // web_page_update_dto->precompiled_view_size_long
    cJSON *precompiled_view_size_long = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "precompiledViewSizeLong");
    if (precompiled_view_size_long) { 
    if(!cJSON_IsNumber(precompiled_view_size_long))
    {
    goto end; //Numeric
    }
    }

    // web_page_update_dto->precompiled_logic_view_size
    cJSON *precompiled_logic_view_size = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "precompiledLogicViewSize");
    if (precompiled_logic_view_size) { 
    if(!cJSON_IsNumber(precompiled_logic_view_size))
    {
    goto end; //Numeric
    }
    }

    // web_page_update_dto->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "template");
    if (_template) { 
    if(!cJSON_IsBool(_template))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "default");
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->enable_comments
    cJSON *enable_comments = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "enableComments");
    if (enable_comments) { 
    if(!cJSON_IsBool(enable_comments))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->display_social_box
    cJSON *display_social_box = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "displaySocialBox");
    if (display_social_box) { 
    if(!cJSON_IsBool(display_social_box))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->in_trash_can
    cJSON *in_trash_can = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "inTrashCan");
    if (in_trash_can) { 
    if(!cJSON_IsBool(in_trash_can))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->system_locked
    cJSON *system_locked = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "systemLocked");
    if (system_locked) { 
    if(!cJSON_IsBool(system_locked))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->allow_pingbacks
    cJSON *allow_pingbacks = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "allowPingbacks");
    if (allow_pingbacks) { 
    if(!cJSON_IsBool(allow_pingbacks))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->allow_trackbacks
    cJSON *allow_trackbacks = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "allowTrackbacks");
    if (allow_trackbacks) { 
    if(!cJSON_IsBool(allow_trackbacks))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->cornerstone_content
    cJSON *cornerstone_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "cornerstoneContent");
    if (cornerstone_content) { 
    if(!cJSON_IsBool(cornerstone_content))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_essential_content
    cJSON *is_essential_content = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isEssentialContent");
    if (is_essential_content) { 
    if(!cJSON_IsBool(is_essential_content))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->allow_search_engine_indexing
    cJSON *allow_search_engine_indexing = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "allowSearchEngineIndexing");
    if (allow_search_engine_indexing) { 
    if(!cJSON_IsBool(allow_search_engine_indexing))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_home_page
    cJSON *is_home_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isHomePage");
    if (is_home_page) { 
    if(!cJSON_IsBool(is_home_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_store_page
    cJSON *is_store_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isStorePage");
    if (is_store_page) { 
    if(!cJSON_IsBool(is_store_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_cart_page
    cJSON *is_cart_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isCartPage");
    if (is_cart_page) { 
    if(!cJSON_IsBool(is_cart_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_blog_page
    cJSON *is_blog_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isBlogPage");
    if (is_blog_page) { 
    if(!cJSON_IsBool(is_blog_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_account_page
    cJSON *is_account_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isAccountPage");
    if (is_account_page) { 
    if(!cJSON_IsBool(is_account_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_checkout_page
    cJSON *is_checkout_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isCheckoutPage");
    if (is_checkout_page) { 
    if(!cJSON_IsBool(is_checkout_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_wish_lists_page
    cJSON *is_wish_lists_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isWishListsPage");
    if (is_wish_lists_page) { 
    if(!cJSON_IsBool(is_wish_lists_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_contact_page
    cJSON *is_contact_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isContactPage");
    if (is_contact_page) { 
    if(!cJSON_IsBool(is_contact_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_privacy_policy_page
    cJSON *is_privacy_policy_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isPrivacyPolicyPage");
    if (is_privacy_policy_page) { 
    if(!cJSON_IsBool(is_privacy_policy_page))
    {
    goto end; //Bool
    }
    }

    // web_page_update_dto->is_terms_of_service_page
    cJSON *is_terms_of_service_page = cJSON_GetObjectItemCaseSensitive(web_page_update_dtoJSON, "isTermsOfServicePage");
    if (is_terms_of_service_page) { 
    if(!cJSON_IsBool(is_terms_of_service_page))
    {
    goto end; //Bool
    }
    }


    web_page_update_dto_local_var = web_page_update_dto_create (
        order ? order->valuedouble : 0,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        excerpt && !cJSON_IsNull(excerpt) ? strdup(excerpt->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        highlight_image && !cJSON_IsNull(highlight_image) ? strdup(highlight_image->valuestring) : NULL,
        canonical_url && !cJSON_IsNull(canonical_url) ? strdup(canonical_url->valuestring) : NULL,
        seo_title && !cJSON_IsNull(seo_title) ? strdup(seo_title->valuestring) : NULL,
        seo_key_words && !cJSON_IsNull(seo_key_words) ? strdup(seo_key_words->valuestring) : NULL,
        seo_key_phrases && !cJSON_IsNull(seo_key_phrases) ? strdup(seo_key_phrases->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        twitter_image && !cJSON_IsNull(twitter_image) ? strdup(twitter_image->valuestring) : NULL,
        twitter_title && !cJSON_IsNull(twitter_title) ? strdup(twitter_title->valuestring) : NULL,
        twitter_description && !cJSON_IsNull(twitter_description) ? strdup(twitter_description->valuestring) : NULL,
        facebook_image && !cJSON_IsNull(facebook_image) ? strdup(facebook_image->valuestring) : NULL,
        facebook_title && !cJSON_IsNull(facebook_title) ? strdup(facebook_title->valuestring) : NULL,
        facebook_description && !cJSON_IsNull(facebook_description) ? strdup(facebook_description->valuestring) : NULL,
        featured_image_url && !cJSON_IsNull(featured_image_url) ? strdup(featured_image_url->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        type_name && !cJSON_IsNull(type_name) ? strdup(type_name->valuestring) : NULL,
        generated_code && !cJSON_IsNull(generated_code) ? strdup(generated_code->valuestring) : NULL,
        compilation_path && !cJSON_IsNull(compilation_path) ? strdup(compilation_path->valuestring) : NULL,
        html_content && !cJSON_IsNull(html_content) ? strdup(html_content->valuestring) : NULL,
        code_type ? code_typeVariable : contentservice_web_page_update_dto_CODETYPE_NULL,
        c_sharp_content && !cJSON_IsNull(c_sharp_content) ? strdup(c_sharp_content->valuestring) : NULL,
        razor_content && !cJSON_IsNull(razor_content) ? strdup(razor_content->valuestring) : NULL,
        css_content && !cJSON_IsNull(css_content) ? strdup(css_content->valuestring) : NULL,
        js_content && !cJSON_IsNull(js_content) ? strdup(js_content->valuestring) : NULL,
        css_files && !cJSON_IsNull(css_files) ? strdup(css_files->valuestring) : NULL,
        js_files && !cJSON_IsNull(js_files) ? strdup(js_files->valuestring) : NULL,
        razor_generated_code && !cJSON_IsNull(razor_generated_code) ? strdup(razor_generated_code->valuestring) : NULL,
        c_sharp_generated_code && !cJSON_IsNull(c_sharp_generated_code) ? strdup(c_sharp_generated_code->valuestring) : NULL,
        precompiled_logic_size ? precompiled_logic_size->valuedouble : 0,
        precompiled_logic_size_long ? precompiled_logic_size_long->valuedouble : 0,
        precompiled_view_size ? precompiled_view_size->valuedouble : 0,
        precompiled_view_size_long ? precompiled_view_size_long->valuedouble : 0,
        precompiled_logic_view_size ? precompiled_logic_view_size->valuedouble : 0,
        _template ? _template->valueint : 0,
        _default ? _default->valueint : 0,
        enable ? enable->valueint : 0,
        enable_comments ? enable_comments->valueint : 0,
        display_social_box ? display_social_box->valueint : 0,
        published ? published->valueint : 0,
        in_trash_can ? in_trash_can->valueint : 0,
        system_locked ? system_locked->valueint : 0,
        allow_pingbacks ? allow_pingbacks->valueint : 0,
        allow_trackbacks ? allow_trackbacks->valueint : 0,
        cornerstone_content ? cornerstone_content->valueint : 0,
        is_essential_content ? is_essential_content->valueint : 0,
        allow_search_engine_indexing ? allow_search_engine_indexing->valueint : 0,
        is_home_page ? is_home_page->valueint : 0,
        is_store_page ? is_store_page->valueint : 0,
        is_cart_page ? is_cart_page->valueint : 0,
        is_blog_page ? is_blog_page->valueint : 0,
        is_account_page ? is_account_page->valueint : 0,
        is_checkout_page ? is_checkout_page->valueint : 0,
        is_wish_lists_page ? is_wish_lists_page->valueint : 0,
        is_contact_page ? is_contact_page->valueint : 0,
        is_privacy_policy_page ? is_privacy_policy_page->valueint : 0,
        is_terms_of_service_page ? is_terms_of_service_page->valueint : 0
        );

    return web_page_update_dto_local_var;
end:
    return NULL;

}
