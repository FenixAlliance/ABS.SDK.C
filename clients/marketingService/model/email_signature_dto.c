#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_signature_dto.h"


char* email_signature_dto_code_type_ToString(marketingservice_email_signature_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    return code_typeArray[code_type];
}

marketingservice_email_signature_dto_CODETYPE_e email_signature_dto_code_type_FromString(char* code_type){
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

email_signature_dto_t *email_signature_dto_create(
    char *id,
    char *timestamp,
    marketingservice_email_signature_dto_CODETYPE_e code_type,
    int order,
    char *slug,
    char *name,
    char *title,
    char *excerpt,
    char *password,
    char *description,
    char *highlight_image,
    char *canonical_url,
    any_type_t *emit_result,
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
    char *c_sharp_content,
    char *razor_content,
    char *css_content,
    char *js_content,
    char *css_files,
    char *js_files,
    char *razor_generated_code,
    char *c_sharp_generated_code,
    int _template,
    int _default,
    int enable,
    int enable_comments,
    int display_social_box,
    int published,
    int in_trash_can,
    int system_locked,
    int allow_ping_backs,
    int allow_trackbacks,
    int cornerstone_content,
    int is_essential_content,
    int allow_search_engine_indexing,
    char *tenant_id,
    char *web_portal_id,
    char *website_theme_id,
    char *enrollment_id,
    char *social_profile_id,
    char *parent_web_content_id,
    char *parent_web_content_version_id
    ) {
    email_signature_dto_t *email_signature_dto_local_var = malloc(sizeof(email_signature_dto_t));
    if (!email_signature_dto_local_var) {
        return NULL;
    }
    email_signature_dto_local_var->id = id;
    email_signature_dto_local_var->timestamp = timestamp;
    email_signature_dto_local_var->code_type = code_type;
    email_signature_dto_local_var->order = order;
    email_signature_dto_local_var->slug = slug;
    email_signature_dto_local_var->name = name;
    email_signature_dto_local_var->title = title;
    email_signature_dto_local_var->excerpt = excerpt;
    email_signature_dto_local_var->password = password;
    email_signature_dto_local_var->description = description;
    email_signature_dto_local_var->highlight_image = highlight_image;
    email_signature_dto_local_var->canonical_url = canonical_url;
    email_signature_dto_local_var->emit_result = emit_result;
    email_signature_dto_local_var->seo_title = seo_title;
    email_signature_dto_local_var->seo_key_words = seo_key_words;
    email_signature_dto_local_var->seo_key_phrases = seo_key_phrases;
    email_signature_dto_local_var->meta_description = meta_description;
    email_signature_dto_local_var->twitter_image = twitter_image;
    email_signature_dto_local_var->twitter_title = twitter_title;
    email_signature_dto_local_var->twitter_description = twitter_description;
    email_signature_dto_local_var->facebook_image = facebook_image;
    email_signature_dto_local_var->facebook_title = facebook_title;
    email_signature_dto_local_var->facebook_description = facebook_description;
    email_signature_dto_local_var->featured_image_url = featured_image_url;
    email_signature_dto_local_var->content = content;
    email_signature_dto_local_var->code = code;
    email_signature_dto_local_var->_namespace = _namespace;
    email_signature_dto_local_var->type_name = type_name;
    email_signature_dto_local_var->generated_code = generated_code;
    email_signature_dto_local_var->compilation_path = compilation_path;
    email_signature_dto_local_var->html_content = html_content;
    email_signature_dto_local_var->c_sharp_content = c_sharp_content;
    email_signature_dto_local_var->razor_content = razor_content;
    email_signature_dto_local_var->css_content = css_content;
    email_signature_dto_local_var->js_content = js_content;
    email_signature_dto_local_var->css_files = css_files;
    email_signature_dto_local_var->js_files = js_files;
    email_signature_dto_local_var->razor_generated_code = razor_generated_code;
    email_signature_dto_local_var->c_sharp_generated_code = c_sharp_generated_code;
    email_signature_dto_local_var->_template = _template;
    email_signature_dto_local_var->_default = _default;
    email_signature_dto_local_var->enable = enable;
    email_signature_dto_local_var->enable_comments = enable_comments;
    email_signature_dto_local_var->display_social_box = display_social_box;
    email_signature_dto_local_var->published = published;
    email_signature_dto_local_var->in_trash_can = in_trash_can;
    email_signature_dto_local_var->system_locked = system_locked;
    email_signature_dto_local_var->allow_ping_backs = allow_ping_backs;
    email_signature_dto_local_var->allow_trackbacks = allow_trackbacks;
    email_signature_dto_local_var->cornerstone_content = cornerstone_content;
    email_signature_dto_local_var->is_essential_content = is_essential_content;
    email_signature_dto_local_var->allow_search_engine_indexing = allow_search_engine_indexing;
    email_signature_dto_local_var->tenant_id = tenant_id;
    email_signature_dto_local_var->web_portal_id = web_portal_id;
    email_signature_dto_local_var->website_theme_id = website_theme_id;
    email_signature_dto_local_var->enrollment_id = enrollment_id;
    email_signature_dto_local_var->social_profile_id = social_profile_id;
    email_signature_dto_local_var->parent_web_content_id = parent_web_content_id;
    email_signature_dto_local_var->parent_web_content_version_id = parent_web_content_version_id;

    return email_signature_dto_local_var;
}


void email_signature_dto_free(email_signature_dto_t *email_signature_dto) {
    if(NULL == email_signature_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (email_signature_dto->id) {
        free(email_signature_dto->id);
        email_signature_dto->id = NULL;
    }
    if (email_signature_dto->timestamp) {
        free(email_signature_dto->timestamp);
        email_signature_dto->timestamp = NULL;
    }
    if (email_signature_dto->slug) {
        free(email_signature_dto->slug);
        email_signature_dto->slug = NULL;
    }
    if (email_signature_dto->name) {
        free(email_signature_dto->name);
        email_signature_dto->name = NULL;
    }
    if (email_signature_dto->title) {
        free(email_signature_dto->title);
        email_signature_dto->title = NULL;
    }
    if (email_signature_dto->excerpt) {
        free(email_signature_dto->excerpt);
        email_signature_dto->excerpt = NULL;
    }
    if (email_signature_dto->password) {
        free(email_signature_dto->password);
        email_signature_dto->password = NULL;
    }
    if (email_signature_dto->description) {
        free(email_signature_dto->description);
        email_signature_dto->description = NULL;
    }
    if (email_signature_dto->highlight_image) {
        free(email_signature_dto->highlight_image);
        email_signature_dto->highlight_image = NULL;
    }
    if (email_signature_dto->canonical_url) {
        free(email_signature_dto->canonical_url);
        email_signature_dto->canonical_url = NULL;
    }
    if (email_signature_dto->emit_result) {
        _free(email_signature_dto->emit_result);
        email_signature_dto->emit_result = NULL;
    }
    if (email_signature_dto->seo_title) {
        free(email_signature_dto->seo_title);
        email_signature_dto->seo_title = NULL;
    }
    if (email_signature_dto->seo_key_words) {
        free(email_signature_dto->seo_key_words);
        email_signature_dto->seo_key_words = NULL;
    }
    if (email_signature_dto->seo_key_phrases) {
        free(email_signature_dto->seo_key_phrases);
        email_signature_dto->seo_key_phrases = NULL;
    }
    if (email_signature_dto->meta_description) {
        free(email_signature_dto->meta_description);
        email_signature_dto->meta_description = NULL;
    }
    if (email_signature_dto->twitter_image) {
        free(email_signature_dto->twitter_image);
        email_signature_dto->twitter_image = NULL;
    }
    if (email_signature_dto->twitter_title) {
        free(email_signature_dto->twitter_title);
        email_signature_dto->twitter_title = NULL;
    }
    if (email_signature_dto->twitter_description) {
        free(email_signature_dto->twitter_description);
        email_signature_dto->twitter_description = NULL;
    }
    if (email_signature_dto->facebook_image) {
        free(email_signature_dto->facebook_image);
        email_signature_dto->facebook_image = NULL;
    }
    if (email_signature_dto->facebook_title) {
        free(email_signature_dto->facebook_title);
        email_signature_dto->facebook_title = NULL;
    }
    if (email_signature_dto->facebook_description) {
        free(email_signature_dto->facebook_description);
        email_signature_dto->facebook_description = NULL;
    }
    if (email_signature_dto->featured_image_url) {
        free(email_signature_dto->featured_image_url);
        email_signature_dto->featured_image_url = NULL;
    }
    if (email_signature_dto->content) {
        free(email_signature_dto->content);
        email_signature_dto->content = NULL;
    }
    if (email_signature_dto->code) {
        free(email_signature_dto->code);
        email_signature_dto->code = NULL;
    }
    if (email_signature_dto->_namespace) {
        free(email_signature_dto->_namespace);
        email_signature_dto->_namespace = NULL;
    }
    if (email_signature_dto->type_name) {
        free(email_signature_dto->type_name);
        email_signature_dto->type_name = NULL;
    }
    if (email_signature_dto->generated_code) {
        free(email_signature_dto->generated_code);
        email_signature_dto->generated_code = NULL;
    }
    if (email_signature_dto->compilation_path) {
        free(email_signature_dto->compilation_path);
        email_signature_dto->compilation_path = NULL;
    }
    if (email_signature_dto->html_content) {
        free(email_signature_dto->html_content);
        email_signature_dto->html_content = NULL;
    }
    if (email_signature_dto->c_sharp_content) {
        free(email_signature_dto->c_sharp_content);
        email_signature_dto->c_sharp_content = NULL;
    }
    if (email_signature_dto->razor_content) {
        free(email_signature_dto->razor_content);
        email_signature_dto->razor_content = NULL;
    }
    if (email_signature_dto->css_content) {
        free(email_signature_dto->css_content);
        email_signature_dto->css_content = NULL;
    }
    if (email_signature_dto->js_content) {
        free(email_signature_dto->js_content);
        email_signature_dto->js_content = NULL;
    }
    if (email_signature_dto->css_files) {
        free(email_signature_dto->css_files);
        email_signature_dto->css_files = NULL;
    }
    if (email_signature_dto->js_files) {
        free(email_signature_dto->js_files);
        email_signature_dto->js_files = NULL;
    }
    if (email_signature_dto->razor_generated_code) {
        free(email_signature_dto->razor_generated_code);
        email_signature_dto->razor_generated_code = NULL;
    }
    if (email_signature_dto->c_sharp_generated_code) {
        free(email_signature_dto->c_sharp_generated_code);
        email_signature_dto->c_sharp_generated_code = NULL;
    }
    if (email_signature_dto->tenant_id) {
        free(email_signature_dto->tenant_id);
        email_signature_dto->tenant_id = NULL;
    }
    if (email_signature_dto->web_portal_id) {
        free(email_signature_dto->web_portal_id);
        email_signature_dto->web_portal_id = NULL;
    }
    if (email_signature_dto->website_theme_id) {
        free(email_signature_dto->website_theme_id);
        email_signature_dto->website_theme_id = NULL;
    }
    if (email_signature_dto->enrollment_id) {
        free(email_signature_dto->enrollment_id);
        email_signature_dto->enrollment_id = NULL;
    }
    if (email_signature_dto->social_profile_id) {
        free(email_signature_dto->social_profile_id);
        email_signature_dto->social_profile_id = NULL;
    }
    if (email_signature_dto->parent_web_content_id) {
        free(email_signature_dto->parent_web_content_id);
        email_signature_dto->parent_web_content_id = NULL;
    }
    if (email_signature_dto->parent_web_content_version_id) {
        free(email_signature_dto->parent_web_content_version_id);
        email_signature_dto->parent_web_content_version_id = NULL;
    }
    free(email_signature_dto);
}

cJSON *email_signature_dto_convertToJSON(email_signature_dto_t *email_signature_dto) {
    cJSON *item = cJSON_CreateObject();

    // email_signature_dto->id
    if(email_signature_dto->id) {
    if(cJSON_AddStringToObject(item, "id", email_signature_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->timestamp
    if(email_signature_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", email_signature_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // email_signature_dto->code_type
    if(email_signature_dto->code_type != marketingservice_email_signature_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeemail_signature_dto_ToString(email_signature_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // email_signature_dto->order
    if(email_signature_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", email_signature_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // email_signature_dto->slug
    if(email_signature_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", email_signature_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->name
    if(email_signature_dto->name) {
    if(cJSON_AddStringToObject(item, "name", email_signature_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->title
    if(email_signature_dto->title) {
    if(cJSON_AddStringToObject(item, "title", email_signature_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->excerpt
    if(email_signature_dto->excerpt) {
    if(cJSON_AddStringToObject(item, "excerpt", email_signature_dto->excerpt) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->password
    if(email_signature_dto->password) {
    if(cJSON_AddStringToObject(item, "password", email_signature_dto->password) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->description
    if(email_signature_dto->description) {
    if(cJSON_AddStringToObject(item, "description", email_signature_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->highlight_image
    if(email_signature_dto->highlight_image) {
    if(cJSON_AddStringToObject(item, "highlightImage", email_signature_dto->highlight_image) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->canonical_url
    if(email_signature_dto->canonical_url) {
    if(cJSON_AddStringToObject(item, "canonicalUrl", email_signature_dto->canonical_url) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->emit_result
    if(email_signature_dto->emit_result) {
    cJSON *emit_result_local_JSON = _convertToJSON(email_signature_dto->emit_result);
    if(emit_result_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "emitResult", emit_result_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // email_signature_dto->seo_title
    if(email_signature_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", email_signature_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->seo_key_words
    if(email_signature_dto->seo_key_words) {
    if(cJSON_AddStringToObject(item, "seoKeyWords", email_signature_dto->seo_key_words) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->seo_key_phrases
    if(email_signature_dto->seo_key_phrases) {
    if(cJSON_AddStringToObject(item, "seoKeyPhrases", email_signature_dto->seo_key_phrases) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->meta_description
    if(email_signature_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", email_signature_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->twitter_image
    if(email_signature_dto->twitter_image) {
    if(cJSON_AddStringToObject(item, "twitterImage", email_signature_dto->twitter_image) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->twitter_title
    if(email_signature_dto->twitter_title) {
    if(cJSON_AddStringToObject(item, "twitterTitle", email_signature_dto->twitter_title) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->twitter_description
    if(email_signature_dto->twitter_description) {
    if(cJSON_AddStringToObject(item, "twitterDescription", email_signature_dto->twitter_description) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->facebook_image
    if(email_signature_dto->facebook_image) {
    if(cJSON_AddStringToObject(item, "facebookImage", email_signature_dto->facebook_image) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->facebook_title
    if(email_signature_dto->facebook_title) {
    if(cJSON_AddStringToObject(item, "facebookTitle", email_signature_dto->facebook_title) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->facebook_description
    if(email_signature_dto->facebook_description) {
    if(cJSON_AddStringToObject(item, "facebookDescription", email_signature_dto->facebook_description) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->featured_image_url
    if(email_signature_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", email_signature_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->content
    if(email_signature_dto->content) {
    if(cJSON_AddStringToObject(item, "content", email_signature_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->code
    if(email_signature_dto->code) {
    if(cJSON_AddStringToObject(item, "code", email_signature_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->_namespace
    if(email_signature_dto->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", email_signature_dto->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->type_name
    if(email_signature_dto->type_name) {
    if(cJSON_AddStringToObject(item, "typeName", email_signature_dto->type_name) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->generated_code
    if(email_signature_dto->generated_code) {
    if(cJSON_AddStringToObject(item, "generatedCode", email_signature_dto->generated_code) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->compilation_path
    if(email_signature_dto->compilation_path) {
    if(cJSON_AddStringToObject(item, "compilationPath", email_signature_dto->compilation_path) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->html_content
    if(email_signature_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", email_signature_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->c_sharp_content
    if(email_signature_dto->c_sharp_content) {
    if(cJSON_AddStringToObject(item, "cSharpContent", email_signature_dto->c_sharp_content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->razor_content
    if(email_signature_dto->razor_content) {
    if(cJSON_AddStringToObject(item, "razorContent", email_signature_dto->razor_content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->css_content
    if(email_signature_dto->css_content) {
    if(cJSON_AddStringToObject(item, "cssContent", email_signature_dto->css_content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->js_content
    if(email_signature_dto->js_content) {
    if(cJSON_AddStringToObject(item, "jsContent", email_signature_dto->js_content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->css_files
    if(email_signature_dto->css_files) {
    if(cJSON_AddStringToObject(item, "cssFiles", email_signature_dto->css_files) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->js_files
    if(email_signature_dto->js_files) {
    if(cJSON_AddStringToObject(item, "jsFiles", email_signature_dto->js_files) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->razor_generated_code
    if(email_signature_dto->razor_generated_code) {
    if(cJSON_AddStringToObject(item, "razorGeneratedCode", email_signature_dto->razor_generated_code) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->c_sharp_generated_code
    if(email_signature_dto->c_sharp_generated_code) {
    if(cJSON_AddStringToObject(item, "cSharpGeneratedCode", email_signature_dto->c_sharp_generated_code) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->_template
    if(email_signature_dto->_template) {
    if(cJSON_AddBoolToObject(item, "template", email_signature_dto->_template) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->_default
    if(email_signature_dto->_default) {
    if(cJSON_AddBoolToObject(item, "default", email_signature_dto->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->enable
    if(email_signature_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", email_signature_dto->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->enable_comments
    if(email_signature_dto->enable_comments) {
    if(cJSON_AddBoolToObject(item, "enableComments", email_signature_dto->enable_comments) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->display_social_box
    if(email_signature_dto->display_social_box) {
    if(cJSON_AddBoolToObject(item, "displaySocialBox", email_signature_dto->display_social_box) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->published
    if(email_signature_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", email_signature_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->in_trash_can
    if(email_signature_dto->in_trash_can) {
    if(cJSON_AddBoolToObject(item, "inTrashCan", email_signature_dto->in_trash_can) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->system_locked
    if(email_signature_dto->system_locked) {
    if(cJSON_AddBoolToObject(item, "systemLocked", email_signature_dto->system_locked) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->allow_ping_backs
    if(email_signature_dto->allow_ping_backs) {
    if(cJSON_AddBoolToObject(item, "allowPingBacks", email_signature_dto->allow_ping_backs) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->allow_trackbacks
    if(email_signature_dto->allow_trackbacks) {
    if(cJSON_AddBoolToObject(item, "allowTrackbacks", email_signature_dto->allow_trackbacks) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->cornerstone_content
    if(email_signature_dto->cornerstone_content) {
    if(cJSON_AddBoolToObject(item, "cornerstoneContent", email_signature_dto->cornerstone_content) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->is_essential_content
    if(email_signature_dto->is_essential_content) {
    if(cJSON_AddBoolToObject(item, "isEssentialContent", email_signature_dto->is_essential_content) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->allow_search_engine_indexing
    if(email_signature_dto->allow_search_engine_indexing) {
    if(cJSON_AddBoolToObject(item, "allowSearchEngineIndexing", email_signature_dto->allow_search_engine_indexing) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_dto->tenant_id
    if(email_signature_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", email_signature_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->web_portal_id
    if(email_signature_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalId", email_signature_dto->web_portal_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->website_theme_id
    if(email_signature_dto->website_theme_id) {
    if(cJSON_AddStringToObject(item, "websiteThemeId", email_signature_dto->website_theme_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->enrollment_id
    if(email_signature_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", email_signature_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->social_profile_id
    if(email_signature_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", email_signature_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->parent_web_content_id
    if(email_signature_dto->parent_web_content_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentId", email_signature_dto->parent_web_content_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_dto->parent_web_content_version_id
    if(email_signature_dto->parent_web_content_version_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentVersionId", email_signature_dto->parent_web_content_version_id) == NULL) {
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

email_signature_dto_t *email_signature_dto_parseFromJSON(cJSON *email_signature_dtoJSON){

    email_signature_dto_t *email_signature_dto_local_var = NULL;

    // define the local variable for email_signature_dto->emit_result
    _t *emit_result_local_nonprim = NULL;

    // email_signature_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // email_signature_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "codeType");
    marketingservice_email_signature_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = email_signature_dto_code_type_FromString(code_type->valuestring);
    }

    // email_signature_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // email_signature_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // email_signature_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // email_signature_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // email_signature_dto->excerpt
    cJSON *excerpt = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "excerpt");
    if (excerpt) { 
    if(!cJSON_IsString(excerpt) && !cJSON_IsNull(excerpt))
    {
    goto end; //String
    }
    }

    // email_signature_dto->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "password");
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // email_signature_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // email_signature_dto->highlight_image
    cJSON *highlight_image = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "highlightImage");
    if (highlight_image) { 
    if(!cJSON_IsString(highlight_image) && !cJSON_IsNull(highlight_image))
    {
    goto end; //String
    }
    }

    // email_signature_dto->canonical_url
    cJSON *canonical_url = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "canonicalUrl");
    if (canonical_url) { 
    if(!cJSON_IsString(canonical_url) && !cJSON_IsNull(canonical_url))
    {
    goto end; //String
    }
    }

    // email_signature_dto->emit_result
    cJSON *emit_result = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "emitResult");
    if (emit_result) { 
    emit_result_local_nonprim = _parseFromJSON(emit_result); //custom
    }

    // email_signature_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // email_signature_dto->seo_key_words
    cJSON *seo_key_words = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "seoKeyWords");
    if (seo_key_words) { 
    if(!cJSON_IsString(seo_key_words) && !cJSON_IsNull(seo_key_words))
    {
    goto end; //String
    }
    }

    // email_signature_dto->seo_key_phrases
    cJSON *seo_key_phrases = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "seoKeyPhrases");
    if (seo_key_phrases) { 
    if(!cJSON_IsString(seo_key_phrases) && !cJSON_IsNull(seo_key_phrases))
    {
    goto end; //String
    }
    }

    // email_signature_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // email_signature_dto->twitter_image
    cJSON *twitter_image = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "twitterImage");
    if (twitter_image) { 
    if(!cJSON_IsString(twitter_image) && !cJSON_IsNull(twitter_image))
    {
    goto end; //String
    }
    }

    // email_signature_dto->twitter_title
    cJSON *twitter_title = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "twitterTitle");
    if (twitter_title) { 
    if(!cJSON_IsString(twitter_title) && !cJSON_IsNull(twitter_title))
    {
    goto end; //String
    }
    }

    // email_signature_dto->twitter_description
    cJSON *twitter_description = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "twitterDescription");
    if (twitter_description) { 
    if(!cJSON_IsString(twitter_description) && !cJSON_IsNull(twitter_description))
    {
    goto end; //String
    }
    }

    // email_signature_dto->facebook_image
    cJSON *facebook_image = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "facebookImage");
    if (facebook_image) { 
    if(!cJSON_IsString(facebook_image) && !cJSON_IsNull(facebook_image))
    {
    goto end; //String
    }
    }

    // email_signature_dto->facebook_title
    cJSON *facebook_title = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "facebookTitle");
    if (facebook_title) { 
    if(!cJSON_IsString(facebook_title) && !cJSON_IsNull(facebook_title))
    {
    goto end; //String
    }
    }

    // email_signature_dto->facebook_description
    cJSON *facebook_description = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "facebookDescription");
    if (facebook_description) { 
    if(!cJSON_IsString(facebook_description) && !cJSON_IsNull(facebook_description))
    {
    goto end; //String
    }
    }

    // email_signature_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // email_signature_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // email_signature_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // email_signature_dto->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // email_signature_dto->type_name
    cJSON *type_name = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "typeName");
    if (type_name) { 
    if(!cJSON_IsString(type_name) && !cJSON_IsNull(type_name))
    {
    goto end; //String
    }
    }

    // email_signature_dto->generated_code
    cJSON *generated_code = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "generatedCode");
    if (generated_code) { 
    if(!cJSON_IsString(generated_code) && !cJSON_IsNull(generated_code))
    {
    goto end; //String
    }
    }

    // email_signature_dto->compilation_path
    cJSON *compilation_path = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "compilationPath");
    if (compilation_path) { 
    if(!cJSON_IsString(compilation_path) && !cJSON_IsNull(compilation_path))
    {
    goto end; //String
    }
    }

    // email_signature_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // email_signature_dto->c_sharp_content
    cJSON *c_sharp_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "cSharpContent");
    if (c_sharp_content) { 
    if(!cJSON_IsString(c_sharp_content) && !cJSON_IsNull(c_sharp_content))
    {
    goto end; //String
    }
    }

    // email_signature_dto->razor_content
    cJSON *razor_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "razorContent");
    if (razor_content) { 
    if(!cJSON_IsString(razor_content) && !cJSON_IsNull(razor_content))
    {
    goto end; //String
    }
    }

    // email_signature_dto->css_content
    cJSON *css_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "cssContent");
    if (css_content) { 
    if(!cJSON_IsString(css_content) && !cJSON_IsNull(css_content))
    {
    goto end; //String
    }
    }

    // email_signature_dto->js_content
    cJSON *js_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "jsContent");
    if (js_content) { 
    if(!cJSON_IsString(js_content) && !cJSON_IsNull(js_content))
    {
    goto end; //String
    }
    }

    // email_signature_dto->css_files
    cJSON *css_files = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "cssFiles");
    if (css_files) { 
    if(!cJSON_IsString(css_files) && !cJSON_IsNull(css_files))
    {
    goto end; //String
    }
    }

    // email_signature_dto->js_files
    cJSON *js_files = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "jsFiles");
    if (js_files) { 
    if(!cJSON_IsString(js_files) && !cJSON_IsNull(js_files))
    {
    goto end; //String
    }
    }

    // email_signature_dto->razor_generated_code
    cJSON *razor_generated_code = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "razorGeneratedCode");
    if (razor_generated_code) { 
    if(!cJSON_IsString(razor_generated_code) && !cJSON_IsNull(razor_generated_code))
    {
    goto end; //String
    }
    }

    // email_signature_dto->c_sharp_generated_code
    cJSON *c_sharp_generated_code = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "cSharpGeneratedCode");
    if (c_sharp_generated_code) { 
    if(!cJSON_IsString(c_sharp_generated_code) && !cJSON_IsNull(c_sharp_generated_code))
    {
    goto end; //String
    }
    }

    // email_signature_dto->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "template");
    if (_template) { 
    if(!cJSON_IsBool(_template))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "default");
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->enable_comments
    cJSON *enable_comments = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "enableComments");
    if (enable_comments) { 
    if(!cJSON_IsBool(enable_comments))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->display_social_box
    cJSON *display_social_box = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "displaySocialBox");
    if (display_social_box) { 
    if(!cJSON_IsBool(display_social_box))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->in_trash_can
    cJSON *in_trash_can = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "inTrashCan");
    if (in_trash_can) { 
    if(!cJSON_IsBool(in_trash_can))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->system_locked
    cJSON *system_locked = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "systemLocked");
    if (system_locked) { 
    if(!cJSON_IsBool(system_locked))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->allow_ping_backs
    cJSON *allow_ping_backs = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "allowPingBacks");
    if (allow_ping_backs) { 
    if(!cJSON_IsBool(allow_ping_backs))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->allow_trackbacks
    cJSON *allow_trackbacks = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "allowTrackbacks");
    if (allow_trackbacks) { 
    if(!cJSON_IsBool(allow_trackbacks))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->cornerstone_content
    cJSON *cornerstone_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "cornerstoneContent");
    if (cornerstone_content) { 
    if(!cJSON_IsBool(cornerstone_content))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->is_essential_content
    cJSON *is_essential_content = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "isEssentialContent");
    if (is_essential_content) { 
    if(!cJSON_IsBool(is_essential_content))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->allow_search_engine_indexing
    cJSON *allow_search_engine_indexing = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "allowSearchEngineIndexing");
    if (allow_search_engine_indexing) { 
    if(!cJSON_IsBool(allow_search_engine_indexing))
    {
    goto end; //Bool
    }
    }

    // email_signature_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "webPortalId");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->website_theme_id
    cJSON *website_theme_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "websiteThemeId");
    if (website_theme_id) { 
    if(!cJSON_IsString(website_theme_id) && !cJSON_IsNull(website_theme_id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->parent_web_content_id
    cJSON *parent_web_content_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "parentWebContentId");
    if (parent_web_content_id) { 
    if(!cJSON_IsString(parent_web_content_id) && !cJSON_IsNull(parent_web_content_id))
    {
    goto end; //String
    }
    }

    // email_signature_dto->parent_web_content_version_id
    cJSON *parent_web_content_version_id = cJSON_GetObjectItemCaseSensitive(email_signature_dtoJSON, "parentWebContentVersionId");
    if (parent_web_content_version_id) { 
    if(!cJSON_IsString(parent_web_content_version_id) && !cJSON_IsNull(parent_web_content_version_id))
    {
    goto end; //String
    }
    }


    email_signature_dto_local_var = email_signature_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code_type ? code_typeVariable : marketingservice_email_signature_dto_CODETYPE_NULL,
        order ? order->valuedouble : 0,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        excerpt && !cJSON_IsNull(excerpt) ? strdup(excerpt->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        highlight_image && !cJSON_IsNull(highlight_image) ? strdup(highlight_image->valuestring) : NULL,
        canonical_url && !cJSON_IsNull(canonical_url) ? strdup(canonical_url->valuestring) : NULL,
        emit_result ? emit_result_local_nonprim : NULL,
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
        c_sharp_content && !cJSON_IsNull(c_sharp_content) ? strdup(c_sharp_content->valuestring) : NULL,
        razor_content && !cJSON_IsNull(razor_content) ? strdup(razor_content->valuestring) : NULL,
        css_content && !cJSON_IsNull(css_content) ? strdup(css_content->valuestring) : NULL,
        js_content && !cJSON_IsNull(js_content) ? strdup(js_content->valuestring) : NULL,
        css_files && !cJSON_IsNull(css_files) ? strdup(css_files->valuestring) : NULL,
        js_files && !cJSON_IsNull(js_files) ? strdup(js_files->valuestring) : NULL,
        razor_generated_code && !cJSON_IsNull(razor_generated_code) ? strdup(razor_generated_code->valuestring) : NULL,
        c_sharp_generated_code && !cJSON_IsNull(c_sharp_generated_code) ? strdup(c_sharp_generated_code->valuestring) : NULL,
        _template ? _template->valueint : 0,
        _default ? _default->valueint : 0,
        enable ? enable->valueint : 0,
        enable_comments ? enable_comments->valueint : 0,
        display_social_box ? display_social_box->valueint : 0,
        published ? published->valueint : 0,
        in_trash_can ? in_trash_can->valueint : 0,
        system_locked ? system_locked->valueint : 0,
        allow_ping_backs ? allow_ping_backs->valueint : 0,
        allow_trackbacks ? allow_trackbacks->valueint : 0,
        cornerstone_content ? cornerstone_content->valueint : 0,
        is_essential_content ? is_essential_content->valueint : 0,
        allow_search_engine_indexing ? allow_search_engine_indexing->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        web_portal_id && !cJSON_IsNull(web_portal_id) ? strdup(web_portal_id->valuestring) : NULL,
        website_theme_id && !cJSON_IsNull(website_theme_id) ? strdup(website_theme_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        parent_web_content_id && !cJSON_IsNull(parent_web_content_id) ? strdup(parent_web_content_id->valuestring) : NULL,
        parent_web_content_version_id && !cJSON_IsNull(parent_web_content_version_id) ? strdup(parent_web_content_version_id->valuestring) : NULL
        );

    return email_signature_dto_local_var;
end:
    if (emit_result_local_nonprim) {
        _free(emit_result_local_nonprim);
        emit_result_local_nonprim = NULL;
    }
    return NULL;

}
