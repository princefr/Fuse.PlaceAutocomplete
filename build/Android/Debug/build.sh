#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e

export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_40.jdk/Contents/Home"
export SCRIPT_DIR="`dirname "$0"`"

cd "$SCRIPT_DIR"
if [ ! -d "/Users/princejackes/Library/Android/sdk/cmake" ]; then
    echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android' and 'uno clean'. Expected to find cmake in /Users/princejackes/Library/Android/sdk/cmake" >&2
    exit 1
fi

./gradlew assembleDebug "$@"

##if !#(LIBRARY:Defined)
ln -sf app/build/outputs/apk/app-debug.apk fuse.placeautocomplete.apk
##endif
