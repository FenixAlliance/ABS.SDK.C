#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "integrations_options.h"



integrations_options_t *integrations_options_create(
    int enable,
    e_payco_integration_options_t *e_payco,
    google_integration_options_t *google,
    facebook_integration_options_t *facebook,
    sendgrid_integrations_options_t *sendgrid,
    free_geo_ip_integration_options_t *free_geo_ip,
    microsoft_integrations_options_t *microsoft,
    fenix_alliance_integrations_options_t *fenix_alliance,
    open_exchange_rates_integrations_options_t *open_exchange_rates
    ) {
    integrations_options_t *integrations_options_local_var = malloc(sizeof(integrations_options_t));
    if (!integrations_options_local_var) {
        return NULL;
    }
    integrations_options_local_var->enable = enable;
    integrations_options_local_var->e_payco = e_payco;
    integrations_options_local_var->google = google;
    integrations_options_local_var->facebook = facebook;
    integrations_options_local_var->sendgrid = sendgrid;
    integrations_options_local_var->free_geo_ip = free_geo_ip;
    integrations_options_local_var->microsoft = microsoft;
    integrations_options_local_var->fenix_alliance = fenix_alliance;
    integrations_options_local_var->open_exchange_rates = open_exchange_rates;

    return integrations_options_local_var;
}


void integrations_options_free(integrations_options_t *integrations_options) {
    if(NULL == integrations_options){
        return ;
    }
    listEntry_t *listEntry;
    if (integrations_options->e_payco) {
        e_payco_integration_options_free(integrations_options->e_payco);
        integrations_options->e_payco = NULL;
    }
    if (integrations_options->google) {
        google_integration_options_free(integrations_options->google);
        integrations_options->google = NULL;
    }
    if (integrations_options->facebook) {
        facebook_integration_options_free(integrations_options->facebook);
        integrations_options->facebook = NULL;
    }
    if (integrations_options->sendgrid) {
        sendgrid_integrations_options_free(integrations_options->sendgrid);
        integrations_options->sendgrid = NULL;
    }
    if (integrations_options->free_geo_ip) {
        free_geo_ip_integration_options_free(integrations_options->free_geo_ip);
        integrations_options->free_geo_ip = NULL;
    }
    if (integrations_options->microsoft) {
        microsoft_integrations_options_free(integrations_options->microsoft);
        integrations_options->microsoft = NULL;
    }
    if (integrations_options->fenix_alliance) {
        fenix_alliance_integrations_options_free(integrations_options->fenix_alliance);
        integrations_options->fenix_alliance = NULL;
    }
    if (integrations_options->open_exchange_rates) {
        open_exchange_rates_integrations_options_free(integrations_options->open_exchange_rates);
        integrations_options->open_exchange_rates = NULL;
    }
    free(integrations_options);
}

cJSON *integrations_options_convertToJSON(integrations_options_t *integrations_options) {
    cJSON *item = cJSON_CreateObject();

    // integrations_options->enable
    if(integrations_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", integrations_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // integrations_options->e_payco
    if(integrations_options->e_payco) {
    cJSON *e_payco_local_JSON = e_payco_integration_options_convertToJSON(integrations_options->e_payco);
    if(e_payco_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ePayco", e_payco_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->google
    if(integrations_options->google) {
    cJSON *google_local_JSON = google_integration_options_convertToJSON(integrations_options->google);
    if(google_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "google", google_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->facebook
    if(integrations_options->facebook) {
    cJSON *facebook_local_JSON = facebook_integration_options_convertToJSON(integrations_options->facebook);
    if(facebook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "facebook", facebook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->sendgrid
    if(integrations_options->sendgrid) {
    cJSON *sendgrid_local_JSON = sendgrid_integrations_options_convertToJSON(integrations_options->sendgrid);
    if(sendgrid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sendgrid", sendgrid_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->free_geo_ip
    if(integrations_options->free_geo_ip) {
    cJSON *free_geo_ip_local_JSON = free_geo_ip_integration_options_convertToJSON(integrations_options->free_geo_ip);
    if(free_geo_ip_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "freeGeoIP", free_geo_ip_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->microsoft
    if(integrations_options->microsoft) {
    cJSON *microsoft_local_JSON = microsoft_integrations_options_convertToJSON(integrations_options->microsoft);
    if(microsoft_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "microsoft", microsoft_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->fenix_alliance
    if(integrations_options->fenix_alliance) {
    cJSON *fenix_alliance_local_JSON = fenix_alliance_integrations_options_convertToJSON(integrations_options->fenix_alliance);
    if(fenix_alliance_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fenixAlliance", fenix_alliance_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // integrations_options->open_exchange_rates
    if(integrations_options->open_exchange_rates) {
    cJSON *open_exchange_rates_local_JSON = open_exchange_rates_integrations_options_convertToJSON(integrations_options->open_exchange_rates);
    if(open_exchange_rates_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "openExchangeRates", open_exchange_rates_local_JSON);
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

integrations_options_t *integrations_options_parseFromJSON(cJSON *integrations_optionsJSON){

    integrations_options_t *integrations_options_local_var = NULL;

    // define the local variable for integrations_options->e_payco
    e_payco_integration_options_t *e_payco_local_nonprim = NULL;

    // define the local variable for integrations_options->google
    google_integration_options_t *google_local_nonprim = NULL;

    // define the local variable for integrations_options->facebook
    facebook_integration_options_t *facebook_local_nonprim = NULL;

    // define the local variable for integrations_options->sendgrid
    sendgrid_integrations_options_t *sendgrid_local_nonprim = NULL;

    // define the local variable for integrations_options->free_geo_ip
    free_geo_ip_integration_options_t *free_geo_ip_local_nonprim = NULL;

    // define the local variable for integrations_options->microsoft
    microsoft_integrations_options_t *microsoft_local_nonprim = NULL;

    // define the local variable for integrations_options->fenix_alliance
    fenix_alliance_integrations_options_t *fenix_alliance_local_nonprim = NULL;

    // define the local variable for integrations_options->open_exchange_rates
    open_exchange_rates_integrations_options_t *open_exchange_rates_local_nonprim = NULL;

    // integrations_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // integrations_options->e_payco
    cJSON *e_payco = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "ePayco");
    if (e_payco) { 
    e_payco_local_nonprim = e_payco_integration_options_parseFromJSON(e_payco); //nonprimitive
    }

    // integrations_options->google
    cJSON *google = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "google");
    if (google) { 
    google_local_nonprim = google_integration_options_parseFromJSON(google); //nonprimitive
    }

    // integrations_options->facebook
    cJSON *facebook = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "facebook");
    if (facebook) { 
    facebook_local_nonprim = facebook_integration_options_parseFromJSON(facebook); //nonprimitive
    }

    // integrations_options->sendgrid
    cJSON *sendgrid = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "sendgrid");
    if (sendgrid) { 
    sendgrid_local_nonprim = sendgrid_integrations_options_parseFromJSON(sendgrid); //nonprimitive
    }

    // integrations_options->free_geo_ip
    cJSON *free_geo_ip = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "freeGeoIP");
    if (free_geo_ip) { 
    free_geo_ip_local_nonprim = free_geo_ip_integration_options_parseFromJSON(free_geo_ip); //nonprimitive
    }

    // integrations_options->microsoft
    cJSON *microsoft = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "microsoft");
    if (microsoft) { 
    microsoft_local_nonprim = microsoft_integrations_options_parseFromJSON(microsoft); //nonprimitive
    }

    // integrations_options->fenix_alliance
    cJSON *fenix_alliance = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "fenixAlliance");
    if (fenix_alliance) { 
    fenix_alliance_local_nonprim = fenix_alliance_integrations_options_parseFromJSON(fenix_alliance); //nonprimitive
    }

    // integrations_options->open_exchange_rates
    cJSON *open_exchange_rates = cJSON_GetObjectItemCaseSensitive(integrations_optionsJSON, "openExchangeRates");
    if (open_exchange_rates) { 
    open_exchange_rates_local_nonprim = open_exchange_rates_integrations_options_parseFromJSON(open_exchange_rates); //nonprimitive
    }


    integrations_options_local_var = integrations_options_create (
        enable ? enable->valueint : 0,
        e_payco ? e_payco_local_nonprim : NULL,
        google ? google_local_nonprim : NULL,
        facebook ? facebook_local_nonprim : NULL,
        sendgrid ? sendgrid_local_nonprim : NULL,
        free_geo_ip ? free_geo_ip_local_nonprim : NULL,
        microsoft ? microsoft_local_nonprim : NULL,
        fenix_alliance ? fenix_alliance_local_nonprim : NULL,
        open_exchange_rates ? open_exchange_rates_local_nonprim : NULL
        );

    return integrations_options_local_var;
end:
    if (e_payco_local_nonprim) {
        e_payco_integration_options_free(e_payco_local_nonprim);
        e_payco_local_nonprim = NULL;
    }
    if (google_local_nonprim) {
        google_integration_options_free(google_local_nonprim);
        google_local_nonprim = NULL;
    }
    if (facebook_local_nonprim) {
        facebook_integration_options_free(facebook_local_nonprim);
        facebook_local_nonprim = NULL;
    }
    if (sendgrid_local_nonprim) {
        sendgrid_integrations_options_free(sendgrid_local_nonprim);
        sendgrid_local_nonprim = NULL;
    }
    if (free_geo_ip_local_nonprim) {
        free_geo_ip_integration_options_free(free_geo_ip_local_nonprim);
        free_geo_ip_local_nonprim = NULL;
    }
    if (microsoft_local_nonprim) {
        microsoft_integrations_options_free(microsoft_local_nonprim);
        microsoft_local_nonprim = NULL;
    }
    if (fenix_alliance_local_nonprim) {
        fenix_alliance_integrations_options_free(fenix_alliance_local_nonprim);
        fenix_alliance_local_nonprim = NULL;
    }
    if (open_exchange_rates_local_nonprim) {
        open_exchange_rates_integrations_options_free(open_exchange_rates_local_nonprim);
        open_exchange_rates_local_nonprim = NULL;
    }
    return NULL;

}
