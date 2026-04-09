#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "azure_app_insight_integration_options.h"



azure_app_insight_integration_options_t *azure_app_insight_integration_options_create(
    int enable,
    int enable_diagnostics_telemetry_module,
    int enable_authentication_tracking_java_script,
    int enable_request_tracking_telemetry_module,
    int inject_response_headers,
    int track_exceptions,
    int enable_w3_c_distributed_tracing,
    int add_auto_collected_metric_extractor,
    int enable_heartbeat,
    int enable_debug_logger,
    char *endpoint_address,
    int developer_mode,
    char *application_version,
    char *connection_string,
    char *instrumentation_key,
    int enable_adaptive_sampling,
    int enable_event_counter_collection_module,
    int enable_dependency_tracking_telemetry_module,
    int enable_azure_instance_metadata_telemetry_module,
    int enable_app_services_heartbeat_telemetry_module,
    int enable_performance_counter_collection_module,
    int enable_quick_pulse_metric_stream,
    int enable_legacy_correlation_headers_injection,
    int enable_active_telemetry_configuration_setup
    ) {
    azure_app_insight_integration_options_t *azure_app_insight_integration_options_local_var = malloc(sizeof(azure_app_insight_integration_options_t));
    if (!azure_app_insight_integration_options_local_var) {
        return NULL;
    }
    azure_app_insight_integration_options_local_var->enable = enable;
    azure_app_insight_integration_options_local_var->enable_diagnostics_telemetry_module = enable_diagnostics_telemetry_module;
    azure_app_insight_integration_options_local_var->enable_authentication_tracking_java_script = enable_authentication_tracking_java_script;
    azure_app_insight_integration_options_local_var->enable_request_tracking_telemetry_module = enable_request_tracking_telemetry_module;
    azure_app_insight_integration_options_local_var->inject_response_headers = inject_response_headers;
    azure_app_insight_integration_options_local_var->track_exceptions = track_exceptions;
    azure_app_insight_integration_options_local_var->enable_w3_c_distributed_tracing = enable_w3_c_distributed_tracing;
    azure_app_insight_integration_options_local_var->add_auto_collected_metric_extractor = add_auto_collected_metric_extractor;
    azure_app_insight_integration_options_local_var->enable_heartbeat = enable_heartbeat;
    azure_app_insight_integration_options_local_var->enable_debug_logger = enable_debug_logger;
    azure_app_insight_integration_options_local_var->endpoint_address = endpoint_address;
    azure_app_insight_integration_options_local_var->developer_mode = developer_mode;
    azure_app_insight_integration_options_local_var->application_version = application_version;
    azure_app_insight_integration_options_local_var->connection_string = connection_string;
    azure_app_insight_integration_options_local_var->instrumentation_key = instrumentation_key;
    azure_app_insight_integration_options_local_var->enable_adaptive_sampling = enable_adaptive_sampling;
    azure_app_insight_integration_options_local_var->enable_event_counter_collection_module = enable_event_counter_collection_module;
    azure_app_insight_integration_options_local_var->enable_dependency_tracking_telemetry_module = enable_dependency_tracking_telemetry_module;
    azure_app_insight_integration_options_local_var->enable_azure_instance_metadata_telemetry_module = enable_azure_instance_metadata_telemetry_module;
    azure_app_insight_integration_options_local_var->enable_app_services_heartbeat_telemetry_module = enable_app_services_heartbeat_telemetry_module;
    azure_app_insight_integration_options_local_var->enable_performance_counter_collection_module = enable_performance_counter_collection_module;
    azure_app_insight_integration_options_local_var->enable_quick_pulse_metric_stream = enable_quick_pulse_metric_stream;
    azure_app_insight_integration_options_local_var->enable_legacy_correlation_headers_injection = enable_legacy_correlation_headers_injection;
    azure_app_insight_integration_options_local_var->enable_active_telemetry_configuration_setup = enable_active_telemetry_configuration_setup;

    return azure_app_insight_integration_options_local_var;
}


void azure_app_insight_integration_options_free(azure_app_insight_integration_options_t *azure_app_insight_integration_options) {
    if(NULL == azure_app_insight_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (azure_app_insight_integration_options->endpoint_address) {
        free(azure_app_insight_integration_options->endpoint_address);
        azure_app_insight_integration_options->endpoint_address = NULL;
    }
    if (azure_app_insight_integration_options->application_version) {
        free(azure_app_insight_integration_options->application_version);
        azure_app_insight_integration_options->application_version = NULL;
    }
    if (azure_app_insight_integration_options->connection_string) {
        free(azure_app_insight_integration_options->connection_string);
        azure_app_insight_integration_options->connection_string = NULL;
    }
    if (azure_app_insight_integration_options->instrumentation_key) {
        free(azure_app_insight_integration_options->instrumentation_key);
        azure_app_insight_integration_options->instrumentation_key = NULL;
    }
    free(azure_app_insight_integration_options);
}

cJSON *azure_app_insight_integration_options_convertToJSON(azure_app_insight_integration_options_t *azure_app_insight_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // azure_app_insight_integration_options->enable
    if(azure_app_insight_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", azure_app_insight_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_diagnostics_telemetry_module
    if(azure_app_insight_integration_options->enable_diagnostics_telemetry_module) {
    if(cJSON_AddBoolToObject(item, "enableDiagnosticsTelemetryModule", azure_app_insight_integration_options->enable_diagnostics_telemetry_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_authentication_tracking_java_script
    if(azure_app_insight_integration_options->enable_authentication_tracking_java_script) {
    if(cJSON_AddBoolToObject(item, "enableAuthenticationTrackingJavaScript", azure_app_insight_integration_options->enable_authentication_tracking_java_script) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_request_tracking_telemetry_module
    if(azure_app_insight_integration_options->enable_request_tracking_telemetry_module) {
    if(cJSON_AddBoolToObject(item, "enableRequestTrackingTelemetryModule", azure_app_insight_integration_options->enable_request_tracking_telemetry_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->inject_response_headers
    if(azure_app_insight_integration_options->inject_response_headers) {
    if(cJSON_AddBoolToObject(item, "injectResponseHeaders", azure_app_insight_integration_options->inject_response_headers) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->track_exceptions
    if(azure_app_insight_integration_options->track_exceptions) {
    if(cJSON_AddBoolToObject(item, "trackExceptions", azure_app_insight_integration_options->track_exceptions) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_w3_c_distributed_tracing
    if(azure_app_insight_integration_options->enable_w3_c_distributed_tracing) {
    if(cJSON_AddBoolToObject(item, "enableW3CDistributedTracing", azure_app_insight_integration_options->enable_w3_c_distributed_tracing) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->add_auto_collected_metric_extractor
    if(azure_app_insight_integration_options->add_auto_collected_metric_extractor) {
    if(cJSON_AddBoolToObject(item, "addAutoCollectedMetricExtractor", azure_app_insight_integration_options->add_auto_collected_metric_extractor) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_heartbeat
    if(azure_app_insight_integration_options->enable_heartbeat) {
    if(cJSON_AddBoolToObject(item, "enableHeartbeat", azure_app_insight_integration_options->enable_heartbeat) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_debug_logger
    if(azure_app_insight_integration_options->enable_debug_logger) {
    if(cJSON_AddBoolToObject(item, "enableDebugLogger", azure_app_insight_integration_options->enable_debug_logger) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->endpoint_address
    if(azure_app_insight_integration_options->endpoint_address) {
    if(cJSON_AddStringToObject(item, "endpointAddress", azure_app_insight_integration_options->endpoint_address) == NULL) {
    goto fail; //String
    }
    }


    // azure_app_insight_integration_options->developer_mode
    if(azure_app_insight_integration_options->developer_mode) {
    if(cJSON_AddBoolToObject(item, "developerMode", azure_app_insight_integration_options->developer_mode) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->application_version
    if(azure_app_insight_integration_options->application_version) {
    if(cJSON_AddStringToObject(item, "applicationVersion", azure_app_insight_integration_options->application_version) == NULL) {
    goto fail; //String
    }
    }


    // azure_app_insight_integration_options->connection_string
    if(azure_app_insight_integration_options->connection_string) {
    if(cJSON_AddStringToObject(item, "connectionString", azure_app_insight_integration_options->connection_string) == NULL) {
    goto fail; //String
    }
    }


    // azure_app_insight_integration_options->instrumentation_key
    if(azure_app_insight_integration_options->instrumentation_key) {
    if(cJSON_AddStringToObject(item, "instrumentationKey", azure_app_insight_integration_options->instrumentation_key) == NULL) {
    goto fail; //String
    }
    }


    // azure_app_insight_integration_options->enable_adaptive_sampling
    if(azure_app_insight_integration_options->enable_adaptive_sampling) {
    if(cJSON_AddBoolToObject(item, "enableAdaptiveSampling", azure_app_insight_integration_options->enable_adaptive_sampling) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_event_counter_collection_module
    if(azure_app_insight_integration_options->enable_event_counter_collection_module) {
    if(cJSON_AddBoolToObject(item, "enableEventCounterCollectionModule", azure_app_insight_integration_options->enable_event_counter_collection_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_dependency_tracking_telemetry_module
    if(azure_app_insight_integration_options->enable_dependency_tracking_telemetry_module) {
    if(cJSON_AddBoolToObject(item, "enableDependencyTrackingTelemetryModule", azure_app_insight_integration_options->enable_dependency_tracking_telemetry_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_azure_instance_metadata_telemetry_module
    if(azure_app_insight_integration_options->enable_azure_instance_metadata_telemetry_module) {
    if(cJSON_AddBoolToObject(item, "enableAzureInstanceMetadataTelemetryModule", azure_app_insight_integration_options->enable_azure_instance_metadata_telemetry_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_app_services_heartbeat_telemetry_module
    if(azure_app_insight_integration_options->enable_app_services_heartbeat_telemetry_module) {
    if(cJSON_AddBoolToObject(item, "enableAppServicesHeartbeatTelemetryModule", azure_app_insight_integration_options->enable_app_services_heartbeat_telemetry_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_performance_counter_collection_module
    if(azure_app_insight_integration_options->enable_performance_counter_collection_module) {
    if(cJSON_AddBoolToObject(item, "enablePerformanceCounterCollectionModule", azure_app_insight_integration_options->enable_performance_counter_collection_module) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_quick_pulse_metric_stream
    if(azure_app_insight_integration_options->enable_quick_pulse_metric_stream) {
    if(cJSON_AddBoolToObject(item, "enableQuickPulseMetricStream", azure_app_insight_integration_options->enable_quick_pulse_metric_stream) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_legacy_correlation_headers_injection
    if(azure_app_insight_integration_options->enable_legacy_correlation_headers_injection) {
    if(cJSON_AddBoolToObject(item, "enableLegacyCorrelationHeadersInjection", azure_app_insight_integration_options->enable_legacy_correlation_headers_injection) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_app_insight_integration_options->enable_active_telemetry_configuration_setup
    if(azure_app_insight_integration_options->enable_active_telemetry_configuration_setup) {
    if(cJSON_AddBoolToObject(item, "enableActiveTelemetryConfigurationSetup", azure_app_insight_integration_options->enable_active_telemetry_configuration_setup) == NULL) {
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

azure_app_insight_integration_options_t *azure_app_insight_integration_options_parseFromJSON(cJSON *azure_app_insight_integration_optionsJSON){

    azure_app_insight_integration_options_t *azure_app_insight_integration_options_local_var = NULL;

    // azure_app_insight_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_diagnostics_telemetry_module
    cJSON *enable_diagnostics_telemetry_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableDiagnosticsTelemetryModule");
    if (enable_diagnostics_telemetry_module) { 
    if(!cJSON_IsBool(enable_diagnostics_telemetry_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_authentication_tracking_java_script
    cJSON *enable_authentication_tracking_java_script = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableAuthenticationTrackingJavaScript");
    if (enable_authentication_tracking_java_script) { 
    if(!cJSON_IsBool(enable_authentication_tracking_java_script))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_request_tracking_telemetry_module
    cJSON *enable_request_tracking_telemetry_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableRequestTrackingTelemetryModule");
    if (enable_request_tracking_telemetry_module) { 
    if(!cJSON_IsBool(enable_request_tracking_telemetry_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->inject_response_headers
    cJSON *inject_response_headers = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "injectResponseHeaders");
    if (inject_response_headers) { 
    if(!cJSON_IsBool(inject_response_headers))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->track_exceptions
    cJSON *track_exceptions = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "trackExceptions");
    if (track_exceptions) { 
    if(!cJSON_IsBool(track_exceptions))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_w3_c_distributed_tracing
    cJSON *enable_w3_c_distributed_tracing = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableW3CDistributedTracing");
    if (enable_w3_c_distributed_tracing) { 
    if(!cJSON_IsBool(enable_w3_c_distributed_tracing))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->add_auto_collected_metric_extractor
    cJSON *add_auto_collected_metric_extractor = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "addAutoCollectedMetricExtractor");
    if (add_auto_collected_metric_extractor) { 
    if(!cJSON_IsBool(add_auto_collected_metric_extractor))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_heartbeat
    cJSON *enable_heartbeat = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableHeartbeat");
    if (enable_heartbeat) { 
    if(!cJSON_IsBool(enable_heartbeat))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_debug_logger
    cJSON *enable_debug_logger = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableDebugLogger");
    if (enable_debug_logger) { 
    if(!cJSON_IsBool(enable_debug_logger))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->endpoint_address
    cJSON *endpoint_address = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "endpointAddress");
    if (endpoint_address) { 
    if(!cJSON_IsString(endpoint_address) && !cJSON_IsNull(endpoint_address))
    {
    goto end; //String
    }
    }

    // azure_app_insight_integration_options->developer_mode
    cJSON *developer_mode = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "developerMode");
    if (developer_mode) { 
    if(!cJSON_IsBool(developer_mode))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->application_version
    cJSON *application_version = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "applicationVersion");
    if (application_version) { 
    if(!cJSON_IsString(application_version) && !cJSON_IsNull(application_version))
    {
    goto end; //String
    }
    }

    // azure_app_insight_integration_options->connection_string
    cJSON *connection_string = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "connectionString");
    if (connection_string) { 
    if(!cJSON_IsString(connection_string) && !cJSON_IsNull(connection_string))
    {
    goto end; //String
    }
    }

    // azure_app_insight_integration_options->instrumentation_key
    cJSON *instrumentation_key = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "instrumentationKey");
    if (instrumentation_key) { 
    if(!cJSON_IsString(instrumentation_key) && !cJSON_IsNull(instrumentation_key))
    {
    goto end; //String
    }
    }

    // azure_app_insight_integration_options->enable_adaptive_sampling
    cJSON *enable_adaptive_sampling = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableAdaptiveSampling");
    if (enable_adaptive_sampling) { 
    if(!cJSON_IsBool(enable_adaptive_sampling))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_event_counter_collection_module
    cJSON *enable_event_counter_collection_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableEventCounterCollectionModule");
    if (enable_event_counter_collection_module) { 
    if(!cJSON_IsBool(enable_event_counter_collection_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_dependency_tracking_telemetry_module
    cJSON *enable_dependency_tracking_telemetry_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableDependencyTrackingTelemetryModule");
    if (enable_dependency_tracking_telemetry_module) { 
    if(!cJSON_IsBool(enable_dependency_tracking_telemetry_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_azure_instance_metadata_telemetry_module
    cJSON *enable_azure_instance_metadata_telemetry_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableAzureInstanceMetadataTelemetryModule");
    if (enable_azure_instance_metadata_telemetry_module) { 
    if(!cJSON_IsBool(enable_azure_instance_metadata_telemetry_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_app_services_heartbeat_telemetry_module
    cJSON *enable_app_services_heartbeat_telemetry_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableAppServicesHeartbeatTelemetryModule");
    if (enable_app_services_heartbeat_telemetry_module) { 
    if(!cJSON_IsBool(enable_app_services_heartbeat_telemetry_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_performance_counter_collection_module
    cJSON *enable_performance_counter_collection_module = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enablePerformanceCounterCollectionModule");
    if (enable_performance_counter_collection_module) { 
    if(!cJSON_IsBool(enable_performance_counter_collection_module))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_quick_pulse_metric_stream
    cJSON *enable_quick_pulse_metric_stream = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableQuickPulseMetricStream");
    if (enable_quick_pulse_metric_stream) { 
    if(!cJSON_IsBool(enable_quick_pulse_metric_stream))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_legacy_correlation_headers_injection
    cJSON *enable_legacy_correlation_headers_injection = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableLegacyCorrelationHeadersInjection");
    if (enable_legacy_correlation_headers_injection) { 
    if(!cJSON_IsBool(enable_legacy_correlation_headers_injection))
    {
    goto end; //Bool
    }
    }

    // azure_app_insight_integration_options->enable_active_telemetry_configuration_setup
    cJSON *enable_active_telemetry_configuration_setup = cJSON_GetObjectItemCaseSensitive(azure_app_insight_integration_optionsJSON, "enableActiveTelemetryConfigurationSetup");
    if (enable_active_telemetry_configuration_setup) { 
    if(!cJSON_IsBool(enable_active_telemetry_configuration_setup))
    {
    goto end; //Bool
    }
    }


    azure_app_insight_integration_options_local_var = azure_app_insight_integration_options_create (
        enable ? enable->valueint : 0,
        enable_diagnostics_telemetry_module ? enable_diagnostics_telemetry_module->valueint : 0,
        enable_authentication_tracking_java_script ? enable_authentication_tracking_java_script->valueint : 0,
        enable_request_tracking_telemetry_module ? enable_request_tracking_telemetry_module->valueint : 0,
        inject_response_headers ? inject_response_headers->valueint : 0,
        track_exceptions ? track_exceptions->valueint : 0,
        enable_w3_c_distributed_tracing ? enable_w3_c_distributed_tracing->valueint : 0,
        add_auto_collected_metric_extractor ? add_auto_collected_metric_extractor->valueint : 0,
        enable_heartbeat ? enable_heartbeat->valueint : 0,
        enable_debug_logger ? enable_debug_logger->valueint : 0,
        endpoint_address && !cJSON_IsNull(endpoint_address) ? strdup(endpoint_address->valuestring) : NULL,
        developer_mode ? developer_mode->valueint : 0,
        application_version && !cJSON_IsNull(application_version) ? strdup(application_version->valuestring) : NULL,
        connection_string && !cJSON_IsNull(connection_string) ? strdup(connection_string->valuestring) : NULL,
        instrumentation_key && !cJSON_IsNull(instrumentation_key) ? strdup(instrumentation_key->valuestring) : NULL,
        enable_adaptive_sampling ? enable_adaptive_sampling->valueint : 0,
        enable_event_counter_collection_module ? enable_event_counter_collection_module->valueint : 0,
        enable_dependency_tracking_telemetry_module ? enable_dependency_tracking_telemetry_module->valueint : 0,
        enable_azure_instance_metadata_telemetry_module ? enable_azure_instance_metadata_telemetry_module->valueint : 0,
        enable_app_services_heartbeat_telemetry_module ? enable_app_services_heartbeat_telemetry_module->valueint : 0,
        enable_performance_counter_collection_module ? enable_performance_counter_collection_module->valueint : 0,
        enable_quick_pulse_metric_stream ? enable_quick_pulse_metric_stream->valueint : 0,
        enable_legacy_correlation_headers_injection ? enable_legacy_correlation_headers_injection->valueint : 0,
        enable_active_telemetry_configuration_setup ? enable_active_telemetry_configuration_setup->valueint : 0
        );

    return azure_app_insight_integration_options_local_var;
end:
    return NULL;

}
