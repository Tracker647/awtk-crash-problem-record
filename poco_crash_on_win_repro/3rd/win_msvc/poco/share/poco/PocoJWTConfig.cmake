include(CMakeFindDependencyMacro)
find_dependency(PocoFoundation)
find_dependency(PocoJSON)
find_dependency(PocoCrypto)
include("${CMAKE_CURRENT_LIST_DIR}/PocoJWTTargets.cmake")
