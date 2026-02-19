include("/home/camus/3390_project_1/src/app_2/build/Desktop-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/app_2-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/camus/3390_project_1/src/app_2/build/Desktop-Debug/app_2"
    GENERATE_QT_CONF
)
