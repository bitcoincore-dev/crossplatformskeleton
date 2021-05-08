Cross Platform Desktop Application Skeleton (Qt5)
=================================================

[![Build Status](https://travis-ci.com/bitcoincore-dev/crossplatformskeleton.svg?branch=master)](https://travis-ci.com/bitcoincore-dev/crossplatformskeleton)

--

## Xcode:

### macOS: [doc.qt.io/qt-5/macos.html](https://doc.qt.io/qt-5/macos.html)

#### Select Xcode installation:

```
sudo xcode-select --switch /Applications/Xcode.app
xcode-select -print-path
```

#### Find tools:

```
xcrun -sdk macosx --show-sdk-path
xcrun -sdk macosx -find clang
xcrun -sdk macosx -find g++
xcrun -sdk macosx -find c++
xcrun -sdk macosx -find ld
```

##### macOS Architectures:

```
./configure -platform macx-clang QMAKE_APPLE_DEVICE_ARCHS=x86_64h
./configure -platform macx-clang QMAKE_APPLE_DEVICE_ARCHS="x86_64 x86_64h"

```


--
### Features
* Supports Linux, Windows and macOS
* Cross compile system (see /depends) to compile static binaries for macOX, Windows on Linux
* Github workflows example config