#set($fullPath = "${PROJECT_NAME}_${DIR_PATH}_${FILE_NAME}" )
#set($headerGuard = $fullPath.replaceAll("[.${DS}-/]", "_"))
#set($headerGuardToUpperCase = $headerGuard.toUpperCase())
#set($dirPath = ${DIR_PATH})
#set($directoryArray = $dirPath.split("/"))
#set($directoryName = $directoryArray[$directoryArray.size() - 1])
#[[#ifndef]]# $headerGuardToUpperCase
#[[#define]]# $headerGuardToUpperCase

namespace $directoryName {

    

}

#[[#endif]]#  //$headerGuardToUpperCase