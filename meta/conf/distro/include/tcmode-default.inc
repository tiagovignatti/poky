#
# Default toolchain configuration
#

PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}binutils = "binutils-cross-${TARGET_ARCH}"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}gcc-initial = "gcc-cross-initial-${TARGET_ARCH}"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}gcc = "gcc-cross-${TARGET_ARCH}"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}g++ = "gcc-cross-${TARGET_ARCH}"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}compilerlibs = "gcc-runtime"
PREFERRED_PROVIDER_gdb = "gdb"

PREFERRED_PROVIDER_virtual/${SDK_PREFIX}binutils-crosssdk ?= "binutils-crosssdk-${SDK_ARCH}"
PREFERRED_PROVIDER_virtual/${SDK_PREFIX}gcc-initial = "gcc-crosssdk-initial-${SDK_ARCH}"
PREFERRED_PROVIDER_virtual/${SDK_PREFIX}gcc = "gcc-crosssdk-${SDK_ARCH}"
PREFERRED_PROVIDER_virtual/${SDK_PREFIX}g++ = "gcc-crosssdk-${SDK_ARCH}"
PREFERRED_PROVIDER_virtual/${SDK_PREFIX}compilerlibs = "nativesdk-gcc-runtime"

# Default libc config
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}libc-for-gcc = "${TCLIBC}"
PREFERRED_PROVIDER_virtual/nativesdk-${SDK_PREFIX}libc-for-gcc ?= "nativesdk-${TCLIBC}"
PREFERRED_PROVIDER_virtual/${TARGET_PREFIX}libc-initial = "${TCLIBC}-initial"
PREFERRED_PROVIDER_virtual/nativesdk-${SDK_PREFIX}libc-initial = "nativesdk-${TCLIBC}-initial"
PREFERRED_PROVIDER_virtual/gettext ??= "gettext"

GCCVERSION ?= "4.9%"
SDKGCCVERSION ?= "${GCCVERSION}"
BINUVERSION ?= "2.24"
EGLIBCVERSION ?= "2.19"
UCLIBCVERSION ?= "0.9.33+git%"
LINUXLIBCVERSION ?= "3.14"

PREFERRED_VERSION_gcc ?= "${GCCVERSION}"
PREFERRED_VERSION_gcc-cross-${TARGET_ARCH} ?= "${GCCVERSION}"
PREFERRED_VERSION_gcc-cross-initial-${TARGET_ARCH} ?= "${GCCVERSION}"
PREFERRED_VERSION_gcc-crosssdk-${SDK_ARCH} ?= "${SDKGCCVERSION}"
PREFERRED_VERSION_gcc-crosssdk-initial-${SDK_ARCH} ?= "${SDKGCCVERSION}"
PREFERRED_VERSION_gcc-cross-canadian-${TRANSLATED_TARGET_ARCH} ?= "${GCCVERSION}"
PREFERRED_VERSION_gcc-runtime ?= "${GCCVERSION}"
PREFERRED_VERSION_nativesdk-gcc-runtime ?= "${SDKGCCVERSION}"
PREFERRED_VERSION_libgcc ?= "${GCCVERSION}"
PREFERRED_VERSION_libgcc-initial ?= "${GCCVERSION}"
PREFERRED_VERSION_nativesdk-libgcc ?= "${SDKGCCVERSION}"
PREFERRED_VERSION_nativesdk-libgcc-initial ?= "${SDKGCCVERSION}"
PREFERRED_VERSION_binutils ?= "${BINUVERSION}"
PREFERRED_VERSION_binutils-cross-${TARGET_ARCH} ?= "${BINUVERSION}"
PREFERRED_VERSION_binutils-crosssdk-${SDK_ARCH} ?= "${BINUVERSION}"
PREFERRED_VERSION_binutils-cross-canadian-${TRANSLATED_TARGET_ARCH} ?= "${BINUVERSION}"
PREFERRED_VERSION_linux-libc-headers ?= "${LINUXLIBCVERSION}"
PREFERRED_VERSION_nativesdk-linux-libc-headers ?= "${LINUXLIBCVERSION}"
PREFERRED_VERSION_eglibc                   ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_eglibc-locale            ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_eglibc-mtrace            ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_eglibc-scripts           ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_nativesdk-eglibc         ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_eglibc-initial           ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_nativesdk-eglibc-initial ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_cross-localedef-native   ?= "${EGLIBCVERSION}"
PREFERRED_VERSION_uclibc                   ?= "${UCLIBCVERSION}"
PREFERRED_VERSION_uclibc-initial           ?= "${UCLIBCVERSION}"
PREFERRED_VERSION_elfutils ?= "0.148"
# don't use version earlier than 1.4 for gzip-native, as it's necessary for
# some packages using an archive format incompatible with earlier gzip
PREFERRED_VERSION_gzip-native ?= "1.6"

# Setup suitable toolchain flags
require conf/distro/include/as-needed.inc

