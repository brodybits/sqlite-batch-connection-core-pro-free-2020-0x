# SQLite batch connection support preview 2020

Author: Christopher J. Brody <chris.brody+brodybits@gmail.com>

LICENSE: MIT with commercial license option

Low-level SQLite connection library for C, C++, Objective-C, and Java

to support SQLite batch processing in higher-level app frameworks such as Cordova

with demonstration of use in an extremely simple Cordova plugin for mobile apps in JavaScript

designed to be thread-safe

with support available here: <https://github.com/brodybits/ask-me-anything/issues>

## Contents

- `sqlite-connection-core.h` - main low-level C API header
- `sqlite-connection-core.c` - main low-level C library source module
- `ctest` - test of main low-level C library
- `sccglue` - low-level Java API wrapper generated with help from GlueGen from jogamp.org, with JNI test
- `cordova-demo` - extremely simple Cordova demo app for testing, reformatted by `prettier-standard`, includes Cordova demo plugin:
  - `cordova-sqlite-demo-plugin` - extremely simple Cordova plugin that can open a SQLite database, execute a set of batch statements with parameters, and send the results to the Cordova JavaScript app
- with some other top-level Makefile artifacts included

## Major features

- API designed to work with integer connection ID that is easy to use from C API or Java wrapper generated by GlueGen
- able to bind 64-bit integer, double-precision float, text string, or null values to SQL statemeents with `?` placeholders
- able to retrieve one or multiple rows of results with 64-bit integer, double-precision floating point, text string, or null values
- able to get last insert row ID and total number of changes which are needed to help match some of the capabilities of the _draft_ Web SQL spec
- extremely simple, rudimentary error handling

## Some known limitations

- only tested with in-memory databases (<https://www.sqlite.org/inmemorydb.html>)
- not able to close database connection and release internal resources
- hard limit of 5000 open SQLite database connections, which is due to the design
- The API was not designed to support parallel database access through the same database connection. The workaround is to open multiple SQLite connections to the same database file name.
- Background threading would need to be done in a higher-level component.
- The required `scc_init()` initialization function should be called from the main thread upon startup, is __NOT__ thread-safe.
- Some build and run-time options used by the cordova-sqlite-storage plugin that were needed for extra safety against possible database corruption are missing in this preview.

## Testing

### C test

- `cd ctest`
- `make test`

### Java JNI test

intended for testing on macOS only:

- `cd sccglue`
- `make test`

### Running Cordova demo

prerequisites:

- intended to be built and run from macOS only
- install Apache Cordova using npm (`npm i -g cordova`)
- install Xcode
- install Android SDK

how:

- `(cd sccglue && make ndkbuild)`
- `cd cordova-demo`
- `make prepare-app`
- recommended: do `cordova plugin ls` to check that the demo plugin was added
- `(cordova platform add osx && cordova run osx)` to build and run on Cordova "osx" (macOS) platform
- `(cordova platform add android && cordova run android)`
- `(cordova platform add ios && cordova run ios)`

## build notes

- Makefiles are designed to fetch and extract recent SQLite amalgamation, as needed to build test programs, NDK library, and Cordova demo.
