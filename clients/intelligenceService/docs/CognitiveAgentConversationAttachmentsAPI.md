# CognitiveAgentConversationAttachmentsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CognitiveAgentConversationAttachmentsAPI_uploadCognitiveAgentConversationAttachmentAsync**](CognitiveAgentConversationAttachmentsAPI.md#CognitiveAgentConversationAttachmentsAPI_uploadCognitiveAgentConversationAttachmentAsync) | **POST** /api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Attachments | Upload an attachment to a cognitive agent conversation


# **CognitiveAgentConversationAttachmentsAPI_uploadCognitiveAgentConversationAttachmentAsync**
```c
// Upload an attachment to a cognitive agent conversation
//
// Uploads a file into the acting user's OWN conversation attachment store, scanned and catalogued through the storage spine. A conversation the caller does not own returns 404. The response carries the new file's id, name, content type and length; the chat UI passes that id as an AttachmentFileIds entry when it sends the referencing user turn.
//
conversation_attachment_upload_result_dto_envelope_t* CognitiveAgentConversationAttachmentsAPI_uploadCognitiveAgentConversationAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**agentId** | **char \*** |  | 
**conversationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

[conversation_attachment_upload_result_dto_envelope_t](conversation_attachment_upload_result_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

