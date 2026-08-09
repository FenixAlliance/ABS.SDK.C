# IntelligenceServiceAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IntelligenceServiceAPI_invokeAgentSurfaceAsync**](IntelligenceServiceAPI.md#IntelligenceServiceAPI_invokeAgentSurfaceAsync) | **POST** /api/v2/IntelligenceService/Agents/{agentId}/agui | Run a governed agent over the AG-UI protocol


# **IntelligenceServiceAPI_invokeAgentSurfaceAsync**
```c
// Run a governed agent over the AG-UI protocol
//
// Streams a governed agent run as AG-UI server-sent events. Feature-flagged on ABP.Cognitive.AgentSurface.Enable; returns 503 when disabled, 401 when unauthorized and 404 when the agent cannot be resolved. An optional ?projectId= binds the run to a project (resolved tenant-scoped): the project id + name are surfaced to the model as context so it can call the governed project-storage tools; it is never auto-filled into a tool's arguments.
//
void IntelligenceServiceAPI_invokeAgentSurfaceAsync(apiClient_t *apiClient, char *agentId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**agentId** | **char \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

