/*
 * azure_app_insight_integration_options.h
 *
 * 
 */

#ifndef _azure_app_insight_integration_options_H_
#define _azure_app_insight_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct azure_app_insight_integration_options_t azure_app_insight_integration_options_t;




typedef struct azure_app_insight_integration_options_t {
    int enable; //boolean
    int enable_diagnostics_telemetry_module; //boolean
    int enable_authentication_tracking_java_script; //boolean
    int enable_request_tracking_telemetry_module; //boolean
    int inject_response_headers; //boolean
    int track_exceptions; //boolean
    int enable_w3_c_distributed_tracing; //boolean
    int add_auto_collected_metric_extractor; //boolean
    int enable_heartbeat; //boolean
    int enable_debug_logger; //boolean
    char *endpoint_address; // string
    int developer_mode; //boolean
    char *application_version; // string
    char *connection_string; // string
    char *instrumentation_key; // string
    int enable_adaptive_sampling; //boolean
    int enable_event_counter_collection_module; //boolean
    int enable_dependency_tracking_telemetry_module; //boolean
    int enable_azure_instance_metadata_telemetry_module; //boolean
    int enable_app_services_heartbeat_telemetry_module; //boolean
    int enable_performance_counter_collection_module; //boolean
    int enable_quick_pulse_metric_stream; //boolean
    int enable_legacy_correlation_headers_injection; //boolean
    int enable_active_telemetry_configuration_setup; //boolean

} azure_app_insight_integration_options_t;

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
);

void azure_app_insight_integration_options_free(azure_app_insight_integration_options_t *azure_app_insight_integration_options);

azure_app_insight_integration_options_t *azure_app_insight_integration_options_parseFromJSON(cJSON *azure_app_insight_integration_optionsJSON);

cJSON *azure_app_insight_integration_options_convertToJSON(azure_app_insight_integration_options_t *azure_app_insight_integration_options);

#endif /* _azure_app_insight_integration_options_H_ */

