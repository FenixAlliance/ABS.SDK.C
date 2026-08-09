#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/conversation_attachment_upload_result_dto_envelope.h"
#include "../model/error_envelope.h"


// Upload an attachment to a cognitive agent conversation
//
// Uploads a file into the acting user's OWN conversation attachment store, scanned and catalogued through the storage spine. A conversation the caller does not own returns 404. The response carries the new file's id, name, content type and length; the chat UI passes that id as an AttachmentFileIds entry when it sends the referencing user turn.
//
conversation_attachment_upload_result_dto_envelope_t*
CognitiveAgentConversationAttachmentsAPI_uploadCognitiveAgentConversationAttachmentAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, binary_t* file);


