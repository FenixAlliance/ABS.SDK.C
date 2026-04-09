#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_post_update_dto.h"


char* blog_post_update_dto_code_type_ToString(contentservice_blog_post_update_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    return code_typeArray[code_type];
}

contentservice_blog_post_update_dto_CODETYPE_e blog_post_update_dto_code_type_FromString(char* code_type){
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

blog_post_update_dto_t *blog_post_update_dto_create(
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
    contentservice_blog_post_update_dto_CODETYPE_e code_type,
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
    int allow_search_engine_indexing
    ) {
    blog_post_update_dto_t *blog_post_update_dto_local_var = malloc(sizeof(blog_post_update_dto_t));
    if (!blog_post_update_dto_local_var) {
        return NULL;
    }
    blog_post_update_dto_local_var->order = order;
    blog_post_update_dto_local_var->slug = slug;
    blog_post_update_dto_local_var->name = name;
    blog_post_update_dto_local_var->title = title;
    blog_post_update_dto_local_var->excerpt = excerpt;
    blog_post_update_dto_local_var->password = password;
    blog_post_update_dto_local_var->description = description;
    blog_post_update_dto_local_var->highlight_image = highlight_image;
    blog_post_update_dto_local_var->canonical_url = canonical_url;
    blog_post_update_dto_local_var->seo_title = seo_title;
    blog_post_update_dto_local_var->seo_key_words = seo_key_words;
    blog_post_update_dto_local_var->seo_key_phrases = seo_key_phrases;
    blog_post_update_dto_local_var->meta_description = meta_description;
    blog_post_update_dto_local_var->twitter_image = twitter_image;
    blog_post_update_dto_local_var->twitter_title = twitter_title;
    blog_post_update_dto_local_var->twitter_description = twitter_description;
    blog_post_update_dto_local_var->facebook_image = facebook_image;
    blog_post_update_dto_local_var->facebook_title = facebook_title;
    blog_post_update_dto_local_var->facebook_description = facebook_description;
    blog_post_update_dto_local_var->featured_image_url = featured_image_url;
    blog_post_update_dto_local_var->content = content;
    blog_post_update_dto_local_var->code = code;
    blog_post_update_dto_local_var->_namespace = _namespace;
    blog_post_update_dto_local_var->type_name = type_name;
    blog_post_update_dto_local_var->generated_code = generated_code;
    blog_post_update_dto_local_var->compilation_path = compilation_path;
    blog_post_update_dto_local_var->html_content = html_content;
    blog_post_update_dto_local_var->code_type = code_type;
    blog_post_update_dto_local_var->c_sharp_content = c_sharp_content;
    blog_post_update_dto_local_var->razor_content = razor_content;
    blog_post_update_dto_local_var->css_content = css_content;
    blog_post_update_dto_local_var->js_content = js_content;
    blog_post_update_dto_local_var->css_files = css_files;
    blog_post_update_dto_local_var->js_files = js_files;
    blog_post_update_dto_local_var->razor_generated_code = razor_generated_code;
    blog_post_update_dto_local_var->c_sharp_generated_code = c_sharp_generated_code;
    blog_post_update_dto_local_var->precompiled_logic_size = precompiled_logic_size;
    blog_post_update_dto_local_var->precompiled_logic_size_long = precompiled_logic_size_long;
    blog_post_update_dto_local_var->precompiled_view_size = precompiled_view_size;
    blog_post_update_dto_local_var->precompiled_view_size_long = precompiled_view_size_long;
    blog_post_update_dto_local_var->precompiled_logic_view_size = precompiled_logic_view_size;
    blog_post_update_dto_local_var->_template = _template;
    blog_post_update_dto_local_var->_default = _default;
    blog_post_update_dto_local_var->enable = enable;
    blog_post_update_dto_local_var->enable_comments = enable_comments;
    blog_post_update_dto_local_var->display_social_box = display_social_box;
    blog_post_update_dto_local_var->published = published;
    blog_post_update_dto_local_var->in_trash_can = in_trash_can;
    blog_post_update_dto_local_var->system_locked = system_locked;
    blog_post_update_dto_local_var->allow_pingbacks = allow_pingbacks;
    blog_post_update_dto_local_var->allow_trackbacks = allow_trackbacks;
    blog_post_update_dto_local_var->cornerstone_content = cornerstone_content;
    blog_post_update_dto_local_var->is_essential_content = is_essential_content;
    blog_post_update_dto_local_var->allow_search_engine_indexing = allow_search_engine_indexing;

    return blog_post_update_dto_local_var;
}


void blog_post_update_dto_free(blog_post_update_dto_t *blog_post_update_dto) {
    if(NULL == blog_post_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_post_update_dto->slug) {
        free(blog_post_update_dto->slug);
        blog_post_update_dto->slug = NULL;
    }
    if (blog_post_update_dto->name) {
        free(blog_post_update_dto->name);
        blog_post_update_dto->name = NULL;
    }
    if (blog_post_update_dto->title) {
        free(blog_post_update_dto->title);
        blog_post_update_dto->title = NULL;
    }
    if (blog_post_update_dto->excerpt) {
        free(blog_post_update_dto->excerpt);
        blog_post_update_dto->excerpt = NULL;
    }
    if (blog_post_update_dto->password) {
        free(blog_post_update_dto->password);
        blog_post_update_dto->password = NULL;
    }
    if (blog_post_update_dto->description) {
        free(blog_post_update_dto->description);
        blog_post_update_dto->description = NULL;
    }
    if (blog_post_update_dto->highlight_image) {
        free(blog_post_update_dto->highlight_image);
        blog_post_update_dto->highlight_image = NULL;
    }
    if (blog_post_update_dto->canonical_url) {
        free(blog_post_update_dto->canonical_url);
        blog_post_update_dto->canonical_url = NULL;
    }
    if (blog_post_update_dto->seo_title) {
        free(blog_post_update_dto->seo_title);
        blog_post_update_dto->seo_title = NULL;
    }
    if (blog_post_update_dto->seo_key_words) {
        free(blog_post_update_dto->seo_key_words);
        blog_post_update_dto->seo_key_words = NULL;
    }
    if (blog_post_update_dto->seo_key_phrases) {
        free(blog_post_update_dto->seo_key_phrases);
        blog_post_update_dto->seo_key_phrases = NULL;
    }
    if (blog_post_update_dto->meta_description) {
        free(blog_post_update_dto->meta_description);
        blog_post_update_dto->meta_description = NULL;
    }
    if (blog_post_update_dto->twitter_image) {
        free(blog_post_update_dto->twitter_image);
        blog_post_update_dto->twitter_image = NULL;
    }
    if (blog_post_update_dto->twitter_title) {
        free(blog_post_update_dto->twitter_title);
        blog_post_update_dto->twitter_title = NULL;
    }
    if (blog_post_update_dto->twitter_description) {
        free(blog_post_update_dto->twitter_description);
        blog_post_update_dto->twitter_description = NULL;
    }
    if (blog_post_update_dto->facebook_image) {
        free(blog_post_update_dto->facebook_image);
        blog_post_update_dto->facebook_image = NULL;
    }
    if (blog_post_update_dto->facebook_title) {
        free(blog_post_update_dto->facebook_title);
        blog_post_update_dto->facebook_title = NULL;
    }
    if (blog_post_update_dto->facebook_description) {
        free(blog_post_update_dto->facebook_description);
        blog_post_update_dto->facebook_description = NULL;
    }
    if (blog_post_update_dto->featured_image_url) {
        free(blog_post_update_dto->featured_image_url);
        blog_post_update_dto->featured_image_url = NULL;
    }
    if (blog_post_update_dto->content) {
        free(blog_post_update_dto->content);
        blog_post_update_dto->content = NULL;
    }
    if (blog_post_update_dto->code) {
        free(blog_post_update_dto->code);
        blog_post_update_dto->code = NULL;
    }
    if (blog_post_update_dto->_namespace) {
        free(blog_post_update_dto->_namespace);
        blog_post_update_dto->_namespace = NULL;
    }
    if (blog_post_update_dto->type_name) {
        free(blog_post_update_dto->type_name);
        blog_post_update_dto->type_name = NULL;
    }
    if (blog_post_update_dto->generated_code) {
        free(blog_post_update_dto->generated_code);
        blog_post_update_dto->generated_code = NULL;
    }
    if (blog_post_update_dto->compilation_path) {
        free(blog_post_update_dto->compilation_path);
        blog_post_update_dto->compilation_path = NULL;
    }
    if (blog_post_update_dto->html_content) {
        free(blog_post_update_dto->html_content);
        blog_post_update_dto->html_content = NULL;
    }
    if (blog_post_update_dto->c_sharp_content) {
        free(blog_post_update_dto->c_sharp_content);
        blog_post_update_dto->c_sharp_content = NULL;
    }
    if (blog_post_update_dto->razor_content) {
        free(blog_post_update_dto->razor_content);
        blog_post_update_dto->razor_content = NULL;
    }
    if (blog_post_update_dto->css_content) {
        free(blog_post_update_dto->css_content);
        blog_post_update_dto->css_content = NULL;
    }
    if (blog_post_update_dto->js_content) {
        free(blog_post_update_dto->js_content);
        blog_post_update_dto->js_content = NULL;
    }
    if (blog_post_update_dto->css_files) {
        free(blog_post_update_dto->css_files);
        blog_post_update_dto->css_files = NULL;
    }
    if (blog_post_update_dto->js_files) {
        free(blog_post_update_dto->js_files);
        blog_post_update_dto->js_files = NULL;
    }
    if (blog_post_update_dto->razor_generated_code) {
        free(blog_post_update_dto->razor_generated_code);
        blog_post_update_dto->razor_generated_code = NULL;
    }
    if (blog_post_update_dto->c_sharp_generated_code) {
        free(blog_post_update_dto->c_sharp_generated_code);
        blog_post_update_dto->c_sharp_generated_code = NULL;
    }
    free(blog_post_update_dto);
}

cJSON *blog_post_update_dto_convertToJSON(blog_post_update_dto_t *blog_post_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // blog_post_update_dto->order
    if(blog_post_update_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", blog_post_update_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_update_dto->slug
    if(blog_post_update_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", blog_post_update_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->name
    if(blog_post_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", blog_post_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->title
    if(blog_post_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", blog_post_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->excerpt
    if(blog_post_update_dto->excerpt) {
    if(cJSON_AddStringToObject(item, "excerpt", blog_post_update_dto->excerpt) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->password
    if(blog_post_update_dto->password) {
    if(cJSON_AddStringToObject(item, "password", blog_post_update_dto->password) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->description
    if(blog_post_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", blog_post_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->highlight_image
    if(blog_post_update_dto->highlight_image) {
    if(cJSON_AddStringToObject(item, "highlightImage", blog_post_update_dto->highlight_image) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->canonical_url
    if(blog_post_update_dto->canonical_url) {
    if(cJSON_AddStringToObject(item, "canonicalUrl", blog_post_update_dto->canonical_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->seo_title
    if(blog_post_update_dto->seo_title) {
    if(cJSON_AddStringToObject(item, "seoTitle", blog_post_update_dto->seo_title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->seo_key_words
    if(blog_post_update_dto->seo_key_words) {
    if(cJSON_AddStringToObject(item, "seoKeyWords", blog_post_update_dto->seo_key_words) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->seo_key_phrases
    if(blog_post_update_dto->seo_key_phrases) {
    if(cJSON_AddStringToObject(item, "seoKeyPhrases", blog_post_update_dto->seo_key_phrases) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->meta_description
    if(blog_post_update_dto->meta_description) {
    if(cJSON_AddStringToObject(item, "metaDescription", blog_post_update_dto->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->twitter_image
    if(blog_post_update_dto->twitter_image) {
    if(cJSON_AddStringToObject(item, "twitterImage", blog_post_update_dto->twitter_image) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->twitter_title
    if(blog_post_update_dto->twitter_title) {
    if(cJSON_AddStringToObject(item, "twitterTitle", blog_post_update_dto->twitter_title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->twitter_description
    if(blog_post_update_dto->twitter_description) {
    if(cJSON_AddStringToObject(item, "twitterDescription", blog_post_update_dto->twitter_description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->facebook_image
    if(blog_post_update_dto->facebook_image) {
    if(cJSON_AddStringToObject(item, "facebookImage", blog_post_update_dto->facebook_image) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->facebook_title
    if(blog_post_update_dto->facebook_title) {
    if(cJSON_AddStringToObject(item, "facebookTitle", blog_post_update_dto->facebook_title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->facebook_description
    if(blog_post_update_dto->facebook_description) {
    if(cJSON_AddStringToObject(item, "facebookDescription", blog_post_update_dto->facebook_description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->featured_image_url
    if(blog_post_update_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", blog_post_update_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->content
    if(blog_post_update_dto->content) {
    if(cJSON_AddStringToObject(item, "content", blog_post_update_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->code
    if(blog_post_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", blog_post_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->_namespace
    if(blog_post_update_dto->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", blog_post_update_dto->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->type_name
    if(blog_post_update_dto->type_name) {
    if(cJSON_AddStringToObject(item, "typeName", blog_post_update_dto->type_name) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->generated_code
    if(blog_post_update_dto->generated_code) {
    if(cJSON_AddStringToObject(item, "generatedCode", blog_post_update_dto->generated_code) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->compilation_path
    if(blog_post_update_dto->compilation_path) {
    if(cJSON_AddStringToObject(item, "compilationPath", blog_post_update_dto->compilation_path) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->html_content
    if(blog_post_update_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", blog_post_update_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->code_type
    if(blog_post_update_dto->code_type != contentservice_blog_post_update_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeblog_post_update_dto_ToString(blog_post_update_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // blog_post_update_dto->c_sharp_content
    if(blog_post_update_dto->c_sharp_content) {
    if(cJSON_AddStringToObject(item, "cSharpContent", blog_post_update_dto->c_sharp_content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->razor_content
    if(blog_post_update_dto->razor_content) {
    if(cJSON_AddStringToObject(item, "razorContent", blog_post_update_dto->razor_content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->css_content
    if(blog_post_update_dto->css_content) {
    if(cJSON_AddStringToObject(item, "cssContent", blog_post_update_dto->css_content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->js_content
    if(blog_post_update_dto->js_content) {
    if(cJSON_AddStringToObject(item, "jsContent", blog_post_update_dto->js_content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->css_files
    if(blog_post_update_dto->css_files) {
    if(cJSON_AddStringToObject(item, "cssFiles", blog_post_update_dto->css_files) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->js_files
    if(blog_post_update_dto->js_files) {
    if(cJSON_AddStringToObject(item, "jsFiles", blog_post_update_dto->js_files) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->razor_generated_code
    if(blog_post_update_dto->razor_generated_code) {
    if(cJSON_AddStringToObject(item, "razorGeneratedCode", blog_post_update_dto->razor_generated_code) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->c_sharp_generated_code
    if(blog_post_update_dto->c_sharp_generated_code) {
    if(cJSON_AddStringToObject(item, "cSharpGeneratedCode", blog_post_update_dto->c_sharp_generated_code) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_update_dto->precompiled_logic_size
    if(blog_post_update_dto->precompiled_logic_size) {
    if(cJSON_AddNumberToObject(item, "precompiledLogicSize", blog_post_update_dto->precompiled_logic_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_update_dto->precompiled_logic_size_long
    if(blog_post_update_dto->precompiled_logic_size_long) {
    if(cJSON_AddNumberToObject(item, "precompiledLogicSizeLong", blog_post_update_dto->precompiled_logic_size_long) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_update_dto->precompiled_view_size
    if(blog_post_update_dto->precompiled_view_size) {
    if(cJSON_AddNumberToObject(item, "precompiledViewSize", blog_post_update_dto->precompiled_view_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_update_dto->precompiled_view_size_long
    if(blog_post_update_dto->precompiled_view_size_long) {
    if(cJSON_AddNumberToObject(item, "precompiledViewSizeLong", blog_post_update_dto->precompiled_view_size_long) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_update_dto->precompiled_logic_view_size
    if(blog_post_update_dto->precompiled_logic_view_size) {
    if(cJSON_AddNumberToObject(item, "precompiledLogicViewSize", blog_post_update_dto->precompiled_logic_view_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_post_update_dto->_template
    if(blog_post_update_dto->_template) {
    if(cJSON_AddBoolToObject(item, "template", blog_post_update_dto->_template) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->_default
    if(blog_post_update_dto->_default) {
    if(cJSON_AddBoolToObject(item, "default", blog_post_update_dto->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->enable
    if(blog_post_update_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", blog_post_update_dto->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->enable_comments
    if(blog_post_update_dto->enable_comments) {
    if(cJSON_AddBoolToObject(item, "enableComments", blog_post_update_dto->enable_comments) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->display_social_box
    if(blog_post_update_dto->display_social_box) {
    if(cJSON_AddBoolToObject(item, "displaySocialBox", blog_post_update_dto->display_social_box) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->published
    if(blog_post_update_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", blog_post_update_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->in_trash_can
    if(blog_post_update_dto->in_trash_can) {
    if(cJSON_AddBoolToObject(item, "inTrashCan", blog_post_update_dto->in_trash_can) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->system_locked
    if(blog_post_update_dto->system_locked) {
    if(cJSON_AddBoolToObject(item, "systemLocked", blog_post_update_dto->system_locked) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->allow_pingbacks
    if(blog_post_update_dto->allow_pingbacks) {
    if(cJSON_AddBoolToObject(item, "allowPingbacks", blog_post_update_dto->allow_pingbacks) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->allow_trackbacks
    if(blog_post_update_dto->allow_trackbacks) {
    if(cJSON_AddBoolToObject(item, "allowTrackbacks", blog_post_update_dto->allow_trackbacks) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->cornerstone_content
    if(blog_post_update_dto->cornerstone_content) {
    if(cJSON_AddBoolToObject(item, "cornerstoneContent", blog_post_update_dto->cornerstone_content) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->is_essential_content
    if(blog_post_update_dto->is_essential_content) {
    if(cJSON_AddBoolToObject(item, "isEssentialContent", blog_post_update_dto->is_essential_content) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_update_dto->allow_search_engine_indexing
    if(blog_post_update_dto->allow_search_engine_indexing) {
    if(cJSON_AddBoolToObject(item, "allowSearchEngineIndexing", blog_post_update_dto->allow_search_engine_indexing) == NULL) {
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

blog_post_update_dto_t *blog_post_update_dto_parseFromJSON(cJSON *blog_post_update_dtoJSON){

    blog_post_update_dto_t *blog_post_update_dto_local_var = NULL;

    // blog_post_update_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // blog_post_update_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->excerpt
    cJSON *excerpt = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "excerpt");
    if (excerpt) { 
    if(!cJSON_IsString(excerpt) && !cJSON_IsNull(excerpt))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "password");
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->highlight_image
    cJSON *highlight_image = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "highlightImage");
    if (highlight_image) { 
    if(!cJSON_IsString(highlight_image) && !cJSON_IsNull(highlight_image))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->canonical_url
    cJSON *canonical_url = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "canonicalUrl");
    if (canonical_url) { 
    if(!cJSON_IsString(canonical_url) && !cJSON_IsNull(canonical_url))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->seo_title
    cJSON *seo_title = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "seoTitle");
    if (seo_title) { 
    if(!cJSON_IsString(seo_title) && !cJSON_IsNull(seo_title))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->seo_key_words
    cJSON *seo_key_words = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "seoKeyWords");
    if (seo_key_words) { 
    if(!cJSON_IsString(seo_key_words) && !cJSON_IsNull(seo_key_words))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->seo_key_phrases
    cJSON *seo_key_phrases = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "seoKeyPhrases");
    if (seo_key_phrases) { 
    if(!cJSON_IsString(seo_key_phrases) && !cJSON_IsNull(seo_key_phrases))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "metaDescription");
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->twitter_image
    cJSON *twitter_image = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "twitterImage");
    if (twitter_image) { 
    if(!cJSON_IsString(twitter_image) && !cJSON_IsNull(twitter_image))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->twitter_title
    cJSON *twitter_title = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "twitterTitle");
    if (twitter_title) { 
    if(!cJSON_IsString(twitter_title) && !cJSON_IsNull(twitter_title))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->twitter_description
    cJSON *twitter_description = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "twitterDescription");
    if (twitter_description) { 
    if(!cJSON_IsString(twitter_description) && !cJSON_IsNull(twitter_description))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->facebook_image
    cJSON *facebook_image = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "facebookImage");
    if (facebook_image) { 
    if(!cJSON_IsString(facebook_image) && !cJSON_IsNull(facebook_image))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->facebook_title
    cJSON *facebook_title = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "facebookTitle");
    if (facebook_title) { 
    if(!cJSON_IsString(facebook_title) && !cJSON_IsNull(facebook_title))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->facebook_description
    cJSON *facebook_description = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "facebookDescription");
    if (facebook_description) { 
    if(!cJSON_IsString(facebook_description) && !cJSON_IsNull(facebook_description))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->type_name
    cJSON *type_name = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "typeName");
    if (type_name) { 
    if(!cJSON_IsString(type_name) && !cJSON_IsNull(type_name))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->generated_code
    cJSON *generated_code = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "generatedCode");
    if (generated_code) { 
    if(!cJSON_IsString(generated_code) && !cJSON_IsNull(generated_code))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->compilation_path
    cJSON *compilation_path = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "compilationPath");
    if (compilation_path) { 
    if(!cJSON_IsString(compilation_path) && !cJSON_IsNull(compilation_path))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "codeType");
    contentservice_blog_post_update_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = blog_post_update_dto_code_type_FromString(code_type->valuestring);
    }

    // blog_post_update_dto->c_sharp_content
    cJSON *c_sharp_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "cSharpContent");
    if (c_sharp_content) { 
    if(!cJSON_IsString(c_sharp_content) && !cJSON_IsNull(c_sharp_content))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->razor_content
    cJSON *razor_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "razorContent");
    if (razor_content) { 
    if(!cJSON_IsString(razor_content) && !cJSON_IsNull(razor_content))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->css_content
    cJSON *css_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "cssContent");
    if (css_content) { 
    if(!cJSON_IsString(css_content) && !cJSON_IsNull(css_content))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->js_content
    cJSON *js_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "jsContent");
    if (js_content) { 
    if(!cJSON_IsString(js_content) && !cJSON_IsNull(js_content))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->css_files
    cJSON *css_files = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "cssFiles");
    if (css_files) { 
    if(!cJSON_IsString(css_files) && !cJSON_IsNull(css_files))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->js_files
    cJSON *js_files = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "jsFiles");
    if (js_files) { 
    if(!cJSON_IsString(js_files) && !cJSON_IsNull(js_files))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->razor_generated_code
    cJSON *razor_generated_code = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "razorGeneratedCode");
    if (razor_generated_code) { 
    if(!cJSON_IsString(razor_generated_code) && !cJSON_IsNull(razor_generated_code))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->c_sharp_generated_code
    cJSON *c_sharp_generated_code = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "cSharpGeneratedCode");
    if (c_sharp_generated_code) { 
    if(!cJSON_IsString(c_sharp_generated_code) && !cJSON_IsNull(c_sharp_generated_code))
    {
    goto end; //String
    }
    }

    // blog_post_update_dto->precompiled_logic_size
    cJSON *precompiled_logic_size = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "precompiledLogicSize");
    if (precompiled_logic_size) { 
    if(!cJSON_IsNumber(precompiled_logic_size))
    {
    goto end; //Numeric
    }
    }

    // blog_post_update_dto->precompiled_logic_size_long
    cJSON *precompiled_logic_size_long = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "precompiledLogicSizeLong");
    if (precompiled_logic_size_long) { 
    if(!cJSON_IsNumber(precompiled_logic_size_long))
    {
    goto end; //Numeric
    }
    }

    // blog_post_update_dto->precompiled_view_size
    cJSON *precompiled_view_size = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "precompiledViewSize");
    if (precompiled_view_size) { 
    if(!cJSON_IsNumber(precompiled_view_size))
    {
    goto end; //Numeric
    }
    }

    // blog_post_update_dto->precompiled_view_size_long
    cJSON *precompiled_view_size_long = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "precompiledViewSizeLong");
    if (precompiled_view_size_long) { 
    if(!cJSON_IsNumber(precompiled_view_size_long))
    {
    goto end; //Numeric
    }
    }

    // blog_post_update_dto->precompiled_logic_view_size
    cJSON *precompiled_logic_view_size = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "precompiledLogicViewSize");
    if (precompiled_logic_view_size) { 
    if(!cJSON_IsNumber(precompiled_logic_view_size))
    {
    goto end; //Numeric
    }
    }

    // blog_post_update_dto->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "template");
    if (_template) { 
    if(!cJSON_IsBool(_template))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "default");
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->enable_comments
    cJSON *enable_comments = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "enableComments");
    if (enable_comments) { 
    if(!cJSON_IsBool(enable_comments))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->display_social_box
    cJSON *display_social_box = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "displaySocialBox");
    if (display_social_box) { 
    if(!cJSON_IsBool(display_social_box))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->in_trash_can
    cJSON *in_trash_can = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "inTrashCan");
    if (in_trash_can) { 
    if(!cJSON_IsBool(in_trash_can))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->system_locked
    cJSON *system_locked = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "systemLocked");
    if (system_locked) { 
    if(!cJSON_IsBool(system_locked))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->allow_pingbacks
    cJSON *allow_pingbacks = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "allowPingbacks");
    if (allow_pingbacks) { 
    if(!cJSON_IsBool(allow_pingbacks))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->allow_trackbacks
    cJSON *allow_trackbacks = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "allowTrackbacks");
    if (allow_trackbacks) { 
    if(!cJSON_IsBool(allow_trackbacks))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->cornerstone_content
    cJSON *cornerstone_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "cornerstoneContent");
    if (cornerstone_content) { 
    if(!cJSON_IsBool(cornerstone_content))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->is_essential_content
    cJSON *is_essential_content = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "isEssentialContent");
    if (is_essential_content) { 
    if(!cJSON_IsBool(is_essential_content))
    {
    goto end; //Bool
    }
    }

    // blog_post_update_dto->allow_search_engine_indexing
    cJSON *allow_search_engine_indexing = cJSON_GetObjectItemCaseSensitive(blog_post_update_dtoJSON, "allowSearchEngineIndexing");
    if (allow_search_engine_indexing) { 
    if(!cJSON_IsBool(allow_search_engine_indexing))
    {
    goto end; //Bool
    }
    }


    blog_post_update_dto_local_var = blog_post_update_dto_create (
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
        code_type ? code_typeVariable : contentservice_blog_post_update_dto_CODETYPE_NULL,
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
        allow_search_engine_indexing ? allow_search_engine_indexing->valueint : 0
        );

    return blog_post_update_dto_local_var;
end:
    return NULL;

}
