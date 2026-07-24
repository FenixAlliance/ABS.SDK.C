cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "trustservice")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/access_token_response.c
    model/boolean_envelope.c
    model/contact_create_dto.c
    model/contact_dto.c
    model/create_signing_participant_dto.c
    model/create_signing_request_dto.c
    model/empty_envelope.c
    model/error_envelope.c
    model/execute_signing_request_dto.c
    model/finalize_signing_request_dto.c
    model/forgot_password_request.c
    model/http_validation_problem_details.c
    model/import_signing_certificate_async_request.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/login_request.c
    model/operation.c
    model/prepare_and_create_async_request.c
    model/prepare_and_quick_sign_async_request.c
    model/quick_sign_signed_document_dto.c
    model/record_signing_participant_outcome_dto.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/signature_dto.c
    model/signature_dto_list_envelope.c
    model/signature_verification_dto.c
    model/signed_document_attachment_create_dto.c
    model/signed_document_attachment_dto.c
    model/signed_document_attachment_dto_list_envelope.c
    model/signed_document_attachment_update_dto.c
    model/signed_document_create_dto.c
    model/signed_document_dto.c
    model/signed_document_dto_list_envelope.c
    model/signed_document_update_dto.c
    model/signing_certificate_create_dto.c
    model/signing_certificate_dto.c
    model/signing_certificate_dto_list_envelope.c
    model/signing_certificate_update_dto.c
    model/signing_log_dto.c
    model/signing_log_dto_list_envelope.c
    model/signing_participant_dto.c
    model/signing_participant_dto_list_envelope.c
    model/signing_profile_create_dto.c
    model/signing_profile_dto.c
    model/signing_profile_dto_list_envelope.c
    model/signing_profile_graphical_representation_create_dto.c
    model/signing_profile_graphical_representation_dto.c
    model/signing_profile_graphical_representation_dto_list_envelope.c
    model/signing_profile_graphical_representation_update_dto.c
    model/signing_profile_update_dto.c
    model/signing_request_dto.c
    model/signing_request_dto_list_envelope.c
    model/trust_artifact_reference_dto.c
    model/trust_artifact_reference_dto_envelope.c
    model/trust_signing_provider_descriptor_dto.c
    model/trust_signing_provider_descriptor_dto_list_envelope.c
    model/trust_signing_readiness_dto.c
    model/trust_signing_readiness_dto_envelope.c
    model/trust_signing_request_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/void_signing_request_dto.c
    api/FenixAllianceABSWebAPI.c
    api/SignaturesAPI.c
    api/SignedDocumentArtifactsAPI.c
    api/SignedDocumentAttachmentsAPI.c
    api/SignedDocumentsAPI.c
    api/SigningCertificatesAPI.c
    api/SigningEngineAPI.c
    api/SigningLogsAPI.c
    api/SigningParticipantsAPI.c
    api/SigningProfileGraphicalRepresentationsAPI.c
    api/SigningProfilesAPI.c
    api/SigningRequestsAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/boolean_envelope.h
    model/contact_create_dto.h
    model/contact_dto.h
    model/create_signing_participant_dto.h
    model/create_signing_request_dto.h
    model/empty_envelope.h
    model/error_envelope.h
    model/execute_signing_request_dto.h
    model/finalize_signing_request_dto.h
    model/forgot_password_request.h
    model/http_validation_problem_details.h
    model/import_signing_certificate_async_request.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/login_request.h
    model/operation.h
    model/prepare_and_create_async_request.h
    model/prepare_and_quick_sign_async_request.h
    model/quick_sign_signed_document_dto.h
    model/record_signing_participant_outcome_dto.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/signature_dto.h
    model/signature_dto_list_envelope.h
    model/signature_verification_dto.h
    model/signed_document_attachment_create_dto.h
    model/signed_document_attachment_dto.h
    model/signed_document_attachment_dto_list_envelope.h
    model/signed_document_attachment_update_dto.h
    model/signed_document_create_dto.h
    model/signed_document_dto.h
    model/signed_document_dto_list_envelope.h
    model/signed_document_update_dto.h
    model/signing_certificate_create_dto.h
    model/signing_certificate_dto.h
    model/signing_certificate_dto_list_envelope.h
    model/signing_certificate_update_dto.h
    model/signing_log_dto.h
    model/signing_log_dto_list_envelope.h
    model/signing_participant_dto.h
    model/signing_participant_dto_list_envelope.h
    model/signing_profile_create_dto.h
    model/signing_profile_dto.h
    model/signing_profile_dto_list_envelope.h
    model/signing_profile_graphical_representation_create_dto.h
    model/signing_profile_graphical_representation_dto.h
    model/signing_profile_graphical_representation_dto_list_envelope.h
    model/signing_profile_graphical_representation_update_dto.h
    model/signing_profile_update_dto.h
    model/signing_request_dto.h
    model/signing_request_dto_list_envelope.h
    model/trust_artifact_reference_dto.h
    model/trust_artifact_reference_dto_envelope.h
    model/trust_signing_provider_descriptor_dto.h
    model/trust_signing_provider_descriptor_dto_list_envelope.h
    model/trust_signing_readiness_dto.h
    model/trust_signing_readiness_dto_envelope.h
    model/trust_signing_request_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/void_signing_request_dto.h
    api/FenixAllianceABSWebAPI.h
    api/SignaturesAPI.h
    api/SignedDocumentArtifactsAPI.h
    api/SignedDocumentAttachmentsAPI.h
    api/SignedDocumentsAPI.h
    api/SigningCertificatesAPI.h
    api/SigningEngineAPI.h
    api/SigningLogsAPI.h
    api/SigningParticipantsAPI.h
    api/SigningProfileGraphicalRepresentationsAPI.h
    api/SigningProfilesAPI.h
    api/SigningRequestsAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-FenixAllianceABSWebAPI.c
#    unit-tests/manual-SignaturesAPI.c
#    unit-tests/manual-SignedDocumentArtifactsAPI.c
#    unit-tests/manual-SignedDocumentAttachmentsAPI.c
#    unit-tests/manual-SignedDocumentsAPI.c
#    unit-tests/manual-SigningCertificatesAPI.c
#    unit-tests/manual-SigningEngineAPI.c
#    unit-tests/manual-SigningLogsAPI.c
#    unit-tests/manual-SigningParticipantsAPI.c
#    unit-tests/manual-SigningProfileGraphicalRepresentationsAPI.c
#    unit-tests/manual-SigningProfilesAPI.c
#    unit-tests/manual-SigningRequestsAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
