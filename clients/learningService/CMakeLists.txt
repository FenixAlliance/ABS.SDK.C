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

set(pkgName "learningservice")

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
    model/average_dto.c
    model/count_dto.c
    model/course_article_create_dto.c
    model/course_article_dto.c
    model/course_article_update_dto.c
    model/course_assignment_create_dto.c
    model/course_assignment_dto.c
    model/course_assignment_update_dto.c
    model/course_category_create_dto.c
    model/course_category_dto.c
    model/course_category_update_dto.c
    model/course_certificate_template_create_dto.c
    model/course_certificate_template_dto.c
    model/course_cohort_create_dto.c
    model/course_cohort_dto.c
    model/course_cohort_update_dto.c
    model/course_completion_certificate_create_dto.c
    model/course_completion_certificate_dto.c
    model/course_completion_certificate_update_dto.c
    model/course_create_dto.c
    model/course_dto.c
    model/course_enrollment_create_dto.c
    model/course_enrollment_dto.c
    model/course_enrollment_update_dto.c
    model/course_file_create_dto.c
    model/course_file_dto.c
    model/course_file_update_dto.c
    model/course_forum_create_dto.c
    model/course_forum_dto.c
    model/course_forum_update_dto.c
    model/course_handout_create_dto.c
    model/course_handout_dto.c
    model/course_handout_update_dto.c
    model/course_library_create_dto.c
    model/course_library_dto.c
    model/course_library_update_dto.c
    model/course_news_create_dto.c
    model/course_news_dto.c
    model/course_news_update_dto.c
    model/course_page_create_dto.c
    model/course_page_dto.c
    model/course_page_update_dto.c
    model/course_problem_set_create_dto.c
    model/course_problem_set_dto.c
    model/course_problem_set_update_dto.c
    model/course_section_create_dto.c
    model/course_section_dto.c
    model/course_section_update_dto.c
    model/course_unit_component_create_dto.c
    model/course_unit_component_dto.c
    model/course_unit_component_update_dto.c
    model/course_unit_create_dto.c
    model/course_unit_dto.c
    model/course_unit_update_dto.c
    model/course_update_dto.c
    model/course_wiki_create_dto.c
    model/course_wiki_dto.c
    model/course_wiki_update_dto.c
    model/error_envelope.c
    model/forgot_password_request.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/instructor_profile_create_dto.c
    model/instructor_profile_dto.c
    model/instructor_profile_update_dto.c
    model/login_request.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/student_profile_create_dto.c
    model/student_profile_dto.c
    model/student_profile_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    api/CourseArticlesAPI.c
    api/CourseAssignmentsAPI.c
    api/CourseCategoriesAPI.c
    api/CourseCertificatesAPI.c
    api/CourseCohortsAPI.c
    api/CourseEnrollmentsAPI.c
    api/CourseFilesAPI.c
    api/CourseForumsAPI.c
    api/CourseHandoutsAPI.c
    api/CourseLibrariesAPI.c
    api/CoursePagesAPI.c
    api/CourseProblemSetsAPI.c
    api/CourseSectionsAPI.c
    api/CourseUnitComponentsAPI.c
    api/CourseUnitsAPI.c
    api/CourseUpdatesAPI.c
    api/CourseWikisAPI.c
    api/CoursesAPI.c
    api/FenixAllianceABPWebAPI.c
    api/InstructorProfilesAPI.c
    api/StudentProfilesAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/average_dto.h
    model/count_dto.h
    model/course_article_create_dto.h
    model/course_article_dto.h
    model/course_article_update_dto.h
    model/course_assignment_create_dto.h
    model/course_assignment_dto.h
    model/course_assignment_update_dto.h
    model/course_category_create_dto.h
    model/course_category_dto.h
    model/course_category_update_dto.h
    model/course_certificate_template_create_dto.h
    model/course_certificate_template_dto.h
    model/course_cohort_create_dto.h
    model/course_cohort_dto.h
    model/course_cohort_update_dto.h
    model/course_completion_certificate_create_dto.h
    model/course_completion_certificate_dto.h
    model/course_completion_certificate_update_dto.h
    model/course_create_dto.h
    model/course_dto.h
    model/course_enrollment_create_dto.h
    model/course_enrollment_dto.h
    model/course_enrollment_update_dto.h
    model/course_file_create_dto.h
    model/course_file_dto.h
    model/course_file_update_dto.h
    model/course_forum_create_dto.h
    model/course_forum_dto.h
    model/course_forum_update_dto.h
    model/course_handout_create_dto.h
    model/course_handout_dto.h
    model/course_handout_update_dto.h
    model/course_library_create_dto.h
    model/course_library_dto.h
    model/course_library_update_dto.h
    model/course_news_create_dto.h
    model/course_news_dto.h
    model/course_news_update_dto.h
    model/course_page_create_dto.h
    model/course_page_dto.h
    model/course_page_update_dto.h
    model/course_problem_set_create_dto.h
    model/course_problem_set_dto.h
    model/course_problem_set_update_dto.h
    model/course_section_create_dto.h
    model/course_section_dto.h
    model/course_section_update_dto.h
    model/course_unit_component_create_dto.h
    model/course_unit_component_dto.h
    model/course_unit_component_update_dto.h
    model/course_unit_create_dto.h
    model/course_unit_dto.h
    model/course_unit_update_dto.h
    model/course_update_dto.h
    model/course_wiki_create_dto.h
    model/course_wiki_dto.h
    model/course_wiki_update_dto.h
    model/error_envelope.h
    model/forgot_password_request.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/instructor_profile_create_dto.h
    model/instructor_profile_dto.h
    model/instructor_profile_update_dto.h
    model/login_request.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/student_profile_create_dto.h
    model/student_profile_dto.h
    model/student_profile_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    api/CourseArticlesAPI.h
    api/CourseAssignmentsAPI.h
    api/CourseCategoriesAPI.h
    api/CourseCertificatesAPI.h
    api/CourseCohortsAPI.h
    api/CourseEnrollmentsAPI.h
    api/CourseFilesAPI.h
    api/CourseForumsAPI.h
    api/CourseHandoutsAPI.h
    api/CourseLibrariesAPI.h
    api/CoursePagesAPI.h
    api/CourseProblemSetsAPI.h
    api/CourseSectionsAPI.h
    api/CourseUnitComponentsAPI.h
    api/CourseUnitsAPI.h
    api/CourseUpdatesAPI.h
    api/CourseWikisAPI.h
    api/CoursesAPI.h
    api/FenixAllianceABPWebAPI.h
    api/InstructorProfilesAPI.h
    api/StudentProfilesAPI.h

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
#    unit-tests/manual-CourseArticlesAPI.c
#    unit-tests/manual-CourseAssignmentsAPI.c
#    unit-tests/manual-CourseCategoriesAPI.c
#    unit-tests/manual-CourseCertificatesAPI.c
#    unit-tests/manual-CourseCohortsAPI.c
#    unit-tests/manual-CourseEnrollmentsAPI.c
#    unit-tests/manual-CourseFilesAPI.c
#    unit-tests/manual-CourseForumsAPI.c
#    unit-tests/manual-CourseHandoutsAPI.c
#    unit-tests/manual-CourseLibrariesAPI.c
#    unit-tests/manual-CoursePagesAPI.c
#    unit-tests/manual-CourseProblemSetsAPI.c
#    unit-tests/manual-CourseSectionsAPI.c
#    unit-tests/manual-CourseUnitComponentsAPI.c
#    unit-tests/manual-CourseUnitsAPI.c
#    unit-tests/manual-CourseUpdatesAPI.c
#    unit-tests/manual-CourseWikisAPI.c
#    unit-tests/manual-CoursesAPI.c
#    unit-tests/manual-FenixAllianceABPWebAPI.c
#    unit-tests/manual-InstructorProfilesAPI.c
#    unit-tests/manual-StudentProfilesAPI.c
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
