#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "portal_options.h"


char* portal_options_portal_ui_engine_ToString(contentservice_portal_options_PORTALUIENGINE_e portal_ui_engine) {
    char* portal_ui_engineArray[] =  { "NULL", "Angular", "React", "Razor" };
    return portal_ui_engineArray[portal_ui_engine];
}

contentservice_portal_options_PORTALUIENGINE_e portal_options_portal_ui_engine_FromString(char* portal_ui_engine){
    int stringToReturn = 0;
    char *portal_ui_engineArray[] =  { "NULL", "Angular", "React", "Razor" };
    size_t sizeofArray = sizeof(portal_ui_engineArray) / sizeof(portal_ui_engineArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(portal_ui_engine, portal_ui_engineArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

portal_options_t *portal_options_create(
    char *title,
    char *description,
    contentservice_portal_options_PORTALUIENGINE_e portal_ui_engine,
    seo_options_t *seo,
    store_options_t *store,
    theming_options_t *theming,
    branding_options_t *branding,
    social_media_options_t *social,
    privacy_options_t *privacy,
    blog_options_t *blog,
    forum_options_t *forums,
    footer_options_t *footer,
    background_options_t *background,
    breadcrumbs_options_t *breadcrumbs,
    contact_options_t *contact,
    color_options_t *color,
    dashboard_options_t *dashboard,
    header_options_t *header,
    title_bar_options_t *title_bar,
    typography_options_t *typography,
    social_media_options_t *social_media,
    sliding_bar_options_t *sliding_bar,
    object_t *slideshow,
    object_t *slider,
    object_t *sidebar,
    object_t *search,
    responsive_options_t *responsive,
    object_t *portfolio,
    object_t *performance,
    object_t *pagination,
    object_t *miscellaneous,
    menu_options_t *menu,
    object_t *grid,
    object_t *mansory,
    object_t *lightbox,
    layout_options_t *layout,
    object_t *code_fields,
    object_t *features,
    object_t *forms,
    integrations_options_t *integrations,
    emails_options_t *emails
    ) {
    portal_options_t *portal_options_local_var = malloc(sizeof(portal_options_t));
    if (!portal_options_local_var) {
        return NULL;
    }
    portal_options_local_var->title = title;
    portal_options_local_var->description = description;
    portal_options_local_var->portal_ui_engine = portal_ui_engine;
    portal_options_local_var->seo = seo;
    portal_options_local_var->store = store;
    portal_options_local_var->theming = theming;
    portal_options_local_var->branding = branding;
    portal_options_local_var->social = social;
    portal_options_local_var->privacy = privacy;
    portal_options_local_var->blog = blog;
    portal_options_local_var->forums = forums;
    portal_options_local_var->footer = footer;
    portal_options_local_var->background = background;
    portal_options_local_var->breadcrumbs = breadcrumbs;
    portal_options_local_var->contact = contact;
    portal_options_local_var->color = color;
    portal_options_local_var->dashboard = dashboard;
    portal_options_local_var->header = header;
    portal_options_local_var->title_bar = title_bar;
    portal_options_local_var->typography = typography;
    portal_options_local_var->social_media = social_media;
    portal_options_local_var->sliding_bar = sliding_bar;
    portal_options_local_var->slideshow = slideshow;
    portal_options_local_var->slider = slider;
    portal_options_local_var->sidebar = sidebar;
    portal_options_local_var->search = search;
    portal_options_local_var->responsive = responsive;
    portal_options_local_var->portfolio = portfolio;
    portal_options_local_var->performance = performance;
    portal_options_local_var->pagination = pagination;
    portal_options_local_var->miscellaneous = miscellaneous;
    portal_options_local_var->menu = menu;
    portal_options_local_var->grid = grid;
    portal_options_local_var->mansory = mansory;
    portal_options_local_var->lightbox = lightbox;
    portal_options_local_var->layout = layout;
    portal_options_local_var->code_fields = code_fields;
    portal_options_local_var->features = features;
    portal_options_local_var->forms = forms;
    portal_options_local_var->integrations = integrations;
    portal_options_local_var->emails = emails;

    return portal_options_local_var;
}


void portal_options_free(portal_options_t *portal_options) {
    if(NULL == portal_options){
        return ;
    }
    listEntry_t *listEntry;
    if (portal_options->title) {
        free(portal_options->title);
        portal_options->title = NULL;
    }
    if (portal_options->description) {
        free(portal_options->description);
        portal_options->description = NULL;
    }
    if (portal_options->seo) {
        seo_options_free(portal_options->seo);
        portal_options->seo = NULL;
    }
    if (portal_options->store) {
        store_options_free(portal_options->store);
        portal_options->store = NULL;
    }
    if (portal_options->theming) {
        theming_options_free(portal_options->theming);
        portal_options->theming = NULL;
    }
    if (portal_options->branding) {
        branding_options_free(portal_options->branding);
        portal_options->branding = NULL;
    }
    if (portal_options->social) {
        social_media_options_free(portal_options->social);
        portal_options->social = NULL;
    }
    if (portal_options->privacy) {
        privacy_options_free(portal_options->privacy);
        portal_options->privacy = NULL;
    }
    if (portal_options->blog) {
        blog_options_free(portal_options->blog);
        portal_options->blog = NULL;
    }
    if (portal_options->forums) {
        forum_options_free(portal_options->forums);
        portal_options->forums = NULL;
    }
    if (portal_options->footer) {
        footer_options_free(portal_options->footer);
        portal_options->footer = NULL;
    }
    if (portal_options->background) {
        background_options_free(portal_options->background);
        portal_options->background = NULL;
    }
    if (portal_options->breadcrumbs) {
        breadcrumbs_options_free(portal_options->breadcrumbs);
        portal_options->breadcrumbs = NULL;
    }
    if (portal_options->contact) {
        contact_options_free(portal_options->contact);
        portal_options->contact = NULL;
    }
    if (portal_options->color) {
        color_options_free(portal_options->color);
        portal_options->color = NULL;
    }
    if (portal_options->dashboard) {
        dashboard_options_free(portal_options->dashboard);
        portal_options->dashboard = NULL;
    }
    if (portal_options->header) {
        header_options_free(portal_options->header);
        portal_options->header = NULL;
    }
    if (portal_options->title_bar) {
        title_bar_options_free(portal_options->title_bar);
        portal_options->title_bar = NULL;
    }
    if (portal_options->typography) {
        typography_options_free(portal_options->typography);
        portal_options->typography = NULL;
    }
    if (portal_options->social_media) {
        social_media_options_free(portal_options->social_media);
        portal_options->social_media = NULL;
    }
    if (portal_options->sliding_bar) {
        sliding_bar_options_free(portal_options->sliding_bar);
        portal_options->sliding_bar = NULL;
    }
    if (portal_options->slideshow) {
        object_free(portal_options->slideshow);
        portal_options->slideshow = NULL;
    }
    if (portal_options->slider) {
        object_free(portal_options->slider);
        portal_options->slider = NULL;
    }
    if (portal_options->sidebar) {
        object_free(portal_options->sidebar);
        portal_options->sidebar = NULL;
    }
    if (portal_options->search) {
        object_free(portal_options->search);
        portal_options->search = NULL;
    }
    if (portal_options->responsive) {
        responsive_options_free(portal_options->responsive);
        portal_options->responsive = NULL;
    }
    if (portal_options->portfolio) {
        object_free(portal_options->portfolio);
        portal_options->portfolio = NULL;
    }
    if (portal_options->performance) {
        object_free(portal_options->performance);
        portal_options->performance = NULL;
    }
    if (portal_options->pagination) {
        object_free(portal_options->pagination);
        portal_options->pagination = NULL;
    }
    if (portal_options->miscellaneous) {
        object_free(portal_options->miscellaneous);
        portal_options->miscellaneous = NULL;
    }
    if (portal_options->menu) {
        menu_options_free(portal_options->menu);
        portal_options->menu = NULL;
    }
    if (portal_options->grid) {
        object_free(portal_options->grid);
        portal_options->grid = NULL;
    }
    if (portal_options->mansory) {
        object_free(portal_options->mansory);
        portal_options->mansory = NULL;
    }
    if (portal_options->lightbox) {
        object_free(portal_options->lightbox);
        portal_options->lightbox = NULL;
    }
    if (portal_options->layout) {
        layout_options_free(portal_options->layout);
        portal_options->layout = NULL;
    }
    if (portal_options->code_fields) {
        object_free(portal_options->code_fields);
        portal_options->code_fields = NULL;
    }
    if (portal_options->features) {
        object_free(portal_options->features);
        portal_options->features = NULL;
    }
    if (portal_options->forms) {
        object_free(portal_options->forms);
        portal_options->forms = NULL;
    }
    if (portal_options->integrations) {
        integrations_options_free(portal_options->integrations);
        portal_options->integrations = NULL;
    }
    if (portal_options->emails) {
        emails_options_free(portal_options->emails);
        portal_options->emails = NULL;
    }
    free(portal_options);
}

cJSON *portal_options_convertToJSON(portal_options_t *portal_options) {
    cJSON *item = cJSON_CreateObject();

    // portal_options->title
    if(portal_options->title) {
    if(cJSON_AddStringToObject(item, "title", portal_options->title) == NULL) {
    goto fail; //String
    }
    }


    // portal_options->description
    if(portal_options->description) {
    if(cJSON_AddStringToObject(item, "description", portal_options->description) == NULL) {
    goto fail; //String
    }
    }


    // portal_options->portal_ui_engine
    if(portal_options->portal_ui_engine != contentservice_portal_options_PORTALUIENGINE_NULL) {
    if(cJSON_AddStringToObject(item, "portalUiEngine", portal_ui_engineportal_options_ToString(portal_options->portal_ui_engine)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // portal_options->seo
    if(portal_options->seo) {
    cJSON *seo_local_JSON = seo_options_convertToJSON(portal_options->seo);
    if(seo_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seo", seo_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->store
    if(portal_options->store) {
    cJSON *store_local_JSON = store_options_convertToJSON(portal_options->store);
    if(store_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "store", store_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->theming
    if(portal_options->theming) {
    cJSON *theming_local_JSON = theming_options_convertToJSON(portal_options->theming);
    if(theming_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "theming", theming_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->branding
    if(portal_options->branding) {
    cJSON *branding_local_JSON = branding_options_convertToJSON(portal_options->branding);
    if(branding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "branding", branding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->social
    if(portal_options->social) {
    cJSON *social_local_JSON = social_media_options_convertToJSON(portal_options->social);
    if(social_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "social", social_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->privacy
    if(portal_options->privacy) {
    cJSON *privacy_local_JSON = privacy_options_convertToJSON(portal_options->privacy);
    if(privacy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "privacy", privacy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->blog
    if(portal_options->blog) {
    cJSON *blog_local_JSON = blog_options_convertToJSON(portal_options->blog);
    if(blog_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "blog", blog_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->forums
    if(portal_options->forums) {
    cJSON *forums_local_JSON = forum_options_convertToJSON(portal_options->forums);
    if(forums_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "forums", forums_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->footer
    if(portal_options->footer) {
    cJSON *footer_local_JSON = footer_options_convertToJSON(portal_options->footer);
    if(footer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "footer", footer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->background
    if(portal_options->background) {
    cJSON *background_local_JSON = background_options_convertToJSON(portal_options->background);
    if(background_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "background", background_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->breadcrumbs
    if(portal_options->breadcrumbs) {
    cJSON *breadcrumbs_local_JSON = breadcrumbs_options_convertToJSON(portal_options->breadcrumbs);
    if(breadcrumbs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "breadcrumbs", breadcrumbs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->contact
    if(portal_options->contact) {
    cJSON *contact_local_JSON = contact_options_convertToJSON(portal_options->contact);
    if(contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contact", contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->color
    if(portal_options->color) {
    cJSON *color_local_JSON = color_options_convertToJSON(portal_options->color);
    if(color_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "color", color_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->dashboard
    if(portal_options->dashboard) {
    cJSON *dashboard_local_JSON = dashboard_options_convertToJSON(portal_options->dashboard);
    if(dashboard_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dashboard", dashboard_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->header
    if(portal_options->header) {
    cJSON *header_local_JSON = header_options_convertToJSON(portal_options->header);
    if(header_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "header", header_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->title_bar
    if(portal_options->title_bar) {
    cJSON *title_bar_local_JSON = title_bar_options_convertToJSON(portal_options->title_bar);
    if(title_bar_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "titleBar", title_bar_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->typography
    if(portal_options->typography) {
    cJSON *typography_local_JSON = typography_options_convertToJSON(portal_options->typography);
    if(typography_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typography", typography_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->social_media
    if(portal_options->social_media) {
    cJSON *social_media_local_JSON = social_media_options_convertToJSON(portal_options->social_media);
    if(social_media_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "socialMedia", social_media_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->sliding_bar
    if(portal_options->sliding_bar) {
    cJSON *sliding_bar_local_JSON = sliding_bar_options_convertToJSON(portal_options->sliding_bar);
    if(sliding_bar_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "slidingBar", sliding_bar_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->slideshow
    if(portal_options->slideshow) {
    cJSON *slideshow_object = object_convertToJSON(portal_options->slideshow);
    if(slideshow_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "slideshow", slideshow_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->slider
    if(portal_options->slider) {
    cJSON *slider_object = object_convertToJSON(portal_options->slider);
    if(slider_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "slider", slider_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->sidebar
    if(portal_options->sidebar) {
    cJSON *sidebar_object = object_convertToJSON(portal_options->sidebar);
    if(sidebar_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sidebar", sidebar_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->search
    if(portal_options->search) {
    cJSON *search_object = object_convertToJSON(portal_options->search);
    if(search_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "search", search_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->responsive
    if(portal_options->responsive) {
    cJSON *responsive_local_JSON = responsive_options_convertToJSON(portal_options->responsive);
    if(responsive_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "responsive", responsive_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->portfolio
    if(portal_options->portfolio) {
    cJSON *portfolio_object = object_convertToJSON(portal_options->portfolio);
    if(portfolio_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portfolio", portfolio_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->performance
    if(portal_options->performance) {
    cJSON *performance_object = object_convertToJSON(portal_options->performance);
    if(performance_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "performance", performance_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->pagination
    if(portal_options->pagination) {
    cJSON *pagination_object = object_convertToJSON(portal_options->pagination);
    if(pagination_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->miscellaneous
    if(portal_options->miscellaneous) {
    cJSON *miscellaneous_object = object_convertToJSON(portal_options->miscellaneous);
    if(miscellaneous_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "miscellaneous", miscellaneous_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->menu
    if(portal_options->menu) {
    cJSON *menu_local_JSON = menu_options_convertToJSON(portal_options->menu);
    if(menu_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "menu", menu_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->grid
    if(portal_options->grid) {
    cJSON *grid_object = object_convertToJSON(portal_options->grid);
    if(grid_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "grid", grid_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->mansory
    if(portal_options->mansory) {
    cJSON *mansory_object = object_convertToJSON(portal_options->mansory);
    if(mansory_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mansory", mansory_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->lightbox
    if(portal_options->lightbox) {
    cJSON *lightbox_object = object_convertToJSON(portal_options->lightbox);
    if(lightbox_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lightbox", lightbox_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->layout
    if(portal_options->layout) {
    cJSON *layout_local_JSON = layout_options_convertToJSON(portal_options->layout);
    if(layout_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "layout", layout_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->code_fields
    if(portal_options->code_fields) {
    cJSON *code_fields_object = object_convertToJSON(portal_options->code_fields);
    if(code_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "codeFields", code_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->features
    if(portal_options->features) {
    cJSON *features_object = object_convertToJSON(portal_options->features);
    if(features_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "features", features_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->forms
    if(portal_options->forms) {
    cJSON *forms_object = object_convertToJSON(portal_options->forms);
    if(forms_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "forms", forms_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->integrations
    if(portal_options->integrations) {
    cJSON *integrations_local_JSON = integrations_options_convertToJSON(portal_options->integrations);
    if(integrations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "integrations", integrations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // portal_options->emails
    if(portal_options->emails) {
    cJSON *emails_local_JSON = emails_options_convertToJSON(portal_options->emails);
    if(emails_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "emails", emails_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

portal_options_t *portal_options_parseFromJSON(cJSON *portal_optionsJSON){

    portal_options_t *portal_options_local_var = NULL;

    // define the local variable for portal_options->seo
    seo_options_t *seo_local_nonprim = NULL;

    // define the local variable for portal_options->store
    store_options_t *store_local_nonprim = NULL;

    // define the local variable for portal_options->theming
    theming_options_t *theming_local_nonprim = NULL;

    // define the local variable for portal_options->branding
    branding_options_t *branding_local_nonprim = NULL;

    // define the local variable for portal_options->social
    social_media_options_t *social_local_nonprim = NULL;

    // define the local variable for portal_options->privacy
    privacy_options_t *privacy_local_nonprim = NULL;

    // define the local variable for portal_options->blog
    blog_options_t *blog_local_nonprim = NULL;

    // define the local variable for portal_options->forums
    forum_options_t *forums_local_nonprim = NULL;

    // define the local variable for portal_options->footer
    footer_options_t *footer_local_nonprim = NULL;

    // define the local variable for portal_options->background
    background_options_t *background_local_nonprim = NULL;

    // define the local variable for portal_options->breadcrumbs
    breadcrumbs_options_t *breadcrumbs_local_nonprim = NULL;

    // define the local variable for portal_options->contact
    contact_options_t *contact_local_nonprim = NULL;

    // define the local variable for portal_options->color
    color_options_t *color_local_nonprim = NULL;

    // define the local variable for portal_options->dashboard
    dashboard_options_t *dashboard_local_nonprim = NULL;

    // define the local variable for portal_options->header
    header_options_t *header_local_nonprim = NULL;

    // define the local variable for portal_options->title_bar
    title_bar_options_t *title_bar_local_nonprim = NULL;

    // define the local variable for portal_options->typography
    typography_options_t *typography_local_nonprim = NULL;

    // define the local variable for portal_options->social_media
    social_media_options_t *social_media_local_nonprim = NULL;

    // define the local variable for portal_options->sliding_bar
    sliding_bar_options_t *sliding_bar_local_nonprim = NULL;

    // define the local variable for portal_options->responsive
    responsive_options_t *responsive_local_nonprim = NULL;

    // define the local variable for portal_options->menu
    menu_options_t *menu_local_nonprim = NULL;

    // define the local variable for portal_options->layout
    layout_options_t *layout_local_nonprim = NULL;

    // define the local variable for portal_options->integrations
    integrations_options_t *integrations_local_nonprim = NULL;

    // define the local variable for portal_options->emails
    emails_options_t *emails_local_nonprim = NULL;

    // portal_options->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // portal_options->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // portal_options->portal_ui_engine
    cJSON *portal_ui_engine = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "portalUiEngine");
    contentservice_portal_options_PORTALUIENGINE_e portal_ui_engineVariable;
    if (portal_ui_engine) { 
    if(!cJSON_IsString(portal_ui_engine))
    {
    goto end; //Enum
    }
    portal_ui_engineVariable = portal_options_portal_ui_engine_FromString(portal_ui_engine->valuestring);
    }

    // portal_options->seo
    cJSON *seo = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "seo");
    if (seo) { 
    seo_local_nonprim = seo_options_parseFromJSON(seo); //nonprimitive
    }

    // portal_options->store
    cJSON *store = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "store");
    if (store) { 
    store_local_nonprim = store_options_parseFromJSON(store); //nonprimitive
    }

    // portal_options->theming
    cJSON *theming = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "theming");
    if (theming) { 
    theming_local_nonprim = theming_options_parseFromJSON(theming); //nonprimitive
    }

    // portal_options->branding
    cJSON *branding = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "branding");
    if (branding) { 
    branding_local_nonprim = branding_options_parseFromJSON(branding); //nonprimitive
    }

    // portal_options->social
    cJSON *social = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "social");
    if (social) { 
    social_local_nonprim = social_media_options_parseFromJSON(social); //nonprimitive
    }

    // portal_options->privacy
    cJSON *privacy = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "privacy");
    if (privacy) { 
    privacy_local_nonprim = privacy_options_parseFromJSON(privacy); //nonprimitive
    }

    // portal_options->blog
    cJSON *blog = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "blog");
    if (blog) { 
    blog_local_nonprim = blog_options_parseFromJSON(blog); //nonprimitive
    }

    // portal_options->forums
    cJSON *forums = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "forums");
    if (forums) { 
    forums_local_nonprim = forum_options_parseFromJSON(forums); //nonprimitive
    }

    // portal_options->footer
    cJSON *footer = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "footer");
    if (footer) { 
    footer_local_nonprim = footer_options_parseFromJSON(footer); //nonprimitive
    }

    // portal_options->background
    cJSON *background = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "background");
    if (background) { 
    background_local_nonprim = background_options_parseFromJSON(background); //nonprimitive
    }

    // portal_options->breadcrumbs
    cJSON *breadcrumbs = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "breadcrumbs");
    if (breadcrumbs) { 
    breadcrumbs_local_nonprim = breadcrumbs_options_parseFromJSON(breadcrumbs); //nonprimitive
    }

    // portal_options->contact
    cJSON *contact = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "contact");
    if (contact) { 
    contact_local_nonprim = contact_options_parseFromJSON(contact); //nonprimitive
    }

    // portal_options->color
    cJSON *color = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "color");
    if (color) { 
    color_local_nonprim = color_options_parseFromJSON(color); //nonprimitive
    }

    // portal_options->dashboard
    cJSON *dashboard = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "dashboard");
    if (dashboard) { 
    dashboard_local_nonprim = dashboard_options_parseFromJSON(dashboard); //nonprimitive
    }

    // portal_options->header
    cJSON *header = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "header");
    if (header) { 
    header_local_nonprim = header_options_parseFromJSON(header); //nonprimitive
    }

    // portal_options->title_bar
    cJSON *title_bar = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "titleBar");
    if (title_bar) { 
    title_bar_local_nonprim = title_bar_options_parseFromJSON(title_bar); //nonprimitive
    }

    // portal_options->typography
    cJSON *typography = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "typography");
    if (typography) { 
    typography_local_nonprim = typography_options_parseFromJSON(typography); //nonprimitive
    }

    // portal_options->social_media
    cJSON *social_media = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "socialMedia");
    if (social_media) { 
    social_media_local_nonprim = social_media_options_parseFromJSON(social_media); //nonprimitive
    }

    // portal_options->sliding_bar
    cJSON *sliding_bar = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "slidingBar");
    if (sliding_bar) { 
    sliding_bar_local_nonprim = sliding_bar_options_parseFromJSON(sliding_bar); //nonprimitive
    }

    // portal_options->slideshow
    cJSON *slideshow = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "slideshow");
    object_t *slideshow_local_object = NULL;
    if (slideshow) { 
    slideshow_local_object = object_parseFromJSON(slideshow); //object
    }

    // portal_options->slider
    cJSON *slider = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "slider");
    object_t *slider_local_object = NULL;
    if (slider) { 
    slider_local_object = object_parseFromJSON(slider); //object
    }

    // portal_options->sidebar
    cJSON *sidebar = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "sidebar");
    object_t *sidebar_local_object = NULL;
    if (sidebar) { 
    sidebar_local_object = object_parseFromJSON(sidebar); //object
    }

    // portal_options->search
    cJSON *search = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "search");
    object_t *search_local_object = NULL;
    if (search) { 
    search_local_object = object_parseFromJSON(search); //object
    }

    // portal_options->responsive
    cJSON *responsive = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "responsive");
    if (responsive) { 
    responsive_local_nonprim = responsive_options_parseFromJSON(responsive); //nonprimitive
    }

    // portal_options->portfolio
    cJSON *portfolio = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "portfolio");
    object_t *portfolio_local_object = NULL;
    if (portfolio) { 
    portfolio_local_object = object_parseFromJSON(portfolio); //object
    }

    // portal_options->performance
    cJSON *performance = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "performance");
    object_t *performance_local_object = NULL;
    if (performance) { 
    performance_local_object = object_parseFromJSON(performance); //object
    }

    // portal_options->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "pagination");
    object_t *pagination_local_object = NULL;
    if (pagination) { 
    pagination_local_object = object_parseFromJSON(pagination); //object
    }

    // portal_options->miscellaneous
    cJSON *miscellaneous = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "miscellaneous");
    object_t *miscellaneous_local_object = NULL;
    if (miscellaneous) { 
    miscellaneous_local_object = object_parseFromJSON(miscellaneous); //object
    }

    // portal_options->menu
    cJSON *menu = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "menu");
    if (menu) { 
    menu_local_nonprim = menu_options_parseFromJSON(menu); //nonprimitive
    }

    // portal_options->grid
    cJSON *grid = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "grid");
    object_t *grid_local_object = NULL;
    if (grid) { 
    grid_local_object = object_parseFromJSON(grid); //object
    }

    // portal_options->mansory
    cJSON *mansory = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "mansory");
    object_t *mansory_local_object = NULL;
    if (mansory) { 
    mansory_local_object = object_parseFromJSON(mansory); //object
    }

    // portal_options->lightbox
    cJSON *lightbox = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "lightbox");
    object_t *lightbox_local_object = NULL;
    if (lightbox) { 
    lightbox_local_object = object_parseFromJSON(lightbox); //object
    }

    // portal_options->layout
    cJSON *layout = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "layout");
    if (layout) { 
    layout_local_nonprim = layout_options_parseFromJSON(layout); //nonprimitive
    }

    // portal_options->code_fields
    cJSON *code_fields = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "codeFields");
    object_t *code_fields_local_object = NULL;
    if (code_fields) { 
    code_fields_local_object = object_parseFromJSON(code_fields); //object
    }

    // portal_options->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "features");
    object_t *features_local_object = NULL;
    if (features) { 
    features_local_object = object_parseFromJSON(features); //object
    }

    // portal_options->forms
    cJSON *forms = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "forms");
    object_t *forms_local_object = NULL;
    if (forms) { 
    forms_local_object = object_parseFromJSON(forms); //object
    }

    // portal_options->integrations
    cJSON *integrations = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "integrations");
    if (integrations) { 
    integrations_local_nonprim = integrations_options_parseFromJSON(integrations); //nonprimitive
    }

    // portal_options->emails
    cJSON *emails = cJSON_GetObjectItemCaseSensitive(portal_optionsJSON, "emails");
    if (emails) { 
    emails_local_nonprim = emails_options_parseFromJSON(emails); //nonprimitive
    }


    portal_options_local_var = portal_options_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        portal_ui_engine ? portal_ui_engineVariable : contentservice_portal_options_PORTALUIENGINE_NULL,
        seo ? seo_local_nonprim : NULL,
        store ? store_local_nonprim : NULL,
        theming ? theming_local_nonprim : NULL,
        branding ? branding_local_nonprim : NULL,
        social ? social_local_nonprim : NULL,
        privacy ? privacy_local_nonprim : NULL,
        blog ? blog_local_nonprim : NULL,
        forums ? forums_local_nonprim : NULL,
        footer ? footer_local_nonprim : NULL,
        background ? background_local_nonprim : NULL,
        breadcrumbs ? breadcrumbs_local_nonprim : NULL,
        contact ? contact_local_nonprim : NULL,
        color ? color_local_nonprim : NULL,
        dashboard ? dashboard_local_nonprim : NULL,
        header ? header_local_nonprim : NULL,
        title_bar ? title_bar_local_nonprim : NULL,
        typography ? typography_local_nonprim : NULL,
        social_media ? social_media_local_nonprim : NULL,
        sliding_bar ? sliding_bar_local_nonprim : NULL,
        slideshow ? slideshow_local_object : NULL,
        slider ? slider_local_object : NULL,
        sidebar ? sidebar_local_object : NULL,
        search ? search_local_object : NULL,
        responsive ? responsive_local_nonprim : NULL,
        portfolio ? portfolio_local_object : NULL,
        performance ? performance_local_object : NULL,
        pagination ? pagination_local_object : NULL,
        miscellaneous ? miscellaneous_local_object : NULL,
        menu ? menu_local_nonprim : NULL,
        grid ? grid_local_object : NULL,
        mansory ? mansory_local_object : NULL,
        lightbox ? lightbox_local_object : NULL,
        layout ? layout_local_nonprim : NULL,
        code_fields ? code_fields_local_object : NULL,
        features ? features_local_object : NULL,
        forms ? forms_local_object : NULL,
        integrations ? integrations_local_nonprim : NULL,
        emails ? emails_local_nonprim : NULL
        );

    return portal_options_local_var;
end:
    if (seo_local_nonprim) {
        seo_options_free(seo_local_nonprim);
        seo_local_nonprim = NULL;
    }
    if (store_local_nonprim) {
        store_options_free(store_local_nonprim);
        store_local_nonprim = NULL;
    }
    if (theming_local_nonprim) {
        theming_options_free(theming_local_nonprim);
        theming_local_nonprim = NULL;
    }
    if (branding_local_nonprim) {
        branding_options_free(branding_local_nonprim);
        branding_local_nonprim = NULL;
    }
    if (social_local_nonprim) {
        social_media_options_free(social_local_nonprim);
        social_local_nonprim = NULL;
    }
    if (privacy_local_nonprim) {
        privacy_options_free(privacy_local_nonprim);
        privacy_local_nonprim = NULL;
    }
    if (blog_local_nonprim) {
        blog_options_free(blog_local_nonprim);
        blog_local_nonprim = NULL;
    }
    if (forums_local_nonprim) {
        forum_options_free(forums_local_nonprim);
        forums_local_nonprim = NULL;
    }
    if (footer_local_nonprim) {
        footer_options_free(footer_local_nonprim);
        footer_local_nonprim = NULL;
    }
    if (background_local_nonprim) {
        background_options_free(background_local_nonprim);
        background_local_nonprim = NULL;
    }
    if (breadcrumbs_local_nonprim) {
        breadcrumbs_options_free(breadcrumbs_local_nonprim);
        breadcrumbs_local_nonprim = NULL;
    }
    if (contact_local_nonprim) {
        contact_options_free(contact_local_nonprim);
        contact_local_nonprim = NULL;
    }
    if (color_local_nonprim) {
        color_options_free(color_local_nonprim);
        color_local_nonprim = NULL;
    }
    if (dashboard_local_nonprim) {
        dashboard_options_free(dashboard_local_nonprim);
        dashboard_local_nonprim = NULL;
    }
    if (header_local_nonprim) {
        header_options_free(header_local_nonprim);
        header_local_nonprim = NULL;
    }
    if (title_bar_local_nonprim) {
        title_bar_options_free(title_bar_local_nonprim);
        title_bar_local_nonprim = NULL;
    }
    if (typography_local_nonprim) {
        typography_options_free(typography_local_nonprim);
        typography_local_nonprim = NULL;
    }
    if (social_media_local_nonprim) {
        social_media_options_free(social_media_local_nonprim);
        social_media_local_nonprim = NULL;
    }
    if (sliding_bar_local_nonprim) {
        sliding_bar_options_free(sliding_bar_local_nonprim);
        sliding_bar_local_nonprim = NULL;
    }
    if (responsive_local_nonprim) {
        responsive_options_free(responsive_local_nonprim);
        responsive_local_nonprim = NULL;
    }
    if (menu_local_nonprim) {
        menu_options_free(menu_local_nonprim);
        menu_local_nonprim = NULL;
    }
    if (layout_local_nonprim) {
        layout_options_free(layout_local_nonprim);
        layout_local_nonprim = NULL;
    }
    if (integrations_local_nonprim) {
        integrations_options_free(integrations_local_nonprim);
        integrations_local_nonprim = NULL;
    }
    if (emails_local_nonprim) {
        emails_options_free(emails_local_nonprim);
        emails_local_nonprim = NULL;
    }
    return NULL;

}
